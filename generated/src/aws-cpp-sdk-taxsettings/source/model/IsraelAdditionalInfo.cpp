/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/IsraelAdditionalInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

IsraelAdditionalInfo::IsraelAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

IsraelAdditionalInfo& IsraelAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customerType"))
  {
    m_customerType = IsraelCustomerTypeMapper::GetIsraelCustomerTypeForName(jsonValue.GetString("customerType"));
    m_customerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dealerType"))
  {
    m_dealerType = IsraelDealerTypeMapper::GetIsraelDealerTypeForName(jsonValue.GetString("dealerType"));
    m_dealerTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue IsraelAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_customerTypeHasBeenSet)
  {
   payload.WithString("customerType", IsraelCustomerTypeMapper::GetNameForIsraelCustomerType(m_customerType));
  }

  if(m_dealerTypeHasBeenSet)
  {
   payload.WithString("dealerType", IsraelDealerTypeMapper::GetNameForIsraelDealerType(m_dealerType));
  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
