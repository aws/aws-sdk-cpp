/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ReverseGeocodingConfig.h>
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

ReverseGeocodingConfig::ReverseGeocodingConfig() : 
    m_xAttributeNameHasBeenSet(false),
    m_yAttributeNameHasBeenSet(false)
{
}

ReverseGeocodingConfig::ReverseGeocodingConfig(JsonView jsonValue) : 
    m_xAttributeNameHasBeenSet(false),
    m_yAttributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

ReverseGeocodingConfig& ReverseGeocodingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("XAttributeName"))
  {
    m_xAttributeName = jsonValue.GetString("XAttributeName");

    m_xAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("YAttributeName"))
  {
    m_yAttributeName = jsonValue.GetString("YAttributeName");

    m_yAttributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ReverseGeocodingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_xAttributeNameHasBeenSet)
  {
   payload.WithString("XAttributeName", m_xAttributeName);

  }

  if(m_yAttributeNameHasBeenSet)
  {
   payload.WithString("YAttributeName", m_yAttributeName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
