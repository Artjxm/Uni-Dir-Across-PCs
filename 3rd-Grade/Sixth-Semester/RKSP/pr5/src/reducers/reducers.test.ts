import { CHECKBOX_CLICK } from '../actionTypes'
import { checkboxReducer } from '.'

describe('checkboxReducer', () => {
  it('creates default state', () => {
    const state = checkboxReducer(undefined, { type: 'anyAction' })

    expect(state).toEqual({})
  })

  it('sets checked flag', () => {
    const state = checkboxReducer(undefined, { type: CHECKBOX_CLICK, payload: 'anyName' })

    expect(state.anyName).toBe(true)
  })

  it('sets checked flag to false when it was checked', () => {
    const state = checkboxReducer({ anyName: true }, { type: CHECKBOX_CLICK, payload: 'anyName' })

    expect(state.anyName).toBe(false)
  })
})