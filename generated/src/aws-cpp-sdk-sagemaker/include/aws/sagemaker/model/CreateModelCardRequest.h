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
    AWS_SAGEMAKER_API CreateModelCardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelCard"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique name of the model card.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }

    /**
     * <p>The unique name of the model card.</p>
     */
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }

    /**
     * <p>The unique name of the model card.</p>
     */
    inline void SetModelCardName(const Aws::String& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = value; }

    /**
     * <p>The unique name of the model card.</p>
     */
    inline void SetModelCardName(Aws::String&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::move(value); }

    /**
     * <p>The unique name of the model card.</p>
     */
    inline void SetModelCardName(const char* value) { m_modelCardNameHasBeenSet = true; m_modelCardName.assign(value); }

    /**
     * <p>The unique name of the model card.</p>
     */
    inline CreateModelCardRequest& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}

    /**
     * <p>The unique name of the model card.</p>
     */
    inline CreateModelCardRequest& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the model card.</p>
     */
    inline CreateModelCardRequest& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}


    /**
     * <p>An optional Key Management Service key to encrypt, decrypt, and re-encrypt
     * model card content for regulated workloads with highly sensitive data.</p>
     */
    inline const ModelCardSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }

    /**
     * <p>An optional Key Management Service key to encrypt, decrypt, and re-encrypt
     * model card content for regulated workloads with highly sensitive data.</p>
     */
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }

    /**
     * <p>An optional Key Management Service key to encrypt, decrypt, and re-encrypt
     * model card content for regulated workloads with highly sensitive data.</p>
     */
    inline void SetSecurityConfig(const ModelCardSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }

    /**
     * <p>An optional Key Management Service key to encrypt, decrypt, and re-encrypt
     * model card content for regulated workloads with highly sensitive data.</p>
     */
    inline void SetSecurityConfig(ModelCardSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }

    /**
     * <p>An optional Key Management Service key to encrypt, decrypt, and re-encrypt
     * model card content for regulated workloads with highly sensitive data.</p>
     */
    inline CreateModelCardRequest& WithSecurityConfig(const ModelCardSecurityConfig& value) { SetSecurityConfig(value); return *this;}

    /**
     * <p>An optional Key Management Service key to encrypt, decrypt, and re-encrypt
     * model card content for regulated workloads with highly sensitive data.</p>
     */
    inline CreateModelCardRequest& WithSecurityConfig(ModelCardSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}


    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-api-json-schema.html">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-api-json-schema.html">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-api-json-schema.html">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-api-json-schema.html">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-api-json-schema.html">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-api-json-schema.html">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline CreateModelCardRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-api-json-schema.html">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline CreateModelCardRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the model card. Content must be in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards-api-json-schema.html">model
     * card JSON schema</a> and provided as a string.</p>
     */
    inline CreateModelCardRequest& WithContent(const char* value) { SetContent(value); return *this;}


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
    inline const ModelCardStatus& GetModelCardStatus() const{ return m_modelCardStatus; }

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
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }

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
    inline void SetModelCardStatus(const ModelCardStatus& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }

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
    inline void SetModelCardStatus(ModelCardStatus&& value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = std::move(value); }

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
    inline CreateModelCardRequest& WithModelCardStatus(const ModelCardStatus& value) { SetModelCardStatus(value); return *this;}

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
    inline CreateModelCardRequest& WithModelCardStatus(ModelCardStatus&& value) { SetModelCardStatus(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline CreateModelCardRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline CreateModelCardRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline CreateModelCardRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs used to manage metadata for model cards.</p>
     */
    inline CreateModelCardRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    ModelCardSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    ModelCardStatus m_modelCardStatus;
    bool m_modelCardStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
