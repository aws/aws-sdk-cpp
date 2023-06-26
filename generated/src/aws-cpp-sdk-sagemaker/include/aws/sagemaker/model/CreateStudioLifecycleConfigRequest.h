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
    AWS_SAGEMAKER_API CreateStudioLifecycleConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStudioLifecycleConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Studio Lifecycle Configuration to create.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigName() const{ return m_studioLifecycleConfigName; }

    /**
     * <p>The name of the Studio Lifecycle Configuration to create.</p>
     */
    inline bool StudioLifecycleConfigNameHasBeenSet() const { return m_studioLifecycleConfigNameHasBeenSet; }

    /**
     * <p>The name of the Studio Lifecycle Configuration to create.</p>
     */
    inline void SetStudioLifecycleConfigName(const Aws::String& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = value; }

    /**
     * <p>The name of the Studio Lifecycle Configuration to create.</p>
     */
    inline void SetStudioLifecycleConfigName(Aws::String&& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = std::move(value); }

    /**
     * <p>The name of the Studio Lifecycle Configuration to create.</p>
     */
    inline void SetStudioLifecycleConfigName(const char* value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName.assign(value); }

    /**
     * <p>The name of the Studio Lifecycle Configuration to create.</p>
     */
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigName(const Aws::String& value) { SetStudioLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of the Studio Lifecycle Configuration to create.</p>
     */
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigName(Aws::String&& value) { SetStudioLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the Studio Lifecycle Configuration to create.</p>
     */
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigName(const char* value) { SetStudioLifecycleConfigName(value); return *this;}


    /**
     * <p>The content of your Studio Lifecycle Configuration script. This content must
     * be base64 encoded.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigContent() const{ return m_studioLifecycleConfigContent; }

    /**
     * <p>The content of your Studio Lifecycle Configuration script. This content must
     * be base64 encoded.</p>
     */
    inline bool StudioLifecycleConfigContentHasBeenSet() const { return m_studioLifecycleConfigContentHasBeenSet; }

    /**
     * <p>The content of your Studio Lifecycle Configuration script. This content must
     * be base64 encoded.</p>
     */
    inline void SetStudioLifecycleConfigContent(const Aws::String& value) { m_studioLifecycleConfigContentHasBeenSet = true; m_studioLifecycleConfigContent = value; }

    /**
     * <p>The content of your Studio Lifecycle Configuration script. This content must
     * be base64 encoded.</p>
     */
    inline void SetStudioLifecycleConfigContent(Aws::String&& value) { m_studioLifecycleConfigContentHasBeenSet = true; m_studioLifecycleConfigContent = std::move(value); }

    /**
     * <p>The content of your Studio Lifecycle Configuration script. This content must
     * be base64 encoded.</p>
     */
    inline void SetStudioLifecycleConfigContent(const char* value) { m_studioLifecycleConfigContentHasBeenSet = true; m_studioLifecycleConfigContent.assign(value); }

    /**
     * <p>The content of your Studio Lifecycle Configuration script. This content must
     * be base64 encoded.</p>
     */
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigContent(const Aws::String& value) { SetStudioLifecycleConfigContent(value); return *this;}

    /**
     * <p>The content of your Studio Lifecycle Configuration script. This content must
     * be base64 encoded.</p>
     */
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigContent(Aws::String&& value) { SetStudioLifecycleConfigContent(std::move(value)); return *this;}

    /**
     * <p>The content of your Studio Lifecycle Configuration script. This content must
     * be base64 encoded.</p>
     */
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigContent(const char* value) { SetStudioLifecycleConfigContent(value); return *this;}


    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline const StudioLifecycleConfigAppType& GetStudioLifecycleConfigAppType() const{ return m_studioLifecycleConfigAppType; }

    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline bool StudioLifecycleConfigAppTypeHasBeenSet() const { return m_studioLifecycleConfigAppTypeHasBeenSet; }

    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline void SetStudioLifecycleConfigAppType(const StudioLifecycleConfigAppType& value) { m_studioLifecycleConfigAppTypeHasBeenSet = true; m_studioLifecycleConfigAppType = value; }

    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline void SetStudioLifecycleConfigAppType(StudioLifecycleConfigAppType&& value) { m_studioLifecycleConfigAppTypeHasBeenSet = true; m_studioLifecycleConfigAppType = std::move(value); }

    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigAppType(const StudioLifecycleConfigAppType& value) { SetStudioLifecycleConfigAppType(value); return *this;}

    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline CreateStudioLifecycleConfigRequest& WithStudioLifecycleConfigAppType(StudioLifecycleConfigAppType&& value) { SetStudioLifecycleConfigAppType(std::move(value)); return *this;}


    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline CreateStudioLifecycleConfigRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline CreateStudioLifecycleConfigRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline CreateStudioLifecycleConfigRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be associated with the Lifecycle Configuration. Each tag consists of
     * a key and an optional value. Tag keys must be unique per resource. Tags are
     * searchable using the Search API. </p>
     */
    inline CreateStudioLifecycleConfigRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_studioLifecycleConfigName;
    bool m_studioLifecycleConfigNameHasBeenSet = false;

    Aws::String m_studioLifecycleConfigContent;
    bool m_studioLifecycleConfigContentHasBeenSet = false;

    StudioLifecycleConfigAppType m_studioLifecycleConfigAppType;
    bool m_studioLifecycleConfigAppTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
