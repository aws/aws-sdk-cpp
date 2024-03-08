/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentSpecificationSummary.h>
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

InferenceComponentSpecificationSummary::InferenceComponentSpecificationSummary() : 
    m_modelNameHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_startupParametersHasBeenSet(false),
    m_computeResourceRequirementsHasBeenSet(false)
{
}

InferenceComponentSpecificationSummary::InferenceComponentSpecificationSummary(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_startupParametersHasBeenSet(false),
    m_computeResourceRequirementsHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceComponentSpecificationSummary& InferenceComponentSpecificationSummary::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue InferenceComponentSpecificationSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
