/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/OrganizationRecommendationResourceSummary.h>
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

OrganizationRecommendationResourceSummary::OrganizationRecommendationResourceSummary() : 
    m_accountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_awsResourceIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_recommendationArnHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

OrganizationRecommendationResourceSummary::OrganizationRecommendationResourceSummary(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_awsResourceIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_recommendationArnHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationRecommendationResourceSummary& OrganizationRecommendationResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsResourceId"))
  {
    m_awsResourceId = jsonValue.GetString("awsResourceId");

    m_awsResourceIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationArn"))
  {
    m_recommendationArn = jsonValue.GetString("recommendationArn");

    m_recommendationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionCode"))
  {
    m_regionCode = jsonValue.GetString("regionCode");

    m_regionCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationRecommendationResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_awsResourceIdHasBeenSet)
  {
   payload.WithString("awsResourceId", m_awsResourceId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("metadata", std::move(metadataJsonMap));

  }

  if(m_recommendationArnHasBeenSet)
  {
   payload.WithString("recommendationArn", m_recommendationArn);

  }

  if(m_regionCodeHasBeenSet)
  {
   payload.WithString("regionCode", m_regionCode);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
