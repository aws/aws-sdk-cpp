﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentCapacitySize.h>
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

InferenceComponentCapacitySize::InferenceComponentCapacitySize(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceComponentCapacitySize& InferenceComponentCapacitySize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = InferenceComponentCapacitySizeTypeMapper::GetInferenceComponentCapacitySizeTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentCapacitySize::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InferenceComponentCapacitySizeTypeMapper::GetNameForInferenceComponentCapacitySizeType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
