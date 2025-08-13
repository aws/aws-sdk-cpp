/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ResourceSnapshotJobSummary.h>
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

ResourceSnapshotJobSummary::ResourceSnapshotJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceSnapshotJobSummary& ResourceSnapshotJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngagementId"))
  {
    m_engagementId = jsonValue.GetString("EngagementId");
    m_engagementIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceSnapshotJobStatusMapper::GetResourceSnapshotJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSnapshotJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_engagementIdHasBeenSet)
  {
   payload.WithString("EngagementId", m_engagementId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceSnapshotJobStatusMapper::GetNameForResourceSnapshotJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
