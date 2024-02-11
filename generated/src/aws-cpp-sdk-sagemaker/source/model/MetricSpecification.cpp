/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MetricSpecification.h>
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

MetricSpecification::MetricSpecification() : 
    m_predefinedHasBeenSet(false),
    m_customizedHasBeenSet(false)
{
}

MetricSpecification::MetricSpecification(JsonView jsonValue) : 
    m_predefinedHasBeenSet(false),
    m_customizedHasBeenSet(false)
{
  *this = jsonValue;
}

MetricSpecification& MetricSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Predefined"))
  {
    m_predefined = jsonValue.GetObject("Predefined");

    m_predefinedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Customized"))
  {
    m_customized = jsonValue.GetObject("Customized");

    m_customizedHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_predefinedHasBeenSet)
  {
   payload.WithObject("Predefined", m_predefined.Jsonize());

  }

  if(m_customizedHasBeenSet)
  {
   payload.WithObject("Customized", m_customized.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
