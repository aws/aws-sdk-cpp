/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ReturnInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

ReturnInformation::ReturnInformation() : 
    m_replacementOrderArnHasBeenSet(false),
    m_returnReasonHasBeenSet(false),
    m_shippingAddressHasBeenSet(false),
    m_shippingLabelHasBeenSet(false)
{
}

ReturnInformation::ReturnInformation(JsonView jsonValue) : 
    m_replacementOrderArnHasBeenSet(false),
    m_returnReasonHasBeenSet(false),
    m_shippingAddressHasBeenSet(false),
    m_shippingLabelHasBeenSet(false)
{
  *this = jsonValue;
}

ReturnInformation& ReturnInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("replacementOrderArn"))
  {
    m_replacementOrderArn = jsonValue.GetString("replacementOrderArn");

    m_replacementOrderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("returnReason"))
  {
    m_returnReason = jsonValue.GetString("returnReason");

    m_returnReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shippingAddress"))
  {
    m_shippingAddress = jsonValue.GetObject("shippingAddress");

    m_shippingAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shippingLabel"))
  {
    m_shippingLabel = jsonValue.GetString("shippingLabel");

    m_shippingLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue ReturnInformation::Jsonize() const
{
  JsonValue payload;

  if(m_replacementOrderArnHasBeenSet)
  {
   payload.WithString("replacementOrderArn", m_replacementOrderArn);

  }

  if(m_returnReasonHasBeenSet)
  {
   payload.WithString("returnReason", m_returnReason);

  }

  if(m_shippingAddressHasBeenSet)
  {
   payload.WithObject("shippingAddress", m_shippingAddress.Jsonize());

  }

  if(m_shippingLabelHasBeenSet)
  {
   payload.WithString("shippingLabel", m_shippingLabel);

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
