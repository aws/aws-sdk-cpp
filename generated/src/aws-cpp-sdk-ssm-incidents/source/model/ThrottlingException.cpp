﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ThrottlingException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

ThrottlingException::ThrottlingException(JsonView jsonValue)
{
  *this = jsonValue;
}

ThrottlingException& ThrottlingException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quotaCode"))
  {
    m_quotaCode = jsonValue.GetString("quotaCode");
    m_quotaCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceCode"))
  {
    m_serviceCode = ServiceCodeMapper::GetServiceCodeForName(jsonValue.GetString("serviceCode"));
    m_serviceCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ThrottlingException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("quotaCode", m_quotaCode);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", ServiceCodeMapper::GetNameForServiceCode(m_serviceCode));
  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
