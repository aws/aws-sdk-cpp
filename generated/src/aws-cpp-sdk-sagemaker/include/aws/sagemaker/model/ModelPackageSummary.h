/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelPackageStatus.h>
#include <aws/sagemaker/model/ModelApprovalStatus.h>
#include <aws/sagemaker/model/ModelLifeCycle.h>
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
   * <p>Provides summary information about a model package.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageSummary">AWS
   * API Reference</a></p>
   */
  class ModelPackageSummary
  {
  public:
    AWS_SAGEMAKER_API ModelPackageSummary() = default;
    AWS_SAGEMAKER_API ModelPackageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model package.</p>
     */
    inline const Aws::String& GetModelPackageName() const { return m_modelPackageName; }
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }
    template<typename ModelPackageNameT = Aws::String>
    void SetModelPackageName(ModelPackageNameT&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::forward<ModelPackageNameT>(value); }
    template<typename ModelPackageNameT = Aws::String>
    ModelPackageSummary& WithModelPackageName(ModelPackageNameT&& value) { SetModelPackageName(std::forward<ModelPackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model package is a versioned model, the model group that the versioned
     * model belongs to.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const { return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    template<typename ModelPackageGroupNameT = Aws::String>
    void SetModelPackageGroupName(ModelPackageGroupNameT&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::forward<ModelPackageGroupNameT>(value); }
    template<typename ModelPackageGroupNameT = Aws::String>
    ModelPackageSummary& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model package is a versioned model, the version of the model.</p>
     */
    inline int GetModelPackageVersion() const { return m_modelPackageVersion; }
    inline bool ModelPackageVersionHasBeenSet() const { return m_modelPackageVersionHasBeenSet; }
    inline void SetModelPackageVersion(int value) { m_modelPackageVersionHasBeenSet = true; m_modelPackageVersion = value; }
    inline ModelPackageSummary& WithModelPackageVersion(int value) { SetModelPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
    template<typename ModelPackageArnT = Aws::String>
    void SetModelPackageArn(ModelPackageArnT&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::forward<ModelPackageArnT>(value); }
    template<typename ModelPackageArnT = Aws::String>
    ModelPackageSummary& WithModelPackageArn(ModelPackageArnT&& value) { SetModelPackageArn(std::forward<ModelPackageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const { return m_modelPackageDescription; }
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }
    template<typename ModelPackageDescriptionT = Aws::String>
    void SetModelPackageDescription(ModelPackageDescriptionT&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::forward<ModelPackageDescriptionT>(value); }
    template<typename ModelPackageDescriptionT = Aws::String>
    ModelPackageSummary& WithModelPackageDescription(ModelPackageDescriptionT&& value) { SetModelPackageDescription(std::forward<ModelPackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the model package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ModelPackageSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the model package.</p>
     */
    inline ModelPackageStatus GetModelPackageStatus() const { return m_modelPackageStatus; }
    inline bool ModelPackageStatusHasBeenSet() const { return m_modelPackageStatusHasBeenSet; }
    inline void SetModelPackageStatus(ModelPackageStatus value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = value; }
    inline ModelPackageSummary& WithModelPackageStatus(ModelPackageStatus value) { SetModelPackageStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model. This can be one of the following
     * values.</p> <ul> <li> <p> <code>APPROVED</code> - The model is approved</p>
     * </li> <li> <p> <code>REJECTED</code> - The model is rejected.</p> </li> <li> <p>
     * <code>PENDING_MANUAL_APPROVAL</code> - The model is waiting for manual
     * approval.</p> </li> </ul>
     */
    inline ModelApprovalStatus GetModelApprovalStatus() const { return m_modelApprovalStatus; }
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }
    inline void SetModelApprovalStatus(ModelApprovalStatus value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline ModelPackageSummary& WithModelApprovalStatus(ModelApprovalStatus value) { SetModelApprovalStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const ModelLifeCycle& GetModelLifeCycle() const { return m_modelLifeCycle; }
    inline bool ModelLifeCycleHasBeenSet() const { return m_modelLifeCycleHasBeenSet; }
    template<typename ModelLifeCycleT = ModelLifeCycle>
    void SetModelLifeCycle(ModelLifeCycleT&& value) { m_modelLifeCycleHasBeenSet = true; m_modelLifeCycle = std::forward<ModelLifeCycleT>(value); }
    template<typename ModelLifeCycleT = ModelLifeCycle>
    ModelPackageSummary& WithModelLifeCycle(ModelLifeCycleT&& value) { SetModelLifeCycle(std::forward<ModelLifeCycleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet = false;

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    int m_modelPackageVersion{0};
    bool m_modelPackageVersionHasBeenSet = false;

    Aws::String m_modelPackageArn;
    bool m_modelPackageArnHasBeenSet = false;

    Aws::String m_modelPackageDescription;
    bool m_modelPackageDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ModelPackageStatus m_modelPackageStatus{ModelPackageStatus::NOT_SET};
    bool m_modelPackageStatusHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus{ModelApprovalStatus::NOT_SET};
    bool m_modelApprovalStatusHasBeenSet = false;

    ModelLifeCycle m_modelLifeCycle;
    bool m_modelLifeCycleHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
