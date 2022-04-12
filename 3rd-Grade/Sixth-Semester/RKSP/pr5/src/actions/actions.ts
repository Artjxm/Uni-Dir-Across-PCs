import { CHECKBOX_CLICK } from '../actionTypes'

export const checkboxClick = (name: string) => ({ type: CHECKBOX_CLICK, payload: name })