/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ResourceSnapshotPayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

ResourceSnapshotPayload::ResourceSnapshotPayload(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceSnapshotPayload& ResourceSnapshotPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpportunitySummary"))
  {
    m_opportunitySummary = jsonValue.GetObject("OpportunitySummary");
    m_opportunitySummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSnapshotPayload::Jsonize() const
{
  JsonValue payload;

  if(m_opportunitySummaryHasBeenSet)
  {
   payload.WithObject("OpportunitySummary", m_opportunitySummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
