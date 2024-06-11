/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/model/ReferenceItem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/SseConfig.h>
#include <aws/omics/model/StoreFormat.h>
#include <aws/omics/model/StoreOptions.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateAnnotationStoreRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateAnnotationStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnnotationStore"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The genome reference for the store's annotations.</p>
     */
    inline const ReferenceItem& GetReference() const{ return m_reference; }
    inline bool ReferenceHasBeenSet() const { return m_referenceHasBeenSet; }
    inline void SetReference(const ReferenceItem& value) { m_referenceHasBeenSet = true; m_reference = value; }
    inline void SetReference(ReferenceItem&& value) { m_referenceHasBeenSet = true; m_reference = std::move(value); }
    inline CreateAnnotationStoreRequest& WithReference(const ReferenceItem& value) { SetReference(value); return *this;}
    inline CreateAnnotationStoreRequest& WithReference(ReferenceItem&& value) { SetReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAnnotationStoreRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAnnotationStoreRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAnnotationStoreRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateAnnotationStoreRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateAnnotationStoreRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateAnnotationStoreRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the store.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAnnotationStoreRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAnnotationStoreRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAnnotationStoreRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAnnotationStoreRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAnnotationStoreRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAnnotationStoreRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAnnotationStoreRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAnnotationStoreRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAnnotationStoreRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline CreateAnnotationStoreRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline CreateAnnotationStoreRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline CreateAnnotationStoreRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Server-side encryption (SSE) settings for the store.</p>
     */
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }
    inline bool SseConfigHasBeenSet() const { return m_sseConfigHasBeenSet; }
    inline void SetSseConfig(const SseConfig& value) { m_sseConfigHasBeenSet = true; m_sseConfig = value; }
    inline void SetSseConfig(SseConfig&& value) { m_sseConfigHasBeenSet = true; m_sseConfig = std::move(value); }
    inline CreateAnnotationStoreRequest& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}
    inline CreateAnnotationStoreRequest& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The annotation file format of the store.</p>
     */
    inline const StoreFormat& GetStoreFormat() const{ return m_storeFormat; }
    inline bool StoreFormatHasBeenSet() const { return m_storeFormatHasBeenSet; }
    inline void SetStoreFormat(const StoreFormat& value) { m_storeFormatHasBeenSet = true; m_storeFormat = value; }
    inline void SetStoreFormat(StoreFormat&& value) { m_storeFormatHasBeenSet = true; m_storeFormat = std::move(value); }
    inline CreateAnnotationStoreRequest& WithStoreFormat(const StoreFormat& value) { SetStoreFormat(value); return *this;}
    inline CreateAnnotationStoreRequest& WithStoreFormat(StoreFormat&& value) { SetStoreFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>File parsing options for the annotation store.</p>
     */
    inline const StoreOptions& GetStoreOptions() const{ return m_storeOptions; }
    inline bool StoreOptionsHasBeenSet() const { return m_storeOptionsHasBeenSet; }
    inline void SetStoreOptions(const StoreOptions& value) { m_storeOptionsHasBeenSet = true; m_storeOptions = value; }
    inline void SetStoreOptions(StoreOptions&& value) { m_storeOptionsHasBeenSet = true; m_storeOptions = std::move(value); }
    inline CreateAnnotationStoreRequest& WithStoreOptions(const StoreOptions& value) { SetStoreOptions(value); return *this;}
    inline CreateAnnotationStoreRequest& WithStoreOptions(StoreOptions&& value) { SetStoreOptions(std::move(value)); return *this;}
    ///@}
  private:

    ReferenceItem m_reference;
    bool m_referenceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    SseConfig m_sseConfig;
    bool m_sseConfigHasBeenSet = false;

    StoreFormat m_storeFormat;
    bool m_storeFormatHasBeenSet = false;

    StoreOptions m_storeOptions;
    bool m_storeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
