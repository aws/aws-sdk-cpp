/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/TrainingDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

TrainingDataResult::TrainingDataResult() : 
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_validationHasBeenSet(false)
{
}

TrainingDataResult::TrainingDataResult(JsonView jsonValue) : 
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_validationHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingDataResult& TrainingDataResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetObject("Input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetObject("Output");

    m_outputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Validation"))
  {
    m_validation = jsonValue.GetObject("Validation");

    m_validationHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingDataResult::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithObject("Input", m_input.Jsonize());

  }

  if(m_outputHasBeenSet)
  {
   payload.WithObject("Output", m_output.Jsonize());

  }

  if(m_validationHasBeenSet)
  {
   payload.WithObject("Validation", m_validation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
