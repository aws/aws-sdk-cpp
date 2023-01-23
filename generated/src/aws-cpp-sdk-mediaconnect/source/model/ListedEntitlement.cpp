/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ListedEntitlement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

ListedEntitlement::ListedEntitlement() : 
    m_dataTransferSubscriberFeePercent(0),
    m_dataTransferSubscriberFeePercentHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_entitlementNameHasBeenSet(false)
{
}

ListedEntitlement::ListedEntitlement(JsonView jsonValue) : 
    m_dataTransferSubscriberFeePercent(0),
    m_dataTransferSubscriberFeePercentHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_entitlementNameHasBeenSet(false)
{
  *this = jsonValue;
}

ListedEntitlement& ListedEntitlement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataTransferSubscriberFeePercent"))
  {
    m_dataTransferSubscriberFeePercent = jsonValue.GetInteger("dataTransferSubscriberFeePercent");

    m_dataTransferSubscriberFeePercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlementArn"))
  {
    m_entitlementArn = jsonValue.GetString("entitlementArn");

    m_entitlementArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlementName"))
  {
    m_entitlementName = jsonValue.GetString("entitlementName");

    m_entitlementNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedEntitlement::Jsonize() const
{
  JsonValue payload;

  if(m_dataTransferSubscriberFeePercentHasBeenSet)
  {
   payload.WithInteger("dataTransferSubscriberFeePercent", m_dataTransferSubscriberFeePercent);

  }

  if(m_entitlementArnHasBeenSet)
  {
   payload.WithString("entitlementArn", m_entitlementArn);

  }

  if(m_entitlementNameHasBeenSet)
  {
   payload.WithString("entitlementName", m_entitlementName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
