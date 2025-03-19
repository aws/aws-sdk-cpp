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
    AWS_SAGEMAKER_API OptimizationJobSummary() = default;
    AWS_SAGEMAKER_API OptimizationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you assigned to the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobName() const { return m_optimizationJobName; }
    inline bool OptimizationJobNameHasBeenSet() const { return m_optimizationJobNameHasBeenSet; }
    template<typename OptimizationJobNameT = Aws::String>
    void SetOptimizationJobName(OptimizationJobNameT&& value) { m_optimizationJobNameHasBeenSet = true; m_optimizationJobName = std::forward<OptimizationJobNameT>(value); }
    template<typename OptimizationJobNameT = Aws::String>
    OptimizationJobSummary& WithOptimizationJobName(OptimizationJobNameT&& value) { SetOptimizationJobName(std::forward<OptimizationJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobArn() const { return m_optimizationJobArn; }
    inline bool OptimizationJobArnHasBeenSet() const { return m_optimizationJobArnHasBeenSet; }
    template<typename OptimizationJobArnT = Aws::String>
    void SetOptimizationJobArn(OptimizationJobArnT&& value) { m_optimizationJobArnHasBeenSet = true; m_optimizationJobArn = std::forward<OptimizationJobArnT>(value); }
    template<typename OptimizationJobArnT = Aws::String>
    OptimizationJobSummary& WithOptimizationJobArn(OptimizationJobArnT&& value) { SetOptimizationJobArn(std::forward<OptimizationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when you created the optimization job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    OptimizationJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the optimization job.</p>
     */
    inline OptimizationJobStatus GetOptimizationJobStatus() const { return m_optimizationJobStatus; }
    inline bool OptimizationJobStatusHasBeenSet() const { return m_optimizationJobStatusHasBeenSet; }
    inline void SetOptimizationJobStatus(OptimizationJobStatus value) { m_optimizationJobStatusHasBeenSet = true; m_optimizationJobStatus = value; }
    inline OptimizationJobSummary& WithOptimizationJobStatus(OptimizationJobStatus value) { SetOptimizationJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job started.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizationStartTime() const { return m_optimizationStartTime; }
    inline bool OptimizationStartTimeHasBeenSet() const { return m_optimizationStartTimeHasBeenSet; }
    template<typename OptimizationStartTimeT = Aws::Utils::DateTime>
    void SetOptimizationStartTime(OptimizationStartTimeT&& value) { m_optimizationStartTimeHasBeenSet = true; m_optimizationStartTime = std::forward<OptimizationStartTimeT>(value); }
    template<typename OptimizationStartTimeT = Aws::Utils::DateTime>
    OptimizationJobSummary& WithOptimizationStartTime(OptimizationStartTimeT&& value) { SetOptimizationStartTime(std::forward<OptimizationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job finished processing.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizationEndTime() const { return m_optimizationEndTime; }
    inline bool OptimizationEndTimeHasBeenSet() const { return m_optimizationEndTimeHasBeenSet; }
    template<typename OptimizationEndTimeT = Aws::Utils::DateTime>
    void SetOptimizationEndTime(OptimizationEndTimeT&& value) { m_optimizationEndTimeHasBeenSet = true; m_optimizationEndTime = std::forward<OptimizationEndTimeT>(value); }
    template<typename OptimizationEndTimeT = Aws::Utils::DateTime>
    OptimizationJobSummary& WithOptimizationEndTime(OptimizationEndTimeT&& value) { SetOptimizationEndTime(std::forward<OptimizationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the optimization job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    OptimizationJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance that hosts the optimized model that you create with the
     * optimization job.</p>
     */
    inline OptimizationJobDeploymentInstanceType GetDeploymentInstanceType() const { return m_deploymentInstanceType; }
    inline bool DeploymentInstanceTypeHasBeenSet() const { return m_deploymentInstanceTypeHasBeenSet; }
    inline void SetDeploymentInstanceType(OptimizationJobDeploymentInstanceType value) { m_deploymentInstanceTypeHasBeenSet = true; m_deploymentInstanceType = value; }
    inline OptimizationJobSummary& WithDeploymentInstanceType(OptimizationJobDeploymentInstanceType value) { SetDeploymentInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optimization techniques that are applied by the optimization job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptimizationTypes() const { return m_optimizationTypes; }
    inline bool OptimizationTypesHasBeenSet() const { return m_optimizationTypesHasBeenSet; }
    template<typename OptimizationTypesT = Aws::Vector<Aws::String>>
    void SetOptimizationTypes(OptimizationTypesT&& value) { m_optimizationTypesHasBeenSet = true; m_optimizationTypes = std::forward<OptimizationTypesT>(value); }
    template<typename OptimizationTypesT = Aws::Vector<Aws::String>>
    OptimizationJobSummary& WithOptimizationTypes(OptimizationTypesT&& value) { SetOptimizationTypes(std::forward<OptimizationTypesT>(value)); return *this;}
    template<typename OptimizationTypesT = Aws::String>
    OptimizationJobSummary& AddOptimizationTypes(OptimizationTypesT&& value) { m_optimizationTypesHasBeenSet = true; m_optimizationTypes.emplace_back(std::forward<OptimizationTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_optimizationJobName;
    bool m_optimizationJobNameHasBeenSet = false;

    Aws::String m_optimizationJobArn;
    bool m_optimizationJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    OptimizationJobStatus m_optimizationJobStatus{OptimizationJobStatus::NOT_SET};
    bool m_optimizationJobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_optimizationStartTime{};
    bool m_optimizationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_optimizationEndTime{};
    bool m_optimizationEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    OptimizationJobDeploymentInstanceType m_deploymentInstanceType{OptimizationJobDeploymentInstanceType::NOT_SET};
    bool m_deploymentInstanceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_optimizationTypes;
    bool m_optimizationTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
