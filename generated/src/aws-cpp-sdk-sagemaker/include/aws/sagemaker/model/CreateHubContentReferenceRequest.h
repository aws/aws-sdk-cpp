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
    AWS_SAGEMAKER_API CreateHubContentReferenceRequest();

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
    inline const Aws::String& GetHubName() const{ return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }
    inline CreateHubContentReferenceRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline CreateHubContentReferenceRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline CreateHubContentReferenceRequest& WithHubName(const char* value) { SetHubName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public hub content to reference.</p>
     */
    inline const Aws::String& GetSageMakerPublicHubContentArn() const{ return m_sageMakerPublicHubContentArn; }
    inline bool SageMakerPublicHubContentArnHasBeenSet() const { return m_sageMakerPublicHubContentArnHasBeenSet; }
    inline void SetSageMakerPublicHubContentArn(const Aws::String& value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn = value; }
    inline void SetSageMakerPublicHubContentArn(Aws::String&& value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn = std::move(value); }
    inline void SetSageMakerPublicHubContentArn(const char* value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn.assign(value); }
    inline CreateHubContentReferenceRequest& WithSageMakerPublicHubContentArn(const Aws::String& value) { SetSageMakerPublicHubContentArn(value); return *this;}
    inline CreateHubContentReferenceRequest& WithSageMakerPublicHubContentArn(Aws::String&& value) { SetSageMakerPublicHubContentArn(std::move(value)); return *this;}
    inline CreateHubContentReferenceRequest& WithSageMakerPublicHubContentArn(const char* value) { SetSageMakerPublicHubContentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub content to reference.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    inline void SetHubContentName(const Aws::String& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = value; }
    inline void SetHubContentName(Aws::String&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::move(value); }
    inline void SetHubContentName(const char* value) { m_hubContentNameHasBeenSet = true; m_hubContentName.assign(value); }
    inline CreateHubContentReferenceRequest& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}
    inline CreateHubContentReferenceRequest& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}
    inline CreateHubContentReferenceRequest& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum version of the hub content to reference.</p>
     */
    inline const Aws::String& GetMinVersion() const{ return m_minVersion; }
    inline bool MinVersionHasBeenSet() const { return m_minVersionHasBeenSet; }
    inline void SetMinVersion(const Aws::String& value) { m_minVersionHasBeenSet = true; m_minVersion = value; }
    inline void SetMinVersion(Aws::String&& value) { m_minVersionHasBeenSet = true; m_minVersion = std::move(value); }
    inline void SetMinVersion(const char* value) { m_minVersionHasBeenSet = true; m_minVersion.assign(value); }
    inline CreateHubContentReferenceRequest& WithMinVersion(const Aws::String& value) { SetMinVersion(value); return *this;}
    inline CreateHubContentReferenceRequest& WithMinVersion(Aws::String&& value) { SetMinVersion(std::move(value)); return *this;}
    inline CreateHubContentReferenceRequest& WithMinVersion(const char* value) { SetMinVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags associated with the hub content to reference.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateHubContentReferenceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateHubContentReferenceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateHubContentReferenceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateHubContentReferenceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
