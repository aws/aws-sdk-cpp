/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterClusterSnapshotCopyStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRedshiftClusterClusterSnapshotCopyStatus::AwsRedshiftClusterClusterSnapshotCopyStatus() : 
    m_destinationRegionHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotCopyGrantNameHasBeenSet(false)
{
}

AwsRedshiftClusterClusterSnapshotCopyStatus::AwsRedshiftClusterClusterSnapshotCopyStatus(JsonView jsonValue) : 
    m_destinationRegionHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotCopyGrantNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterClusterSnapshotCopyStatus& AwsRedshiftClusterClusterSnapshotCopyStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationRegion"))
  {
    m_destinationRegion = jsonValue.GetString("DestinationRegion");

    m_destinationRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManualSnapshotRetentionPeriod"))
  {
    m_manualSnapshotRetentionPeriod = jsonValue.GetInteger("ManualSnapshotRetentionPeriod");

    m_manualSnapshotRetentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetInteger("RetentionPeriod");

    m_retentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotCopyGrantName"))
  {
    m_snapshotCopyGrantName = jsonValue.GetString("SnapshotCopyGrantName");

    m_snapshotCopyGrantNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterClusterSnapshotCopyStatus::Jsonize() const
{
  JsonValue payload;

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("DestinationRegion", m_destinationRegion);

  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("ManualSnapshotRetentionPeriod", m_manualSnapshotRetentionPeriod);

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithInteger("RetentionPeriod", m_retentionPeriod);

  }

  if(m_snapshotCopyGrantNameHasBeenSet)
  {
   payload.WithString("SnapshotCopyGrantName", m_snapshotCopyGrantName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
