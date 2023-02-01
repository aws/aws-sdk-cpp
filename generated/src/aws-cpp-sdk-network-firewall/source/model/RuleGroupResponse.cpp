/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RuleGroupResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

RuleGroupResponse::RuleGroupResponse() : 
    m_ruleGroupArnHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(RuleGroupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_ruleGroupStatus(ResourceStatus::NOT_SET),
    m_ruleGroupStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_consumedCapacity(0),
    m_consumedCapacityHasBeenSet(false),
    m_numberOfAssociations(0),
    m_numberOfAssociationsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_sourceMetadataHasBeenSet(false),
    m_snsTopicHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

RuleGroupResponse::RuleGroupResponse(JsonView jsonValue) : 
    m_ruleGroupArnHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(RuleGroupType::NOT_SET),
    m_typeHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_ruleGroupStatus(ResourceStatus::NOT_SET),
    m_ruleGroupStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_consumedCapacity(0),
    m_consumedCapacityHasBeenSet(false),
    m_numberOfAssociations(0),
    m_numberOfAssociationsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_sourceMetadataHasBeenSet(false),
    m_snsTopicHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupResponse& RuleGroupResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleGroupArn"))
  {
    m_ruleGroupArn = jsonValue.GetString("RuleGroupArn");

    m_ruleGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupName"))
  {
    m_ruleGroupName = jsonValue.GetString("RuleGroupName");

    m_ruleGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupId"))
  {
    m_ruleGroupId = jsonValue.GetString("RuleGroupId");

    m_ruleGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = RuleGroupTypeMapper::GetRuleGroupTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInteger("Capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleGroupStatus"))
  {
    m_ruleGroupStatus = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("RuleGroupStatus"));

    m_ruleGroupStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedCapacity"))
  {
    m_consumedCapacity = jsonValue.GetInteger("ConsumedCapacity");

    m_consumedCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfAssociations"))
  {
    m_numberOfAssociations = jsonValue.GetInteger("NumberOfAssociations");

    m_numberOfAssociationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceMetadata"))
  {
    m_sourceMetadata = jsonValue.GetObject("SourceMetadata");

    m_sourceMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopic"))
  {
    m_snsTopic = jsonValue.GetString("SnsTopic");

    m_snsTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupResponse::Jsonize() const
{
  JsonValue payload;

  if(m_ruleGroupArnHasBeenSet)
  {
   payload.WithString("RuleGroupArn", m_ruleGroupArn);

  }

  if(m_ruleGroupNameHasBeenSet)
  {
   payload.WithString("RuleGroupName", m_ruleGroupName);

  }

  if(m_ruleGroupIdHasBeenSet)
  {
   payload.WithString("RuleGroupId", m_ruleGroupId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RuleGroupTypeMapper::GetNameForRuleGroupType(m_type));
  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInteger("Capacity", m_capacity);

  }

  if(m_ruleGroupStatusHasBeenSet)
  {
   payload.WithString("RuleGroupStatus", ResourceStatusMapper::GetNameForResourceStatus(m_ruleGroupStatus));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_consumedCapacityHasBeenSet)
  {
   payload.WithInteger("ConsumedCapacity", m_consumedCapacity);

  }

  if(m_numberOfAssociationsHasBeenSet)
  {
   payload.WithInteger("NumberOfAssociations", m_numberOfAssociations);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_sourceMetadataHasBeenSet)
  {
   payload.WithObject("SourceMetadata", m_sourceMetadata.Jsonize());

  }

  if(m_snsTopicHasBeenSet)
  {
   payload.WithString("SnsTopic", m_snsTopic);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
