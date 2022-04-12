import { CHECKBOX_CLICK } from '../actionTypes'
import { checkboxClick } from './'

describe('checkboxClick', () => {
  it('returns checkboxClick action with action name in payload', () => {
    const checkboxName = 'anyCheckbox'

    const result = checkboxClick(checkboxName)

    expect(result).toEqual({ type: CHECKBOX_CLICK, payload: checkboxName })
  })
})