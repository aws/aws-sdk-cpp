/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/CreditSpecificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

CreditSpecificationRequest::CreditSpecificationRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

CreditSpecificationRequest& CreditSpecificationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CpuCredits"))
  {
    m_cpuCredits = CpuCreditsEnumMapper::GetCpuCreditsEnumForName(jsonValue.GetString("CpuCredits"));
    m_cpuCreditsHasBeenSet = true;
  }
  return *this;
}

JsonValue CreditSpecificationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_cpuCreditsHasBeenSet)
  {
   payload.WithString("CpuCredits", CpuCreditsEnumMapper::GetNameForCpuCreditsEnum(m_cpuCredits));
  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
