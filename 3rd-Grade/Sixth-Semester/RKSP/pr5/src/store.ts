import { AnyAction, createStore, combineReducers } from 'redux'
import { State } from './types'
import { checkboxReducer } from './reducers/reducers'

export const createAppStore = (initialState?: State) =>
  createStore<State, AnyAction, unknown, unknown>(
    combineReducers({
      checkboxes: checkboxReducer,
    }),
    initialState,
  )

export default createAppStore()