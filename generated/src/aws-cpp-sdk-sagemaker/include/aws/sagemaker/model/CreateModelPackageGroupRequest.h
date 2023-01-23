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
  class CreateModelPackageGroupRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelPackageGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelPackageGroup"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }

    /**
     * <p>The name of the model group.</p>
     */
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }

    /**
     * <p>The name of the model group.</p>
     */
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }

    /**
     * <p>The name of the model group.</p>
     */
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }

    /**
     * <p>The name of the model group.</p>
     */
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }

    /**
     * <p>The name of the model group.</p>
     */
    inline CreateModelPackageGroupRequest& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}

    /**
     * <p>The name of the model group.</p>
     */
    inline CreateModelPackageGroupRequest& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the model group.</p>
     */
    inline CreateModelPackageGroupRequest& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}


    /**
     * <p>A description for the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupDescription() const{ return m_modelPackageGroupDescription; }

    /**
     * <p>A description for the model group.</p>
     */
    inline bool ModelPackageGroupDescriptionHasBeenSet() const { return m_modelPackageGroupDescriptionHasBeenSet; }

    /**
     * <p>A description for the model group.</p>
     */
    inline void SetModelPackageGroupDescription(const Aws::String& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = value; }

    /**
     * <p>A description for the model group.</p>
     */
    inline void SetModelPackageGroupDescription(Aws::String&& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = std::move(value); }

    /**
     * <p>A description for the model group.</p>
     */
    inline void SetModelPackageGroupDescription(const char* value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription.assign(value); }

    /**
     * <p>A description for the model group.</p>
     */
    inline CreateModelPackageGroupRequest& WithModelPackageGroupDescription(const Aws::String& value) { SetModelPackageGroupDescription(value); return *this;}

    /**
     * <p>A description for the model group.</p>
     */
    inline CreateModelPackageGroupRequest& WithModelPackageGroupDescription(Aws::String&& value) { SetModelPackageGroupDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the model group.</p>
     */
    inline CreateModelPackageGroupRequest& WithModelPackageGroupDescription(const char* value) { SetModelPackageGroupDescription(value); return *this;}


    /**
     * <p>A list of key value pairs associated with the model group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key value pairs associated with the model group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key value pairs associated with the model group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key value pairs associated with the model group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key value pairs associated with the model group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline CreateModelPackageGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key value pairs associated with the model group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline CreateModelPackageGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key value pairs associated with the model group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline CreateModelPackageGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key value pairs associated with the model group. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline CreateModelPackageGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_modelPackageGroupDescription;
    bool m_modelPackageGroupDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
