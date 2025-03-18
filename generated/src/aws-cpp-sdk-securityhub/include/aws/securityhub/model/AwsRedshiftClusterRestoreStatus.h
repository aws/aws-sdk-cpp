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
   * <p>Information about the status of a cluster restore action. It only applies if
   * the cluster was created by restoring a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterRestoreStatus">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterRestoreStatus
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterRestoreStatus() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterRestoreStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterRestoreStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup.</p> <p>This field is only
     * updated when you restore to DC2 and DS2 node types.</p>
     */
    inline double GetCurrentRestoreRateInMegaBytesPerSecond() const { return m_currentRestoreRateInMegaBytesPerSecond; }
    inline bool CurrentRestoreRateInMegaBytesPerSecondHasBeenSet() const { return m_currentRestoreRateInMegaBytesPerSecondHasBeenSet; }
    inline void SetCurrentRestoreRateInMegaBytesPerSecond(double value) { m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = true; m_currentRestoreRateInMegaBytesPerSecond = value; }
    inline AwsRedshiftClusterRestoreStatus& WithCurrentRestoreRateInMegaBytesPerSecond(double value) { SetCurrentRestoreRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish.</p> <p>This field is only updated
     * when you restore to DC2 and DS2 node types.</p>
     */
    inline long long GetElapsedTimeInSeconds() const { return m_elapsedTimeInSeconds; }
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }
    inline AwsRedshiftClusterRestoreStatus& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimate of the time remaining before the restore is complete. Returns 0
     * for a completed restore.</p> <p>This field is only updated when you restore to
     * DC2 and DS2 node types.</p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const { return m_estimatedTimeToCompletionInSeconds; }
    inline bool EstimatedTimeToCompletionInSecondsHasBeenSet() const { return m_estimatedTimeToCompletionInSecondsHasBeenSet; }
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSecondsHasBeenSet = true; m_estimatedTimeToCompletionInSeconds = value; }
    inline AwsRedshiftClusterRestoreStatus& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of megabytes that were transferred from snapshot storage.</p>
     * <p>This field is only updated when you restore to DC2 and DS2 node types.</p>
     */
    inline long long GetProgressInMegaBytes() const { return m_progressInMegaBytes; }
    inline bool ProgressInMegaBytesHasBeenSet() const { return m_progressInMegaBytesHasBeenSet; }
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytesHasBeenSet = true; m_progressInMegaBytes = value; }
    inline AwsRedshiftClusterRestoreStatus& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the set of snapshot data that was used to restore the
     * cluster.</p> <p>This field is only updated when you restore to DC2 and DS2 node
     * types.</p>
     */
    inline long long GetSnapshotSizeInMegaBytes() const { return m_snapshotSizeInMegaBytes; }
    inline bool SnapshotSizeInMegaBytesHasBeenSet() const { return m_snapshotSizeInMegaBytesHasBeenSet; }
    inline void SetSnapshotSizeInMegaBytes(long long value) { m_snapshotSizeInMegaBytesHasBeenSet = true; m_snapshotSizeInMegaBytes = value; }
    inline AwsRedshiftClusterRestoreStatus& WithSnapshotSizeInMegaBytes(long long value) { SetSnapshotSizeInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the restore action.</p> <p>Valid values: <code>starting</code>
     * | <code>restoring</code> | <code>completed</code> | <code>failed</code> </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRedshiftClusterRestoreStatus& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    double m_currentRestoreRateInMegaBytesPerSecond{0.0};
    bool m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_elapsedTimeInSeconds{0};
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    long long m_estimatedTimeToCompletionInSeconds{0};
    bool m_estimatedTimeToCompletionInSecondsHasBeenSet = false;

    long long m_progressInMegaBytes{0};
    bool m_progressInMegaBytesHasBeenSet = false;

    long long m_snapshotSizeInMegaBytes{0};
    bool m_snapshotSizeInMegaBytesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
