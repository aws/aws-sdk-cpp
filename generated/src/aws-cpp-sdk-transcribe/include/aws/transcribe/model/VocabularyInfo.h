/**
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
   * <p>Provides information about a custom vocabulary, including the language of the
   * custom vocabulary, when it was last modified, its name, and the processing
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/VocabularyInfo">AWS
   * API Reference</a></p>
   */
  class VocabularyInfo
  {
  public:
    AWS_TRANSCRIBESERVICE_API VocabularyInfo() = default;
    AWS_TRANSCRIBESERVICE_API VocabularyInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API VocabularyInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    VocabularyInfo& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code used to create your custom vocabulary. Each custom
     * vocabulary must contain terms in only one language.</p> <p>A custom vocabulary
     * can only be used to transcribe files in the same language as the custom
     * vocabulary. For example, if you create a custom vocabulary using US English
     * (<code>en-US</code>), you can only apply this custom vocabulary to files that
     * contain English audio.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline VocabularyInfo& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the specified custom vocabulary was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    VocabularyInfo& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline VocabularyState GetVocabularyState() const { return m_vocabularyState; }
    inline bool VocabularyStateHasBeenSet() const { return m_vocabularyStateHasBeenSet; }
    inline void SetVocabularyState(VocabularyState value) { m_vocabularyStateHasBeenSet = true; m_vocabularyState = value; }
    inline VocabularyInfo& WithVocabularyState(VocabularyState value) { SetVocabularyState(value); return *this;}
    ///@}
  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    VocabularyState m_vocabularyState{VocabularyState::NOT_SET};
    bool m_vocabularyStateHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
