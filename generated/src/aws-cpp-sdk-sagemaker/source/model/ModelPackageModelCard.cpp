/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageModelCard.h>
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

ModelPackageModelCard::ModelPackageModelCard(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelPackageModelCard& ModelPackageModelCard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelCardContent"))
  {
    m_modelCardContent = jsonValue.GetString("ModelCardContent");
    m_modelCardContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelCardStatus"))
  {
    m_modelCardStatus = ModelCardStatusMapper::GetModelCardStatusForName(jsonValue.GetString("ModelCardStatus"));
    m_modelCardStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelPackageModelCard::Jsonize() const
{
  JsonValue payload;

  if(m_modelCardContentHasBeenSet)
  {
   payload.WithString("ModelCardContent", m_modelCardContent);

  }

  if(m_modelCardStatusHasBeenSet)
  {
   payload.WithString("ModelCardStatus", ModelCardStatusMapper::GetNameForModelCardStatus(m_modelCardStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
