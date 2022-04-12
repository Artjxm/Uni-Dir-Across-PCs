import React from 'react'
import { useDispatch, useSelector } from 'react-redux'
import { getCheckboxState } from '../../selectors'
import { checkboxClick } from '../../actions'

const Checkbox: React.FC<{ name: string; label: string }> = ({ name, label }) => {
  const dispatch = useDispatch()
  const checked = useSelector(getCheckboxState(name))

  const handleClick = React.useCallback(() => {
    dispatch(checkboxClick(name))
  }, [dispatch, name])

  return (
    <div>
      <input id={name} type="checkbox" checked={checked} onChange={handleClick} />
      <label htmlFor={name}>{label}</label>
    </div>
  )
}

export default Checkbox