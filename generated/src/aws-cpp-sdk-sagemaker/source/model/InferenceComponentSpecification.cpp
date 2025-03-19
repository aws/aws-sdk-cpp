/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentSpecification.h>
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

InferenceComponentSpecification::InferenceComponentSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceComponentSpecification& InferenceComponentSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Container"))
  {
    m_container = jsonValue.GetObject("Container");
    m_containerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartupParameters"))
  {
    m_startupParameters = jsonValue.GetObject("StartupParameters");
    m_startupParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeResourceRequirements"))
  {
    m_computeResourceRequirements = jsonValue.GetObject("ComputeResourceRequirements");
    m_computeResourceRequirementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseInferenceComponentName"))
  {
    m_baseInferenceComponentName = jsonValue.GetString("BaseInferenceComponentName");
    m_baseInferenceComponentNameHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_containerHasBeenSet)
  {
   payload.WithObject("Container", m_container.Jsonize());

  }

  if(m_startupParametersHasBeenSet)
  {
   payload.WithObject("StartupParameters", m_startupParameters.Jsonize());

  }

  if(m_computeResourceRequirementsHasBeenSet)
  {
   payload.WithObject("ComputeResourceRequirements", m_computeResourceRequirements.Jsonize());

  }

  if(m_baseInferenceComponentNameHasBeenSet)
  {
   payload.WithString("BaseInferenceComponentName", m_baseInferenceComponentName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
