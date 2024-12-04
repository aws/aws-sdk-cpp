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
    AWS_SAGEMAKER_API ClusterSummary();
    AWS_SAGEMAKER_API ClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ClusterSummary& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ClusterSummary& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ClusterSummary& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline ClusterSummary& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline ClusterSummary& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline ClusterSummary& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the SageMaker HyperPod cluster is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ClusterSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ClusterSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline const ClusterStatus& GetClusterStatus() const{ return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    inline void SetClusterStatus(const ClusterStatus& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline void SetClusterStatus(ClusterStatus&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }
    inline ClusterSummary& WithClusterStatus(const ClusterStatus& value) { SetClusterStatus(value); return *this;}
    inline ClusterSummary& WithClusterStatus(ClusterStatus&& value) { SetClusterStatus(std::move(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetTrainingPlanArns() const{ return m_trainingPlanArns; }
    inline bool TrainingPlanArnsHasBeenSet() const { return m_trainingPlanArnsHasBeenSet; }
    inline void SetTrainingPlanArns(const Aws::Vector<Aws::String>& value) { m_trainingPlanArnsHasBeenSet = true; m_trainingPlanArns = value; }
    inline void SetTrainingPlanArns(Aws::Vector<Aws::String>&& value) { m_trainingPlanArnsHasBeenSet = true; m_trainingPlanArns = std::move(value); }
    inline ClusterSummary& WithTrainingPlanArns(const Aws::Vector<Aws::String>& value) { SetTrainingPlanArns(value); return *this;}
    inline ClusterSummary& WithTrainingPlanArns(Aws::Vector<Aws::String>&& value) { SetTrainingPlanArns(std::move(value)); return *this;}
    inline ClusterSummary& AddTrainingPlanArns(const Aws::String& value) { m_trainingPlanArnsHasBeenSet = true; m_trainingPlanArns.push_back(value); return *this; }
    inline ClusterSummary& AddTrainingPlanArns(Aws::String&& value) { m_trainingPlanArnsHasBeenSet = true; m_trainingPlanArns.push_back(std::move(value)); return *this; }
    inline ClusterSummary& AddTrainingPlanArns(const char* value) { m_trainingPlanArnsHasBeenSet = true; m_trainingPlanArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ClusterStatus m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_trainingPlanArns;
    bool m_trainingPlanArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
