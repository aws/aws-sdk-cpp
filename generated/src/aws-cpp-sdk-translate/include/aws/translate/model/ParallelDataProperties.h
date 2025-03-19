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
    AWS_TRANSLATE_API ParallelDataProperties() = default;
    AWS_TRANSLATE_API ParallelDataProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API ParallelDataProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom name assigned to the parallel data resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ParallelDataProperties& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the parallel data resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ParallelDataProperties& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description assigned to the parallel data resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ParallelDataProperties& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parallel data resource. When the parallel data is ready for
     * you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline ParallelDataStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ParallelDataStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ParallelDataProperties& WithStatus(ParallelDataStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source language of the translations in the parallel data file.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const { return m_sourceLanguageCode; }
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }
    template<typename SourceLanguageCodeT = Aws::String>
    void SetSourceLanguageCode(SourceLanguageCodeT&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::forward<SourceLanguageCodeT>(value); }
    template<typename SourceLanguageCodeT = Aws::String>
    ParallelDataProperties& WithSourceLanguageCode(SourceLanguageCodeT&& value) { SetSourceLanguageCode(std::forward<SourceLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language codes for the target languages available in the parallel data
     * file. All possible target languages are returned as an array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const { return m_targetLanguageCodes; }
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }
    template<typename TargetLanguageCodesT = Aws::Vector<Aws::String>>
    void SetTargetLanguageCodes(TargetLanguageCodesT&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::forward<TargetLanguageCodesT>(value); }
    template<typename TargetLanguageCodesT = Aws::Vector<Aws::String>>
    ParallelDataProperties& WithTargetLanguageCodes(TargetLanguageCodesT&& value) { SetTargetLanguageCodes(std::forward<TargetLanguageCodesT>(value)); return *this;}
    template<typename TargetLanguageCodesT = Aws::String>
    ParallelDataProperties& AddTargetLanguageCodes(TargetLanguageCodesT&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.emplace_back(std::forward<TargetLanguageCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the format and S3 location of the parallel data input file.</p>
     */
    inline const ParallelDataConfig& GetParallelDataConfig() const { return m_parallelDataConfig; }
    inline bool ParallelDataConfigHasBeenSet() const { return m_parallelDataConfigHasBeenSet; }
    template<typename ParallelDataConfigT = ParallelDataConfig>
    void SetParallelDataConfig(ParallelDataConfigT&& value) { m_parallelDataConfigHasBeenSet = true; m_parallelDataConfig = std::forward<ParallelDataConfigT>(value); }
    template<typename ParallelDataConfigT = ParallelDataConfig>
    ParallelDataProperties& WithParallelDataConfig(ParallelDataConfigT&& value) { SetParallelDataConfig(std::forward<ParallelDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information from Amazon Translate about the parallel data
     * resource. </p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ParallelDataProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of UTF-8 characters that Amazon Translate imported from the
     * parallel data input file. This number includes only the characters in your
     * translation examples. It does not include characters that are used to format
     * your file. For example, if you provided a Translation Memory Exchange (.tmx)
     * file, this number does not include the tags.</p>
     */
    inline long long GetImportedDataSize() const { return m_importedDataSize; }
    inline bool ImportedDataSizeHasBeenSet() const { return m_importedDataSizeHasBeenSet; }
    inline void SetImportedDataSize(long long value) { m_importedDataSizeHasBeenSet = true; m_importedDataSize = value; }
    inline ParallelDataProperties& WithImportedDataSize(long long value) { SetImportedDataSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records successfully imported from the parallel data input
     * file.</p>
     */
    inline long long GetImportedRecordCount() const { return m_importedRecordCount; }
    inline bool ImportedRecordCountHasBeenSet() const { return m_importedRecordCountHasBeenSet; }
    inline void SetImportedRecordCount(long long value) { m_importedRecordCountHasBeenSet = true; m_importedRecordCount = value; }
    inline ParallelDataProperties& WithImportedRecordCount(long long value) { SetImportedRecordCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records unsuccessfully imported from the parallel data input
     * file.</p>
     */
    inline long long GetFailedRecordCount() const { return m_failedRecordCount; }
    inline bool FailedRecordCountHasBeenSet() const { return m_failedRecordCountHasBeenSet; }
    inline void SetFailedRecordCount(long long value) { m_failedRecordCountHasBeenSet = true; m_failedRecordCount = value; }
    inline ParallelDataProperties& WithFailedRecordCount(long long value) { SetFailedRecordCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items in the input file that Amazon Translate skipped when you
     * created or updated the parallel data resource. For example, Amazon Translate
     * skips empty records, empty target texts, and empty lines.</p>
     */
    inline long long GetSkippedRecordCount() const { return m_skippedRecordCount; }
    inline bool SkippedRecordCountHasBeenSet() const { return m_skippedRecordCountHasBeenSet; }
    inline void SetSkippedRecordCount(long long value) { m_skippedRecordCountHasBeenSet = true; m_skippedRecordCount = value; }
    inline ParallelDataProperties& WithSkippedRecordCount(long long value) { SetSkippedRecordCount(value); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionKey& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = EncryptionKey>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = EncryptionKey>
    ParallelDataProperties& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the parallel data resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ParallelDataProperties& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the parallel data resource was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ParallelDataProperties& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the most recent update attempt for the parallel data
     * resource.</p>
     */
    inline ParallelDataStatus GetLatestUpdateAttemptStatus() const { return m_latestUpdateAttemptStatus; }
    inline bool LatestUpdateAttemptStatusHasBeenSet() const { return m_latestUpdateAttemptStatusHasBeenSet; }
    inline void SetLatestUpdateAttemptStatus(ParallelDataStatus value) { m_latestUpdateAttemptStatusHasBeenSet = true; m_latestUpdateAttemptStatus = value; }
    inline ParallelDataProperties& WithLatestUpdateAttemptStatus(ParallelDataStatus value) { SetLatestUpdateAttemptStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestUpdateAttemptAt() const { return m_latestUpdateAttemptAt; }
    inline bool LatestUpdateAttemptAtHasBeenSet() const { return m_latestUpdateAttemptAtHasBeenSet; }
    template<typename LatestUpdateAttemptAtT = Aws::Utils::DateTime>
    void SetLatestUpdateAttemptAt(LatestUpdateAttemptAtT&& value) { m_latestUpdateAttemptAtHasBeenSet = true; m_latestUpdateAttemptAt = std::forward<LatestUpdateAttemptAtT>(value); }
    template<typename LatestUpdateAttemptAtT = Aws::Utils::DateTime>
    ParallelDataProperties& WithLatestUpdateAttemptAt(LatestUpdateAttemptAtT&& value) { SetLatestUpdateAttemptAt(std::forward<LatestUpdateAttemptAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ParallelDataStatus m_status{ParallelDataStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetLanguageCodes;
    bool m_targetLanguageCodesHasBeenSet = false;

    ParallelDataConfig m_parallelDataConfig;
    bool m_parallelDataConfigHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_importedDataSize{0};
    bool m_importedDataSizeHasBeenSet = false;

    long long m_importedRecordCount{0};
    bool m_importedRecordCountHasBeenSet = false;

    long long m_failedRecordCount{0};
    bool m_failedRecordCountHasBeenSet = false;

    long long m_skippedRecordCount{0};
    bool m_skippedRecordCountHasBeenSet = false;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    ParallelDataStatus m_latestUpdateAttemptStatus{ParallelDataStatus::NOT_SET};
    bool m_latestUpdateAttemptStatusHasBeenSet = false;

    Aws::Utils::DateTime m_latestUpdateAttemptAt{};
    bool m_latestUpdateAttemptAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
