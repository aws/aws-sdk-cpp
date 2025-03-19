/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MediaExtractionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

MediaExtractionConfiguration::MediaExtractionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaExtractionConfiguration& MediaExtractionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageExtractionConfiguration"))
  {
    m_imageExtractionConfiguration = jsonValue.GetObject("imageExtractionConfiguration");
    m_imageExtractionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioExtractionConfiguration"))
  {
    m_audioExtractionConfiguration = jsonValue.GetObject("audioExtractionConfiguration");
    m_audioExtractionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoExtractionConfiguration"))
  {
    m_videoExtractionConfiguration = jsonValue.GetObject("videoExtractionConfiguration");
    m_videoExtractionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaExtractionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_imageExtractionConfigurationHasBeenSet)
  {
   payload.WithObject("imageExtractionConfiguration", m_imageExtractionConfiguration.Jsonize());

  }

  if(m_audioExtractionConfigurationHasBeenSet)
  {
   payload.WithObject("audioExtractionConfiguration", m_audioExtractionConfiguration.Jsonize());

  }

  if(m_videoExtractionConfigurationHasBeenSet)
  {
   payload.WithObject("videoExtractionConfiguration", m_videoExtractionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
