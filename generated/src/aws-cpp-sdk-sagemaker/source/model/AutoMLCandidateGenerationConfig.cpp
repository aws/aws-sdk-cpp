/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLCandidateGenerationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoMLCandidateGenerationConfig::AutoMLCandidateGenerationConfig() : 
    m_featureSpecificationS3UriHasBeenSet(false),
    m_algorithmsConfigHasBeenSet(false)
{
}

AutoMLCandidateGenerationConfig::AutoMLCandidateGenerationConfig(JsonView jsonValue) : 
    m_featureSpecificationS3UriHasBeenSet(false),
    m_algorithmsConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLCandidateGenerationConfig& AutoMLCandidateGenerationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureSpecificationS3Uri"))
  {
    m_featureSpecificationS3Uri = jsonValue.GetString("FeatureSpecificationS3Uri");

    m_featureSpecificationS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlgorithmsConfig"))
  {
    Aws::Utils::Array<JsonView> algorithmsConfigJsonList = jsonValue.GetArray("AlgorithmsConfig");
    for(unsigned algorithmsConfigIndex = 0; algorithmsConfigIndex < algorithmsConfigJsonList.GetLength(); ++algorithmsConfigIndex)
    {
      m_algorithmsConfig.push_back(algorithmsConfigJsonList[algorithmsConfigIndex].AsObject());
    }
    m_algorithmsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLCandidateGenerationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_featureSpecificationS3UriHasBeenSet)
  {
   payload.WithString("FeatureSpecificationS3Uri", m_featureSpecificationS3Uri);

  }

  if(m_algorithmsConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> algorithmsConfigJsonList(m_algorithmsConfig.size());
   for(unsigned algorithmsConfigIndex = 0; algorithmsConfigIndex < algorithmsConfigJsonList.GetLength(); ++algorithmsConfigIndex)
   {
     algorithmsConfigJsonList[algorithmsConfigIndex].AsObject(m_algorithmsConfig[algorithmsConfigIndex].Jsonize());
   }
   payload.WithArray("AlgorithmsConfig", std::move(algorithmsConfigJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
