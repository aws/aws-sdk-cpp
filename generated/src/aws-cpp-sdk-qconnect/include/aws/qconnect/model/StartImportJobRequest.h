/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ExternalSourceConfiguration.h>
#include <aws/qconnect/model/ImportJobType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class StartImportJobRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API StartImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImportJob"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline StartImportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline StartImportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline StartImportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The configuration information of the external source that the resource data
     * are imported from.</p>
     */
    inline const ExternalSourceConfiguration& GetExternalSourceConfiguration() const{ return m_externalSourceConfiguration; }

    /**
     * <p>The configuration information of the external source that the resource data
     * are imported from.</p>
     */
    inline bool ExternalSourceConfigurationHasBeenSet() const { return m_externalSourceConfigurationHasBeenSet; }

    /**
     * <p>The configuration information of the external source that the resource data
     * are imported from.</p>
     */
    inline void SetExternalSourceConfiguration(const ExternalSourceConfiguration& value) { m_externalSourceConfigurationHasBeenSet = true; m_externalSourceConfiguration = value; }

    /**
     * <p>The configuration information of the external source that the resource data
     * are imported from.</p>
     */
    inline void SetExternalSourceConfiguration(ExternalSourceConfiguration&& value) { m_externalSourceConfigurationHasBeenSet = true; m_externalSourceConfiguration = std::move(value); }

    /**
     * <p>The configuration information of the external source that the resource data
     * are imported from.</p>
     */
    inline StartImportJobRequest& WithExternalSourceConfiguration(const ExternalSourceConfiguration& value) { SetExternalSourceConfiguration(value); return *this;}

    /**
     * <p>The configuration information of the external source that the resource data
     * are imported from.</p>
     */
    inline StartImportJobRequest& WithExternalSourceConfiguration(ExternalSourceConfiguration&& value) { SetExternalSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of the import job.</p> <ul> <li> <p>For importing quick response
     * resource, set the value to <code>QUICK_RESPONSES</code>.</p> </li> </ul>
     */
    inline const ImportJobType& GetImportJobType() const{ return m_importJobType; }

    /**
     * <p>The type of the import job.</p> <ul> <li> <p>For importing quick response
     * resource, set the value to <code>QUICK_RESPONSES</code>.</p> </li> </ul>
     */
    inline bool ImportJobTypeHasBeenSet() const { return m_importJobTypeHasBeenSet; }

    /**
     * <p>The type of the import job.</p> <ul> <li> <p>For importing quick response
     * resource, set the value to <code>QUICK_RESPONSES</code>.</p> </li> </ul>
     */
    inline void SetImportJobType(const ImportJobType& value) { m_importJobTypeHasBeenSet = true; m_importJobType = value; }

    /**
     * <p>The type of the import job.</p> <ul> <li> <p>For importing quick response
     * resource, set the value to <code>QUICK_RESPONSES</code>.</p> </li> </ul>
     */
    inline void SetImportJobType(ImportJobType&& value) { m_importJobTypeHasBeenSet = true; m_importJobType = std::move(value); }

    /**
     * <p>The type of the import job.</p> <ul> <li> <p>For importing quick response
     * resource, set the value to <code>QUICK_RESPONSES</code>.</p> </li> </ul>
     */
    inline StartImportJobRequest& WithImportJobType(const ImportJobType& value) { SetImportJobType(value); return *this;}

    /**
     * <p>The type of the import job.</p> <ul> <li> <p>For importing quick response
     * resource, set the value to <code>QUICK_RESPONSES</code>.</p> </li> </ul>
     */
    inline StartImportJobRequest& WithImportJobType(ImportJobType&& value) { SetImportJobType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Amazon Q quick responses, this should be a
     * <code>QUICK_RESPONSES</code> type knowledge base.</p> </li> </ul>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Amazon Q quick responses, this should be a
     * <code>QUICK_RESPONSES</code> type knowledge base.</p> </li> </ul>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Amazon Q quick responses, this should be a
     * <code>QUICK_RESPONSES</code> type knowledge base.</p> </li> </ul>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Amazon Q quick responses, this should be a
     * <code>QUICK_RESPONSES</code> type knowledge base.</p> </li> </ul>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Amazon Q quick responses, this should be a
     * <code>QUICK_RESPONSES</code> type knowledge base.</p> </li> </ul>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Amazon Q quick responses, this should be a
     * <code>QUICK_RESPONSES</code> type knowledge base.</p> </li> </ul>
     */
    inline StartImportJobRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Amazon Q quick responses, this should be a
     * <code>QUICK_RESPONSES</code> type knowledge base.</p> </li> </ul>
     */
    inline StartImportJobRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Amazon Q Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Amazon Q quick responses, this should be a
     * <code>QUICK_RESPONSES</code> type knowledge base.</p> </li> </ul>
     */
    inline StartImportJobRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata fields of the imported Amazon Q resources.</p>
     */
    inline StartImportJobRequest& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline StartImportJobRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline StartImportJobRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.</p>
     */
    inline StartImportJobRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ExternalSourceConfiguration m_externalSourceConfiguration;
    bool m_externalSourceConfigurationHasBeenSet = false;

    ImportJobType m_importJobType;
    bool m_importJobTypeHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
