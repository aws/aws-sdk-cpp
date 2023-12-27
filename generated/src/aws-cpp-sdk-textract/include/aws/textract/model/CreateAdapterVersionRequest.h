/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/AdapterVersionDatasetConfig.h>
#include <aws/textract/model/OutputConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class CreateAdapterVersionRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API CreateAdapterVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAdapterVersion"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A string containing a unique ID for the adapter that will receive a new
     * version.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string containing a unique ID for the adapter that will receive a new
     * version.</p>
     */
    inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }

    /**
     * <p>A string containing a unique ID for the adapter that will receive a new
     * version.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterIdHasBeenSet = true; m_adapterId = value; }

    /**
     * <p>A string containing a unique ID for the adapter that will receive a new
     * version.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::move(value); }

    /**
     * <p>A string containing a unique ID for the adapter that will receive a new
     * version.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterIdHasBeenSet = true; m_adapterId.assign(value); }

    /**
     * <p>A string containing a unique ID for the adapter that will receive a new
     * version.</p>
     */
    inline CreateAdapterVersionRequest& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter that will receive a new
     * version.</p>
     */
    inline CreateAdapterVersionRequest& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter that will receive a new
     * version.</p>
     */
    inline CreateAdapterVersionRequest& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapterVersion requests, the same session is returned. This
     * token is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapterVersion requests, the same session is returned. This
     * token is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapterVersion requests, the same session is returned. This
     * token is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapterVersion requests, the same session is returned. This
     * token is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapterVersion requests, the same session is returned. This
     * token is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapterVersion requests, the same session is returned. This
     * token is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline CreateAdapterVersionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapterVersion requests, the same session is returned. This
     * token is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline CreateAdapterVersionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token is used to recognize the request. If the same token is used
     * with multiple CreateAdapterVersion requests, the same session is returned. This
     * token is employed to avoid unintentionally creating the same session multiple
     * times.</p>
     */
    inline CreateAdapterVersionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Object as the value.</p>
     */
    inline const AdapterVersionDatasetConfig& GetDatasetConfig() const{ return m_datasetConfig; }

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Object as the value.</p>
     */
    inline bool DatasetConfigHasBeenSet() const { return m_datasetConfigHasBeenSet; }

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Object as the value.</p>
     */
    inline void SetDatasetConfig(const AdapterVersionDatasetConfig& value) { m_datasetConfigHasBeenSet = true; m_datasetConfig = value; }

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Object as the value.</p>
     */
    inline void SetDatasetConfig(AdapterVersionDatasetConfig&& value) { m_datasetConfigHasBeenSet = true; m_datasetConfig = std::move(value); }

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Object as the value.</p>
     */
    inline CreateAdapterVersionRequest& WithDatasetConfig(const AdapterVersionDatasetConfig& value) { SetDatasetConfig(value); return *this;}

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Object as the value.</p>
     */
    inline CreateAdapterVersionRequest& WithDatasetConfig(AdapterVersionDatasetConfig&& value) { SetDatasetConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline CreateAdapterVersionRequest& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline CreateAdapterVersionRequest& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline CreateAdapterVersionRequest& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}


    
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    
    inline CreateAdapterVersionRequest& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    
    inline CreateAdapterVersionRequest& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the adapter
     * version. </p>
     */
    inline CreateAdapterVersionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    AdapterVersionDatasetConfig m_datasetConfig;
    bool m_datasetConfigHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
