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
    AWS_SAGEMAKER_API BatchDescribeModelPackageSummary();
    AWS_SAGEMAKER_API BatchDescribeModelPackageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BatchDescribeModelPackageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The group name for the model package</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }

    /**
     * <p>The group name for the model package</p>
     */
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }

    /**
     * <p>The group name for the model package</p>
     */
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }

    /**
     * <p>The group name for the model package</p>
     */
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }

    /**
     * <p>The group name for the model package</p>
     */
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }

    /**
     * <p>The group name for the model package</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}

    /**
     * <p>The group name for the model package</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}

    /**
     * <p>The group name for the model package</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}


    /**
     * <p>The version number of a versioned model.</p>
     */
    inline int GetModelPackageVersion() const{ return m_modelPackageVersion; }

    /**
     * <p>The version number of a versioned model.</p>
     */
    inline bool ModelPackageVersionHasBeenSet() const { return m_modelPackageVersionHasBeenSet; }

    /**
     * <p>The version number of a versioned model.</p>
     */
    inline void SetModelPackageVersion(int value) { m_modelPackageVersionHasBeenSet = true; m_modelPackageVersion = value; }

    /**
     * <p>The version number of a versioned model.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageVersion(int value) { SetModelPackageVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(const char* value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}


    /**
     * <p>The description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const{ return m_modelPackageDescription; }

    /**
     * <p>The description of the model package.</p>
     */
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }

    /**
     * <p>The description of the model package.</p>
     */
    inline void SetModelPackageDescription(const Aws::String& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = value; }

    /**
     * <p>The description of the model package.</p>
     */
    inline void SetModelPackageDescription(Aws::String&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::move(value); }

    /**
     * <p>The description of the model package.</p>
     */
    inline void SetModelPackageDescription(const char* value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription.assign(value); }

    /**
     * <p>The description of the model package.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageDescription(const Aws::String& value) { SetModelPackageDescription(value); return *this;}

    /**
     * <p>The description of the model package.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageDescription(Aws::String&& value) { SetModelPackageDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the model package.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageDescription(const char* value) { SetModelPackageDescription(value); return *this;}


    /**
     * <p>The creation time of the mortgage package summary.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the mortgage package summary.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the mortgage package summary.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the mortgage package summary.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time of the mortgage package summary.</p>
     */
    inline BatchDescribeModelPackageSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of the mortgage package summary.</p>
     */
    inline BatchDescribeModelPackageSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }

    
    inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }

    
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = value; }

    
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::move(value); }

    
    inline BatchDescribeModelPackageSummary& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}

    
    inline BatchDescribeModelPackageSummary& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}


    /**
     * <p>The status of the mortgage package.</p>
     */
    inline const ModelPackageStatus& GetModelPackageStatus() const{ return m_modelPackageStatus; }

    /**
     * <p>The status of the mortgage package.</p>
     */
    inline bool ModelPackageStatusHasBeenSet() const { return m_modelPackageStatusHasBeenSet; }

    /**
     * <p>The status of the mortgage package.</p>
     */
    inline void SetModelPackageStatus(const ModelPackageStatus& value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = value; }

    /**
     * <p>The status of the mortgage package.</p>
     */
    inline void SetModelPackageStatus(ModelPackageStatus&& value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = std::move(value); }

    /**
     * <p>The status of the mortgage package.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageStatus(const ModelPackageStatus& value) { SetModelPackageStatus(value); return *this;}

    /**
     * <p>The status of the mortgage package.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelPackageStatus(ModelPackageStatus&& value) { SetModelPackageStatus(std::move(value)); return *this;}


    /**
     * <p>The approval status of the model.</p>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = std::move(value); }

    /**
     * <p>The approval status of the model.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}

    /**
     * <p>The approval status of the model.</p>
     */
    inline BatchDescribeModelPackageSummary& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}

  private:

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    int m_modelPackageVersion;
    bool m_modelPackageVersionHasBeenSet = false;

    Aws::String m_modelPackageArn;
    bool m_modelPackageArnHasBeenSet = false;

    Aws::String m_modelPackageDescription;
    bool m_modelPackageDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet = false;

    ModelPackageStatus m_modelPackageStatus;
    bool m_modelPackageStatusHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus;
    bool m_modelApprovalStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
