/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TextGenerationResolvedAttributes.h>
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

TextGenerationResolvedAttributes::TextGenerationResolvedAttributes() : 
    m_baseModelNameHasBeenSet(false)
{
}

TextGenerationResolvedAttributes::TextGenerationResolvedAttributes(JsonView jsonValue) : 
    m_baseModelNameHasBeenSet(false)
{
  *this = jsonValue;
}

TextGenerationResolvedAttributes& TextGenerationResolvedAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseModelName"))
  {
    m_baseModelName = jsonValue.GetString("BaseModelName");

    m_baseModelNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TextGenerationResolvedAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_baseModelNameHasBeenSet)
  {
   payload.WithString("BaseModelName", m_baseModelName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
