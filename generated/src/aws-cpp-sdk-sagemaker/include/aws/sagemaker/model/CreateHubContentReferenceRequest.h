/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateHubContentReferenceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateHubContentReferenceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHubContentReference"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the hub to add the hub content reference to.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    CreateHubContentReferenceRequest& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public hub content to reference.</p>
     */
    inline const Aws::String& GetSageMakerPublicHubContentArn() const { return m_sageMakerPublicHubContentArn; }
    inline bool SageMakerPublicHubContentArnHasBeenSet() const { return m_sageMakerPublicHubContentArnHasBeenSet; }
    template<typename SageMakerPublicHubContentArnT = Aws::String>
    void SetSageMakerPublicHubContentArn(SageMakerPublicHubContentArnT&& value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn = std::forward<SageMakerPublicHubContentArnT>(value); }
    template<typename SageMakerPublicHubContentArnT = Aws::String>
    CreateHubContentReferenceRequest& WithSageMakerPublicHubContentArn(SageMakerPublicHubContentArnT&& value) { SetSageMakerPublicHubContentArn(std::forward<SageMakerPublicHubContentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub content to reference.</p>
     */
    inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    template<typename HubContentNameT = Aws::String>
    void SetHubContentName(HubContentNameT&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::forward<HubContentNameT>(value); }
    template<typename HubContentNameT = Aws::String>
    CreateHubContentReferenceRequest& WithHubContentName(HubContentNameT&& value) { SetHubContentName(std::forward<HubContentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum version of the hub content to reference.</p>
     */
    inline const Aws::String& GetMinVersion() const { return m_minVersion; }
    inline bool MinVersionHasBeenSet() const { return m_minVersionHasBeenSet; }
    template<typename MinVersionT = Aws::String>
    void SetMinVersion(MinVersionT&& value) { m_minVersionHasBeenSet = true; m_minVersion = std::forward<MinVersionT>(value); }
    template<typename MinVersionT = Aws::String>
    CreateHubContentReferenceRequest& WithMinVersion(MinVersionT&& value) { SetMinVersion(std::forward<MinVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags associated with the hub content to reference.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateHubContentReferenceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateHubContentReferenceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_sageMakerPublicHubContentArn;
    bool m_sageMakerPublicHubContentArnHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_minVersion;
    bool m_minVersionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
