/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobCompiledOutputConfig.h>
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

RecommendationJobCompiledOutputConfig::RecommendationJobCompiledOutputConfig() : 
    m_s3OutputUriHasBeenSet(false)
{
}

RecommendationJobCompiledOutputConfig::RecommendationJobCompiledOutputConfig(JsonView jsonValue) : 
    m_s3OutputUriHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationJobCompiledOutputConfig& RecommendationJobCompiledOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputUri"))
  {
    m_s3OutputUri = jsonValue.GetString("S3OutputUri");

    m_s3OutputUriHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationJobCompiledOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputUriHasBeenSet)
  {
   payload.WithString("S3OutputUri", m_s3OutputUri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
