/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/BundleDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Mobile
{
namespace Model
{

BundleDetails::BundleDetails() : 
    m_bundleIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_availablePlatformsHasBeenSet(false)
{
}

BundleDetails::BundleDetails(JsonView jsonValue) : 
    m_bundleIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_availablePlatformsHasBeenSet(false)
{
  *this = jsonValue;
}

BundleDetails& BundleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bundleId"))
  {
    m_bundleId = jsonValue.GetString("bundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iconUrl"))
  {
    m_iconUrl = jsonValue.GetString("iconUrl");

    m_iconUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availablePlatforms"))
  {
    Aws::Utils::Array<JsonView> availablePlatformsJsonList = jsonValue.GetArray("availablePlatforms");
    for(unsigned availablePlatformsIndex = 0; availablePlatformsIndex < availablePlatformsJsonList.GetLength(); ++availablePlatformsIndex)
    {
      m_availablePlatforms.push_back(PlatformMapper::GetPlatformForName(availablePlatformsJsonList[availablePlatformsIndex].AsString()));
    }
    m_availablePlatformsHasBeenSet = true;
  }

  return *this;
}

JsonValue BundleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_iconUrlHasBeenSet)
  {
   payload.WithString("iconUrl", m_iconUrl);

  }

  if(m_availablePlatformsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availablePlatformsJsonList(m_availablePlatforms.size());
   for(unsigned availablePlatformsIndex = 0; availablePlatformsIndex < availablePlatformsJsonList.GetLength(); ++availablePlatformsIndex)
   {
     availablePlatformsJsonList[availablePlatformsIndex].AsString(PlatformMapper::GetNameForPlatform(m_availablePlatforms[availablePlatformsIndex]));
   }
   payload.WithArray("availablePlatforms", std::move(availablePlatformsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Mobile
} // namespace Aws
