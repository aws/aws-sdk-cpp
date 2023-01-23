/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Recommendation.h>
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

Recommendation::Recommendation() : 
    m_resourceArnHasBeenSet(false),
    m_type(RecommendationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(RecommendationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_impact(RecommendationImpact::NOT_SET),
    m_impactHasBeenSet(false)
{
}

Recommendation::Recommendation(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_type(RecommendationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(RecommendationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_impact(RecommendationImpact::NOT_SET),
    m_impactHasBeenSet(false)
{
  *this = jsonValue;
}

Recommendation& Recommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = RecommendationTypeMapper::GetRecommendationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Impact"))
  {
    m_impact = RecommendationImpactMapper::GetRecommendationImpactForName(jsonValue.GetString("Impact"));

    m_impactHasBeenSet = true;
  }

  return *this;
}

JsonValue Recommendation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RecommendationTypeMapper::GetNameForRecommendationType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecommendationStatusMapper::GetNameForRecommendationStatus(m_status));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_impactHasBeenSet)
  {
   payload.WithString("Impact", RecommendationImpactMapper::GetNameForRecommendationImpact(m_impact));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
