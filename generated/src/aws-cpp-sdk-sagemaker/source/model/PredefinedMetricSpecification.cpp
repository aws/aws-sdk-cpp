/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PredefinedMetricSpecification.h>
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

PredefinedMetricSpecification::PredefinedMetricSpecification() : 
    m_predefinedMetricTypeHasBeenSet(false)
{
}

PredefinedMetricSpecification::PredefinedMetricSpecification(JsonView jsonValue) : 
    m_predefinedMetricTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PredefinedMetricSpecification& PredefinedMetricSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PredefinedMetricType"))
  {
    m_predefinedMetricType = jsonValue.GetString("PredefinedMetricType");

    m_predefinedMetricTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PredefinedMetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_predefinedMetricTypeHasBeenSet)
  {
   payload.WithString("PredefinedMetricType", m_predefinedMetricType);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
