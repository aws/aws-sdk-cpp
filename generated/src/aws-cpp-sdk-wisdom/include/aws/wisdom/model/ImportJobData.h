/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wisdom/model/ExternalSourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/ImportJobType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wisdom/model/ImportJobStatus.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Summary information about the import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ImportJobData">AWS
   * API Reference</a></p>
   */
  class ImportJobData
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ImportJobData() = default;
    AWS_CONNECTWISDOMSERVICE_API ImportJobData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API ImportJobData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ImportJobData& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExternalSourceConfiguration& GetExternalSourceConfiguration() const { return m_externalSourceConfiguration; }
    inline bool ExternalSourceConfigurationHasBeenSet() const { return m_externalSourceConfigurationHasBeenSet; }
    template<typename ExternalSourceConfigurationT = ExternalSourceConfiguration>
    void SetExternalSourceConfiguration(ExternalSourceConfigurationT&& value) { m_externalSourceConfigurationHasBeenSet = true; m_externalSourceConfiguration = std::forward<ExternalSourceConfigurationT>(value); }
    template<typename ExternalSourceConfigurationT = ExternalSourceConfiguration>
    ImportJobData& WithExternalSourceConfiguration(ExternalSourceConfigurationT&& value) { SetExternalSourceConfiguration(std::forward<ExternalSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The link to donwload the information of resource data that failed to be
     * imported.</p>
     */
    inline const Aws::String& GetFailedRecordReport() const { return m_failedRecordReport; }
    inline bool FailedRecordReportHasBeenSet() const { return m_failedRecordReportHasBeenSet; }
    template<typename FailedRecordReportT = Aws::String>
    void SetFailedRecordReport(FailedRecordReportT&& value) { m_failedRecordReportHasBeenSet = true; m_failedRecordReport = std::forward<FailedRecordReportT>(value); }
    template<typename FailedRecordReportT = Aws::String>
    ImportJobData& WithFailedRecordReport(FailedRecordReportT&& value) { SetFailedRecordReport(std::forward<FailedRecordReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the import job.</p>
     */
    inline const Aws::String& GetImportJobId() const { return m_importJobId; }
    inline bool ImportJobIdHasBeenSet() const { return m_importJobIdHasBeenSet; }
    template<typename ImportJobIdT = Aws::String>
    void SetImportJobId(ImportJobIdT&& value) { m_importJobIdHasBeenSet = true; m_importJobId = std::forward<ImportJobIdT>(value); }
    template<typename ImportJobIdT = Aws::String>
    ImportJobData& WithImportJobId(ImportJobIdT&& value) { SetImportJobId(std::forward<ImportJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the import job.</p>
     */
    inline ImportJobType GetImportJobType() const { return m_importJobType; }
    inline bool ImportJobTypeHasBeenSet() const { return m_importJobTypeHasBeenSet; }
    inline void SetImportJobType(ImportJobType value) { m_importJobTypeHasBeenSet = true; m_importJobType = value; }
    inline ImportJobData& WithImportJobType(ImportJobType value) { SetImportJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    template<typename KnowledgeBaseArnT = Aws::String>
    void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value); }
    template<typename KnowledgeBaseArnT = Aws::String>
    ImportJobData& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    ImportJobData& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the import job data was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ImportJobData& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata fields of the imported Wisdom resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    ImportJobData& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    ImportJobData& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the import job.</p>
     */
    inline ImportJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ImportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImportJobData& WithStatus(ImportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    ImportJobData& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The download link to the resource file that is uploaded to the import
     * job.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    ImportJobData& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the URL as an epoch timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetUrlExpiry() const { return m_urlExpiry; }
    inline bool UrlExpiryHasBeenSet() const { return m_urlExpiryHasBeenSet; }
    template<typename UrlExpiryT = Aws::Utils::DateTime>
    void SetUrlExpiry(UrlExpiryT&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::forward<UrlExpiryT>(value); }
    template<typename UrlExpiryT = Aws::Utils::DateTime>
    ImportJobData& WithUrlExpiry(UrlExpiryT&& value) { SetUrlExpiry(std::forward<UrlExpiryT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    ExternalSourceConfiguration m_externalSourceConfiguration;
    bool m_externalSourceConfigurationHasBeenSet = false;

    Aws::String m_failedRecordReport;
    bool m_failedRecordReportHasBeenSet = false;

    Aws::String m_importJobId;
    bool m_importJobIdHasBeenSet = false;

    ImportJobType m_importJobType{ImportJobType::NOT_SET};
    bool m_importJobTypeHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    ImportJobStatus m_status{ImportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Utils::DateTime m_urlExpiry{};
    bool m_urlExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
