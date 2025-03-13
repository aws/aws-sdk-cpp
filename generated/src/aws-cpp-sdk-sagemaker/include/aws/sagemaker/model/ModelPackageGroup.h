/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/ModelPackageGroupStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A group of versioned models in the Model Registry.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageGroup">AWS
   * API Reference</a></p>
   */
  class ModelPackageGroup
  {
  public:
    AWS_SAGEMAKER_API ModelPackageGroup() = default;
    AWS_SAGEMAKER_API ModelPackageGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const { return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    template<typename ModelPackageGroupNameT = Aws::String>
    void SetModelPackageGroupName(ModelPackageGroupNameT&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::forward<ModelPackageGroupNameT>(value); }
    template<typename ModelPackageGroupNameT = Aws::String>
    ModelPackageGroup& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupArn() const { return m_modelPackageGroupArn; }
    inline bool ModelPackageGroupArnHasBeenSet() const { return m_modelPackageGroupArnHasBeenSet; }
    template<typename ModelPackageGroupArnT = Aws::String>
    void SetModelPackageGroupArn(ModelPackageGroupArnT&& value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn = std::forward<ModelPackageGroupArnT>(value); }
    template<typename ModelPackageGroupArnT = Aws::String>
    ModelPackageGroup& WithModelPackageGroupArn(ModelPackageGroupArnT&& value) { SetModelPackageGroupArn(std::forward<ModelPackageGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupDescription() const { return m_modelPackageGroupDescription; }
    inline bool ModelPackageGroupDescriptionHasBeenSet() const { return m_modelPackageGroupDescriptionHasBeenSet; }
    template<typename ModelPackageGroupDescriptionT = Aws::String>
    void SetModelPackageGroupDescription(ModelPackageGroupDescriptionT&& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = std::forward<ModelPackageGroupDescriptionT>(value); }
    template<typename ModelPackageGroupDescriptionT = Aws::String>
    ModelPackageGroup& WithModelPackageGroupDescription(ModelPackageGroupDescriptionT&& value) { SetModelPackageGroupDescription(std::forward<ModelPackageGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the model group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ModelPackageGroup& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    ModelPackageGroup& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model group. This can be one of the following values.</p>
     * <ul> <li> <p> <code>PENDING</code> - The model group is pending being
     * created.</p> </li> <li> <p> <code>IN_PROGRESS</code> - The model group is in the
     * process of being created.</p> </li> <li> <p> <code>COMPLETED</code> - The model
     * group was successfully created.</p> </li> <li> <p> <code>FAILED</code> - The
     * model group failed.</p> </li> <li> <p> <code>DELETING</code> - The model group
     * is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> - SageMaker failed to delete the model group.</p>
     * </li> </ul>
     */
    inline ModelPackageGroupStatus GetModelPackageGroupStatus() const { return m_modelPackageGroupStatus; }
    inline bool ModelPackageGroupStatusHasBeenSet() const { return m_modelPackageGroupStatusHasBeenSet; }
    inline void SetModelPackageGroupStatus(ModelPackageGroupStatus value) { m_modelPackageGroupStatusHasBeenSet = true; m_modelPackageGroupStatus = value; }
    inline ModelPackageGroup& WithModelPackageGroupStatus(ModelPackageGroupStatus value) { SetModelPackageGroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tags associated with the model group. For more information, see
     * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ModelPackageGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ModelPackageGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_modelPackageGroupArn;
    bool m_modelPackageGroupArnHasBeenSet = false;

    Aws::String m_modelPackageGroupDescription;
    bool m_modelPackageGroupDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    ModelPackageGroupStatus m_modelPackageGroupStatus{ModelPackageGroupStatus::NOT_SET};
    bool m_modelPackageGroupStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
