/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/Handshake.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Handshake::Handshake() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_partiesHasBeenSet(false),
    m_state(HandshakeState::NOT_SET),
    m_stateHasBeenSet(false),
    m_requestedTimestampHasBeenSet(false),
    m_expirationTimestampHasBeenSet(false),
    m_action(ActionType::NOT_SET),
    m_actionHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

Handshake::Handshake(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_partiesHasBeenSet(false),
    m_state(HandshakeState::NOT_SET),
    m_stateHasBeenSet(false),
    m_requestedTimestampHasBeenSet(false),
    m_expirationTimestampHasBeenSet(false),
    m_action(ActionType::NOT_SET),
    m_actionHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
  *this = jsonValue;
}

Handshake& Handshake::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parties"))
  {
    Aws::Utils::Array<JsonView> partiesJsonList = jsonValue.GetArray("Parties");
    for(unsigned partiesIndex = 0; partiesIndex < partiesJsonList.GetLength(); ++partiesIndex)
    {
      m_parties.push_back(partiesJsonList[partiesIndex].AsObject());
    }
    m_partiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = HandshakeStateMapper::GetHandshakeStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedTimestamp"))
  {
    m_requestedTimestamp = jsonValue.GetDouble("RequestedTimestamp");

    m_requestedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTimestamp"))
  {
    m_expirationTimestamp = jsonValue.GetDouble("ExpirationTimestamp");

    m_expirationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue Handshake::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_partiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partiesJsonList(m_parties.size());
   for(unsigned partiesIndex = 0; partiesIndex < partiesJsonList.GetLength(); ++partiesIndex)
   {
     partiesJsonList[partiesIndex].AsObject(m_parties[partiesIndex].Jsonize());
   }
   payload.WithArray("Parties", std::move(partiesJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", HandshakeStateMapper::GetNameForHandshakeState(m_state));
  }

  if(m_requestedTimestampHasBeenSet)
  {
   payload.WithDouble("RequestedTimestamp", m_requestedTimestamp.SecondsWithMSPrecision());
  }

  if(m_expirationTimestampHasBeenSet)
  {
   payload.WithDouble("ExpirationTimestamp", m_expirationTimestamp.SecondsWithMSPrecision());
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionTypeMapper::GetNameForActionType(m_action));
  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
