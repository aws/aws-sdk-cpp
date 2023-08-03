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
   * <p>An object where you specify the anticipated traffic pattern for an
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ScalingPolicyObjective">AWS
   * API Reference</a></p>
   */
  class ScalingPolicyObjective
  {
  public:
    AWS_SAGEMAKER_API ScalingPolicyObjective();
    AWS_SAGEMAKER_API ScalingPolicyObjective(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ScalingPolicyObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of expected requests to your endpoint per minute.</p>
     */
    inline int GetMinInvocationsPerMinute() const{ return m_minInvocationsPerMinute; }

    /**
     * <p>The minimum number of expected requests to your endpoint per minute.</p>
     */
    inline bool MinInvocationsPerMinuteHasBeenSet() const { return m_minInvocationsPerMinuteHasBeenSet; }

    /**
     * <p>The minimum number of expected requests to your endpoint per minute.</p>
     */
    inline void SetMinInvocationsPerMinute(int value) { m_minInvocationsPerMinuteHasBeenSet = true; m_minInvocationsPerMinute = value; }

    /**
     * <p>The minimum number of expected requests to your endpoint per minute.</p>
     */
    inline ScalingPolicyObjective& WithMinInvocationsPerMinute(int value) { SetMinInvocationsPerMinute(value); return *this;}


    /**
     * <p>The maximum number of expected requests to your endpoint per minute.</p>
     */
    inline int GetMaxInvocationsPerMinute() const{ return m_maxInvocationsPerMinute; }

    /**
     * <p>The maximum number of expected requests to your endpoint per minute.</p>
     */
    inline bool MaxInvocationsPerMinuteHasBeenSet() const { return m_maxInvocationsPerMinuteHasBeenSet; }

    /**
     * <p>The maximum number of expected requests to your endpoint per minute.</p>
     */
    inline void SetMaxInvocationsPerMinute(int value) { m_maxInvocationsPerMinuteHasBeenSet = true; m_maxInvocationsPerMinute = value; }

    /**
     * <p>The maximum number of expected requests to your endpoint per minute.</p>
     */
    inline ScalingPolicyObjective& WithMaxInvocationsPerMinute(int value) { SetMaxInvocationsPerMinute(value); return *this;}

  private:

    int m_minInvocationsPerMinute;
    bool m_minInvocationsPerMinuteHasBeenSet = false;

    int m_maxInvocationsPerMinute;
    bool m_maxInvocationsPerMinuteHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
