/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ReputationEntity.h>
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

ReputationEntity::ReputationEntity(JsonView jsonValue)
{
  *this = jsonValue;
}

ReputationEntity& ReputationEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReputationEntityReference"))
  {
    m_reputationEntityReference = jsonValue.GetString("ReputationEntityReference");
    m_reputationEntityReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReputationEntityType"))
  {
    m_reputationEntityType = ReputationEntityTypeMapper::GetReputationEntityTypeForName(jsonValue.GetString("ReputationEntityType"));
    m_reputationEntityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReputationManagementPolicy"))
  {
    m_reputationManagementPolicy = jsonValue.GetString("ReputationManagementPolicy");
    m_reputationManagementPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerManagedStatus"))
  {
    m_customerManagedStatus = jsonValue.GetObject("CustomerManagedStatus");
    m_customerManagedStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsSesManagedStatus"))
  {
    m_awsSesManagedStatus = jsonValue.GetObject("AwsSesManagedStatus");
    m_awsSesManagedStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendingStatusAggregate"))
  {
    m_sendingStatusAggregate = SendingStatusMapper::GetSendingStatusForName(jsonValue.GetString("SendingStatusAggregate"));
    m_sendingStatusAggregateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReputationImpact"))
  {
    m_reputationImpact = RecommendationImpactMapper::GetRecommendationImpactForName(jsonValue.GetString("ReputationImpact"));
    m_reputationImpactHasBeenSet = true;
  }
  return *this;
}

JsonValue ReputationEntity::Jsonize() const
{
  JsonValue payload;

  if(m_reputationEntityReferenceHasBeenSet)
  {
   payload.WithString("ReputationEntityReference", m_reputationEntityReference);

  }

  if(m_reputationEntityTypeHasBeenSet)
  {
   payload.WithString("ReputationEntityType", ReputationEntityTypeMapper::GetNameForReputationEntityType(m_reputationEntityType));
  }

  if(m_reputationManagementPolicyHasBeenSet)
  {
   payload.WithString("ReputationManagementPolicy", m_reputationManagementPolicy);

  }

  if(m_customerManagedStatusHasBeenSet)
  {
   payload.WithObject("CustomerManagedStatus", m_customerManagedStatus.Jsonize());

  }

  if(m_awsSesManagedStatusHasBeenSet)
  {
   payload.WithObject("AwsSesManagedStatus", m_awsSesManagedStatus.Jsonize());

  }

  if(m_sendingStatusAggregateHasBeenSet)
  {
   payload.WithString("SendingStatusAggregate", SendingStatusMapper::GetNameForSendingStatus(m_sendingStatusAggregate));
  }

  if(m_reputationImpactHasBeenSet)
  {
   payload.WithString("ReputationImpact", RecommendationImpactMapper::GetNameForRecommendationImpact(m_reputationImpact));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
