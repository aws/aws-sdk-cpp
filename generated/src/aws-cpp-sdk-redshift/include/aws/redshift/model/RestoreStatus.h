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
    AWS_REDSHIFT_API RestoreStatus();
    AWS_REDSHIFT_API RestoreStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API RestoreStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline RestoreStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline RestoreStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline RestoreStatus& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup. This field is only updated when
     * you restore to DC2 and DS2 node types. </p>
     */
    inline double GetCurrentRestoreRateInMegaBytesPerSecond() const{ return m_currentRestoreRateInMegaBytesPerSecond; }

    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup. This field is only updated when
     * you restore to DC2 and DS2 node types. </p>
     */
    inline bool CurrentRestoreRateInMegaBytesPerSecondHasBeenSet() const { return m_currentRestoreRateInMegaBytesPerSecondHasBeenSet; }

    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup. This field is only updated when
     * you restore to DC2 and DS2 node types. </p>
     */
    inline void SetCurrentRestoreRateInMegaBytesPerSecond(double value) { m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = true; m_currentRestoreRateInMegaBytesPerSecond = value; }

    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup. This field is only updated when
     * you restore to DC2 and DS2 node types. </p>
     */
    inline RestoreStatus& WithCurrentRestoreRateInMegaBytesPerSecond(double value) { SetCurrentRestoreRateInMegaBytesPerSecond(value); return *this;}


    /**
     * <p>The size of the set of snapshot data used to restore the cluster. This field
     * is only updated when you restore to DC2 and DS2 node types. </p>
     */
    inline long long GetSnapshotSizeInMegaBytes() const{ return m_snapshotSizeInMegaBytes; }

    /**
     * <p>The size of the set of snapshot data used to restore the cluster. This field
     * is only updated when you restore to DC2 and DS2 node types. </p>
     */
    inline bool SnapshotSizeInMegaBytesHasBeenSet() const { return m_snapshotSizeInMegaBytesHasBeenSet; }

    /**
     * <p>The size of the set of snapshot data used to restore the cluster. This field
     * is only updated when you restore to DC2 and DS2 node types. </p>
     */
    inline void SetSnapshotSizeInMegaBytes(long long value) { m_snapshotSizeInMegaBytesHasBeenSet = true; m_snapshotSizeInMegaBytes = value; }

    /**
     * <p>The size of the set of snapshot data used to restore the cluster. This field
     * is only updated when you restore to DC2 and DS2 node types. </p>
     */
    inline RestoreStatus& WithSnapshotSizeInMegaBytes(long long value) { SetSnapshotSizeInMegaBytes(value); return *this;}


    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.
     * This field is only updated when you restore to DC2 and DS2 node types. </p>
     */
    inline long long GetProgressInMegaBytes() const{ return m_progressInMegaBytes; }

    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.
     * This field is only updated when you restore to DC2 and DS2 node types. </p>
     */
    inline bool ProgressInMegaBytesHasBeenSet() const { return m_progressInMegaBytesHasBeenSet; }

    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.
     * This field is only updated when you restore to DC2 and DS2 node types. </p>
     */
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytesHasBeenSet = true; m_progressInMegaBytes = value; }

    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.
     * This field is only updated when you restore to DC2 and DS2 node types. </p>
     */
    inline RestoreStatus& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}


    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish. This field is only updated when you
     * restore to DC2 and DS2 node types. </p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }

    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish. This field is only updated when you
     * restore to DC2 and DS2 node types. </p>
     */
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }

    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish. This field is only updated when you
     * restore to DC2 and DS2 node types. </p>
     */
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }

    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish. This field is only updated when you
     * restore to DC2 and DS2 node types. </p>
     */
    inline RestoreStatus& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}


    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore. This field is only updated when you restore to DC2
     * and DS2 node types. </p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const{ return m_estimatedTimeToCompletionInSeconds; }

    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore. This field is only updated when you restore to DC2
     * and DS2 node types. </p>
     */
    inline bool EstimatedTimeToCompletionInSecondsHasBeenSet() const { return m_estimatedTimeToCompletionInSecondsHasBeenSet; }

    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore. This field is only updated when you restore to DC2
     * and DS2 node types. </p>
     */
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSecondsHasBeenSet = true; m_estimatedTimeToCompletionInSeconds = value; }

    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore. This field is only updated when you restore to DC2
     * and DS2 node types. </p>
     */
    inline RestoreStatus& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    double m_currentRestoreRateInMegaBytesPerSecond;
    bool m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_snapshotSizeInMegaBytes;
    bool m_snapshotSizeInMegaBytesHasBeenSet = false;

    long long m_progressInMegaBytes;
    bool m_progressInMegaBytesHasBeenSet = false;

    long long m_elapsedTimeInSeconds;
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    long long m_estimatedTimeToCompletionInSeconds;
    bool m_estimatedTimeToCompletionInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
