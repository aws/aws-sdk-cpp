/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>The metric for a scaling policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ScalingPolicyMetric">AWS
   * API Reference</a></p>
   */
  class ScalingPolicyMetric
  {
  public:
    AWS_SAGEMAKER_API ScalingPolicyMetric();
    AWS_SAGEMAKER_API ScalingPolicyMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ScalingPolicyMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of invocations sent to a model, normalized by
     * <code>InstanceCount</code> in each ProductionVariant.
     * <code>1/numberOfInstances</code> is sent as the value on each request, where
     * <code>numberOfInstances</code> is the number of active instances for the
     * ProductionVariant behind the endpoint at the time of the request.</p>
     */
    inline int GetInvocationsPerInstance() const{ return m_invocationsPerInstance; }

    /**
     * <p>The number of invocations sent to a model, normalized by
     * <code>InstanceCount</code> in each ProductionVariant.
     * <code>1/numberOfInstances</code> is sent as the value on each request, where
     * <code>numberOfInstances</code> is the number of active instances for the
     * ProductionVariant behind the endpoint at the time of the request.</p>
     */
    inline bool InvocationsPerInstanceHasBeenSet() const { return m_invocationsPerInstanceHasBeenSet; }

    /**
     * <p>The number of invocations sent to a model, normalized by
     * <code>InstanceCount</code> in each ProductionVariant.
     * <code>1/numberOfInstances</code> is sent as the value on each request, where
     * <code>numberOfInstances</code> is the number of active instances for the
     * ProductionVariant behind the endpoint at the time of the request.</p>
     */
    inline void SetInvocationsPerInstance(int value) { m_invocationsPerInstanceHasBeenSet = true; m_invocationsPerInstance = value; }

    /**
     * <p>The number of invocations sent to a model, normalized by
     * <code>InstanceCount</code> in each ProductionVariant.
     * <code>1/numberOfInstances</code> is sent as the value on each request, where
     * <code>numberOfInstances</code> is the number of active instances for the
     * ProductionVariant behind the endpoint at the time of the request.</p>
     */
    inline ScalingPolicyMetric& WithInvocationsPerInstance(int value) { SetInvocationsPerInstance(value); return *this;}


    /**
     * <p>The interval of time taken by a model to respond as viewed from SageMaker.
     * This interval includes the local communication times taken to send the request
     * and to fetch the response from the container of a model and the time taken to
     * complete the inference in the container.</p>
     */
    inline int GetModelLatency() const{ return m_modelLatency; }

    /**
     * <p>The interval of time taken by a model to respond as viewed from SageMaker.
     * This interval includes the local communication times taken to send the request
     * and to fetch the response from the container of a model and the time taken to
     * complete the inference in the container.</p>
     */
    inline bool ModelLatencyHasBeenSet() const { return m_modelLatencyHasBeenSet; }

    /**
     * <p>The interval of time taken by a model to respond as viewed from SageMaker.
     * This interval includes the local communication times taken to send the request
     * and to fetch the response from the container of a model and the time taken to
     * complete the inference in the container.</p>
     */
    inline void SetModelLatency(int value) { m_modelLatencyHasBeenSet = true; m_modelLatency = value; }

    /**
     * <p>The interval of time taken by a model to respond as viewed from SageMaker.
     * This interval includes the local communication times taken to send the request
     * and to fetch the response from the container of a model and the time taken to
     * complete the inference in the container.</p>
     */
    inline ScalingPolicyMetric& WithModelLatency(int value) { SetModelLatency(value); return *this;}

  private:

    int m_invocationsPerInstance;
    bool m_invocationsPerInstanceHasBeenSet = false;

    int m_modelLatency;
    bool m_modelLatencyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
