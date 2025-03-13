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
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterSnapshotCopyStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination Region that snapshots are automatically copied to when
     * cross-Region snapshot copy is enabled.</p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    AwsRedshiftClusterClusterSnapshotCopyStatus& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that manual snapshots are retained in the destination
     * Region after they are copied from a source Region.</p> <p>If the value is
     * <code>-1</code>, then the manual snapshot is retained indefinitely.</p> <p>Valid
     * values: Either <code>-1</code> or an integer between 1 and 3,653</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const { return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain automated snapshots in the destination Region
     * after they are copied from a source Region.</p>
     */
    inline int GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline AwsRedshiftClusterClusterSnapshotCopyStatus& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot copy grant.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const { return m_snapshotCopyGrantName; }
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }
    template<typename SnapshotCopyGrantNameT = Aws::String>
    void SetSnapshotCopyGrantName(SnapshotCopyGrantNameT&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::forward<SnapshotCopyGrantNameT>(value); }
    template<typename SnapshotCopyGrantNameT = Aws::String>
    AwsRedshiftClusterClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(SnapshotCopyGrantNameT&& value) { SetSnapshotCopyGrantName(std::forward<SnapshotCopyGrantNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod{0};
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    int m_retentionPeriod{0};
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
