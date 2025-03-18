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
   * <p>Describes the status of a cluster restore action. Returns null if the cluster
   * was not created by restoring a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RestoreStatus">AWS
   * API Reference</a></p>
   */
  class RestoreStatus
  {
  public:
    AWS_REDSHIFT_API RestoreStatus() = default;
    AWS_REDSHIFT_API RestoreStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API RestoreStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    RestoreStatus& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup. This field is only updated when
     * you restore to DC2 node types. </p>
     */
    inline double GetCurrentRestoreRateInMegaBytesPerSecond() const { return m_currentRestoreRateInMegaBytesPerSecond; }
    inline bool CurrentRestoreRateInMegaBytesPerSecondHasBeenSet() const { return m_currentRestoreRateInMegaBytesPerSecondHasBeenSet; }
    inline void SetCurrentRestoreRateInMegaBytesPerSecond(double value) { m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = true; m_currentRestoreRateInMegaBytesPerSecond = value; }
    inline RestoreStatus& WithCurrentRestoreRateInMegaBytesPerSecond(double value) { SetCurrentRestoreRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the set of snapshot data used to restore the cluster. This field
     * is only updated when you restore to DC2 node types. </p>
     */
    inline long long GetSnapshotSizeInMegaBytes() const { return m_snapshotSizeInMegaBytes; }
    inline bool SnapshotSizeInMegaBytesHasBeenSet() const { return m_snapshotSizeInMegaBytesHasBeenSet; }
    inline void SetSnapshotSizeInMegaBytes(long long value) { m_snapshotSizeInMegaBytesHasBeenSet = true; m_snapshotSizeInMegaBytes = value; }
    inline RestoreStatus& WithSnapshotSizeInMegaBytes(long long value) { SetSnapshotSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.
     * This field is only updated when you restore to DC2 node types. </p>
     */
    inline long long GetProgressInMegaBytes() const { return m_progressInMegaBytes; }
    inline bool ProgressInMegaBytesHasBeenSet() const { return m_progressInMegaBytesHasBeenSet; }
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytesHasBeenSet = true; m_progressInMegaBytes = value; }
    inline RestoreStatus& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish. This field is only updated when you
     * restore to DC2 node types. </p>
     */
    inline long long GetElapsedTimeInSeconds() const { return m_elapsedTimeInSeconds; }
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }
    inline RestoreStatus& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore. This field is only updated when you restore to DC2
     * node types. </p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const { return m_estimatedTimeToCompletionInSeconds; }
    inline bool EstimatedTimeToCompletionInSecondsHasBeenSet() const { return m_estimatedTimeToCompletionInSecondsHasBeenSet; }
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSecondsHasBeenSet = true; m_estimatedTimeToCompletionInSeconds = value; }
    inline RestoreStatus& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    double m_currentRestoreRateInMegaBytesPerSecond{0.0};
    bool m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_snapshotSizeInMegaBytes{0};
    bool m_snapshotSizeInMegaBytesHasBeenSet = false;

    long long m_progressInMegaBytes{0};
    bool m_progressInMegaBytesHasBeenSet = false;

    long long m_elapsedTimeInSeconds{0};
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    long long m_estimatedTimeToCompletionInSeconds{0};
    bool m_estimatedTimeToCompletionInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
