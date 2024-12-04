/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>
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
   * <p>Configuration of the resources used for the compute allocation
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ComputeQuotaResourceConfig">AWS
   * API Reference</a></p>
   */
  class ComputeQuotaResourceConfig
  {
  public:
    AWS_SAGEMAKER_API ComputeQuotaResourceConfig();
    AWS_SAGEMAKER_API ComputeQuotaResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ComputeQuotaResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type of the instance group for the cluster.</p>
     */
    inline const ClusterInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ClusterInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ClusterInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ComputeQuotaResourceConfig& WithInstanceType(const ClusterInstanceType& value) { SetInstanceType(value); return *this;}
    inline ComputeQuotaResourceConfig& WithInstanceType(ClusterInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances to add to the instance group of a SageMaker HyperPod
     * cluster.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ComputeQuotaResourceConfig& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    ClusterInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
