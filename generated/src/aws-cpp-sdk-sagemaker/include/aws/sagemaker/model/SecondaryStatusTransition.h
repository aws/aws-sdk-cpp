/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SecondaryStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An array element of <code>SecondaryStatusTransitions</code> for <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeTrainingJob.html">DescribeTrainingJob</a>.
   * It provides additional details about a status that the training job has
   * transitioned through. A training job can be in one of several states, for
   * example, starting, downloading, training, or uploading. Within each state, there
   * are a number of intermediate states. For example, within the starting state,
   * SageMaker could be starting the training job or launching the ML instances.
   * These transitional states are referred to as the job's secondary status. </p>
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SecondaryStatusTransition">AWS
   * API Reference</a></p>
   */
  class SecondaryStatusTransition
  {
  public:
    AWS_SAGEMAKER_API SecondaryStatusTransition() = default;
    AWS_SAGEMAKER_API SecondaryStatusTransition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SecondaryStatusTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a secondary status information from a training job.</p> <p>Status
     * might be one of the following secondary statuses:</p> <dl> <dt>InProgress</dt>
     * <dd> <ul> <li> <p> <code>Starting</code> - Starting the training job.</p> </li>
     * <li> <p> <code>Downloading</code> - An optional stage for algorithms that
     * support <code>File</code> training input mode. It indicates that data is being
     * downloaded to the ML storage volumes.</p> </li> <li> <p> <code>Training</code> -
     * Training is in progress.</p> </li> <li> <p> <code>Uploading</code> - Training is
     * complete and the model artifacts are being uploaded to the S3 location.</p>
     * </li> </ul> </dd> <dt>Completed</dt> <dd> <ul> <li> <p> <code>Completed</code> -
     * The training job has completed.</p> </li> </ul> </dd> <dt>Failed</dt> <dd> <ul>
     * <li> <p> <code>Failed</code> - The training job has failed. The reason for the
     * failure is returned in the <code>FailureReason</code> field of
     * <code>DescribeTrainingJobResponse</code>.</p> </li> </ul> </dd> <dt>Stopped</dt>
     * <dd> <ul> <li> <p> <code>MaxRuntimeExceeded</code> - The job stopped because it
     * exceeded the maximum allowed runtime.</p> </li> <li> <p> <code>Stopped</code> -
     * The training job has stopped.</p> </li> </ul> </dd> <dt>Stopping</dt> <dd> <ul>
     * <li> <p> <code>Stopping</code> - Stopping the training job.</p> </li> </ul>
     * </dd> </dl> <p>We no longer support the following secondary statuses:</p> <ul>
     * <li> <p> <code>LaunchingMLInstances</code> </p> </li> <li> <p>
     * <code>PreparingTrainingStack</code> </p> </li> <li> <p>
     * <code>DownloadingTrainingImage</code> </p> </li> </ul>
     */
    inline SecondaryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SecondaryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SecondaryStatusTransition& WithStatus(SecondaryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the training job transitioned to the current
     * secondary status state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    SecondaryStatusTransition& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the training job transitioned out of this
     * secondary status state into another secondary status state or when the training
     * job has ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    SecondaryStatusTransition& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the progress within a secondary status. </p>
     * <p>SageMaker provides secondary statuses and status messages that apply to each
     * of them:</p> <dl> <dt>Starting</dt> <dd> <ul> <li> <p>Starting the training
     * job.</p> </li> <li> <p>Launching requested ML instances.</p> </li> <li>
     * <p>Insufficient capacity error from EC2 while launching instances, retrying!</p>
     * </li> <li> <p>Launched instance was unhealthy, replacing it!</p> </li> <li>
     * <p>Preparing the instances for training.</p> </li> </ul> </dd> <dt>Training</dt>
     * <dd> <ul> <li> <p>Training image download completed. Training in progress.</p>
     * </li> </ul> </dd> </dl>  <p>Status messages are subject to change.
     * Therefore, we recommend not including them in code that programmatically
     * initiates actions. For examples, don't use status messages in if statements.</p>
     *  <p>To have an overview of your training job's progress, view
     * <code>TrainingJobStatus</code> and <code>SecondaryStatus</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeTrainingJob.html">DescribeTrainingJob</a>,
     * and <code>StatusMessage</code> together. For example, at the start of a training
     * job, you might see the following:</p> <ul> <li> <p>
     * <code>TrainingJobStatus</code> - InProgress</p> </li> <li> <p>
     * <code>SecondaryStatus</code> - Training</p> </li> <li> <p>
     * <code>StatusMessage</code> - Downloading the training image</p> </li> </ul>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    SecondaryStatusTransition& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    SecondaryStatus m_status{SecondaryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
