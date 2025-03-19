/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/VocabularyState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{
  class GetMedicalVocabularyResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetMedicalVocabularyResult() = default;
    AWS_TRANSCRIBESERVICE_API GetMedicalVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API GetMedicalVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the custom medical vocabulary you requested information
     * about.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    GetMedicalVocabularyResult& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code you selected for your custom medical vocabulary. US English
     * (<code>en-US</code>) is the only language supported with Amazon Transcribe
     * Medical.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline GetMedicalVocabularyResult& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing state of your custom medical vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline VocabularyState GetVocabularyState() const { return m_vocabularyState; }
    inline void SetVocabularyState(VocabularyState value) { m_vocabularyStateHasBeenSet = true; m_vocabularyState = value; }
    inline GetMedicalVocabularyResult& WithVocabularyState(VocabularyState value) { SetVocabularyState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified custom medical vocabulary was last
     * modified.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    GetMedicalVocabularyResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>VocabularyState</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom medical
     * vocabulary request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    GetMedicalVocabularyResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location where the specified custom medical vocabulary is
     * stored; use this URI to view or download the custom vocabulary.</p>
     */
    inline const Aws::String& GetDownloadUri() const { return m_downloadUri; }
    template<typename DownloadUriT = Aws::String>
    void SetDownloadUri(DownloadUriT&& value) { m_downloadUriHasBeenSet = true; m_downloadUri = std::forward<DownloadUriT>(value); }
    template<typename DownloadUriT = Aws::String>
    GetMedicalVocabularyResult& WithDownloadUri(DownloadUriT&& value) { SetDownloadUri(std::forward<DownloadUriT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMedicalVocabularyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    VocabularyState m_vocabularyState{VocabularyState::NOT_SET};
    bool m_vocabularyStateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_downloadUri;
    bool m_downloadUriHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
