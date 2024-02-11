/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VersionOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateAnnotationStoreVersionRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateAnnotationStoreVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnnotationStoreVersion"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of an annotation store version from which versions are being
     * created. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of an annotation store version from which versions are being
     * created. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of an annotation store version from which versions are being
     * created. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of an annotation store version from which versions are being
     * created. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of an annotation store version from which versions are being
     * created. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of an annotation store version from which versions are being
     * created. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of an annotation store version from which versions are being
     * created. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of an annotation store version from which versions are being
     * created. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p> The description of an annotation store version. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The options for an annotation store version. </p>
     */
    inline const VersionOptions& GetVersionOptions() const{ return m_versionOptions; }

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline bool VersionOptionsHasBeenSet() const { return m_versionOptionsHasBeenSet; }

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline void SetVersionOptions(const VersionOptions& value) { m_versionOptionsHasBeenSet = true; m_versionOptions = value; }

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline void SetVersionOptions(VersionOptions&& value) { m_versionOptionsHasBeenSet = true; m_versionOptions = std::move(value); }

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithVersionOptions(const VersionOptions& value) { SetVersionOptions(value); return *this;}

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithVersionOptions(VersionOptions&& value) { SetVersionOptions(std::move(value)); return *this;}


    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Any tags added to annotation store version. </p>
     */
    inline CreateAnnotationStoreVersionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    VersionOptions m_versionOptions;
    bool m_versionOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
