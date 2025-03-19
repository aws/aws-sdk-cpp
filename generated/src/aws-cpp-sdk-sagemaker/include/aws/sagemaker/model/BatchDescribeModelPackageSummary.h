/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/ModelPackageStatus.h>
#include <aws/sagemaker/model/ModelApprovalStatus.h>
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
   * <p>Provides summary information about the model package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchDescribeModelPackageSummary">AWS
   * API Reference</a></p>
   */
  class BatchDescribeModelPackageSummary
  {
  public:
    AWS_SAGEMAKER_API BatchDescribeModelPackageSummary() = default;
    AWS_SAGEMAKER_API BatchDescribeModelPackageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BatchDescribeModelPackageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group name for the model package</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const { return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    template<typename ModelPackageGroupNameT = Aws::String>
    void SetModelPackageGroupName(ModelPackageGroupNameT&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::forward<ModelPackageGroupNameT>(value); }
    template<typename ModelPackageGroupNameT = Aws::String>
    BatchDescribeModelPackageSummary& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of a versioned model.</p>
     */
    inline int GetModelPackageVersion() const { return m_modelPackageVersion; }
    inline bool ModelPackageVersionHasBeenSet() const { return m_modelPackageVersionHasBeenSet; }
    inline void SetModelPackageVersion(int value) { m_modelPackageVersionHasBeenSet = true; m_modelPackageVersion = value; }
    inline BatchDescribeModelPackageSummary& WithModelPackageVersion(int value) { SetModelPackageVersion(value); return *this;}
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
    BatchDescribeModelPackageSummary& WithModelPackageArn(ModelPackageArnT&& value) { SetModelPackageArn(std::forward<ModelPackageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const { return m_modelPackageDescription; }
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }
    template<typename ModelPackageDescriptionT = Aws::String>
    void SetModelPackageDescription(ModelPackageDescriptionT&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::forward<ModelPackageDescriptionT>(value); }
    template<typename ModelPackageDescriptionT = Aws::String>
    BatchDescribeModelPackageSummary& WithModelPackageDescription(ModelPackageDescriptionT&& value) { SetModelPackageDescription(std::forward<ModelPackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the mortgage package summary.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    BatchDescribeModelPackageSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InferenceSpecification& GetInferenceSpecification() const { return m_inferenceSpecification; }
    inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }
    template<typename InferenceSpecificationT = InferenceSpecification>
    void SetInferenceSpecification(InferenceSpecificationT&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::forward<InferenceSpecificationT>(value); }
    template<typename InferenceSpecificationT = InferenceSpecification>
    BatchDescribeModelPackageSummary& WithInferenceSpecification(InferenceSpecificationT&& value) { SetInferenceSpecification(std::forward<InferenceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the mortgage package.</p>
     */
    inline ModelPackageStatus GetModelPackageStatus() const { return m_modelPackageStatus; }
    inline bool ModelPackageStatusHasBeenSet() const { return m_modelPackageStatusHasBeenSet; }
    inline void SetModelPackageStatus(ModelPackageStatus value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = value; }
    inline BatchDescribeModelPackageSummary& WithModelPackageStatus(ModelPackageStatus value) { SetModelPackageStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model.</p>
     */
    inline ModelApprovalStatus GetModelApprovalStatus() const { return m_modelApprovalStatus; }
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }
    inline void SetModelApprovalStatus(ModelApprovalStatus value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline BatchDescribeModelPackageSummary& WithModelApprovalStatus(ModelApprovalStatus value) { SetModelApprovalStatus(value); return *this;}
    ///@}
  private:

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

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet = false;

    ModelPackageStatus m_modelPackageStatus{ModelPackageStatus::NOT_SET};
    bool m_modelPackageStatusHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus{ModelApprovalStatus::NOT_SET};
    bool m_modelApprovalStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
