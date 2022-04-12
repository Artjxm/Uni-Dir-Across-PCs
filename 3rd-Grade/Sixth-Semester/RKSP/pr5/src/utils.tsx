import { ReactElement } from 'react'
import { Provider } from 'react-redux'
import { create } from 'react-test-renderer'
import { State } from './types'
import { createAppStore } from './store'

export const renderWithRedux = (node: ReactElement, initialState: State = { checkboxes: {} }) => {
  const store = createAppStore(initialState)

  return create(<Provider store={store}>{node}</Provider>)
}