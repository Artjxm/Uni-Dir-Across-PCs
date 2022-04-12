import React from 'react'
import Checkbox from '../Checkbox'
import AgreementSubmitButton from '../AgreementSubmitButton'

const LicenseAgreement: React.FC = () => {
  return (
    <div style={{ display: 'flex', flexDirection: 'column', alignItems: 'center' }}>
      <div style={{ width: 600 }}>
        <h1>Лицензионное соглашение</h1>
        <p>Пользовательским соглашением является договор между обладателем компьютерной программы и пользователем копии. Пользуясь лицензионным программным обеспечением, пользователь выражает свое согласие на положения и условия настоящего соглашения.</p>
        <div style={{ display: 'flex', justifyContent: 'space-between' }}>
          <Checkbox name="agree" label="Согласен -(а)" />
          <AgreementSubmitButton />
        </div>
      </div>
    </div>
  )
}

export default LicenseAgreement