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
    AWS_SAGEMAKER_API ComputeQuotaResourceConfig() = default;
    AWS_SAGEMAKER_API ComputeQuotaResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ComputeQuotaResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type of the instance group for the cluster.</p>
     */
    inline ClusterInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ClusterInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ComputeQuotaResourceConfig& WithInstanceType(ClusterInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances to add to the instance group of a SageMaker HyperPod
     * cluster.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ComputeQuotaResourceConfig& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accelerators to allocate. If you don't specify a value for vCPU
     * and MemoryInGiB, SageMaker AI automatically allocates ratio-based values for
     * those parameters based on the number of accelerators you provide. For example,
     * if you allocate 16 out of 32 total accelerators, SageMaker AI uses the ratio of
     * 0.5 and allocates values to vCPU and MemoryInGiB.</p>
     */
    inline int GetAccelerators() const { return m_accelerators; }
    inline bool AcceleratorsHasBeenSet() const { return m_acceleratorsHasBeenSet; }
    inline void SetAccelerators(int value) { m_acceleratorsHasBeenSet = true; m_accelerators = value; }
    inline ComputeQuotaResourceConfig& WithAccelerators(int value) { SetAccelerators(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPU to allocate. If you specify a value only for vCPU,
     * SageMaker AI automatically allocates ratio-based values for MemoryInGiB based on
     * this vCPU parameter. For example, if you allocate 20 out of 40 total vCPU,
     * SageMaker AI uses the ratio of 0.5 and allocates values to MemoryInGiB.
     * Accelerators are set to 0.</p>
     */
    inline double GetVCpu() const { return m_vCpu; }
    inline bool VCpuHasBeenSet() const { return m_vCpuHasBeenSet; }
    inline void SetVCpu(double value) { m_vCpuHasBeenSet = true; m_vCpu = value; }
    inline ComputeQuotaResourceConfig& WithVCpu(double value) { SetVCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory in GiB to allocate. If you specify a value only for this
     * parameter, SageMaker AI automatically allocates a ratio-based value for vCPU
     * based on this memory that you provide. For example, if you allocate 200 out of
     * 400 total memory in GiB, SageMaker AI uses the ratio of 0.5 and allocates values
     * to vCPU. Accelerators are set to 0.</p>
     */
    inline double GetMemoryInGiB() const { return m_memoryInGiB; }
    inline bool MemoryInGiBHasBeenSet() const { return m_memoryInGiBHasBeenSet; }
    inline void SetMemoryInGiB(double value) { m_memoryInGiBHasBeenSet = true; m_memoryInGiB = value; }
    inline ComputeQuotaResourceConfig& WithMemoryInGiB(double value) { SetMemoryInGiB(value); return *this;}
    ///@}
  private:

    ClusterInstanceType m_instanceType{ClusterInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    int m_accelerators{0};
    bool m_acceleratorsHasBeenSet = false;

    double m_vCpu{0.0};
    bool m_vCpuHasBeenSet = false;

    double m_memoryInGiB{0.0};
    bool m_memoryInGiBHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
