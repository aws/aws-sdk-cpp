﻿/**
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

CustomContentConfiguration::CustomContentConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");
    m_interactionsHasBeenSet = true;
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

  if(m_interactionsHasBeenSet)
  {
   payload.WithObject("Interactions", m_interactions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
