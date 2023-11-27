/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AssociationFilters.h>
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

AssociationFilters::AssociationFilters() : 
    m_configurationPolicyIdHasBeenSet(false),
    m_associationType(AssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_associationStatus(ConfigurationPolicyAssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false)
{
}

AssociationFilters::AssociationFilters(JsonView jsonValue) : 
    m_configurationPolicyIdHasBeenSet(false),
    m_associationType(AssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_associationStatus(ConfigurationPolicyAssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationFilters& AssociationFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationPolicyId"))
  {
    m_configurationPolicyId = jsonValue.GetString("ConfigurationPolicyId");

    m_configurationPolicyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationType"))
  {
    m_associationType = AssociationTypeMapper::GetAssociationTypeForName(jsonValue.GetString("AssociationType"));

    m_associationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = ConfigurationPolicyAssociationStatusMapper::GetConfigurationPolicyAssociationStatusForName(jsonValue.GetString("AssociationStatus"));

    m_associationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationFilters::Jsonize() const
{
  JsonValue payload;

  if(m_configurationPolicyIdHasBeenSet)
  {
   payload.WithString("ConfigurationPolicyId", m_configurationPolicyId);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("AssociationType", AssociationTypeMapper::GetNameForAssociationType(m_associationType));
  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("AssociationStatus", ConfigurationPolicyAssociationStatusMapper::GetNameForConfigurationPolicyAssociationStatus(m_associationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
