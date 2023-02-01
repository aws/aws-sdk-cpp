/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/ParallelDataConfig.h>
#include <aws/translate/model/EncryptionKey.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The properties of a parallel data resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ParallelDataProperties">AWS
   * API Reference</a></p>
   */
  class ParallelDataProperties
  {
  public:
    AWS_TRANSLATE_API ParallelDataProperties();
    AWS_TRANSLATE_API ParallelDataProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API ParallelDataProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline ParallelDataProperties& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the parallel data resource. When the parallel data is ready for
     * you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline const ParallelDataStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the parallel data resource. When the parallel data is ready for
     * you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the parallel data resource. When the parallel data is ready for
     * you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline void SetStatus(const ParallelDataStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the parallel data resource. When the parallel data is ready for
     * you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline void SetStatus(ParallelDataStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the parallel data resource. When the parallel data is ready for
     * you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline ParallelDataProperties& WithStatus(const ParallelDataStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the parallel data resource. When the parallel data is ready for
     * you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline ParallelDataProperties& WithStatus(ParallelDataStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }

    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline ParallelDataProperties& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline ParallelDataProperties& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline ParallelDataProperties& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const{ return m_targetLanguageCodes; }

    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }

    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline void SetTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = value; }

    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline void SetTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::move(value); }

    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline ParallelDataProperties& WithTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { SetTargetLanguageCodes(value); return *this;}

    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline ParallelDataProperties& WithTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { SetTargetLanguageCodes(std::move(value)); return *this;}

    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline ParallelDataProperties& AddTargetLanguageCodes(const Aws::String& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }

    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline ParallelDataProperties& AddTargetLanguageCodes(Aws::String&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(std::move(value)); return *this; }

    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline ParallelDataProperties& AddTargetLanguageCodes(const char* value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }


    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline const ParallelDataConfig& GetParallelDataConfig() const{ return m_parallelDataConfig; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline bool ParallelDataConfigHasBeenSet() const { return m_parallelDataConfigHasBeenSet; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline void SetParallelDataConfig(const ParallelDataConfig& value) { m_parallelDataConfigHasBeenSet = true; m_parallelDataConfig = value; }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline void SetParallelDataConfig(ParallelDataConfig&& value) { m_parallelDataConfigHasBeenSet = true; m_parallelDataConfig = std::move(value); }

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline ParallelDataProperties& WithParallelDataConfig(const ParallelDataConfig& value) { SetParallelDataConfig(value); return *this;}

    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline ParallelDataProperties& WithParallelDataConfig(ParallelDataConfig&& value) { SetParallelDataConfig(std::move(value)); return *this;}


    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline ParallelDataProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline ParallelDataProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline ParallelDataProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The number of UTF-8 characters that Amazon Translate imported from the
     * parallel data input file. This number includes only the characters in your
     * translation examples. It does not include characters that are used to format
     * your file. For example, if you provided a Translation Memory Exchange (.tmx)
     * file, this number does not include the tags.</p>
     */
    inline long long GetImportedDataSize() const{ return m_importedDataSize; }

    /**
     * <p>The number of UTF-8 characters that Amazon Translate imported from the
     * parallel data input file. This number includes only the characters in your
     * translation examples. It does not include characters that are used to format
     * your file. For example, if you provided a Translation Memory Exchange (.tmx)
     * file, this number does not include the tags.</p>
     */
    inline bool ImportedDataSizeHasBeenSet() const { return m_importedDataSizeHasBeenSet; }

    /**
     * <p>The number of UTF-8 characters that Amazon Translate imported from the
     * parallel data input file. This number includes only the characters in your
     * translation examples. It does not include characters that are used to format
     * your file. For example, if you provided a Translation Memory Exchange (.tmx)
     * file, this number does not include the tags.</p>
     */
    inline void SetImportedDataSize(long long value) { m_importedDataSizeHasBeenSet = true; m_importedDataSize = value; }

    /**
     * <p>The number of UTF-8 characters that Amazon Translate imported from the
     * parallel data input file. This number includes only the characters in your
     * translation examples. It does not include characters that are used to format
     * your file. For example, if you provided a Translation Memory Exchange (.tmx)
     * file, this number does not include the tags.</p>
     */
    inline ParallelDataProperties& WithImportedDataSize(long long value) { SetImportedDataSize(value); return *this;}


    /**
     * <p>The number of records successfully imported from the parallel data input
     * file.</p>
     */
    inline long long GetImportedRecordCount() const{ return m_importedRecordCount; }

    /**
     * <p>The number of records successfully imported from the parallel data input
     * file.</p>
     */
    inline bool ImportedRecordCountHasBeenSet() const { return m_importedRecordCountHasBeenSet; }

    /**
     * <p>The number of records successfully imported from the parallel data input
     * file.</p>
     */
    inline void SetImportedRecordCount(long long value) { m_importedRecordCountHasBeenSet = true; m_importedRecordCount = value; }

    /**
     * <p>The number of records successfully imported from the parallel data input
     * file.</p>
     */
    inline ParallelDataProperties& WithImportedRecordCount(long long value) { SetImportedRecordCount(value); return *this;}


    /**
     * <p>The number of records unsuccessfully imported from the parallel data input
     * file.</p>
     */
    inline long long GetFailedRecordCount() const{ return m_failedRecordCount; }

    /**
     * <p>The number of records unsuccessfully imported from the parallel data input
     * file.</p>
     */
    inline bool FailedRecordCountHasBeenSet() const { return m_failedRecordCountHasBeenSet; }

    /**
     * <p>The number of records unsuccessfully imported from the parallel data input
     * file.</p>
     */
    inline void SetFailedRecordCount(long long value) { m_failedRecordCountHasBeenSet = true; m_failedRecordCount = value; }

    /**
     * <p>The number of records unsuccessfully imported from the parallel data input
     * file.</p>
     */
    inline ParallelDataProperties& WithFailedRecordCount(long long value) { SetFailedRecordCount(value); return *this;}


    /**
     * <p>The number of items in the input file that Amazon Translate skipped when you
     * created or updated the parallel data resource. For example, Amazon Translate
     * skips empty records, empty target texts, and empty lines.</p>
     */
    inline long long GetSkippedRecordCount() const{ return m_skippedRecordCount; }

    /**
     * <p>The number of items in the input file that Amazon Translate skipped when you
     * created or updated the parallel data resource. For example, Amazon Translate
     * skips empty records, empty target texts, and empty lines.</p>
     */
    inline bool SkippedRecordCountHasBeenSet() const { return m_skippedRecordCountHasBeenSet; }

    /**
     * <p>The number of items in the input file that Amazon Translate skipped when you
     * created or updated the parallel data resource. For example, Amazon Translate
     * skips empty records, empty target texts, and empty lines.</p>
     */
    inline void SetSkippedRecordCount(long long value) { m_skippedRecordCountHasBeenSet = true; m_skippedRecordCount = value; }

    /**
     * <p>The number of items in the input file that Amazon Translate skipped when you
     * created or updated the parallel data resource. For example, Amazon Translate
     * skips empty records, empty target texts, and empty lines.</p>
     */
    inline ParallelDataProperties& WithSkippedRecordCount(long long value) { SetSkippedRecordCount(value); return *this;}


    
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }

    
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    
    inline ParallelDataProperties& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}

    
    inline ParallelDataProperties& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}


    /**
     * <p>The time at which the parallel data resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the parallel data resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the parallel data resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the parallel data resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the parallel data resource was created.</p>
     */
    inline ParallelDataProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the parallel data resource was created.</p>
     */
    inline ParallelDataProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the parallel data resource was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time at which the parallel data resource was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time at which the parallel data resource was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time at which the parallel data resource was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time at which the parallel data resource was last updated.</p>
     */
    inline ParallelDataProperties& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the parallel data resource was last updated.</p>
     */
    inline ParallelDataProperties& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the most recent update attempt for the parallel data
     * resource.</p>
     */
    inline const ParallelDataStatus& GetLatestUpdateAttemptStatus() const{ return m_latestUpdateAttemptStatus; }

    /**
     * <p>The status of the most recent update attempt for the parallel data
     * resource.</p>
     */
    inline bool LatestUpdateAttemptStatusHasBeenSet() const { return m_latestUpdateAttemptStatusHasBeenSet; }

    /**
     * <p>The status of the most recent update attempt for the parallel data
     * resource.</p>
     */
    inline void SetLatestUpdateAttemptStatus(const ParallelDataStatus& value) { m_latestUpdateAttemptStatusHasBeenSet = true; m_latestUpdateAttemptStatus = value; }

    /**
     * <p>The status of the most recent update attempt for the parallel data
     * resource.</p>
     */
    inline void SetLatestUpdateAttemptStatus(ParallelDataStatus&& value) { m_latestUpdateAttemptStatusHasBeenSet = true; m_latestUpdateAttemptStatus = std::move(value); }

    /**
     * <p>The status of the most recent update attempt for the parallel data
     * resource.</p>
     */
    inline ParallelDataProperties& WithLatestUpdateAttemptStatus(const ParallelDataStatus& value) { SetLatestUpdateAttemptStatus(value); return *this;}

    /**
     * <p>The status of the most recent update attempt for the parallel data
     * resource.</p>
     */
    inline ParallelDataProperties& WithLatestUpdateAttemptStatus(ParallelDataStatus&& value) { SetLatestUpdateAttemptStatus(std::move(value)); return *this;}


    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestUpdateAttemptAt() const{ return m_latestUpdateAttemptAt; }

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline bool LatestUpdateAttemptAtHasBeenSet() const { return m_latestUpdateAttemptAtHasBeenSet; }

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline void SetLatestUpdateAttemptAt(const Aws::Utils::DateTime& value) { m_latestUpdateAttemptAtHasBeenSet = true; m_latestUpdateAttemptAt = value; }

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline void SetLatestUpdateAttemptAt(Aws::Utils::DateTime&& value) { m_latestUpdateAttemptAtHasBeenSet = true; m_latestUpdateAttemptAt = std::move(value); }

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline ParallelDataProperties& WithLatestUpdateAttemptAt(const Aws::Utils::DateTime& value) { SetLatestUpdateAttemptAt(value); return *this;}

    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline ParallelDataProperties& WithLatestUpdateAttemptAt(Aws::Utils::DateTime&& value) { SetLatestUpdateAttemptAt(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParallelDataStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetLanguageCodes;
    bool m_targetLanguageCodesHasBeenSet = false;

    ParallelDataConfig m_parallelDataConfig;
    bool m_parallelDataConfigHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_importedDataSize;
    bool m_importedDataSizeHasBeenSet = false;

    long long m_importedRecordCount;
    bool m_importedRecordCountHasBeenSet = false;

    long long m_failedRecordCount;
    bool m_failedRecordCountHasBeenSet = false;

    long long m_skippedRecordCount;
    bool m_skippedRecordCountHasBeenSet = false;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    ParallelDataStatus m_latestUpdateAttemptStatus;
    bool m_latestUpdateAttemptStatusHasBeenSet = false;

    Aws::Utils::DateTime m_latestUpdateAttemptAt;
    bool m_latestUpdateAttemptAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
