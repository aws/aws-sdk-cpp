/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLJobStatus.h>
#include <aws/sagemaker/model/AutoMLJobSecondaryStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AutoMLPartialFailureReason.h>
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
   * <p>Provides a summary about an AutoML job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobSummary">AWS
   * API Reference</a></p>
   */
  class AutoMLJobSummary
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobSummary() = default;
    AWS_SAGEMAKER_API AutoMLJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the AutoML job you are requesting.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const { return m_autoMLJobName; }
    inline bool AutoMLJobNameHasBeenSet() const { return m_autoMLJobNameHasBeenSet; }
    template<typename AutoMLJobNameT = Aws::String>
    void SetAutoMLJobName(AutoMLJobNameT&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::forward<AutoMLJobNameT>(value); }
    template<typename AutoMLJobNameT = Aws::String>
    AutoMLJobSummary& WithAutoMLJobName(AutoMLJobNameT&& value) { SetAutoMLJobName(std::forward<AutoMLJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the AutoML job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    inline bool AutoMLJobArnHasBeenSet() const { return m_autoMLJobArnHasBeenSet; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    AutoMLJobSummary& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the AutoML job.</p>
     */
    inline AutoMLJobStatus GetAutoMLJobStatus() const { return m_autoMLJobStatus; }
    inline bool AutoMLJobStatusHasBeenSet() const { return m_autoMLJobStatusHasBeenSet; }
    inline void SetAutoMLJobStatus(AutoMLJobStatus value) { m_autoMLJobStatusHasBeenSet = true; m_autoMLJobStatus = value; }
    inline AutoMLJobSummary& WithAutoMLJobStatus(AutoMLJobStatus value) { SetAutoMLJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary status of the AutoML job.</p>
     */
    inline AutoMLJobSecondaryStatus GetAutoMLJobSecondaryStatus() const { return m_autoMLJobSecondaryStatus; }
    inline bool AutoMLJobSecondaryStatusHasBeenSet() const { return m_autoMLJobSecondaryStatusHasBeenSet; }
    inline void SetAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus value) { m_autoMLJobSecondaryStatusHasBeenSet = true; m_autoMLJobSecondaryStatus = value; }
    inline AutoMLJobSummary& WithAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus value) { SetAutoMLJobSecondaryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AutoML job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AutoMLJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of an AutoML job.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AutoMLJobSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AutoML job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    AutoMLJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason of an AutoML job.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    AutoMLJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of reasons for partial failures within an AutoML job.</p>
     */
    inline const Aws::Vector<AutoMLPartialFailureReason>& GetPartialFailureReasons() const { return m_partialFailureReasons; }
    inline bool PartialFailureReasonsHasBeenSet() const { return m_partialFailureReasonsHasBeenSet; }
    template<typename PartialFailureReasonsT = Aws::Vector<AutoMLPartialFailureReason>>
    void SetPartialFailureReasons(PartialFailureReasonsT&& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons = std::forward<PartialFailureReasonsT>(value); }
    template<typename PartialFailureReasonsT = Aws::Vector<AutoMLPartialFailureReason>>
    AutoMLJobSummary& WithPartialFailureReasons(PartialFailureReasonsT&& value) { SetPartialFailureReasons(std::forward<PartialFailureReasonsT>(value)); return *this;}
    template<typename PartialFailureReasonsT = AutoMLPartialFailureReason>
    AutoMLJobSummary& AddPartialFailureReasons(PartialFailureReasonsT&& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons.emplace_back(std::forward<PartialFailureReasonsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    AutoMLJobStatus m_autoMLJobStatus{AutoMLJobStatus::NOT_SET};
    bool m_autoMLJobStatusHasBeenSet = false;

    AutoMLJobSecondaryStatus m_autoMLJobSecondaryStatus{AutoMLJobSecondaryStatus::NOT_SET};
    bool m_autoMLJobSecondaryStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Vector<AutoMLPartialFailureReason> m_partialFailureReasons;
    bool m_partialFailureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
