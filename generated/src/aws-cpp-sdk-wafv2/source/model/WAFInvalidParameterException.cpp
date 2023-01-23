/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/WAFInvalidParameterException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

WAFInvalidParameterException::WAFInvalidParameterException() : 
    m_messageHasBeenSet(false),
    m_field(ParameterExceptionField::NOT_SET),
    m_fieldHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

WAFInvalidParameterException::WAFInvalidParameterException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_field(ParameterExceptionField::NOT_SET),
    m_fieldHasBeenSet(false),
    m_parameterHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

WAFInvalidParameterException& WAFInvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Field"))
  {
    m_field = ParameterExceptionFieldMapper::GetParameterExceptionFieldForName(jsonValue.GetString("Field"));

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameter"))
  {
    m_parameter = jsonValue.GetString("Parameter");

    m_parameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue WAFInvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_fieldHasBeenSet)
  {
   payload.WithString("Field", ParameterExceptionFieldMapper::GetNameForParameterExceptionField(m_field));
  }

  if(m_parameterHasBeenSet)
  {
   payload.WithString("Parameter", m_parameter);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
