/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TargetPlatformOs.h>
#include <aws/sagemaker/model/TargetPlatformArch.h>
#include <aws/sagemaker/model/TargetPlatformAccelerator.h>
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
   * <p>Contains information about a target platform that you want your model to run
   * on, such as OS, architecture, and accelerators. It is an alternative of
   * <code>TargetDevice</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TargetPlatform">AWS
   * API Reference</a></p>
   */
  class TargetPlatform
  {
  public:
    AWS_SAGEMAKER_API TargetPlatform() = default;
    AWS_SAGEMAKER_API TargetPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TargetPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a target platform OS.</p> <ul> <li> <p> <code>LINUX</code>:
     * Linux-based operating systems.</p> </li> <li> <p> <code>ANDROID</code>: Android
     * operating systems. Android API level can be specified using the
     * <code>ANDROID_PLATFORM</code> compiler option. For example,
     * <code>"CompilerOptions": {'ANDROID_PLATFORM': 28}</code> </p> </li> </ul>
     */
    inline TargetPlatformOs GetOs() const { return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    inline void SetOs(TargetPlatformOs value) { m_osHasBeenSet = true; m_os = value; }
    inline TargetPlatform& WithOs(TargetPlatformOs value) { SetOs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target platform architecture.</p> <ul> <li> <p>
     * <code>X86_64</code>: 64-bit version of the x86 instruction set.</p> </li> <li>
     * <p> <code>X86</code>: 32-bit version of the x86 instruction set.</p> </li> <li>
     * <p> <code>ARM64</code>: ARMv8 64-bit CPU.</p> </li> <li> <p>
     * <code>ARM_EABIHF</code>: ARMv7 32-bit, Hard Float.</p> </li> <li> <p>
     * <code>ARM_EABI</code>: ARMv7 32-bit, Soft Float. Used by Android 32-bit ARM
     * platform.</p> </li> </ul>
     */
    inline TargetPlatformArch GetArch() const { return m_arch; }
    inline bool ArchHasBeenSet() const { return m_archHasBeenSet; }
    inline void SetArch(TargetPlatformArch value) { m_archHasBeenSet = true; m_arch = value; }
    inline TargetPlatform& WithArch(TargetPlatformArch value) { SetArch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a target platform accelerator (optional).</p> <ul> <li> <p>
     * <code>NVIDIA</code>: Nvidia graphics processing unit. It also requires
     * <code>gpu-code</code>, <code>trt-ver</code>, <code>cuda-ver</code> compiler
     * options</p> </li> <li> <p> <code>MALI</code>: ARM Mali graphics processor</p>
     * </li> <li> <p> <code>INTEL_GRAPHICS</code>: Integrated Intel graphics</p> </li>
     * </ul>
     */
    inline TargetPlatformAccelerator GetAccelerator() const { return m_accelerator; }
    inline bool AcceleratorHasBeenSet() const { return m_acceleratorHasBeenSet; }
    inline void SetAccelerator(TargetPlatformAccelerator value) { m_acceleratorHasBeenSet = true; m_accelerator = value; }
    inline TargetPlatform& WithAccelerator(TargetPlatformAccelerator value) { SetAccelerator(value); return *this;}
    ///@}
  private:

    TargetPlatformOs m_os{TargetPlatformOs::NOT_SET};
    bool m_osHasBeenSet = false;

    TargetPlatformArch m_arch{TargetPlatformArch::NOT_SET};
    bool m_archHasBeenSet = false;

    TargetPlatformAccelerator m_accelerator{TargetPlatformAccelerator::NOT_SET};
    bool m_acceleratorHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
