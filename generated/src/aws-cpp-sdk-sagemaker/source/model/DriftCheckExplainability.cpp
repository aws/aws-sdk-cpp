/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DriftCheckExplainability.h>
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

DriftCheckExplainability::DriftCheckExplainability() : 
    m_constraintsHasBeenSet(false),
    m_configFileHasBeenSet(false)
{
}

DriftCheckExplainability::DriftCheckExplainability(JsonView jsonValue) : 
    m_constraintsHasBeenSet(false),
    m_configFileHasBeenSet(false)
{
  *this = jsonValue;
}

DriftCheckExplainability& DriftCheckExplainability::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Constraints"))
  {
    m_constraints = jsonValue.GetObject("Constraints");

    m_constraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigFile"))
  {
    m_configFile = jsonValue.GetObject("ConfigFile");

    m_configFileHasBeenSet = true;
  }

  return *this;
}

JsonValue DriftCheckExplainability::Jsonize() const
{
  JsonValue payload;

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("Constraints", m_constraints.Jsonize());

  }

  if(m_configFileHasBeenSet)
  {
   payload.WithObject("ConfigFile", m_configFile.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
