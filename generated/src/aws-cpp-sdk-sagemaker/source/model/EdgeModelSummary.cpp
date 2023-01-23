/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgeModelSummary.h>
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

EdgeModelSummary::EdgeModelSummary() : 
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}

EdgeModelSummary::EdgeModelSummary(JsonView jsonValue) : 
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeModelSummary& EdgeModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
