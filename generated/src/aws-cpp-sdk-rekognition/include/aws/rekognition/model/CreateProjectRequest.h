/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/CustomizationFeature.h>
#include <aws/rekognition/model/ProjectAutoUpdate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateProjectRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the project to create.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CreateProjectRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies feature that is being customized. If no value is provided
     * CUSTOM_LABELS is used as a default.</p>
     */
    inline CustomizationFeature GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(CustomizationFeature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline CreateProjectRequest& WithFeature(CustomizationFeature value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether automatic retraining should be attempted for the versions
     * of the project. Automatic retraining is done as a best effort. Required argument
     * for Content Moderation. Applicable only to adapters.</p>
     */
    inline ProjectAutoUpdate GetAutoUpdate() const { return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(ProjectAutoUpdate value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline CreateProjectRequest& WithAutoUpdate(ProjectAutoUpdate value) { SetAutoUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags (key-value pairs) that you want to attach to the project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateProjectRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateProjectRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    CustomizationFeature m_feature{CustomizationFeature::NOT_SET};
    bool m_featureHasBeenSet = false;

    ProjectAutoUpdate m_autoUpdate{ProjectAutoUpdate::NOT_SET};
    bool m_autoUpdateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
