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

MediaExtractionConfiguration::MediaExtractionConfiguration() : 
    m_imageExtractionConfigurationHasBeenSet(false)
{
}

MediaExtractionConfiguration::MediaExtractionConfiguration(JsonView jsonValue)
  : MediaExtractionConfiguration()
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

  return *this;
}

JsonValue MediaExtractionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_imageExtractionConfigurationHasBeenSet)
  {
   payload.WithObject("imageExtractionConfiguration", m_imageExtractionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
