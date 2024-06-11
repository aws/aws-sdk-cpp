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
    AWS_TRANSLATE_API TerminologyProperties();
    AWS_TRANSLATE_API TerminologyProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TerminologyProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the custom terminology.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TerminologyProperties& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TerminologyProperties& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TerminologyProperties& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TerminologyProperties& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TerminologyProperties& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TerminologyProperties& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline TerminologyProperties& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline TerminologyProperties& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline TerminologyProperties& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }
    inline TerminologyProperties& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}
    inline TerminologyProperties& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}
    inline TerminologyProperties& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const{ return m_targetLanguageCodes; }
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }
    inline void SetTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = value; }
    inline void SetTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::move(value); }
    inline TerminologyProperties& WithTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { SetTargetLanguageCodes(value); return *this;}
    inline TerminologyProperties& WithTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { SetTargetLanguageCodes(std::move(value)); return *this;}
    inline TerminologyProperties& AddTargetLanguageCodes(const Aws::String& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }
    inline TerminologyProperties& AddTargetLanguageCodes(Aws::String&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(std::move(value)); return *this; }
    inline TerminologyProperties& AddTargetLanguageCodes(const char* value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The encryption key for the custom terminology.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline TerminologyProperties& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}
    inline TerminologyProperties& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the file used when importing a custom terminology.</p>
     */
    inline int GetSizeBytes() const{ return m_sizeBytes; }
    inline bool SizeBytesHasBeenSet() const { return m_sizeBytesHasBeenSet; }
    inline void SetSizeBytes(int value) { m_sizeBytesHasBeenSet = true; m_sizeBytes = value; }
    inline TerminologyProperties& WithSizeBytes(int value) { SetSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of terms included in the custom terminology.</p>
     */
    inline int GetTermCount() const{ return m_termCount; }
    inline bool TermCountHasBeenSet() const { return m_termCountHasBeenSet; }
    inline void SetTermCount(int value) { m_termCountHasBeenSet = true; m_termCount = value; }
    inline TerminologyProperties& WithTermCount(int value) { SetTermCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the custom terminology was created, based on the
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TerminologyProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TerminologyProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the custom terminology was last update, based on the
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline TerminologyProperties& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline TerminologyProperties& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
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
    inline const Directionality& GetDirectionality() const{ return m_directionality; }
    inline bool DirectionalityHasBeenSet() const { return m_directionalityHasBeenSet; }
    inline void SetDirectionality(const Directionality& value) { m_directionalityHasBeenSet = true; m_directionality = value; }
    inline void SetDirectionality(Directionality&& value) { m_directionalityHasBeenSet = true; m_directionality = std::move(value); }
    inline TerminologyProperties& WithDirectionality(const Directionality& value) { SetDirectionality(value); return *this;}
    inline TerminologyProperties& WithDirectionality(Directionality&& value) { SetDirectionality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline TerminologyProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline TerminologyProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline TerminologyProperties& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of terms in the input file that Amazon Translate skipped when you
     * created or updated the terminology resource.</p>
     */
    inline int GetSkippedTermCount() const{ return m_skippedTermCount; }
    inline bool SkippedTermCountHasBeenSet() const { return m_skippedTermCountHasBeenSet; }
    inline void SetSkippedTermCount(int value) { m_skippedTermCountHasBeenSet = true; m_skippedTermCount = value; }
    inline TerminologyProperties& WithSkippedTermCount(int value) { SetSkippedTermCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the custom terminology input file.</p>
     */
    inline const TerminologyDataFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const TerminologyDataFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(TerminologyDataFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline TerminologyProperties& WithFormat(const TerminologyDataFormat& value) { SetFormat(value); return *this;}
    inline TerminologyProperties& WithFormat(TerminologyDataFormat&& value) { SetFormat(std::move(value)); return *this;}
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

    int m_sizeBytes;
    bool m_sizeBytesHasBeenSet = false;

    int m_termCount;
    bool m_termCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Directionality m_directionality;
    bool m_directionalityHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_skippedTermCount;
    bool m_skippedTermCountHasBeenSet = false;

    TerminologyDataFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
