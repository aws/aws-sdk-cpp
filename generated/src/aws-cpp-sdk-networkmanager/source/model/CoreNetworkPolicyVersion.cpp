/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkPolicyVersion.h>
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

CoreNetworkPolicyVersion::CoreNetworkPolicyVersion() : 
    m_coreNetworkIdHasBeenSet(false),
    m_policyVersionId(0),
    m_policyVersionIdHasBeenSet(false),
    m_alias(CoreNetworkPolicyAlias::NOT_SET),
    m_aliasHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_changeSetState(ChangeSetState::NOT_SET),
    m_changeSetStateHasBeenSet(false)
{
}

CoreNetworkPolicyVersion::CoreNetworkPolicyVersion(JsonView jsonValue) : 
    m_coreNetworkIdHasBeenSet(false),
    m_policyVersionId(0),
    m_policyVersionIdHasBeenSet(false),
    m_alias(CoreNetworkPolicyAlias::NOT_SET),
    m_aliasHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_changeSetState(ChangeSetState::NOT_SET),
    m_changeSetStateHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkPolicyVersion& CoreNetworkPolicyVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");

    m_coreNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyVersionId"))
  {
    m_policyVersionId = jsonValue.GetInteger("PolicyVersionId");

    m_policyVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = CoreNetworkPolicyAliasMapper::GetCoreNetworkPolicyAliasForName(jsonValue.GetString("Alias"));

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeSetState"))
  {
    m_changeSetState = ChangeSetStateMapper::GetChangeSetStateForName(jsonValue.GetString("ChangeSetState"));

    m_changeSetStateHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreNetworkPolicyVersion::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_policyVersionIdHasBeenSet)
  {
   payload.WithInteger("PolicyVersionId", m_policyVersionId);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", CoreNetworkPolicyAliasMapper::GetNameForCoreNetworkPolicyAlias(m_alias));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_changeSetStateHasBeenSet)
  {
   payload.WithString("ChangeSetState", ChangeSetStateMapper::GetNameForChangeSetState(m_changeSetState));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
