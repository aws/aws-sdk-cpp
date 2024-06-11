/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Returns the destination region and retention period that are configured for
   * cross-region snapshot copy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterSnapshotCopyStatus">AWS
   * API Reference</a></p>
   */
  class ClusterSnapshotCopyStatus
  {
  public:
    AWS_REDSHIFT_API ClusterSnapshotCopyStatus();
    AWS_REDSHIFT_API ClusterSnapshotCopyStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterSnapshotCopyStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The destination region that snapshots are automatically copied to when
     * cross-region snapshot copy is enabled.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }
    inline ClusterSnapshotCopyStatus& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}
    inline ClusterSnapshotCopyStatus& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}
    inline ClusterSnapshotCopyStatus& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region.</p>
     */
    inline long long GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(long long value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline ClusterSnapshotCopyStatus& WithRetentionPeriod(long long value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that automated snapshots are retained in the destination
     * region after they are copied from a source region. If the value is -1, the
     * manual snapshot is retained indefinitely. </p> <p>The value must be either -1 or
     * an integer between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline ClusterSnapshotCopyStatus& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
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
    inline ClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const Aws::String& value) { SetSnapshotCopyGrantName(value); return *this;}
    inline ClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(Aws::String&& value) { SetSnapshotCopyGrantName(std::move(value)); return *this;}
    inline ClusterSnapshotCopyStatus& WithSnapshotCopyGrantName(const char* value) { SetSnapshotCopyGrantName(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    long long m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
