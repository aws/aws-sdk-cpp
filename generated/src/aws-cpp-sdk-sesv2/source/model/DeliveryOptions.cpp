/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DeliveryOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DeliveryOptions::DeliveryOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DeliveryOptions& DeliveryOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TlsPolicy"))
  {
    m_tlsPolicy = TlsPolicyMapper::GetTlsPolicyForName(jsonValue.GetString("TlsPolicy"));
    m_tlsPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendingPoolName"))
  {
    m_sendingPoolName = jsonValue.GetString("SendingPoolName");
    m_sendingPoolNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxDeliverySeconds"))
  {
    m_maxDeliverySeconds = jsonValue.GetInt64("MaxDeliverySeconds");
    m_maxDeliverySecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue DeliveryOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tlsPolicyHasBeenSet)
  {
   payload.WithString("TlsPolicy", TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy));
  }

  if(m_sendingPoolNameHasBeenSet)
  {
   payload.WithString("SendingPoolName", m_sendingPoolName);

  }

  if(m_maxDeliverySecondsHasBeenSet)
  {
   payload.WithInt64("MaxDeliverySeconds", m_maxDeliverySeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
