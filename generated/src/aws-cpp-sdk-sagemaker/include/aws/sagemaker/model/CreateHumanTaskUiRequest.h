/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UiTemplate.h>
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
  class CreateHumanTaskUiRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateHumanTaskUiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHumanTaskUi"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the user interface you are creating.</p>
     */
    inline const Aws::String& GetHumanTaskUiName() const { return m_humanTaskUiName; }
    inline bool HumanTaskUiNameHasBeenSet() const { return m_humanTaskUiNameHasBeenSet; }
    template<typename HumanTaskUiNameT = Aws::String>
    void SetHumanTaskUiName(HumanTaskUiNameT&& value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName = std::forward<HumanTaskUiNameT>(value); }
    template<typename HumanTaskUiNameT = Aws::String>
    CreateHumanTaskUiRequest& WithHumanTaskUiName(HumanTaskUiNameT&& value) { SetHumanTaskUiName(std::forward<HumanTaskUiNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UiTemplate& GetUiTemplate() const { return m_uiTemplate; }
    inline bool UiTemplateHasBeenSet() const { return m_uiTemplateHasBeenSet; }
    template<typename UiTemplateT = UiTemplate>
    void SetUiTemplate(UiTemplateT&& value) { m_uiTemplateHasBeenSet = true; m_uiTemplate = std::forward<UiTemplateT>(value); }
    template<typename UiTemplateT = UiTemplate>
    CreateHumanTaskUiRequest& WithUiTemplate(UiTemplateT&& value) { SetUiTemplate(std::forward<UiTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a human review workflow user interface. Each tag consists of a key and
     * a value, both of which you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateHumanTaskUiRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateHumanTaskUiRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_humanTaskUiName;
    bool m_humanTaskUiNameHasBeenSet = false;

    UiTemplate m_uiTemplate;
    bool m_uiTemplateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
