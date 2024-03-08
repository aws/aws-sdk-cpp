/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/CheckSummary.h>
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

CheckSummary::CheckSummary() : 
    m_arnHasBeenSet(false),
    m_awsServicesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pillarsHasBeenSet(false),
    m_source(RecommendationSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

CheckSummary::CheckSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_awsServicesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pillarsHasBeenSet(false),
    m_source(RecommendationSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

CheckSummary& CheckSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("source"))
  {
    m_source = RecommendationSourceMapper::GetRecommendationSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue CheckSummary::Jsonize() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", RecommendationSourceMapper::GetNameForRecommendationSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
