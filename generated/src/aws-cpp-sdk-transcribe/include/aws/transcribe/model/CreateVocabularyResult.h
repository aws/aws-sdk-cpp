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
  class CreateVocabularyResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API CreateVocabularyResult();
    AWS_TRANSCRIBESERVICE_API CreateVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API CreateVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name you chose for your custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name you chose for your custom vocabulary.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyName = value; }

    /**
     * <p>The name you chose for your custom vocabulary.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyName = std::move(value); }

    /**
     * <p>The name you chose for your custom vocabulary.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyName.assign(value); }

    /**
     * <p>The name you chose for your custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name you chose for your custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name you chose for your custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code you selected for your custom vocabulary.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code you selected for your custom vocabulary.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCode = value; }

    /**
     * <p>The language code you selected for your custom vocabulary.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCode = std::move(value); }

    /**
     * <p>The language code you selected for your custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code you selected for your custom vocabulary.</p>
     */
    inline CreateVocabularyResult& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline const VocabularyState& GetVocabularyState() const{ return m_vocabularyState; }

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline void SetVocabularyState(const VocabularyState& value) { m_vocabularyState = value; }

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline void SetVocabularyState(VocabularyState&& value) { m_vocabularyState = std::move(value); }

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline CreateVocabularyResult& WithVocabularyState(const VocabularyState& value) { SetVocabularyState(value); return *this;}

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline CreateVocabularyResult& WithVocabularyState(VocabularyState&& value) { SetVocabularyState(std::move(value)); return *this;}


    /**
     * <p>The date and time you created your custom vocabulary.</p> <p>Timestamps are
     * in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time you created your custom vocabulary.</p> <p>Timestamps are
     * in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time you created your custom vocabulary.</p> <p>Timestamps are
     * in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time you created your custom vocabulary.</p> <p>Timestamps are
     * in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline CreateVocabularyResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time you created your custom vocabulary.</p> <p>Timestamps are
     * in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline CreateVocabularyResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>If <code>VocabularyState</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom vocabulary
     * request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>VocabularyState</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom vocabulary
     * request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If <code>VocabularyState</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom vocabulary
     * request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If <code>VocabularyState</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom vocabulary
     * request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If <code>VocabularyState</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom vocabulary
     * request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline CreateVocabularyResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>VocabularyState</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom vocabulary
     * request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline CreateVocabularyResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>VocabularyState</code> is <code>FAILED</code>,
     * <code>FailureReason</code> contains information about why the custom vocabulary
     * request failed. See also: <a
     * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline CreateVocabularyResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_vocabularyName;

    LanguageCode m_languageCode;

    VocabularyState m_vocabularyState;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
