import React from 'react'
import { useSelector } from 'react-redux'
import { getCheckboxState } from '../../selectors/selectors'

const AgreementSubmitButton: React.FC = () => {
  const checkboxName = 'agree'
  const agreed = useSelector(getCheckboxState(checkboxName))

  return <input type="button" value="Submit" disabled={!agreed} />
}

export default AgreementSubmitButton