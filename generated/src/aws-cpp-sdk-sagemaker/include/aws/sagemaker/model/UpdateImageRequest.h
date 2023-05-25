/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateImageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateImage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeleteProperties() const{ return m_deleteProperties; }

    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline bool DeletePropertiesHasBeenSet() const { return m_deletePropertiesHasBeenSet; }

    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline void SetDeleteProperties(const Aws::Vector<Aws::String>& value) { m_deletePropertiesHasBeenSet = true; m_deleteProperties = value; }

    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline void SetDeleteProperties(Aws::Vector<Aws::String>&& value) { m_deletePropertiesHasBeenSet = true; m_deleteProperties = std::move(value); }

    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline UpdateImageRequest& WithDeleteProperties(const Aws::Vector<Aws::String>& value) { SetDeleteProperties(value); return *this;}

    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline UpdateImageRequest& WithDeleteProperties(Aws::Vector<Aws::String>&& value) { SetDeleteProperties(std::move(value)); return *this;}

    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline UpdateImageRequest& AddDeleteProperties(const Aws::String& value) { m_deletePropertiesHasBeenSet = true; m_deleteProperties.push_back(value); return *this; }

    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline UpdateImageRequest& AddDeleteProperties(Aws::String&& value) { m_deletePropertiesHasBeenSet = true; m_deleteProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of properties to delete. Only the <code>Description</code> and
     * <code>DisplayName</code> properties can be deleted.</p>
     */
    inline UpdateImageRequest& AddDeleteProperties(const char* value) { m_deletePropertiesHasBeenSet = true; m_deleteProperties.push_back(value); return *this; }


    /**
     * <p>The new description for the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description for the image.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description for the image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description for the image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description for the image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description for the image.</p>
     */
    inline UpdateImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description for the image.</p>
     */
    inline UpdateImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description for the image.</p>
     */
    inline UpdateImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The new display name for the image.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The new display name for the image.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The new display name for the image.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The new display name for the image.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The new display name for the image.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The new display name for the image.</p>
     */
    inline UpdateImageRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The new display name for the image.</p>
     */
    inline UpdateImageRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The new display name for the image.</p>
     */
    inline UpdateImageRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The name of the image to update.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image to update.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the image to update.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the image to update.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the image to update.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the image to update.</p>
     */
    inline UpdateImageRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image to update.</p>
     */
    inline UpdateImageRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image to update.</p>
     */
    inline UpdateImageRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The new ARN for the IAM role that enables Amazon SageMaker to perform tasks
     * on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The new ARN for the IAM role that enables Amazon SageMaker to perform tasks
     * on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The new ARN for the IAM role that enables Amazon SageMaker to perform tasks
     * on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The new ARN for the IAM role that enables Amazon SageMaker to perform tasks
     * on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The new ARN for the IAM role that enables Amazon SageMaker to perform tasks
     * on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The new ARN for the IAM role that enables Amazon SageMaker to perform tasks
     * on your behalf.</p>
     */
    inline UpdateImageRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The new ARN for the IAM role that enables Amazon SageMaker to perform tasks
     * on your behalf.</p>
     */
    inline UpdateImageRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The new ARN for the IAM role that enables Amazon SageMaker to perform tasks
     * on your behalf.</p>
     */
    inline UpdateImageRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_deleteProperties;
    bool m_deletePropertiesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
