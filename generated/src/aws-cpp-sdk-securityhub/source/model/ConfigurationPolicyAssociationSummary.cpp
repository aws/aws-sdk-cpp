/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConfigurationPolicyAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ConfigurationPolicyAssociationSummary::ConfigurationPolicyAssociationSummary() : 
    m_configurationPolicyIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_associationType(AssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_associationStatus(ConfigurationPolicyAssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_associationStatusMessageHasBeenSet(false)
{
}

ConfigurationPolicyAssociationSummary::ConfigurationPolicyAssociationSummary(JsonView jsonValue) : 
    m_configurationPolicyIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_associationType(AssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_associationStatus(ConfigurationPolicyAssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_associationStatusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationPolicyAssociationSummary& ConfigurationPolicyAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationPolicyId"))
  {
    m_configurationPolicyId = jsonValue.GetString("ConfigurationPolicyId");

    m_configurationPolicyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");

    m_targetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("TargetType"));

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationType"))
  {
    m_associationType = AssociationTypeMapper::GetAssociationTypeForName(jsonValue.GetString("AssociationType"));

    m_associationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = ConfigurationPolicyAssociationStatusMapper::GetConfigurationPolicyAssociationStatusForName(jsonValue.GetString("AssociationStatus"));

    m_associationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationStatusMessage"))
  {
    m_associationStatusMessage = jsonValue.GetString("AssociationStatusMessage");

    m_associationStatusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationPolicyAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_configurationPolicyIdHasBeenSet)
  {
   payload.WithString("ConfigurationPolicyId", m_configurationPolicyId);

  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", TargetTypeMapper::GetNameForTargetType(m_targetType));
  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("AssociationType", AssociationTypeMapper::GetNameForAssociationType(m_associationType));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("AssociationStatus", ConfigurationPolicyAssociationStatusMapper::GetNameForConfigurationPolicyAssociationStatus(m_associationStatus));
  }

  if(m_associationStatusMessageHasBeenSet)
  {
   payload.WithString("AssociationStatusMessage", m_associationStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
