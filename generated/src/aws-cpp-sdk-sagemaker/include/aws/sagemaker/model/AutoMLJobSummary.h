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
    AWS_SAGEMAKER_API AutoMLJobSummary();
    AWS_SAGEMAKER_API AutoMLJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the AutoML job you are requesting.</p>
     */
    inline const Aws::String& GetAutoMLJobName() const{ return m_autoMLJobName; }
    inline bool AutoMLJobNameHasBeenSet() const { return m_autoMLJobNameHasBeenSet; }
    inline void SetAutoMLJobName(const Aws::String& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = value; }
    inline void SetAutoMLJobName(Aws::String&& value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName = std::move(value); }
    inline void SetAutoMLJobName(const char* value) { m_autoMLJobNameHasBeenSet = true; m_autoMLJobName.assign(value); }
    inline AutoMLJobSummary& WithAutoMLJobName(const Aws::String& value) { SetAutoMLJobName(value); return *this;}
    inline AutoMLJobSummary& WithAutoMLJobName(Aws::String&& value) { SetAutoMLJobName(std::move(value)); return *this;}
    inline AutoMLJobSummary& WithAutoMLJobName(const char* value) { SetAutoMLJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the AutoML job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }
    inline bool AutoMLJobArnHasBeenSet() const { return m_autoMLJobArnHasBeenSet; }
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = value; }
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::move(value); }
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn.assign(value); }
    inline AutoMLJobSummary& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}
    inline AutoMLJobSummary& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}
    inline AutoMLJobSummary& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the AutoML job.</p>
     */
    inline const AutoMLJobStatus& GetAutoMLJobStatus() const{ return m_autoMLJobStatus; }
    inline bool AutoMLJobStatusHasBeenSet() const { return m_autoMLJobStatusHasBeenSet; }
    inline void SetAutoMLJobStatus(const AutoMLJobStatus& value) { m_autoMLJobStatusHasBeenSet = true; m_autoMLJobStatus = value; }
    inline void SetAutoMLJobStatus(AutoMLJobStatus&& value) { m_autoMLJobStatusHasBeenSet = true; m_autoMLJobStatus = std::move(value); }
    inline AutoMLJobSummary& WithAutoMLJobStatus(const AutoMLJobStatus& value) { SetAutoMLJobStatus(value); return *this;}
    inline AutoMLJobSummary& WithAutoMLJobStatus(AutoMLJobStatus&& value) { SetAutoMLJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary status of the AutoML job.</p>
     */
    inline const AutoMLJobSecondaryStatus& GetAutoMLJobSecondaryStatus() const{ return m_autoMLJobSecondaryStatus; }
    inline bool AutoMLJobSecondaryStatusHasBeenSet() const { return m_autoMLJobSecondaryStatusHasBeenSet; }
    inline void SetAutoMLJobSecondaryStatus(const AutoMLJobSecondaryStatus& value) { m_autoMLJobSecondaryStatusHasBeenSet = true; m_autoMLJobSecondaryStatus = value; }
    inline void SetAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus&& value) { m_autoMLJobSecondaryStatusHasBeenSet = true; m_autoMLJobSecondaryStatus = std::move(value); }
    inline AutoMLJobSummary& WithAutoMLJobSecondaryStatus(const AutoMLJobSecondaryStatus& value) { SetAutoMLJobSecondaryStatus(value); return *this;}
    inline AutoMLJobSummary& WithAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus&& value) { SetAutoMLJobSecondaryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AutoML job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AutoMLJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AutoMLJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of an AutoML job.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AutoMLJobSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AutoMLJobSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AutoML job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline AutoMLJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline AutoMLJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason of an AutoML job.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline AutoMLJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline AutoMLJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline AutoMLJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of reasons for partial failures within an AutoML job.</p>
     */
    inline const Aws::Vector<AutoMLPartialFailureReason>& GetPartialFailureReasons() const{ return m_partialFailureReasons; }
    inline bool PartialFailureReasonsHasBeenSet() const { return m_partialFailureReasonsHasBeenSet; }
    inline void SetPartialFailureReasons(const Aws::Vector<AutoMLPartialFailureReason>& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons = value; }
    inline void SetPartialFailureReasons(Aws::Vector<AutoMLPartialFailureReason>&& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons = std::move(value); }
    inline AutoMLJobSummary& WithPartialFailureReasons(const Aws::Vector<AutoMLPartialFailureReason>& value) { SetPartialFailureReasons(value); return *this;}
    inline AutoMLJobSummary& WithPartialFailureReasons(Aws::Vector<AutoMLPartialFailureReason>&& value) { SetPartialFailureReasons(std::move(value)); return *this;}
    inline AutoMLJobSummary& AddPartialFailureReasons(const AutoMLPartialFailureReason& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons.push_back(value); return *this; }
    inline AutoMLJobSummary& AddPartialFailureReasons(AutoMLPartialFailureReason&& value) { m_partialFailureReasonsHasBeenSet = true; m_partialFailureReasons.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoMLJobName;
    bool m_autoMLJobNameHasBeenSet = false;

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    AutoMLJobStatus m_autoMLJobStatus;
    bool m_autoMLJobStatusHasBeenSet = false;

    AutoMLJobSecondaryStatus m_autoMLJobSecondaryStatus;
    bool m_autoMLJobSecondaryStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Vector<AutoMLPartialFailureReason> m_partialFailureReasons;
    bool m_partialFailureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
