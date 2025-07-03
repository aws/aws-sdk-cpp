/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/CreateMssManifestConfiguration.h>
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

CreateMssManifestConfiguration::CreateMssManifestConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateMssManifestConfiguration& CreateMssManifestConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestName"))
  {
    m_manifestName = jsonValue.GetString("ManifestName");
    m_manifestNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestWindowSeconds"))
  {
    m_manifestWindowSeconds = jsonValue.GetInteger("ManifestWindowSeconds");
    m_manifestWindowSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterConfiguration"))
  {
    m_filterConfiguration = jsonValue.GetObject("FilterConfiguration");
    m_filterConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestLayout"))
  {
    m_manifestLayout = MssManifestLayoutMapper::GetMssManifestLayoutForName(jsonValue.GetString("ManifestLayout"));
    m_manifestLayoutHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateMssManifestConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("ManifestName", m_manifestName);

  }

  if(m_manifestWindowSecondsHasBeenSet)
  {
   payload.WithInteger("ManifestWindowSeconds", m_manifestWindowSeconds);

  }

  if(m_filterConfigurationHasBeenSet)
  {
   payload.WithObject("FilterConfiguration", m_filterConfiguration.Jsonize());

  }

  if(m_manifestLayoutHasBeenSet)
  {
   payload.WithString("ManifestLayout", MssManifestLayoutMapper::GetNameForMssManifestLayout(m_manifestLayout));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
