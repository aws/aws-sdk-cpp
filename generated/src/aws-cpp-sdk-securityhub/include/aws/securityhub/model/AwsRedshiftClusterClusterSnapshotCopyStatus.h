/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>You can configure Amazon Redshift to copy snapshots for a cluster to another
   * Amazon Web Services Region. This parameter provides information about a
   * cross-Region snapshot copy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterClusterSnapshotCopyStatus">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterClusterSnapshotCopyStatus
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus();
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that manual snapshots are retained in the destination
     * Region after they are copied from a source Region.</p> <p>If the value is
     * <code>-1</code>, then the manual snapshot is retained indefinitely.</p> <p>Valid
     * values: Either <code>-1</code> or an integer between 1 and 3,653</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain automated snapshots in the destination Region
     * after they are copied from a source Region.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const{ return m_snapshotCopyGrantName; }
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }
    inline void SetSnapshotCopyGrantName(const Aws::String& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = value; }
    inline void SetSnapshotCopyGrantName(Aws::String&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::move(value); }
    inline void SetSnapshotCopyGrantName(const char* value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName.assign(value); }
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(std::move(value)); return *this;}
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
