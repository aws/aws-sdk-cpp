/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ManagedInstanceScalingStatus.h>
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
   * <p>Settings that control the range in the number of instances that the endpoint
   * provisions as it scales up or down to accommodate traffic. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantManagedInstanceScaling">AWS
   * API Reference</a></p>
   */
  class ProductionVariantManagedInstanceScaling
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantManagedInstanceScaling() = default;
    AWS_SAGEMAKER_API ProductionVariantManagedInstanceScaling(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantManagedInstanceScaling& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether managed instance scaling is enabled.</p>
     */
    inline ManagedInstanceScalingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ManagedInstanceScalingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProductionVariantManagedInstanceScaling& WithStatus(ManagedInstanceScalingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of instances that the endpoint must retain when it scales
     * down to accommodate a decrease in traffic.</p>
     */
    inline int GetMinInstanceCount() const { return m_minInstanceCount; }
    inline bool MinInstanceCountHasBeenSet() const { return m_minInstanceCountHasBeenSet; }
    inline void SetMinInstanceCount(int value) { m_minInstanceCountHasBeenSet = true; m_minInstanceCount = value; }
    inline ProductionVariantManagedInstanceScaling& WithMinInstanceCount(int value) { SetMinInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances that the endpoint can provision when it
     * scales up to accommodate an increase in traffic.</p>
     */
    inline int GetMaxInstanceCount() const { return m_maxInstanceCount; }
    inline bool MaxInstanceCountHasBeenSet() const { return m_maxInstanceCountHasBeenSet; }
    inline void SetMaxInstanceCount(int value) { m_maxInstanceCountHasBeenSet = true; m_maxInstanceCount = value; }
    inline ProductionVariantManagedInstanceScaling& WithMaxInstanceCount(int value) { SetMaxInstanceCount(value); return *this;}
    ///@}
  private:

    ManagedInstanceScalingStatus m_status{ManagedInstanceScalingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_minInstanceCount{0};
    bool m_minInstanceCountHasBeenSet = false;

    int m_maxInstanceCount{0};
    bool m_maxInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
