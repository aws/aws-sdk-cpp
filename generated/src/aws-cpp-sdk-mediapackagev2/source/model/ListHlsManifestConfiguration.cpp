/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ListHlsManifestConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

ListHlsManifestConfiguration::ListHlsManifestConfiguration() : 
    m_manifestNameHasBeenSet(false),
    m_childManifestNameHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

ListHlsManifestConfiguration::ListHlsManifestConfiguration(JsonView jsonValue) : 
    m_manifestNameHasBeenSet(false),
    m_childManifestNameHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

ListHlsManifestConfiguration& ListHlsManifestConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestName"))
  {
    m_manifestName = jsonValue.GetString("ManifestName");

    m_manifestNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChildManifestName"))
  {
    m_childManifestName = jsonValue.GetString("ChildManifestName");

    m_childManifestNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue ListHlsManifestConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("ManifestName", m_manifestName);

  }

  if(m_childManifestNameHasBeenSet)
  {
   payload.WithString("ChildManifestName", m_childManifestName);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
