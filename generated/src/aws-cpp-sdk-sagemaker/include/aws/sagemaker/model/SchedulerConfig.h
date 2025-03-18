/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/FairShare.h>
#include <aws/sagemaker/model/PriorityClass.h>
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
   * <p>Cluster policy configuration. This policy is used for task prioritization and
   * fair-share allocation. This helps prioritize critical workloads and distributes
   * idle compute across entities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SchedulerConfig">AWS
   * API Reference</a></p>
   */
  class SchedulerConfig
  {
  public:
    AWS_SAGEMAKER_API SchedulerConfig() = default;
    AWS_SAGEMAKER_API SchedulerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SchedulerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of the priority classes, <code>PriorityClass</code>, of the cluster
     * policy. When specified, these class configurations define how tasks are
     * queued.</p>
     */
    inline const Aws::Vector<PriorityClass>& GetPriorityClasses() const { return m_priorityClasses; }
    inline bool PriorityClassesHasBeenSet() const { return m_priorityClassesHasBeenSet; }
    template<typename PriorityClassesT = Aws::Vector<PriorityClass>>
    void SetPriorityClasses(PriorityClassesT&& value) { m_priorityClassesHasBeenSet = true; m_priorityClasses = std::forward<PriorityClassesT>(value); }
    template<typename PriorityClassesT = Aws::Vector<PriorityClass>>
    SchedulerConfig& WithPriorityClasses(PriorityClassesT&& value) { SetPriorityClasses(std::forward<PriorityClassesT>(value)); return *this;}
    template<typename PriorityClassesT = PriorityClass>
    SchedulerConfig& AddPriorityClasses(PriorityClassesT&& value) { m_priorityClassesHasBeenSet = true; m_priorityClasses.emplace_back(std::forward<PriorityClassesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When enabled, entities borrow idle compute based on their assigned
     * <code>FairShareWeight</code>.</p> <p>When disabled, entities borrow idle compute
     * based on a first-come first-serve basis.</p> <p>Default is
     * <code>Enabled</code>.</p>
     */
    inline FairShare GetFairShare() const { return m_fairShare; }
    inline bool FairShareHasBeenSet() const { return m_fairShareHasBeenSet; }
    inline void SetFairShare(FairShare value) { m_fairShareHasBeenSet = true; m_fairShare = value; }
    inline SchedulerConfig& WithFairShare(FairShare value) { SetFairShare(value); return *this;}
    ///@}
  private:

    Aws::Vector<PriorityClass> m_priorityClasses;
    bool m_priorityClassesHasBeenSet = false;

    FairShare m_fairShare{FairShare::NOT_SET};
    bool m_fairShareHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
