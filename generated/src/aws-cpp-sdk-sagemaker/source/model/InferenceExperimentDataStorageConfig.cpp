/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceExperimentDataStorageConfig.h>
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

InferenceExperimentDataStorageConfig::InferenceExperimentDataStorageConfig() : 
    m_destinationHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

InferenceExperimentDataStorageConfig::InferenceExperimentDataStorageConfig(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceExperimentDataStorageConfig& InferenceExperimentDataStorageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetObject("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceExperimentDataStorageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithObject("ContentType", m_contentType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
