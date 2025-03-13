/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ClusterStatus.h>
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
   * <p>Lists a summary of the properties of a SageMaker HyperPod
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterSummary">AWS
   * API Reference</a></p>
   */
  class ClusterSummary
  {
  public:
    AWS_SAGEMAKER_API ClusterSummary() = default;
    AWS_SAGEMAKER_API ClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ClusterSummary& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    ClusterSummary& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the SageMaker HyperPod cluster is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ClusterSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterStatus GetClusterStatus() const { return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    inline void SetClusterStatus(ClusterStatus value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline ClusterSummary& WithClusterStatus(ClusterStatus value) { SetClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Resource Names (ARNs) of the training plans associated with
     * this cluster.</p> <p>For more information about how to reserve GPU capacity for
     * your SageMaker HyperPod clusters using Amazon SageMaker Training Plan, see
     * <code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
     * </code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrainingPlanArns() const { return m_trainingPlanArns; }
    inline bool TrainingPlanArnsHasBeenSet() const { return m_trainingPlanArnsHasBeenSet; }
    template<typename TrainingPlanArnsT = Aws::Vector<Aws::String>>
    void SetTrainingPlanArns(TrainingPlanArnsT&& value) { m_trainingPlanArnsHasBeenSet = true; m_trainingPlanArns = std::forward<TrainingPlanArnsT>(value); }
    template<typename TrainingPlanArnsT = Aws::Vector<Aws::String>>
    ClusterSummary& WithTrainingPlanArns(TrainingPlanArnsT&& value) { SetTrainingPlanArns(std::forward<TrainingPlanArnsT>(value)); return *this;}
    template<typename TrainingPlanArnsT = Aws::String>
    ClusterSummary& AddTrainingPlanArns(TrainingPlanArnsT&& value) { m_trainingPlanArnsHasBeenSet = true; m_trainingPlanArns.emplace_back(std::forward<TrainingPlanArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ClusterStatus m_clusterStatus{ClusterStatus::NOT_SET};
    bool m_clusterStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_trainingPlanArns;
    bool m_trainingPlanArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
