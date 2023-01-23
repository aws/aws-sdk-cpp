/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/PropertyFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

PropertyFilter::PropertyFilter() : 
    m_propertyHasBeenSet(false)
{
}

PropertyFilter::PropertyFilter(JsonView jsonValue) : 
    m_propertyHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyFilter& PropertyFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Property"))
  {
    m_property = jsonValue.GetObject("Property");

    m_propertyHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyFilter::Jsonize() const
{
  JsonValue payload;

  if(m_propertyHasBeenSet)
  {
   payload.WithObject("Property", m_property.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
