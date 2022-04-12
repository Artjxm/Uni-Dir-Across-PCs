import { renderWithRedux } from './utils'
import LicenseAgreement from './components/LicenseAgreement'
import App from './App'

jest.mock('components/LicenseAgreement', () => () => null)

test('renders LicenseAgreement', () => {
  const renderer = renderWithRedux(<App />)

  expect(() => renderer.root.findByType(LicenseAgreement)).not.toThrow()
})