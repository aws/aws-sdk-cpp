/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/TransitGatewayRegistrationStateReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

TransitGatewayRegistrationStateReason::TransitGatewayRegistrationStateReason() : 
    m_code(TransitGatewayRegistrationState::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

TransitGatewayRegistrationStateReason::TransitGatewayRegistrationStateReason(JsonView jsonValue) : 
    m_code(TransitGatewayRegistrationState::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

TransitGatewayRegistrationStateReason& TransitGatewayRegistrationStateReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = TransitGatewayRegistrationStateMapper::GetTransitGatewayRegistrationStateForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue TransitGatewayRegistrationStateReason::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", TransitGatewayRegistrationStateMapper::GetNameForTransitGatewayRegistrationState(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
