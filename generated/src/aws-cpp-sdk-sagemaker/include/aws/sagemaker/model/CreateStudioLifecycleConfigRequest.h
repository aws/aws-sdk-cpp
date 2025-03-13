/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/StudioLifecycleConfigAppType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateStudioLifecycleConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateStudioLifecycleConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStudioLifecycleConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Amazon SageMaker AI Studio Lifecycle Configuration to
     * create.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigName() const { return m_studioLifecycleConfigName; }
    inline bool StudioLifecycleConfigNameHasBeenSet() const { return m_studioLifecycleConfigNameHasBeenSet; }
    template<typename StudioLifecycleConfigNameT = Aws::String>
    void SetStudioLifecycleConfigName(StudioLifecycleConfigNameT&& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = std::forward<StudioLifecycleConfigNameT>(value); }
    template<typename StudioLifecycleConfigNameT = Aws::String>
    CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigName(StudioLifecycleConfigNameT&& value) { SetStudioLifecycleConfigName(std::forward<StudioLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of your Amazon SageMaker AI Studio Lifecycle Configuration
     * script. This content must be base64 encoded.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigContent() const { return m_studioLifecycleConfigContent; }
    inline bool StudioLifecycleConfigContentHasBeenSet() const { return m_studioLifecycleConfigContentHasBeenSet; }
    template<typename StudioLifecycleConfigContentT = Aws::String>
    void SetStudioLifecycleConfigContent(StudioLifecycleConfigContentT&& value) { m_studioLifecycleConfigContentHasBeenSet = true; m_studioLifecycleConfigContent = std::forward<StudioLifecycleConfigContentT>(value); }
    template<typename StudioLifecycleConfigContentT = Aws::String>
    CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigContent(StudioLifecycleConfigContentT&& value) { SetStudioLifecycleConfigContent(std::forward<StudioLifecycleConfigContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline StudioLifecycleConfigAppType GetStudioLifecycleConfigAppType() const { return m_studioLifecycleConfigAppType; }
    inline bool StudioLifecycleConfigAppTypeHasBeenSet() const { return m_studioLifecycleConfigAppTypeHasBeenSet; }
    inline void SetStudioLifecycleConfigAppType(StudioLifecycleConfigAppType value) { m_studioLifecycleConfigAppTypeHasBeenSet = true; m_studioLifecycleConfigAppType = value; }
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigAppType(StudioLifecycleConfigAppType value) { SetStudioLifecycleConfigAppType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateStudioLifecycleConfigRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateStudioLifecycleConfigRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_studioLifecycleConfigName;
    bool m_studioLifecycleConfigNameHasBeenSet = false;

    Aws::String m_studioLifecycleConfigContent;
    bool m_studioLifecycleConfigContentHasBeenSet = false;

    StudioLifecycleConfigAppType m_studioLifecycleConfigAppType{StudioLifecycleConfigAppType::NOT_SET};
    bool m_studioLifecycleConfigAppTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
