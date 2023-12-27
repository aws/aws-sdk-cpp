/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentSummary.h>
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

InferenceComponentSummary::InferenceComponentSummary() : 
    m_creationTimeHasBeenSet(false),
    m_inferenceComponentArnHasBeenSet(false),
    m_inferenceComponentNameHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_variantNameHasBeenSet(false),
    m_inferenceComponentStatus(InferenceComponentStatus::NOT_SET),
    m_inferenceComponentStatusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

InferenceComponentSummary::InferenceComponentSummary(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_inferenceComponentArnHasBeenSet(false),
    m_inferenceComponentNameHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_variantNameHasBeenSet(false),
    m_inferenceComponentStatus(InferenceComponentStatus::NOT_SET),
    m_inferenceComponentStatusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceComponentSummary& InferenceComponentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceComponentArn"))
  {
    m_inferenceComponentArn = jsonValue.GetString("InferenceComponentArn");

    m_inferenceComponentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceComponentName"))
  {
    m_inferenceComponentName = jsonValue.GetString("InferenceComponentName");

    m_inferenceComponentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");

    m_variantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceComponentStatus"))
  {
    m_inferenceComponentStatus = InferenceComponentStatusMapper::GetInferenceComponentStatusForName(jsonValue.GetString("InferenceComponentStatus"));

    m_inferenceComponentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceComponentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_inferenceComponentArnHasBeenSet)
  {
   payload.WithString("InferenceComponentArn", m_inferenceComponentArn);

  }

  if(m_inferenceComponentNameHasBeenSet)
  {
   payload.WithString("InferenceComponentName", m_inferenceComponentName);

  }

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_inferenceComponentStatusHasBeenSet)
  {
   payload.WithString("InferenceComponentStatus", InferenceComponentStatusMapper::GetNameForInferenceComponentStatus(m_inferenceComponentStatus));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
