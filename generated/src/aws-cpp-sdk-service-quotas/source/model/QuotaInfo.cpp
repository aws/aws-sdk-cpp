/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/QuotaInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

QuotaInfo::QuotaInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

QuotaInfo& QuotaInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuotaCode"))
  {
    m_quotaCode = jsonValue.GetString("QuotaCode");
    m_quotaCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QuotaName"))
  {
    m_quotaName = jsonValue.GetString("QuotaName");
    m_quotaNameHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaInfo::Jsonize() const
{
  JsonValue payload;

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_quotaNameHasBeenSet)
  {
   payload.WithString("QuotaName", m_quotaName);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
