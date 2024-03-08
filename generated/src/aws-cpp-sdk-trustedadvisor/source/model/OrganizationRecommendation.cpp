/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/OrganizationRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{

OrganizationRecommendation::OrganizationRecommendation() : 
    m_arnHasBeenSet(false),
    m_awsServicesHasBeenSet(false),
    m_checkArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleStage(RecommendationLifecycleStage::NOT_SET),
    m_lifecycleStageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pillarSpecificAggregatesHasBeenSet(false),
    m_pillarsHasBeenSet(false),
    m_resolvedAtHasBeenSet(false),
    m_resourcesAggregatesHasBeenSet(false),
    m_source(RecommendationSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_status(RecommendationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(RecommendationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updateReasonHasBeenSet(false),
    m_updateReasonCode(UpdateRecommendationLifecycleStageReasonCode::NOT_SET),
    m_updateReasonCodeHasBeenSet(false),
    m_updatedOnBehalfOfHasBeenSet(false),
    m_updatedOnBehalfOfJobTitleHasBeenSet(false)
{
}

OrganizationRecommendation::OrganizationRecommendation(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_awsServicesHasBeenSet(false),
    m_checkArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleStage(RecommendationLifecycleStage::NOT_SET),
    m_lifecycleStageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pillarSpecificAggregatesHasBeenSet(false),
    m_pillarsHasBeenSet(false),
    m_resolvedAtHasBeenSet(false),
    m_resourcesAggregatesHasBeenSet(false),
    m_source(RecommendationSource::NOT_SET),
    m_sourceHasBeenSet(false),
    m_status(RecommendationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(RecommendationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_updateReasonHasBeenSet(false),
    m_updateReasonCode(UpdateRecommendationLifecycleStageReasonCode::NOT_SET),
    m_updateReasonCodeHasBeenSet(false),
    m_updatedOnBehalfOfHasBeenSet(false),
    m_updatedOnBehalfOfJobTitleHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationRecommendation& OrganizationRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsServices"))
  {
    Aws::Utils::Array<JsonView> awsServicesJsonList = jsonValue.GetArray("awsServices");
    for(unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex)
    {
      m_awsServices.push_back(awsServicesJsonList[awsServicesIndex].AsString());
    }
    m_awsServicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checkArn"))
  {
    m_checkArn = jsonValue.GetString("checkArn");

    m_checkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleStage"))
  {
    m_lifecycleStage = RecommendationLifecycleStageMapper::GetRecommendationLifecycleStageForName(jsonValue.GetString("lifecycleStage"));

    m_lifecycleStageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pillarSpecificAggregates"))
  {
    m_pillarSpecificAggregates = jsonValue.GetObject("pillarSpecificAggregates");

    m_pillarSpecificAggregatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pillars"))
  {
    Aws::Utils::Array<JsonView> pillarsJsonList = jsonValue.GetArray("pillars");
    for(unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex)
    {
      m_pillars.push_back(RecommendationPillarMapper::GetRecommendationPillarForName(pillarsJsonList[pillarsIndex].AsString()));
    }
    m_pillarsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedAt"))
  {
    m_resolvedAt = jsonValue.GetString("resolvedAt");

    m_resolvedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesAggregates"))
  {
    m_resourcesAggregates = jsonValue.GetObject("resourcesAggregates");

    m_resourcesAggregatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = RecommendationSourceMapper::GetRecommendationSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RecommendationTypeMapper::GetRecommendationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateReason"))
  {
    m_updateReason = jsonValue.GetString("updateReason");

    m_updateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateReasonCode"))
  {
    m_updateReasonCode = UpdateRecommendationLifecycleStageReasonCodeMapper::GetUpdateRecommendationLifecycleStageReasonCodeForName(jsonValue.GetString("updateReasonCode"));

    m_updateReasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedOnBehalfOf"))
  {
    m_updatedOnBehalfOf = jsonValue.GetString("updatedOnBehalfOf");

    m_updatedOnBehalfOfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedOnBehalfOfJobTitle"))
  {
    m_updatedOnBehalfOfJobTitle = jsonValue.GetString("updatedOnBehalfOfJobTitle");

    m_updatedOnBehalfOfJobTitleHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_awsServicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsServicesJsonList(m_awsServices.size());
   for(unsigned awsServicesIndex = 0; awsServicesIndex < awsServicesJsonList.GetLength(); ++awsServicesIndex)
   {
     awsServicesJsonList[awsServicesIndex].AsString(m_awsServices[awsServicesIndex]);
   }
   payload.WithArray("awsServices", std::move(awsServicesJsonList));

  }

  if(m_checkArnHasBeenSet)
  {
   payload.WithString("checkArn", m_checkArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lifecycleStageHasBeenSet)
  {
   payload.WithString("lifecycleStage", RecommendationLifecycleStageMapper::GetNameForRecommendationLifecycleStage(m_lifecycleStage));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pillarSpecificAggregatesHasBeenSet)
  {
   payload.WithObject("pillarSpecificAggregates", m_pillarSpecificAggregates.Jsonize());

  }

  if(m_pillarsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pillarsJsonList(m_pillars.size());
   for(unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex)
   {
     pillarsJsonList[pillarsIndex].AsString(RecommendationPillarMapper::GetNameForRecommendationPillar(m_pillars[pillarsIndex]));
   }
   payload.WithArray("pillars", std::move(pillarsJsonList));

  }

  if(m_resolvedAtHasBeenSet)
  {
   payload.WithString("resolvedAt", m_resolvedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_resourcesAggregatesHasBeenSet)
  {
   payload.WithObject("resourcesAggregates", m_resourcesAggregates.Jsonize());

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", RecommendationSourceMapper::GetNameForRecommendationSource(m_source));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RecommendationStatusMapper::GetNameForRecommendationStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RecommendationTypeMapper::GetNameForRecommendationType(m_type));
  }

  if(m_updateReasonHasBeenSet)
  {
   payload.WithString("updateReason", m_updateReason);

  }

  if(m_updateReasonCodeHasBeenSet)
  {
   payload.WithString("updateReasonCode", UpdateRecommendationLifecycleStageReasonCodeMapper::GetNameForUpdateRecommendationLifecycleStageReasonCode(m_updateReasonCode));
  }

  if(m_updatedOnBehalfOfHasBeenSet)
  {
   payload.WithString("updatedOnBehalfOf", m_updatedOnBehalfOf);

  }

  if(m_updatedOnBehalfOfJobTitleHasBeenSet)
  {
   payload.WithString("updatedOnBehalfOfJobTitle", m_updatedOnBehalfOfJobTitle);

  }

  return payload;
}

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
