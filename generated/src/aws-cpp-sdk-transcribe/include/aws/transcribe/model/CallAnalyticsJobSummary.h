/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/transcribe/model/CallAnalyticsJobDetails.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides detailed information about a specific Call Analytics
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CallAnalyticsJobSummary">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsJobSummary
  {
  public:
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobSummary() = default;
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API CallAnalyticsJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Call Analytics job. Job names are case sensitive and must be
     * unique within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const { return m_callAnalyticsJobName; }
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }
    template<typename CallAnalyticsJobNameT = Aws::String>
    void SetCallAnalyticsJobName(CallAnalyticsJobNameT&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::forward<CallAnalyticsJobNameT>(value); }
    template<typename CallAnalyticsJobNameT = Aws::String>
    CallAnalyticsJobSummary& WithCallAnalyticsJobName(CallAnalyticsJobNameT&& value) { SetCallAnalyticsJobName(std::forward<CallAnalyticsJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Call Analytics job request was made.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents a
     * transcription job that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CallAnalyticsJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time your Call Analytics job began processing.</p> <p>Timestamps
     * are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.789000-07:00</code> represents a transcription job
     * that started processing at 12:32 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CallAnalyticsJobSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified Call Analytics job finished processing.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:33:13.922000-07:00</code> represents a
     * transcription job that started processing at 12:33 PM UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    CallAnalyticsJobSummary& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your Call Analytics transcription.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline CallAnalyticsJobSummary& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of your Call Analytics job.</p> <p>If the status is
     * <code>COMPLETED</code>, the job is finished and you can find the results at the
     * location specified in <code>TranscriptFileUri</code> (or
     * <code>RedactedTranscriptFileUri</code>, if you requested transcript redaction).
     * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
     * details on why your transcription job failed.</p>
     */
    inline CallAnalyticsJobStatus GetCallAnalyticsJobStatus() const { return m_callAnalyticsJobStatus; }
    inline bool CallAnalyticsJobStatusHasBeenSet() const { return m_callAnalyticsJobStatusHasBeenSet; }
    inline void SetCallAnalyticsJobStatus(CallAnalyticsJobStatus value) { m_callAnalyticsJobStatusHasBeenSet = true; m_callAnalyticsJobStatus = value; }
    inline CallAnalyticsJobSummary& WithCallAnalyticsJobStatus(CallAnalyticsJobStatus value) { SetCallAnalyticsJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed information about a call analytics job, including
     * information about skipped analytics features.</p>
     */
    inline const CallAnalyticsJobDetails& GetCallAnalyticsJobDetails() const { return m_callAnalyticsJobDetails; }
    inline bool CallAnalyticsJobDetailsHasBeenSet() const { return m_callAnalyticsJobDetailsHasBeenSet; }
    template<typename CallAnalyticsJobDetailsT = CallAnalyticsJobDetails>
    void SetCallAnalyticsJobDetails(CallAnalyticsJobDetailsT&& value) { m_callAnalyticsJobDetailsHasBeenSet = true; m_callAnalyticsJobDetails = std::forward<CallAnalyticsJobDetailsT>(value); }
    template<typename CallAnalyticsJobDetailsT = CallAnalyticsJobDetails>
    CallAnalyticsJobSummary& WithCallAnalyticsJobDetails(CallAnalyticsJobDetailsT&& value) { SetCallAnalyticsJobDetails(std::forward<CallAnalyticsJobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the Call Analytics job
     * failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    CallAnalyticsJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    CallAnalyticsJobStatus m_callAnalyticsJobStatus{CallAnalyticsJobStatus::NOT_SET};
    bool m_callAnalyticsJobStatusHasBeenSet = false;

    CallAnalyticsJobDetails m_callAnalyticsJobDetails;
    bool m_callAnalyticsJobDetailsHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
