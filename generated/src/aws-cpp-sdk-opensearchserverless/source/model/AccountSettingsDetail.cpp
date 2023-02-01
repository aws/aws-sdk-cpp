/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/AccountSettingsDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

AccountSettingsDetail::AccountSettingsDetail() : 
    m_capacityLimitsHasBeenSet(false)
{
}

AccountSettingsDetail::AccountSettingsDetail(JsonView jsonValue) : 
    m_capacityLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSettingsDetail& AccountSettingsDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capacityLimits"))
  {
    m_capacityLimits = jsonValue.GetObject("capacityLimits");

    m_capacityLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSettingsDetail::Jsonize() const
{
  JsonValue payload;

  if(m_capacityLimitsHasBeenSet)
  {
   payload.WithObject("capacityLimits", m_capacityLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
