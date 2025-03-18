/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelPackageGroupStatus.h>
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
   * <p>Summary information about a model group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageGroupSummary">AWS
   * API Reference</a></p>
   */
  class ModelPackageGroupSummary
  {
  public:
    AWS_SAGEMAKER_API ModelPackageGroupSummary() = default;
    AWS_SAGEMAKER_API ModelPackageGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ModelPackageGroupSummary& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
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
    ModelPackageGroupSummary& WithModelPackageGroupArn(ModelPackageGroupArnT&& value) { SetModelPackageGroupArn(std::forward<ModelPackageGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupDescription() const { return m_modelPackageGroupDescription; }
    inline bool ModelPackageGroupDescriptionHasBeenSet() const { return m_modelPackageGroupDescriptionHasBeenSet; }
    template<typename ModelPackageGroupDescriptionT = Aws::String>
    void SetModelPackageGroupDescription(ModelPackageGroupDescriptionT&& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = std::forward<ModelPackageGroupDescriptionT>(value); }
    template<typename ModelPackageGroupDescriptionT = Aws::String>
    ModelPackageGroupSummary& WithModelPackageGroupDescription(ModelPackageGroupDescriptionT&& value) { SetModelPackageGroupDescription(std::forward<ModelPackageGroupDescriptionT>(value)); return *this;}
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
    ModelPackageGroupSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model group.</p>
     */
    inline ModelPackageGroupStatus GetModelPackageGroupStatus() const { return m_modelPackageGroupStatus; }
    inline bool ModelPackageGroupStatusHasBeenSet() const { return m_modelPackageGroupStatusHasBeenSet; }
    inline void SetModelPackageGroupStatus(ModelPackageGroupStatus value) { m_modelPackageGroupStatusHasBeenSet = true; m_modelPackageGroupStatus = value; }
    inline ModelPackageGroupSummary& WithModelPackageGroupStatus(ModelPackageGroupStatus value) { SetModelPackageGroupStatus(value); return *this;}
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

    ModelPackageGroupStatus m_modelPackageGroupStatus{ModelPackageGroupStatus::NOT_SET};
    bool m_modelPackageGroupStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
