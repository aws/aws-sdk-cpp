/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelBiasJobInput.h>
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

ModelBiasJobInput::ModelBiasJobInput() : 
    m_endpointInputHasBeenSet(false),
    m_batchTransformInputHasBeenSet(false),
    m_groundTruthS3InputHasBeenSet(false)
{
}

ModelBiasJobInput::ModelBiasJobInput(JsonView jsonValue) : 
    m_endpointInputHasBeenSet(false),
    m_batchTransformInputHasBeenSet(false),
    m_groundTruthS3InputHasBeenSet(false)
{
  *this = jsonValue;
}

ModelBiasJobInput& ModelBiasJobInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointInput"))
  {
    m_endpointInput = jsonValue.GetObject("EndpointInput");

    m_endpointInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchTransformInput"))
  {
    m_batchTransformInput = jsonValue.GetObject("BatchTransformInput");

    m_batchTransformInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroundTruthS3Input"))
  {
    m_groundTruthS3Input = jsonValue.GetObject("GroundTruthS3Input");

    m_groundTruthS3InputHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelBiasJobInput::Jsonize() const
{
  JsonValue payload;

  if(m_endpointInputHasBeenSet)
  {
   payload.WithObject("EndpointInput", m_endpointInput.Jsonize());

  }

  if(m_batchTransformInputHasBeenSet)
  {
   payload.WithObject("BatchTransformInput", m_batchTransformInput.Jsonize());

  }

  if(m_groundTruthS3InputHasBeenSet)
  {
   payload.WithObject("GroundTruthS3Input", m_groundTruthS3Input.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
