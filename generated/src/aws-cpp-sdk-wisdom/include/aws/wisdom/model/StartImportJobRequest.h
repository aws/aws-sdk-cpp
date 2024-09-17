/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/ExternalSourceConfiguration.h>
#include <aws/wisdom/model/ImportJobType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class StartImportJobRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API StartImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImportJob"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartImportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartImportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartImportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline StartImportJobRequest& WithExternalSourceConfiguration(const ExternalSourceConfiguration& value) { SetExternalSourceConfiguration(value); return *this;}
    inline StartImportJobRequest& WithExternalSourceConfiguration(ExternalSourceConfiguration&& value) { SetExternalSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the import job.</p> <ul> <li> <p>For importing quick response
     * resource, set the value to <code>QUICK_RESPONSES</code>.</p> </li> </ul>
     */
    inline const ImportJobType& GetImportJobType() const{ return m_importJobType; }
    inline bool ImportJobTypeHasBeenSet() const { return m_importJobTypeHasBeenSet; }
    inline void SetImportJobType(const ImportJobType& value) { m_importJobTypeHasBeenSet = true; m_importJobType = value; }
    inline void SetImportJobType(ImportJobType&& value) { m_importJobTypeHasBeenSet = true; m_importJobType = std::move(value); }
    inline StartImportJobRequest& WithImportJobType(const ImportJobType& value) { SetImportJobType(value); return *this;}
    inline StartImportJobRequest& WithImportJobType(ImportJobType&& value) { SetImportJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN. URLs cannot contain the ARN.</p> <ul> <li> <p>For
     * importing Wisdom quick responses, this should be a <code>QUICK_RESPONSES</code>
     * type knowledge base.</p> </li> </ul>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline StartImportJobRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline StartImportJobRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline StartImportJobRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata fields of the imported Wisdom resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline StartImportJobRequest& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline StartImportJobRequest& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline StartImportJobRequest& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline StartImportJobRequest& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline StartImportJobRequest& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline StartImportJobRequest& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline StartImportJobRequest& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline StartImportJobRequest& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline StartImportJobRequest& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
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
    inline StartImportJobRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline StartImportJobRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline StartImportJobRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}
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
} // namespace ConnectWisdomService
} // namespace Aws
