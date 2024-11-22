/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SseConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/ETagAlgorithmFamily.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/S3AccessConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateSequenceStoreRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateSequenceStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSequenceStore"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateSequenceStoreRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSequenceStoreRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSequenceStoreRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the store.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateSequenceStoreRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSequenceStoreRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSequenceStoreRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Server-side encryption (SSE) settings for the store.</p>
     */
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }
    inline bool SseConfigHasBeenSet() const { return m_sseConfigHasBeenSet; }
    inline void SetSseConfig(const SseConfig& value) { m_sseConfigHasBeenSet = true; m_sseConfig = value; }
    inline void SetSseConfig(SseConfig&& value) { m_sseConfigHasBeenSet = true; m_sseConfig = std::move(value); }
    inline CreateSequenceStoreRequest& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}
    inline CreateSequenceStoreRequest& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the store.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSequenceStoreRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSequenceStoreRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSequenceStoreRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateSequenceStoreRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSequenceStoreRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSequenceStoreRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSequenceStoreRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSequenceStoreRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSequenceStoreRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>To ensure that requests don't run multiple times, specify a unique token for
     * each request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateSequenceStoreRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateSequenceStoreRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateSequenceStoreRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 location that is used to store files that have failed a direct
     * upload.</p>
     */
    inline const Aws::String& GetFallbackLocation() const{ return m_fallbackLocation; }
    inline bool FallbackLocationHasBeenSet() const { return m_fallbackLocationHasBeenSet; }
    inline void SetFallbackLocation(const Aws::String& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = value; }
    inline void SetFallbackLocation(Aws::String&& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = std::move(value); }
    inline void SetFallbackLocation(const char* value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation.assign(value); }
    inline CreateSequenceStoreRequest& WithFallbackLocation(const Aws::String& value) { SetFallbackLocation(value); return *this;}
    inline CreateSequenceStoreRequest& WithFallbackLocation(Aws::String&& value) { SetFallbackLocation(std::move(value)); return *this;}
    inline CreateSequenceStoreRequest& WithFallbackLocation(const char* value) { SetFallbackLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag algorithm family to use for ingested read sets.</p>
     */
    inline const ETagAlgorithmFamily& GetETagAlgorithmFamily() const{ return m_eTagAlgorithmFamily; }
    inline bool ETagAlgorithmFamilyHasBeenSet() const { return m_eTagAlgorithmFamilyHasBeenSet; }
    inline void SetETagAlgorithmFamily(const ETagAlgorithmFamily& value) { m_eTagAlgorithmFamilyHasBeenSet = true; m_eTagAlgorithmFamily = value; }
    inline void SetETagAlgorithmFamily(ETagAlgorithmFamily&& value) { m_eTagAlgorithmFamilyHasBeenSet = true; m_eTagAlgorithmFamily = std::move(value); }
    inline CreateSequenceStoreRequest& WithETagAlgorithmFamily(const ETagAlgorithmFamily& value) { SetETagAlgorithmFamily(value); return *this;}
    inline CreateSequenceStoreRequest& WithETagAlgorithmFamily(ETagAlgorithmFamily&& value) { SetETagAlgorithmFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags keys to propagate to the S3 objects associated with read sets in the
     * sequence store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropagatedSetLevelTags() const{ return m_propagatedSetLevelTags; }
    inline bool PropagatedSetLevelTagsHasBeenSet() const { return m_propagatedSetLevelTagsHasBeenSet; }
    inline void SetPropagatedSetLevelTags(const Aws::Vector<Aws::String>& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags = value; }
    inline void SetPropagatedSetLevelTags(Aws::Vector<Aws::String>&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags = std::move(value); }
    inline CreateSequenceStoreRequest& WithPropagatedSetLevelTags(const Aws::Vector<Aws::String>& value) { SetPropagatedSetLevelTags(value); return *this;}
    inline CreateSequenceStoreRequest& WithPropagatedSetLevelTags(Aws::Vector<Aws::String>&& value) { SetPropagatedSetLevelTags(std::move(value)); return *this;}
    inline CreateSequenceStoreRequest& AddPropagatedSetLevelTags(const Aws::String& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.push_back(value); return *this; }
    inline CreateSequenceStoreRequest& AddPropagatedSetLevelTags(Aws::String&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.push_back(std::move(value)); return *this; }
    inline CreateSequenceStoreRequest& AddPropagatedSetLevelTags(const char* value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>S3 access configuration parameters</p>
     */
    inline const S3AccessConfig& GetS3AccessConfig() const{ return m_s3AccessConfig; }
    inline bool S3AccessConfigHasBeenSet() const { return m_s3AccessConfigHasBeenSet; }
    inline void SetS3AccessConfig(const S3AccessConfig& value) { m_s3AccessConfigHasBeenSet = true; m_s3AccessConfig = value; }
    inline void SetS3AccessConfig(S3AccessConfig&& value) { m_s3AccessConfigHasBeenSet = true; m_s3AccessConfig = std::move(value); }
    inline CreateSequenceStoreRequest& WithS3AccessConfig(const S3AccessConfig& value) { SetS3AccessConfig(value); return *this;}
    inline CreateSequenceStoreRequest& WithS3AccessConfig(S3AccessConfig&& value) { SetS3AccessConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SseConfig m_sseConfig;
    bool m_sseConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_fallbackLocation;
    bool m_fallbackLocationHasBeenSet = false;

    ETagAlgorithmFamily m_eTagAlgorithmFamily;
    bool m_eTagAlgorithmFamilyHasBeenSet = false;

    Aws::Vector<Aws::String> m_propagatedSetLevelTags;
    bool m_propagatedSetLevelTagsHasBeenSet = false;

    S3AccessConfig m_s3AccessConfig;
    bool m_s3AccessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
