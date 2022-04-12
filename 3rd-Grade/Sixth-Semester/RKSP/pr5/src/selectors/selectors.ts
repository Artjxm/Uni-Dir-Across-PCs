import { State } from '../types'

export const getCheckboxState = (name: string) => (state: State) => state.checkboxes[name] ?? false