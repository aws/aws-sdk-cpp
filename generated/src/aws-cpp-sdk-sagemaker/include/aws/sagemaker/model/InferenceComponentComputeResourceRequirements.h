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
   * <p>Defines the compute resources to allocate to run a model, plus any adapter
   * models, that you assign to an inference component. These resources include CPU
   * cores, accelerators, and memory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentComputeResourceRequirements">AWS
   * API Reference</a></p>
   */
  class InferenceComponentComputeResourceRequirements
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentComputeResourceRequirements() = default;
    AWS_SAGEMAKER_API InferenceComponentComputeResourceRequirements(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentComputeResourceRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of CPU cores to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline double GetNumberOfCpuCoresRequired() const { return m_numberOfCpuCoresRequired; }
    inline bool NumberOfCpuCoresRequiredHasBeenSet() const { return m_numberOfCpuCoresRequiredHasBeenSet; }
    inline void SetNumberOfCpuCoresRequired(double value) { m_numberOfCpuCoresRequiredHasBeenSet = true; m_numberOfCpuCoresRequired = value; }
    inline InferenceComponentComputeResourceRequirements& WithNumberOfCpuCoresRequired(double value) { SetNumberOfCpuCoresRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accelerators to allocate to run a model that you assign to an
     * inference component. Accelerators include GPUs and Amazon Web Services
     * Inferentia.</p>
     */
    inline double GetNumberOfAcceleratorDevicesRequired() const { return m_numberOfAcceleratorDevicesRequired; }
    inline bool NumberOfAcceleratorDevicesRequiredHasBeenSet() const { return m_numberOfAcceleratorDevicesRequiredHasBeenSet; }
    inline void SetNumberOfAcceleratorDevicesRequired(double value) { m_numberOfAcceleratorDevicesRequiredHasBeenSet = true; m_numberOfAcceleratorDevicesRequired = value; }
    inline InferenceComponentComputeResourceRequirements& WithNumberOfAcceleratorDevicesRequired(double value) { SetNumberOfAcceleratorDevicesRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline int GetMinMemoryRequiredInMb() const { return m_minMemoryRequiredInMb; }
    inline bool MinMemoryRequiredInMbHasBeenSet() const { return m_minMemoryRequiredInMbHasBeenSet; }
    inline void SetMinMemoryRequiredInMb(int value) { m_minMemoryRequiredInMbHasBeenSet = true; m_minMemoryRequiredInMb = value; }
    inline InferenceComponentComputeResourceRequirements& WithMinMemoryRequiredInMb(int value) { SetMinMemoryRequiredInMb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline int GetMaxMemoryRequiredInMb() const { return m_maxMemoryRequiredInMb; }
    inline bool MaxMemoryRequiredInMbHasBeenSet() const { return m_maxMemoryRequiredInMbHasBeenSet; }
    inline void SetMaxMemoryRequiredInMb(int value) { m_maxMemoryRequiredInMbHasBeenSet = true; m_maxMemoryRequiredInMb = value; }
    inline InferenceComponentComputeResourceRequirements& WithMaxMemoryRequiredInMb(int value) { SetMaxMemoryRequiredInMb(value); return *this;}
    ///@}
  private:

    double m_numberOfCpuCoresRequired{0.0};
    bool m_numberOfCpuCoresRequiredHasBeenSet = false;

    double m_numberOfAcceleratorDevicesRequired{0.0};
    bool m_numberOfAcceleratorDevicesRequiredHasBeenSet = false;

    int m_minMemoryRequiredInMb{0};
    bool m_minMemoryRequiredInMbHasBeenSet = false;

    int m_maxMemoryRequiredInMb{0};
    bool m_maxMemoryRequiredInMbHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
