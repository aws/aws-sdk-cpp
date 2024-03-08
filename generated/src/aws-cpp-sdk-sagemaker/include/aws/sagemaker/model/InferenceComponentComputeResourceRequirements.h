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
   * <p>Defines the compute resources to allocate to run a model that you assign to
   * an inference component. These resources include CPU cores, accelerators, and
   * memory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentComputeResourceRequirements">AWS
   * API Reference</a></p>
   */
  class InferenceComponentComputeResourceRequirements
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentComputeResourceRequirements();
    AWS_SAGEMAKER_API InferenceComponentComputeResourceRequirements(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentComputeResourceRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of CPU cores to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline double GetNumberOfCpuCoresRequired() const{ return m_numberOfCpuCoresRequired; }

    /**
     * <p>The number of CPU cores to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline bool NumberOfCpuCoresRequiredHasBeenSet() const { return m_numberOfCpuCoresRequiredHasBeenSet; }

    /**
     * <p>The number of CPU cores to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline void SetNumberOfCpuCoresRequired(double value) { m_numberOfCpuCoresRequiredHasBeenSet = true; m_numberOfCpuCoresRequired = value; }

    /**
     * <p>The number of CPU cores to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline InferenceComponentComputeResourceRequirements& WithNumberOfCpuCoresRequired(double value) { SetNumberOfCpuCoresRequired(value); return *this;}


    /**
     * <p>The number of accelerators to allocate to run a model that you assign to an
     * inference component. Accelerators include GPUs and Amazon Web Services
     * Inferentia.</p>
     */
    inline double GetNumberOfAcceleratorDevicesRequired() const{ return m_numberOfAcceleratorDevicesRequired; }

    /**
     * <p>The number of accelerators to allocate to run a model that you assign to an
     * inference component. Accelerators include GPUs and Amazon Web Services
     * Inferentia.</p>
     */
    inline bool NumberOfAcceleratorDevicesRequiredHasBeenSet() const { return m_numberOfAcceleratorDevicesRequiredHasBeenSet; }

    /**
     * <p>The number of accelerators to allocate to run a model that you assign to an
     * inference component. Accelerators include GPUs and Amazon Web Services
     * Inferentia.</p>
     */
    inline void SetNumberOfAcceleratorDevicesRequired(double value) { m_numberOfAcceleratorDevicesRequiredHasBeenSet = true; m_numberOfAcceleratorDevicesRequired = value; }

    /**
     * <p>The number of accelerators to allocate to run a model that you assign to an
     * inference component. Accelerators include GPUs and Amazon Web Services
     * Inferentia.</p>
     */
    inline InferenceComponentComputeResourceRequirements& WithNumberOfAcceleratorDevicesRequired(double value) { SetNumberOfAcceleratorDevicesRequired(value); return *this;}


    /**
     * <p>The minimum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline int GetMinMemoryRequiredInMb() const{ return m_minMemoryRequiredInMb; }

    /**
     * <p>The minimum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline bool MinMemoryRequiredInMbHasBeenSet() const { return m_minMemoryRequiredInMbHasBeenSet; }

    /**
     * <p>The minimum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline void SetMinMemoryRequiredInMb(int value) { m_minMemoryRequiredInMbHasBeenSet = true; m_minMemoryRequiredInMb = value; }

    /**
     * <p>The minimum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline InferenceComponentComputeResourceRequirements& WithMinMemoryRequiredInMb(int value) { SetMinMemoryRequiredInMb(value); return *this;}


    /**
     * <p>The maximum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline int GetMaxMemoryRequiredInMb() const{ return m_maxMemoryRequiredInMb; }

    /**
     * <p>The maximum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline bool MaxMemoryRequiredInMbHasBeenSet() const { return m_maxMemoryRequiredInMbHasBeenSet; }

    /**
     * <p>The maximum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline void SetMaxMemoryRequiredInMb(int value) { m_maxMemoryRequiredInMbHasBeenSet = true; m_maxMemoryRequiredInMb = value; }

    /**
     * <p>The maximum MB of memory to allocate to run a model that you assign to an
     * inference component.</p>
     */
    inline InferenceComponentComputeResourceRequirements& WithMaxMemoryRequiredInMb(int value) { SetMaxMemoryRequiredInMb(value); return *this;}

  private:

    double m_numberOfCpuCoresRequired;
    bool m_numberOfCpuCoresRequiredHasBeenSet = false;

    double m_numberOfAcceleratorDevicesRequired;
    bool m_numberOfAcceleratorDevicesRequiredHasBeenSet = false;

    int m_minMemoryRequiredInMb;
    bool m_minMemoryRequiredInMbHasBeenSet = false;

    int m_maxMemoryRequiredInMb;
    bool m_maxMemoryRequiredInMbHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
