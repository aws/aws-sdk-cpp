﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/VocabularyState.h>
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
  class UpdateMedicalVocabularyResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API UpdateMedicalVocabularyResult();
    AWS_TRANSCRIBESERVICE_API UpdateMedicalVocabularyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API UpdateMedicalVocabularyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the updated custom medical vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyName = value; }
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyName = std::move(value); }
    inline void SetVocabularyName(const char* value) { m_vocabularyName.assign(value); }
    inline UpdateMedicalVocabularyResult& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}
    inline UpdateMedicalVocabularyResult& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}
    inline UpdateMedicalVocabularyResult& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code you selected for your custom medical vocabulary. US English
     * (<code>en-US</code>) is the only language supported with Amazon Transcribe
     * Medical.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCode = std::move(value); }
    inline UpdateMedicalVocabularyResult& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline UpdateMedicalVocabularyResult& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified custom medical vocabulary was last
     * updated.</p> <p>Timestamps are in the format
     * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
     * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
     * 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline UpdateMedicalVocabularyResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline UpdateMedicalVocabularyResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing state of your custom medical vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartMedicalTranscriptionJob</code> request.</p>
     */
    inline const VocabularyState& GetVocabularyState() const{ return m_vocabularyState; }
    inline void SetVocabularyState(const VocabularyState& value) { m_vocabularyState = value; }
    inline void SetVocabularyState(VocabularyState&& value) { m_vocabularyState = std::move(value); }
    inline UpdateMedicalVocabularyResult& WithVocabularyState(const VocabularyState& value) { SetVocabularyState(value); return *this;}
    inline UpdateMedicalVocabularyResult& WithVocabularyState(VocabularyState&& value) { SetVocabularyState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateMedicalVocabularyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateMedicalVocabularyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateMedicalVocabularyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vocabularyName;

    LanguageCode m_languageCode;

    Aws::Utils::DateTime m_lastModifiedTime;

    VocabularyState m_vocabularyState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
