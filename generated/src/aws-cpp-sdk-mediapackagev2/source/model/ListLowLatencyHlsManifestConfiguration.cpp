/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ListLowLatencyHlsManifestConfiguration.h>
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

ListLowLatencyHlsManifestConfiguration::ListLowLatencyHlsManifestConfiguration() : 
    m_manifestNameHasBeenSet(false),
    m_childManifestNameHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

ListLowLatencyHlsManifestConfiguration::ListLowLatencyHlsManifestConfiguration(JsonView jsonValue) : 
    m_manifestNameHasBeenSet(false),
    m_childManifestNameHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

ListLowLatencyHlsManifestConfiguration& ListLowLatencyHlsManifestConfiguration::operator =(JsonView jsonValue)
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

JsonValue ListLowLatencyHlsManifestConfiguration::Jsonize() const
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
