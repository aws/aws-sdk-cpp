/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomContentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

CustomContentConfiguration::CustomContentConfiguration() : 
    m_contentUrlHasBeenSet(false),
    m_contentType(CustomContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_imageScaling(CustomContentImageScalingConfiguration::NOT_SET),
    m_imageScalingHasBeenSet(false)
{
}

CustomContentConfiguration::CustomContentConfiguration(JsonView jsonValue) : 
    m_contentUrlHasBeenSet(false),
    m_contentType(CustomContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_imageScaling(CustomContentImageScalingConfiguration::NOT_SET),
    m_imageScalingHasBeenSet(false)
{
  *this = jsonValue;
}

CustomContentConfiguration& CustomContentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentUrl"))
  {
    m_contentUrl = jsonValue.GetString("ContentUrl");

    m_contentUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = CustomContentTypeMapper::GetCustomContentTypeForName(jsonValue.GetString("ContentType"));

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageScaling"))
  {
    m_imageScaling = CustomContentImageScalingConfigurationMapper::GetCustomContentImageScalingConfigurationForName(jsonValue.GetString("ImageScaling"));

    m_imageScalingHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomContentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_contentUrlHasBeenSet)
  {
   payload.WithString("ContentUrl", m_contentUrl);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", CustomContentTypeMapper::GetNameForCustomContentType(m_contentType));
  }

  if(m_imageScalingHasBeenSet)
  {
   payload.WithString("ImageScaling", CustomContentImageScalingConfigurationMapper::GetNameForCustomContentImageScalingConfiguration(m_imageScaling));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
