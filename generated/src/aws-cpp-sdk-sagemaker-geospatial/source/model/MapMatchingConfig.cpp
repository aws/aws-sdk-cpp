/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/MapMatchingConfig.h>
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

MapMatchingConfig::MapMatchingConfig() : 
    m_idAttributeNameHasBeenSet(false),
    m_timestampAttributeNameHasBeenSet(false),
    m_xAttributeNameHasBeenSet(false),
    m_yAttributeNameHasBeenSet(false)
{
}

MapMatchingConfig::MapMatchingConfig(JsonView jsonValue) : 
    m_idAttributeNameHasBeenSet(false),
    m_timestampAttributeNameHasBeenSet(false),
    m_xAttributeNameHasBeenSet(false),
    m_yAttributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

MapMatchingConfig& MapMatchingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdAttributeName"))
  {
    m_idAttributeName = jsonValue.GetString("IdAttributeName");

    m_idAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimestampAttributeName"))
  {
    m_timestampAttributeName = jsonValue.GetString("TimestampAttributeName");

    m_timestampAttributeNameHasBeenSet = true;
  }

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

JsonValue MapMatchingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_idAttributeNameHasBeenSet)
  {
   payload.WithString("IdAttributeName", m_idAttributeName);

  }

  if(m_timestampAttributeNameHasBeenSet)
  {
   payload.WithString("TimestampAttributeName", m_timestampAttributeName);

  }

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
