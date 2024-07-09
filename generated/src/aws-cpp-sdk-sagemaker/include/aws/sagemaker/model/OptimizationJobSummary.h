/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/OptimizationJobStatus.h>
#include <aws/sagemaker/model/OptimizationJobDeploymentInstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Summarizes an optimization job by providing some of its key
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OptimizationJobSummary">AWS
   * API Reference</a></p>
   */
  class OptimizationJobSummary
  {
  public:
    AWS_SAGEMAKER_API OptimizationJobSummary();
    AWS_SAGEMAKER_API OptimizationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assigned to the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobName() const{ return m_optimizationJobName; }
    inline bool OptimizationJobNameHasBeenSet() const { return m_optimizationJobNameHasBeenSet; }
    inline void SetOptimizationJobName(const Aws::String& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = value; }
    inline void SetOptimizationJobName(Aws::String&& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = std::move(value); }
    inline void SetOptimizationJobName(const char* value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName.assign(value); }
    inline OptimizationJobSummary& WithOptimizationJobName(const Aws::String& value) { SetOptimizationJobName(value); return *this;}
    inline OptimizationJobSummary& WithOptimizationJobName(Aws::String&& value) { SetOptimizationJobName(std::move(value)); return *this;}
    inline OptimizationJobSummary& WithOptimizationJobName(const char* value) { SetOptimizationJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobArn() const{ return m_optimizationJobArn; }
    inline bool OptimizationJobArnHasBeenSet() const { return m_optimizationJobArnHasBeenSet; }
    inline void SetOptimizationJobArn(const Aws::String& value) { m_optimizationJobArnHasBeenSet = true; m_optimizationJobArn = value; }
    inline void SetOptimizationJobArn(Aws::String&& value) { m_optimizationJobArnHasBeenSet = true; m_optimizationJobArn = std::move(value); }
    inline void SetOptimizationJobArn(const char* value) { m_optimizationJobArnHasBeenSet = true; m_optimizationJobArn.assign(value); }
    inline OptimizationJobSummary& WithOptimizationJobArn(const Aws::String& value) { SetOptimizationJobArn(value); return *this;}
    inline OptimizationJobSummary& WithOptimizationJobArn(Aws::String&& value) { SetOptimizationJobArn(std::move(value)); return *this;}
    inline OptimizationJobSummary& WithOptimizationJobArn(const char* value) { SetOptimizationJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when you created the optimization job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline OptimizationJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline OptimizationJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the optimization job.</p>
     */
    inline const OptimizationJobStatus& GetOptimizationJobStatus() const{ return m_optimizationJobStatus; }
    inline bool OptimizationJobStatusHasBeenSet() const { return m_optimizationJobStatusHasBeenSet; }
    inline void SetOptimizationJobStatus(const OptimizationJobStatus& value) { m_optimizationJobStatusHasBeenSet = true; m_optimizationJobStatus = value; }
    inline void SetOptimizationJobStatus(OptimizationJobStatus&& value) { m_optimizationJobStatusHasBeenSet = true; m_optimizationJobStatus = std::move(value); }
    inline OptimizationJobSummary& WithOptimizationJobStatus(const OptimizationJobStatus& value) { SetOptimizationJobStatus(value); return *this;}
    inline OptimizationJobSummary& WithOptimizationJobStatus(OptimizationJobStatus&& value) { SetOptimizationJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job started.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizationStartTime() const{ return m_optimizationStartTime; }
    inline bool OptimizationStartTimeHasBeenSet() const { return m_optimizationStartTimeHasBeenSet; }
    inline void SetOptimizationStartTime(const Aws::Utils::DateTime& value) { m_optimizationStartTimeHasBeenSet = true; m_optimizationStartTime = value; }
    inline void SetOptimizationStartTime(Aws::Utils::DateTime&& value) { m_optimizationStartTimeHasBeenSet = true; m_optimizationStartTime = std::move(value); }
    inline OptimizationJobSummary& WithOptimizationStartTime(const Aws::Utils::DateTime& value) { SetOptimizationStartTime(value); return *this;}
    inline OptimizationJobSummary& WithOptimizationStartTime(Aws::Utils::DateTime&& value) { SetOptimizationStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job finished processing.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizationEndTime() const{ return m_optimizationEndTime; }
    inline bool OptimizationEndTimeHasBeenSet() const { return m_optimizationEndTimeHasBeenSet; }
    inline void SetOptimizationEndTime(const Aws::Utils::DateTime& value) { m_optimizationEndTimeHasBeenSet = true; m_optimizationEndTime = value; }
    inline void SetOptimizationEndTime(Aws::Utils::DateTime&& value) { m_optimizationEndTimeHasBeenSet = true; m_optimizationEndTime = std::move(value); }
    inline OptimizationJobSummary& WithOptimizationEndTime(const Aws::Utils::DateTime& value) { SetOptimizationEndTime(value); return *this;}
    inline OptimizationJobSummary& WithOptimizationEndTime(Aws::Utils::DateTime&& value) { SetOptimizationEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline OptimizationJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline OptimizationJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance that hosts the optimized model that you create with the
     * optimization job.</p>
     */
    inline const OptimizationJobDeploymentInstanceType& GetDeploymentInstanceType() const{ return m_deploymentInstanceType; }
    inline bool DeploymentInstanceTypeHasBeenSet() const { return m_deploymentInstanceTypeHasBeenSet; }
    inline void SetDeploymentInstanceType(const OptimizationJobDeploymentInstanceType& value) { m_deploymentInstanceTypeHasBeenSet = true; m_deploymentInstanceType = value; }
    inline void SetDeploymentInstanceType(OptimizationJobDeploymentInstanceType&& value) { m_deploymentInstanceTypeHasBeenSet = true; m_deploymentInstanceType = std::move(value); }
    inline OptimizationJobSummary& WithDeploymentInstanceType(const OptimizationJobDeploymentInstanceType& value) { SetDeploymentInstanceType(value); return *this;}
    inline OptimizationJobSummary& WithDeploymentInstanceType(OptimizationJobDeploymentInstanceType&& value) { SetDeploymentInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optimization techniques that are applied by the optimization job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptimizationTypes() const{ return m_optimizationTypes; }
    inline bool OptimizationTypesHasBeenSet() const { return m_optimizationTypesHasBeenSet; }
    inline void SetOptimizationTypes(const Aws::Vector<Aws::String>& value) { m_optimizationTypesHasBeenSet = true; m_optimizationTypes = value; }
    inline void SetOptimizationTypes(Aws::Vector<Aws::String>&& value) { m_optimizationTypesHasBeenSet = true; m_optimizationTypes = std::move(value); }
    inline OptimizationJobSummary& WithOptimizationTypes(const Aws::Vector<Aws::String>& value) { SetOptimizationTypes(value); return *this;}
    inline OptimizationJobSummary& WithOptimizationTypes(Aws::Vector<Aws::String>&& value) { SetOptimizationTypes(std::move(value)); return *this;}
    inline OptimizationJobSummary& AddOptimizationTypes(const Aws::String& value) { m_optimizationTypesHasBeenSet = true; m_optimizationTypes.push_back(value); return *this; }
    inline OptimizationJobSummary& AddOptimizationTypes(Aws::String&& value) { m_optimizationTypesHasBeenSet = true; m_optimizationTypes.push_back(std::move(value)); return *this; }
    inline OptimizationJobSummary& AddOptimizationTypes(const char* value) { m_optimizationTypesHasBeenSet = true; m_optimizationTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_optimizationJobName;
    bool m_optimizationJobNameHasBeenSet = false;

    Aws::String m_optimizationJobArn;
    bool m_optimizationJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    OptimizationJobStatus m_optimizationJobStatus;
    bool m_optimizationJobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_optimizationStartTime;
    bool m_optimizationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_optimizationEndTime;
    bool m_optimizationEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    OptimizationJobDeploymentInstanceType m_deploymentInstanceType;
    bool m_deploymentInstanceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_optimizationTypes;
    bool m_optimizationTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
