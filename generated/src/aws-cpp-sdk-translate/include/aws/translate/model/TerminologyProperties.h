/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/EncryptionKey.h>
#include <aws/core/utils/DateTime.h>
#include <aws/translate/model/Directionality.h>
#include <aws/translate/model/TerminologyDataFormat.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The properties of the custom terminology.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TerminologyProperties">AWS
   * API Reference</a></p>
   */
  class TerminologyProperties
  {
  public:
    AWS_TRANSLATE_API TerminologyProperties() = default;
    AWS_TRANSLATE_API TerminologyProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TerminologyProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the custom terminology.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TerminologyProperties& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TerminologyProperties& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    TerminologyProperties& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const { return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    template<typename SourceLanguageCodeT = Aws::String>
    void SetSourceLanguageCode(SourceLanguageCodeT&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::forward<SourceLanguageCodeT>(value); }
    template<typename SourceLanguageCodeT = Aws::String>
    TerminologyProperties& WithSourceLanguageCode(SourceLanguageCodeT&& value) { SetSourceLanguageCode(std::forward<SourceLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const { return m_targetLanguageCodes; }
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }
    template<typename TargetLanguageCodesT = Aws::Vector<Aws::String>>
    void SetTargetLanguageCodes(TargetLanguageCodesT&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::forward<TargetLanguageCodesT>(value); }
    template<typename TargetLanguageCodesT = Aws::Vector<Aws::String>>
    TerminologyProperties& WithTargetLanguageCodes(TargetLanguageCodesT&& value) { SetTargetLanguageCodes(std::forward<TargetLanguageCodesT>(value)); return *this;}
    template<typename TargetLanguageCodesT = Aws::String>
    TerminologyProperties& AddTargetLanguageCodes(TargetLanguageCodesT&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.emplace_back(std::forward<TargetLanguageCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The encryption key for the custom terminology.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = EncryptionKey>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = EncryptionKey>
    TerminologyProperties& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the file used when importing a custom terminology.</p>
     */
    inline int GetSizeBytes() const { return m_sizeBytes; }
    inline bool SizeBytesHasBeenSet() const { return m_sizeBytesHasBeenSet; }
    inline void SetSizeBytes(int value) { m_sizeBytesHasBeenSet = true; m_sizeBytes = value; }
    inline TerminologyProperties& WithSizeBytes(int value) { SetSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of terms included in the custom terminology.</p>
     */
    inline int GetTermCount() const { return m_termCount; }
    inline bool TermCountHasBeenSet() const { return m_termCountHasBeenSet; }
    inline void SetTermCount(int value) { m_termCountHasBeenSet = true; m_termCount = value; }
    inline TerminologyProperties& WithTermCount(int value) { SetTermCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the custom terminology was created, based on the
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    TerminologyProperties& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the custom terminology was last update, based on the
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    TerminologyProperties& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directionality of your terminology resource indicates whether it has one
     * source language (uni-directional) or multiple (multi-directional). </p> <dl>
     * <dt>UNI</dt> <dd> <p>The terminology resource has one source language (the first
     * column in a CSV file), and all of its other languages are target languages.</p>
     * </dd> <dt>MULTI</dt> <dd> <p>Any language in the terminology resource can be the
     * source language.</p> </dd> </dl>
     */
    inline Directionality GetDirectionality() const { return m_directionality; }
    inline bool DirectionalityHasBeenSet() const { return m_directionalityHasBeenSet; }
    inline void SetDirectionality(Directionality value) { m_directionalityHasBeenSet = true; m_directionality = value; }
    inline TerminologyProperties& WithDirectionality(Directionality value) { SetDirectionality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TerminologyProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of terms in the input file that Amazon Translate skipped when you
     * created or updated the terminology resource.</p>
     */
    inline int GetSkippedTermCount() const { return m_skippedTermCount; }
    inline bool SkippedTermCountHasBeenSet() const { return m_skippedTermCountHasBeenSet; }
    inline void SetSkippedTermCount(int value) { m_skippedTermCountHasBeenSet = true; m_skippedTermCount = value; }
    inline TerminologyProperties& WithSkippedTermCount(int value) { SetSkippedTermCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the custom terminology input file.</p>
     */
    inline TerminologyDataFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(TerminologyDataFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline TerminologyProperties& WithFormat(TerminologyDataFormat value) { SetFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetLanguageCodes;
    bool m_targetLanguageCodesHasBeenSet = false;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    int m_sizeBytes{0};
    bool m_sizeBytesHasBeenSet = false;

    int m_termCount{0};
    bool m_termCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Directionality m_directionality{Directionality::NOT_SET};
    bool m_directionalityHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_skippedTermCount{0};
    bool m_skippedTermCountHasBeenSet = false;

    TerminologyDataFormat m_format{TerminologyDataFormat::NOT_SET};
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
