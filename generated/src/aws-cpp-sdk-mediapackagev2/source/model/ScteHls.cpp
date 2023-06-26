/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ScteHls.h>
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

ScteHls::ScteHls() : 
    m_adMarkerHls(AdMarkerHls::NOT_SET),
    m_adMarkerHlsHasBeenSet(false)
{
}

ScteHls::ScteHls(JsonView jsonValue) : 
    m_adMarkerHls(AdMarkerHls::NOT_SET),
    m_adMarkerHlsHasBeenSet(false)
{
  *this = jsonValue;
}

ScteHls& ScteHls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdMarkerHls"))
  {
    m_adMarkerHls = AdMarkerHlsMapper::GetAdMarkerHlsForName(jsonValue.GetString("AdMarkerHls"));

    m_adMarkerHlsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScteHls::Jsonize() const
{
  JsonValue payload;

  if(m_adMarkerHlsHasBeenSet)
  {
   payload.WithString("AdMarkerHls", AdMarkerHlsMapper::GetNameForAdMarkerHls(m_adMarkerHls));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
