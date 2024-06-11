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
    AWS_SAGEMAKER_API ModelPackageSummary();
    AWS_SAGEMAKER_API ModelPackageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model package.</p>
     */
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = value; }
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::move(value); }
    inline void SetModelPackageName(const char* value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName.assign(value); }
    inline ModelPackageSummary& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}
    inline ModelPackageSummary& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}
    inline ModelPackageSummary& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model package is a versioned model, the model group that the versioned
     * model belongs to.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }
    inline ModelPackageSummary& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}
    inline ModelPackageSummary& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}
    inline ModelPackageSummary& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model package is a versioned model, the version of the model.</p>
     */
    inline int GetModelPackageVersion() const{ return m_modelPackageVersion; }
    inline bool ModelPackageVersionHasBeenSet() const { return m_modelPackageVersionHasBeenSet; }
    inline void SetModelPackageVersion(int value) { m_modelPackageVersionHasBeenSet = true; m_modelPackageVersion = value; }
    inline ModelPackageSummary& WithModelPackageVersion(int value) { SetModelPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = value; }
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::move(value); }
    inline void SetModelPackageArn(const char* value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn.assign(value); }
    inline ModelPackageSummary& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}
    inline ModelPackageSummary& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}
    inline ModelPackageSummary& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const{ return m_modelPackageDescription; }
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }
    inline void SetModelPackageDescription(const Aws::String& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = value; }
    inline void SetModelPackageDescription(Aws::String&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::move(value); }
    inline void SetModelPackageDescription(const char* value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription.assign(value); }
    inline ModelPackageSummary& WithModelPackageDescription(const Aws::String& value) { SetModelPackageDescription(value); return *this;}
    inline ModelPackageSummary& WithModelPackageDescription(Aws::String&& value) { SetModelPackageDescription(std::move(value)); return *this;}
    inline ModelPackageSummary& WithModelPackageDescription(const char* value) { SetModelPackageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the model package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ModelPackageSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ModelPackageSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the model package.</p>
     */
    inline const ModelPackageStatus& GetModelPackageStatus() const{ return m_modelPackageStatus; }
    inline bool ModelPackageStatusHasBeenSet() const { return m_modelPackageStatusHasBeenSet; }
    inline void SetModelPackageStatus(const ModelPackageStatus& value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = value; }
    inline void SetModelPackageStatus(ModelPackageStatus&& value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = std::move(value); }
    inline ModelPackageSummary& WithModelPackageStatus(const ModelPackageStatus& value) { SetModelPackageStatus(value); return *this;}
    inline ModelPackageSummary& WithModelPackageStatus(ModelPackageStatus&& value) { SetModelPackageStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model. This can be one of the following
     * values.</p> <ul> <li> <p> <code>APPROVED</code> - The model is approved</p>
     * </li> <li> <p> <code>REJECTED</code> - The model is rejected.</p> </li> <li> <p>
     * <code>PENDING_MANUAL_APPROVAL</code> - The model is waiting for manual
     * approval.</p> </li> </ul>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = std::move(value); }
    inline ModelPackageSummary& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}
    inline ModelPackageSummary& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet = false;

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

    ModelPackageStatus m_modelPackageStatus;
    bool m_modelPackageStatusHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus;
    bool m_modelApprovalStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
