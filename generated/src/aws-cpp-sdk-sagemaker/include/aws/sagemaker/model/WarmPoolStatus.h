/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/WarmPoolResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Status and billing information about the warm pool.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/WarmPoolStatus">AWS
   * API Reference</a></p>
   */
  class WarmPoolStatus
  {
  public:
    AWS_SAGEMAKER_API WarmPoolStatus() = default;
    AWS_SAGEMAKER_API WarmPoolStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API WarmPoolStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the warm pool.</p> <ul> <li> <p> <code>InUse</code>: The warm
     * pool is in use for the training job.</p> </li> <li> <p> <code>Available</code>:
     * The warm pool is available to reuse for a matching training job.</p> </li> <li>
     * <p> <code>Reused</code>: The warm pool moved to a matching training job for
     * reuse.</p> </li> <li> <p> <code>Terminated</code>: The warm pool is no longer
     * available. Warm pools are unavailable if they are terminated by a user,
     * terminated for a patch update, or terminated for exceeding the specified
     * <code>KeepAlivePeriodInSeconds</code>.</p> </li> </ul>
     */
    inline WarmPoolResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WarmPoolResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WarmPoolStatus& WithStatus(WarmPoolResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billable time in seconds used by the warm pool. Billable time refers to
     * the absolute wall-clock time.</p> <p>Multiply
     * <code>ResourceRetainedBillableTimeInSeconds</code> by the number of instances
     * (<code>InstanceCount</code>) in your training cluster to get the total compute
     * time SageMaker bills you if you run warm pool training. The formula is as
     * follows: <code>ResourceRetainedBillableTimeInSeconds * InstanceCount</code>.</p>
     */
    inline int GetResourceRetainedBillableTimeInSeconds() const { return m_resourceRetainedBillableTimeInSeconds; }
    inline bool ResourceRetainedBillableTimeInSecondsHasBeenSet() const { return m_resourceRetainedBillableTimeInSecondsHasBeenSet; }
    inline void SetResourceRetainedBillableTimeInSeconds(int value) { m_resourceRetainedBillableTimeInSecondsHasBeenSet = true; m_resourceRetainedBillableTimeInSeconds = value; }
    inline WarmPoolStatus& WithResourceRetainedBillableTimeInSeconds(int value) { SetResourceRetainedBillableTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the matching training job that reused the warm pool.</p>
     */
    inline const Aws::String& GetReusedByJob() const { return m_reusedByJob; }
    inline bool ReusedByJobHasBeenSet() const { return m_reusedByJobHasBeenSet; }
    template<typename ReusedByJobT = Aws::String>
    void SetReusedByJob(ReusedByJobT&& value) { m_reusedByJobHasBeenSet = true; m_reusedByJob = std::forward<ReusedByJobT>(value); }
    template<typename ReusedByJobT = Aws::String>
    WarmPoolStatus& WithReusedByJob(ReusedByJobT&& value) { SetReusedByJob(std::forward<ReusedByJobT>(value)); return *this;}
    ///@}
  private:

    WarmPoolResourceStatus m_status{WarmPoolResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_resourceRetainedBillableTimeInSeconds{0};
    bool m_resourceRetainedBillableTimeInSecondsHasBeenSet = false;

    Aws::String m_reusedByJob;
    bool m_reusedByJobHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
