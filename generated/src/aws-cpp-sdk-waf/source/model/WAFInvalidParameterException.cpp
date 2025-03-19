/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/WAFInvalidParameterException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

WAFInvalidParameterException::WAFInvalidParameterException(JsonView jsonValue)
{
  *this = jsonValue;
}

WAFInvalidParameterException& WAFInvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("field"))
  {
    m_field = ParameterExceptionFieldMapper::GetParameterExceptionFieldForName(jsonValue.GetString("field"));
    m_fieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameter"))
  {
    m_parameter = jsonValue.GetString("parameter");
    m_parameterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ParameterExceptionReasonMapper::GetParameterExceptionReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue WAFInvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", ParameterExceptionFieldMapper::GetNameForParameterExceptionField(m_field));
  }

  if(m_parameterHasBeenSet)
  {
   payload.WithString("parameter", m_parameter);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ParameterExceptionReasonMapper::GetNameForParameterExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
