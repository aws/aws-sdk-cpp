/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardSecurityConfig.h>
#include <aws/sagemaker/model/ModelCardStatus.h>
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
  class CreateModelCardRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelCardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelCard"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique name of the model card.</p>
     */
    inline const Aws::String& GetModelCardName() const { return m_modelCardName; }
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
    template<typename ModelCardNameT = Aws::String>
    void SetModelCardName(ModelCardNameT&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::forward<ModelCardNameT>(value); }
    template<typename ModelCardNameT = Aws::String>
    CreateModelCardRequest& WithModelCardName(ModelCardNameT&& value) { SetModelCardName(std::forward<ModelCardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional Key Management Service key to encrypt, decrypt, and re-encrypt
     * model card content for regulated workloads with highly sensitive data.</p>
     */
    inline const ModelCardSecurityConfig& GetSecurityConfig() const { return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    template<typename SecurityConfigT = ModelCardSecurityConfig>
    void SetSecurityConfig(SecurityConfigT&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::forward<SecurityConfigT>(value); }
    template<typename SecurityConfigT = ModelCardSecurityConfig>
    CreateModelCardRequest& WithSecurityConfig(SecurityConfigT&& value) { SetSecurityConfig(std::forward<SecurityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards.html#model-cards-json-schema">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    CreateModelCardRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model card within your organization. Different
     * organizations might have different criteria for model card review and
     * approval.</p> <ul> <li> <p> <code>Draft</code>: The model card is a work in
     * progress.</p> </li> <li> <p> <code>PendingReview</code>: The model card is
     * pending review.</p> </li> <li> <p> <code>Approved</code>: The model card is
     * approved.</p> </li> <li> <p> <code>Archived</code>: The model card is archived.
     * No more updates should be made to the model card, but it can still be
     * exported.</p> </li> </ul>
     */
    inline ModelCardStatus GetModelCardStatus() const { return m_modelCardStatus; }
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }
    inline void SetModelCardStatus(ModelCardStatus value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }
    inline CreateModelCardRequest& WithModelCardStatus(ModelCardStatus value) { SetModelCardStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateModelCardRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateModelCardRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    ModelCardSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    ModelCardStatus m_modelCardStatus{ModelCardStatus::NOT_SET};
    bool m_modelCardStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
