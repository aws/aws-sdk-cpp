/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/ExternalSourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ImportJobType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/ImportJobStatus.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Summary information about the import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ImportJobSummary">AWS
   * API Reference</a></p>
   */
  class ImportJobSummary
  {
  public:
    AWS_QCONNECT_API ImportJobSummary();
    AWS_QCONNECT_API ImportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ImportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when the import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ImportJobSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ImportJobSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information of the external source that the resource data
     * are imported from.</p>
     */
    inline const ExternalSourceConfiguration& GetExternalSourceConfiguration() const{ return m_externalSourceConfiguration; }
    inline bool ExternalSourceConfigurationHasBeenSet() const { return m_externalSourceConfigurationHasBeenSet; }
    inline void SetExternalSourceConfiguration(const ExternalSourceConfiguration& value) { m_externalSourceConfigurationHasBeenSet = true; m_externalSourceConfiguration = value; }
    inline void SetExternalSourceConfiguration(ExternalSourceConfiguration&& value) { m_externalSourceConfigurationHasBeenSet = true; m_externalSourceConfiguration = std::move(value); }
    inline ImportJobSummary& WithExternalSourceConfiguration(const ExternalSourceConfiguration& value) { SetExternalSourceConfiguration(value); return *this;}
    inline ImportJobSummary& WithExternalSourceConfiguration(ExternalSourceConfiguration&& value) { SetExternalSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the import job.</p>
     */
    inline const Aws::String& GetImportJobId() const{ return m_importJobId; }
    inline bool ImportJobIdHasBeenSet() const { return m_importJobIdHasBeenSet; }
    inline void SetImportJobId(const Aws::String& value) { m_importJobIdHasBeenSet = true; m_importJobId = value; }
    inline void SetImportJobId(Aws::String&& value) { m_importJobIdHasBeenSet = true; m_importJobId = std::move(value); }
    inline void SetImportJobId(const char* value) { m_importJobIdHasBeenSet = true; m_importJobId.assign(value); }
    inline ImportJobSummary& WithImportJobId(const Aws::String& value) { SetImportJobId(value); return *this;}
    inline ImportJobSummary& WithImportJobId(Aws::String&& value) { SetImportJobId(std::move(value)); return *this;}
    inline ImportJobSummary& WithImportJobId(const char* value) { SetImportJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of import job.</p>
     */
    inline const ImportJobType& GetImportJobType() const{ return m_importJobType; }
    inline bool ImportJobTypeHasBeenSet() const { return m_importJobTypeHasBeenSet; }
    inline void SetImportJobType(const ImportJobType& value) { m_importJobTypeHasBeenSet = true; m_importJobType = value; }
    inline void SetImportJobType(ImportJobType&& value) { m_importJobTypeHasBeenSet = true; m_importJobType = std::move(value); }
    inline ImportJobSummary& WithImportJobType(const ImportJobType& value) { SetImportJobType(value); return *this;}
    inline ImportJobSummary& WithImportJobType(ImportJobType&& value) { SetImportJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }
    inline ImportJobSummary& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline ImportJobSummary& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline ImportJobSummary& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline ImportJobSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline ImportJobSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline ImportJobSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the import job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ImportJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ImportJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata fields of the imported Amazon Q in Connect resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline ImportJobSummary& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline ImportJobSummary& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline ImportJobSummary& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline ImportJobSummary& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline ImportJobSummary& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline ImportJobSummary& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline ImportJobSummary& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline ImportJobSummary& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline ImportJobSummary& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the import job.</p>
     */
    inline const ImportJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ImportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ImportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImportJobSummary& WithStatus(const ImportJobStatus& value) { SetStatus(value); return *this;}
    inline ImportJobSummary& WithStatus(ImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }
    inline ImportJobSummary& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline ImportJobSummary& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline ImportJobSummary& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    ExternalSourceConfiguration m_externalSourceConfiguration;
    bool m_externalSourceConfigurationHasBeenSet = false;

    Aws::String m_importJobId;
    bool m_importJobIdHasBeenSet = false;

    ImportJobType m_importJobType;
    bool m_importJobTypeHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    ImportJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
