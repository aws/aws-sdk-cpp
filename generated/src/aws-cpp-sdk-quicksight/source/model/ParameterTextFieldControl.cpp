/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ParameterTextFieldControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ParameterTextFieldControl::ParameterTextFieldControl() : 
    m_parameterControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_sourceParameterNameHasBeenSet(false),
    m_displayOptionsHasBeenSet(false)
{
}

ParameterTextFieldControl::ParameterTextFieldControl(JsonView jsonValue) : 
    m_parameterControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_sourceParameterNameHasBeenSet(false),
    m_displayOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterTextFieldControl& ParameterTextFieldControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterControlId"))
  {
    m_parameterControlId = jsonValue.GetString("ParameterControlId");

    m_parameterControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceParameterName"))
  {
    m_sourceParameterName = jsonValue.GetString("SourceParameterName");

    m_sourceParameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayOptions"))
  {
    m_displayOptions = jsonValue.GetObject("DisplayOptions");

    m_displayOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterTextFieldControl::Jsonize() const
{
  JsonValue payload;

  if(m_parameterControlIdHasBeenSet)
  {
   payload.WithString("ParameterControlId", m_parameterControlId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_sourceParameterNameHasBeenSet)
  {
   payload.WithString("SourceParameterName", m_sourceParameterName);

  }

  if(m_displayOptionsHasBeenSet)
  {
   payload.WithObject("DisplayOptions", m_displayOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
