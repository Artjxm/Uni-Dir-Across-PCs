import { getCheckboxState } from '.'

describe('getCheckboxState', () => {
  const state = {
    checkboxes: { anyName: true },
  }

  it('returns current checkbox state', () => {
    const result = getCheckboxState('anyName')(state)

    expect(result).toBe(true)
  })

  it('returns false when checkbox state is undefined', () => {
    const result = getCheckboxState('anotherName')(state)

    expect(result).toBe(false)
  })
})