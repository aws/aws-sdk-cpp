﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ThrottlingException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ThrottlingException::ThrottlingException() : 
    m_messageHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
}

ThrottlingException::ThrottlingException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
  *this = jsonValue;
}

ThrottlingException& ThrottlingException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuotaCode"))
  {
    m_quotaCode = jsonValue.GetString("QuotaCode");

    m_quotaCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCode"))
  {
    m_serviceCode = jsonValue.GetString("ServiceCode");

    m_serviceCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ThrottlingException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
