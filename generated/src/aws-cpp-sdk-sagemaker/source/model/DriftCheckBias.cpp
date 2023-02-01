/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DriftCheckBias.h>
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

DriftCheckBias::DriftCheckBias() : 
    m_configFileHasBeenSet(false),
    m_preTrainingConstraintsHasBeenSet(false),
    m_postTrainingConstraintsHasBeenSet(false)
{
}

DriftCheckBias::DriftCheckBias(JsonView jsonValue) : 
    m_configFileHasBeenSet(false),
    m_preTrainingConstraintsHasBeenSet(false),
    m_postTrainingConstraintsHasBeenSet(false)
{
  *this = jsonValue;
}

DriftCheckBias& DriftCheckBias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigFile"))
  {
    m_configFile = jsonValue.GetObject("ConfigFile");

    m_configFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreTrainingConstraints"))
  {
    m_preTrainingConstraints = jsonValue.GetObject("PreTrainingConstraints");

    m_preTrainingConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostTrainingConstraints"))
  {
    m_postTrainingConstraints = jsonValue.GetObject("PostTrainingConstraints");

    m_postTrainingConstraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue DriftCheckBias::Jsonize() const
{
  JsonValue payload;

  if(m_configFileHasBeenSet)
  {
   payload.WithObject("ConfigFile", m_configFile.Jsonize());

  }

  if(m_preTrainingConstraintsHasBeenSet)
  {
   payload.WithObject("PreTrainingConstraints", m_preTrainingConstraints.Jsonize());

  }

  if(m_postTrainingConstraintsHasBeenSet)
  {
   payload.WithObject("PostTrainingConstraints", m_postTrainingConstraints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
