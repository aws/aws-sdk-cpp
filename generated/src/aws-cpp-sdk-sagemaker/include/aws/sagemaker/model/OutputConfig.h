/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TargetDevice.h>
#include <aws/sagemaker/model/TargetPlatform.h>
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
   * <p>Contains information about the output location for the compiled model and the
   * target device that the model runs on. <code>TargetDevice</code> and
   * <code>TargetPlatform</code> are mutually exclusive, so you need to choose one
   * between the two to specify your target device or platform. If you cannot find
   * your device you want to use from the <code>TargetDevice</code> list, use
   * <code>TargetPlatform</code> to describe the platform of your edge device and
   * <code>CompilerOptions</code> if there are specific settings that are required or
   * recommended to use for particular TargetPlatform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OutputConfig">AWS
   * API Reference</a></p>
   */
  class OutputConfig
  {
  public:
    AWS_SAGEMAKER_API OutputConfig();
    AWS_SAGEMAKER_API OutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the S3 bucket where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline const Aws::String& GetS3OutputLocation() const{ return m_s3OutputLocation; }

    /**
     * <p>Identifies the S3 bucket where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }

    /**
     * <p>Identifies the S3 bucket where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3OutputLocation(const Aws::String& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = value; }

    /**
     * <p>Identifies the S3 bucket where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3OutputLocation(Aws::String&& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = std::move(value); }

    /**
     * <p>Identifies the S3 bucket where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3OutputLocation(const char* value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation.assign(value); }

    /**
     * <p>Identifies the S3 bucket where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline OutputConfig& WithS3OutputLocation(const Aws::String& value) { SetS3OutputLocation(value); return *this;}

    /**
     * <p>Identifies the S3 bucket where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline OutputConfig& WithS3OutputLocation(Aws::String&& value) { SetS3OutputLocation(std::move(value)); return *this;}

    /**
     * <p>Identifies the S3 bucket where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline OutputConfig& WithS3OutputLocation(const char* value) { SetS3OutputLocation(value); return *this;}


    /**
     * <p>Identifies the target device or the machine learning instance that you want
     * to run your model on after the compilation has completed. Alternatively, you can
     * specify OS, architecture, and accelerator using <a>TargetPlatform</a> fields. It
     * can be used instead of <code>TargetPlatform</code>.</p>
     */
    inline const TargetDevice& GetTargetDevice() const{ return m_targetDevice; }

    /**
     * <p>Identifies the target device or the machine learning instance that you want
     * to run your model on after the compilation has completed. Alternatively, you can
     * specify OS, architecture, and accelerator using <a>TargetPlatform</a> fields. It
     * can be used instead of <code>TargetPlatform</code>.</p>
     */
    inline bool TargetDeviceHasBeenSet() const { return m_targetDeviceHasBeenSet; }

    /**
     * <p>Identifies the target device or the machine learning instance that you want
     * to run your model on after the compilation has completed. Alternatively, you can
     * specify OS, architecture, and accelerator using <a>TargetPlatform</a> fields. It
     * can be used instead of <code>TargetPlatform</code>.</p>
     */
    inline void SetTargetDevice(const TargetDevice& value) { m_targetDeviceHasBeenSet = true; m_targetDevice = value; }

    /**
     * <p>Identifies the target device or the machine learning instance that you want
     * to run your model on after the compilation has completed. Alternatively, you can
     * specify OS, architecture, and accelerator using <a>TargetPlatform</a> fields. It
     * can be used instead of <code>TargetPlatform</code>.</p>
     */
    inline void SetTargetDevice(TargetDevice&& value) { m_targetDeviceHasBeenSet = true; m_targetDevice = std::move(value); }

    /**
     * <p>Identifies the target device or the machine learning instance that you want
     * to run your model on after the compilation has completed. Alternatively, you can
     * specify OS, architecture, and accelerator using <a>TargetPlatform</a> fields. It
     * can be used instead of <code>TargetPlatform</code>.</p>
     */
    inline OutputConfig& WithTargetDevice(const TargetDevice& value) { SetTargetDevice(value); return *this;}

    /**
     * <p>Identifies the target device or the machine learning instance that you want
     * to run your model on after the compilation has completed. Alternatively, you can
     * specify OS, architecture, and accelerator using <a>TargetPlatform</a> fields. It
     * can be used instead of <code>TargetPlatform</code>.</p>
     */
    inline OutputConfig& WithTargetDevice(TargetDevice&& value) { SetTargetDevice(std::move(value)); return *this;}


    /**
     * <p>Contains information about a target platform that you want your model to run
     * on, such as OS, architecture, and accelerators. It is an alternative of
     * <code>TargetDevice</code>.</p> <p>The following examples show how to configure
     * the <code>TargetPlatform</code> and <code>CompilerOptions</code> JSON strings
     * for popular target platforms: </p> <ul> <li> <p>Raspberry Pi 3 Model B+</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM_EABIHF"},</code> </p> <p>
     * <code> "CompilerOptions": {'mattr': ['+neon']}</code> </p> </li> <li> <p>Jetson
     * TX2</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64",
     * "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions": {'gpu-code':
     * 'sm_62', 'trt-ver': '6.0.1', 'cuda-ver': '10.0'}</code> </p> </li> <li> <p>EC2
     * m5.2xlarge instance OS</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch":
     * "X86_64", "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions":
     * {'mcpu': 'skylake-avx512'}</code> </p> </li> <li> <p>RK3399</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64", "Accelerator":
     * "MALI"}</code> </p> </li> <li> <p>ARMv7 phone (CPU)</p> <p>
     * <code>"TargetPlatform": {"Os": "ANDROID", "Arch": "ARM_EABI"},</code> </p> <p>
     * <code> "CompilerOptions": {'ANDROID_PLATFORM': 25, 'mattr': ['+neon']}</code>
     * </p> </li> <li> <p>ARMv8 phone (CPU)</p> <p> <code>"TargetPlatform": {"Os":
     * "ANDROID", "Arch": "ARM64"},</code> </p> <p> <code> "CompilerOptions":
     * {'ANDROID_PLATFORM': 29}</code> </p> </li> </ul>
     */
    inline const TargetPlatform& GetTargetPlatform() const{ return m_targetPlatform; }

    /**
     * <p>Contains information about a target platform that you want your model to run
     * on, such as OS, architecture, and accelerators. It is an alternative of
     * <code>TargetDevice</code>.</p> <p>The following examples show how to configure
     * the <code>TargetPlatform</code> and <code>CompilerOptions</code> JSON strings
     * for popular target platforms: </p> <ul> <li> <p>Raspberry Pi 3 Model B+</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM_EABIHF"},</code> </p> <p>
     * <code> "CompilerOptions": {'mattr': ['+neon']}</code> </p> </li> <li> <p>Jetson
     * TX2</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64",
     * "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions": {'gpu-code':
     * 'sm_62', 'trt-ver': '6.0.1', 'cuda-ver': '10.0'}</code> </p> </li> <li> <p>EC2
     * m5.2xlarge instance OS</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch":
     * "X86_64", "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions":
     * {'mcpu': 'skylake-avx512'}</code> </p> </li> <li> <p>RK3399</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64", "Accelerator":
     * "MALI"}</code> </p> </li> <li> <p>ARMv7 phone (CPU)</p> <p>
     * <code>"TargetPlatform": {"Os": "ANDROID", "Arch": "ARM_EABI"},</code> </p> <p>
     * <code> "CompilerOptions": {'ANDROID_PLATFORM': 25, 'mattr': ['+neon']}</code>
     * </p> </li> <li> <p>ARMv8 phone (CPU)</p> <p> <code>"TargetPlatform": {"Os":
     * "ANDROID", "Arch": "ARM64"},</code> </p> <p> <code> "CompilerOptions":
     * {'ANDROID_PLATFORM': 29}</code> </p> </li> </ul>
     */
    inline bool TargetPlatformHasBeenSet() const { return m_targetPlatformHasBeenSet; }

    /**
     * <p>Contains information about a target platform that you want your model to run
     * on, such as OS, architecture, and accelerators. It is an alternative of
     * <code>TargetDevice</code>.</p> <p>The following examples show how to configure
     * the <code>TargetPlatform</code> and <code>CompilerOptions</code> JSON strings
     * for popular target platforms: </p> <ul> <li> <p>Raspberry Pi 3 Model B+</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM_EABIHF"},</code> </p> <p>
     * <code> "CompilerOptions": {'mattr': ['+neon']}</code> </p> </li> <li> <p>Jetson
     * TX2</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64",
     * "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions": {'gpu-code':
     * 'sm_62', 'trt-ver': '6.0.1', 'cuda-ver': '10.0'}</code> </p> </li> <li> <p>EC2
     * m5.2xlarge instance OS</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch":
     * "X86_64", "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions":
     * {'mcpu': 'skylake-avx512'}</code> </p> </li> <li> <p>RK3399</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64", "Accelerator":
     * "MALI"}</code> </p> </li> <li> <p>ARMv7 phone (CPU)</p> <p>
     * <code>"TargetPlatform": {"Os": "ANDROID", "Arch": "ARM_EABI"},</code> </p> <p>
     * <code> "CompilerOptions": {'ANDROID_PLATFORM': 25, 'mattr': ['+neon']}</code>
     * </p> </li> <li> <p>ARMv8 phone (CPU)</p> <p> <code>"TargetPlatform": {"Os":
     * "ANDROID", "Arch": "ARM64"},</code> </p> <p> <code> "CompilerOptions":
     * {'ANDROID_PLATFORM': 29}</code> </p> </li> </ul>
     */
    inline void SetTargetPlatform(const TargetPlatform& value) { m_targetPlatformHasBeenSet = true; m_targetPlatform = value; }

    /**
     * <p>Contains information about a target platform that you want your model to run
     * on, such as OS, architecture, and accelerators. It is an alternative of
     * <code>TargetDevice</code>.</p> <p>The following examples show how to configure
     * the <code>TargetPlatform</code> and <code>CompilerOptions</code> JSON strings
     * for popular target platforms: </p> <ul> <li> <p>Raspberry Pi 3 Model B+</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM_EABIHF"},</code> </p> <p>
     * <code> "CompilerOptions": {'mattr': ['+neon']}</code> </p> </li> <li> <p>Jetson
     * TX2</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64",
     * "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions": {'gpu-code':
     * 'sm_62', 'trt-ver': '6.0.1', 'cuda-ver': '10.0'}</code> </p> </li> <li> <p>EC2
     * m5.2xlarge instance OS</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch":
     * "X86_64", "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions":
     * {'mcpu': 'skylake-avx512'}</code> </p> </li> <li> <p>RK3399</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64", "Accelerator":
     * "MALI"}</code> </p> </li> <li> <p>ARMv7 phone (CPU)</p> <p>
     * <code>"TargetPlatform": {"Os": "ANDROID", "Arch": "ARM_EABI"},</code> </p> <p>
     * <code> "CompilerOptions": {'ANDROID_PLATFORM': 25, 'mattr': ['+neon']}</code>
     * </p> </li> <li> <p>ARMv8 phone (CPU)</p> <p> <code>"TargetPlatform": {"Os":
     * "ANDROID", "Arch": "ARM64"},</code> </p> <p> <code> "CompilerOptions":
     * {'ANDROID_PLATFORM': 29}</code> </p> </li> </ul>
     */
    inline void SetTargetPlatform(TargetPlatform&& value) { m_targetPlatformHasBeenSet = true; m_targetPlatform = std::move(value); }

    /**
     * <p>Contains information about a target platform that you want your model to run
     * on, such as OS, architecture, and accelerators. It is an alternative of
     * <code>TargetDevice</code>.</p> <p>The following examples show how to configure
     * the <code>TargetPlatform</code> and <code>CompilerOptions</code> JSON strings
     * for popular target platforms: </p> <ul> <li> <p>Raspberry Pi 3 Model B+</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM_EABIHF"},</code> </p> <p>
     * <code> "CompilerOptions": {'mattr': ['+neon']}</code> </p> </li> <li> <p>Jetson
     * TX2</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64",
     * "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions": {'gpu-code':
     * 'sm_62', 'trt-ver': '6.0.1', 'cuda-ver': '10.0'}</code> </p> </li> <li> <p>EC2
     * m5.2xlarge instance OS</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch":
     * "X86_64", "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions":
     * {'mcpu': 'skylake-avx512'}</code> </p> </li> <li> <p>RK3399</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64", "Accelerator":
     * "MALI"}</code> </p> </li> <li> <p>ARMv7 phone (CPU)</p> <p>
     * <code>"TargetPlatform": {"Os": "ANDROID", "Arch": "ARM_EABI"},</code> </p> <p>
     * <code> "CompilerOptions": {'ANDROID_PLATFORM': 25, 'mattr': ['+neon']}</code>
     * </p> </li> <li> <p>ARMv8 phone (CPU)</p> <p> <code>"TargetPlatform": {"Os":
     * "ANDROID", "Arch": "ARM64"},</code> </p> <p> <code> "CompilerOptions":
     * {'ANDROID_PLATFORM': 29}</code> </p> </li> </ul>
     */
    inline OutputConfig& WithTargetPlatform(const TargetPlatform& value) { SetTargetPlatform(value); return *this;}

    /**
     * <p>Contains information about a target platform that you want your model to run
     * on, such as OS, architecture, and accelerators. It is an alternative of
     * <code>TargetDevice</code>.</p> <p>The following examples show how to configure
     * the <code>TargetPlatform</code> and <code>CompilerOptions</code> JSON strings
     * for popular target platforms: </p> <ul> <li> <p>Raspberry Pi 3 Model B+</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM_EABIHF"},</code> </p> <p>
     * <code> "CompilerOptions": {'mattr': ['+neon']}</code> </p> </li> <li> <p>Jetson
     * TX2</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64",
     * "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions": {'gpu-code':
     * 'sm_62', 'trt-ver': '6.0.1', 'cuda-ver': '10.0'}</code> </p> </li> <li> <p>EC2
     * m5.2xlarge instance OS</p> <p> <code>"TargetPlatform": {"Os": "LINUX", "Arch":
     * "X86_64", "Accelerator": "NVIDIA"},</code> </p> <p> <code> "CompilerOptions":
     * {'mcpu': 'skylake-avx512'}</code> </p> </li> <li> <p>RK3399</p> <p>
     * <code>"TargetPlatform": {"Os": "LINUX", "Arch": "ARM64", "Accelerator":
     * "MALI"}</code> </p> </li> <li> <p>ARMv7 phone (CPU)</p> <p>
     * <code>"TargetPlatform": {"Os": "ANDROID", "Arch": "ARM_EABI"},</code> </p> <p>
     * <code> "CompilerOptions": {'ANDROID_PLATFORM': 25, 'mattr': ['+neon']}</code>
     * </p> </li> <li> <p>ARMv8 phone (CPU)</p> <p> <code>"TargetPlatform": {"Os":
     * "ANDROID", "Arch": "ARM64"},</code> </p> <p> <code> "CompilerOptions":
     * {'ANDROID_PLATFORM': 29}</code> </p> </li> </ul>
     */
    inline OutputConfig& WithTargetPlatform(TargetPlatform&& value) { SetTargetPlatform(std::move(value)); return *this;}


    /**
     * <p>Specifies additional parameters for compiler options in JSON format. The
     * compiler options are <code>TargetPlatform</code> specific. It is required for
     * NVIDIA accelerators and highly recommended for CPU compilations. For any other
     * cases, it is optional to specify <code>CompilerOptions.</code> </p> <ul> <li>
     * <p> <code>DTYPE</code>: Specifies the data type for the input. When compiling
     * for <code>ml_*</code> (except for <code>ml_inf</code>) instances using PyTorch
     * framework, provide the data type (dtype) of the model's input.
     * <code>"float32"</code> is used if <code>"DTYPE"</code> is not specified. Options
     * for data type are:</p> <ul> <li> <p>float32: Use either <code>"float"</code> or
     * <code>"float32"</code>.</p> </li> <li> <p>int64: Use either <code>"int64"</code>
     * or <code>"long"</code>.</p> </li> </ul> <p> For example, <code>{"dtype" :
     * "float32"}</code>.</p> </li> <li> <p> <code>CPU</code>: Compilation for CPU
     * supports the following compiler options.</p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul> </li> <li> <p> <code>ARM</code>:
     * Details of ARM CPU compilations.</p> <ul> <li> <p> <code>NEON</code>: NEON is an
     * implementation of the Advanced SIMD extension used in ARMv7 processors.</p>
     * <p>For example, add <code>{'mattr': ['+neon']}</code> to the compiler options if
     * compiling for ARM 32-bit platform with the NEON support.</p> </li> </ul> </li>
     * <li> <p> <code>NVIDIA</code>: Compilation for NVIDIA GPU supports the following
     * compiler options.</p> <ul> <li> <p> <code>gpu_code</code>: Specifies the
     * targeted architecture.</p> </li> <li> <p> <code>trt-ver</code>: Specifies the
     * TensorRT versions in x.y.z. format.</p> </li> <li> <p> <code>cuda-ver</code>:
     * Specifies the CUDA version in x.y format.</p> </li> </ul> <p>For example,
     * <code>{'gpu-code': 'sm_72', 'trt-ver': '6.0.1', 'cuda-ver': '10.1'}</code> </p>
     * </li> <li> <p> <code>ANDROID</code>: Compilation for the Android OS supports the
     * following compiler options:</p> <ul> <li> <p> <code>ANDROID_PLATFORM</code>:
     * Specifies the Android API levels. Available levels range from 21 to 29. For
     * example, <code>{'ANDROID_PLATFORM': 28}</code>.</p> </li> <li> <p>
     * <code>mattr</code>: Add <code>{'mattr': ['+neon']}</code> to compiler options if
     * compiling for ARM 32-bit platform with NEON support.</p> </li> </ul> </li> <li>
     * <p> <code>INFERENTIA</code>: Compilation for target ml_inf1 uses compiler
     * options passed in as a JSON string. For example, <code>"CompilerOptions":
     * "\"--verbose 1 --num-neuroncores 2 -O2\""</code>. </p> <p>For information about
     * supported compiler options, see <a
     * href="https://github.com/aws/aws-neuron-sdk/blob/master/docs/neuron-cc/command-line-reference.md">
     * Neuron Compiler CLI</a>. </p> </li> <li> <p> <code>CoreML</code>: Compilation
     * for the CoreML <a>OutputConfig$TargetDevice</a> supports the following compiler
     * options:</p> <ul> <li> <p> <code>class_labels</code>: Specifies the
     * classification labels file name inside input tar.gz file. For example,
     * <code>{"class_labels": "imagenet_labels_1000.txt"}</code>. Labels inside the txt
     * file should be separated by newlines.</p> </li> </ul> </li> <li> <p>
     * <code>EIA</code>: Compilation for the Elastic Inference Accelerator supports the
     * following compiler options:</p> <ul> <li> <p> <code>precision_mode</code>:
     * Specifies the precision of compiled artifacts. Supported values are
     * <code>"FP16"</code> and <code>"FP32"</code>. Default is <code>"FP32"</code>.</p>
     * </li> <li> <p> <code>signature_def_key</code>: Specifies the signature to use
     * for models in SavedModel format. Defaults is TensorFlow's default signature def
     * key.</p> </li> <li> <p> <code>output_names</code>: Specifies a list of output
     * tensor names for models in FrozenGraph format. Set at most one API field,
     * either: <code>signature_def_key</code> or <code>output_names</code>.</p> </li>
     * </ul> <p>For example: <code>{"precision_mode": "FP32", "output_names":
     * ["output:0"]}</code> </p> </li> </ul>
     */
    inline const Aws::String& GetCompilerOptions() const{ return m_compilerOptions; }

    /**
     * <p>Specifies additional parameters for compiler options in JSON format. The
     * compiler options are <code>TargetPlatform</code> specific. It is required for
     * NVIDIA accelerators and highly recommended for CPU compilations. For any other
     * cases, it is optional to specify <code>CompilerOptions.</code> </p> <ul> <li>
     * <p> <code>DTYPE</code>: Specifies the data type for the input. When compiling
     * for <code>ml_*</code> (except for <code>ml_inf</code>) instances using PyTorch
     * framework, provide the data type (dtype) of the model's input.
     * <code>"float32"</code> is used if <code>"DTYPE"</code> is not specified. Options
     * for data type are:</p> <ul> <li> <p>float32: Use either <code>"float"</code> or
     * <code>"float32"</code>.</p> </li> <li> <p>int64: Use either <code>"int64"</code>
     * or <code>"long"</code>.</p> </li> </ul> <p> For example, <code>{"dtype" :
     * "float32"}</code>.</p> </li> <li> <p> <code>CPU</code>: Compilation for CPU
     * supports the following compiler options.</p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul> </li> <li> <p> <code>ARM</code>:
     * Details of ARM CPU compilations.</p> <ul> <li> <p> <code>NEON</code>: NEON is an
     * implementation of the Advanced SIMD extension used in ARMv7 processors.</p>
     * <p>For example, add <code>{'mattr': ['+neon']}</code> to the compiler options if
     * compiling for ARM 32-bit platform with the NEON support.</p> </li> </ul> </li>
     * <li> <p> <code>NVIDIA</code>: Compilation for NVIDIA GPU supports the following
     * compiler options.</p> <ul> <li> <p> <code>gpu_code</code>: Specifies the
     * targeted architecture.</p> </li> <li> <p> <code>trt-ver</code>: Specifies the
     * TensorRT versions in x.y.z. format.</p> </li> <li> <p> <code>cuda-ver</code>:
     * Specifies the CUDA version in x.y format.</p> </li> </ul> <p>For example,
     * <code>{'gpu-code': 'sm_72', 'trt-ver': '6.0.1', 'cuda-ver': '10.1'}</code> </p>
     * </li> <li> <p> <code>ANDROID</code>: Compilation for the Android OS supports the
     * following compiler options:</p> <ul> <li> <p> <code>ANDROID_PLATFORM</code>:
     * Specifies the Android API levels. Available levels range from 21 to 29. For
     * example, <code>{'ANDROID_PLATFORM': 28}</code>.</p> </li> <li> <p>
     * <code>mattr</code>: Add <code>{'mattr': ['+neon']}</code> to compiler options if
     * compiling for ARM 32-bit platform with NEON support.</p> </li> </ul> </li> <li>
     * <p> <code>INFERENTIA</code>: Compilation for target ml_inf1 uses compiler
     * options passed in as a JSON string. For example, <code>"CompilerOptions":
     * "\"--verbose 1 --num-neuroncores 2 -O2\""</code>. </p> <p>For information about
     * supported compiler options, see <a
     * href="https://github.com/aws/aws-neuron-sdk/blob/master/docs/neuron-cc/command-line-reference.md">
     * Neuron Compiler CLI</a>. </p> </li> <li> <p> <code>CoreML</code>: Compilation
     * for the CoreML <a>OutputConfig$TargetDevice</a> supports the following compiler
     * options:</p> <ul> <li> <p> <code>class_labels</code>: Specifies the
     * classification labels file name inside input tar.gz file. For example,
     * <code>{"class_labels": "imagenet_labels_1000.txt"}</code>. Labels inside the txt
     * file should be separated by newlines.</p> </li> </ul> </li> <li> <p>
     * <code>EIA</code>: Compilation for the Elastic Inference Accelerator supports the
     * following compiler options:</p> <ul> <li> <p> <code>precision_mode</code>:
     * Specifies the precision of compiled artifacts. Supported values are
     * <code>"FP16"</code> and <code>"FP32"</code>. Default is <code>"FP32"</code>.</p>
     * </li> <li> <p> <code>signature_def_key</code>: Specifies the signature to use
     * for models in SavedModel format. Defaults is TensorFlow's default signature def
     * key.</p> </li> <li> <p> <code>output_names</code>: Specifies a list of output
     * tensor names for models in FrozenGraph format. Set at most one API field,
     * either: <code>signature_def_key</code> or <code>output_names</code>.</p> </li>
     * </ul> <p>For example: <code>{"precision_mode": "FP32", "output_names":
     * ["output:0"]}</code> </p> </li> </ul>
     */
    inline bool CompilerOptionsHasBeenSet() const { return m_compilerOptionsHasBeenSet; }

    /**
     * <p>Specifies additional parameters for compiler options in JSON format. The
     * compiler options are <code>TargetPlatform</code> specific. It is required for
     * NVIDIA accelerators and highly recommended for CPU compilations. For any other
     * cases, it is optional to specify <code>CompilerOptions.</code> </p> <ul> <li>
     * <p> <code>DTYPE</code>: Specifies the data type for the input. When compiling
     * for <code>ml_*</code> (except for <code>ml_inf</code>) instances using PyTorch
     * framework, provide the data type (dtype) of the model's input.
     * <code>"float32"</code> is used if <code>"DTYPE"</code> is not specified. Options
     * for data type are:</p> <ul> <li> <p>float32: Use either <code>"float"</code> or
     * <code>"float32"</code>.</p> </li> <li> <p>int64: Use either <code>"int64"</code>
     * or <code>"long"</code>.</p> </li> </ul> <p> For example, <code>{"dtype" :
     * "float32"}</code>.</p> </li> <li> <p> <code>CPU</code>: Compilation for CPU
     * supports the following compiler options.</p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul> </li> <li> <p> <code>ARM</code>:
     * Details of ARM CPU compilations.</p> <ul> <li> <p> <code>NEON</code>: NEON is an
     * implementation of the Advanced SIMD extension used in ARMv7 processors.</p>
     * <p>For example, add <code>{'mattr': ['+neon']}</code> to the compiler options if
     * compiling for ARM 32-bit platform with the NEON support.</p> </li> </ul> </li>
     * <li> <p> <code>NVIDIA</code>: Compilation for NVIDIA GPU supports the following
     * compiler options.</p> <ul> <li> <p> <code>gpu_code</code>: Specifies the
     * targeted architecture.</p> </li> <li> <p> <code>trt-ver</code>: Specifies the
     * TensorRT versions in x.y.z. format.</p> </li> <li> <p> <code>cuda-ver</code>:
     * Specifies the CUDA version in x.y format.</p> </li> </ul> <p>For example,
     * <code>{'gpu-code': 'sm_72', 'trt-ver': '6.0.1', 'cuda-ver': '10.1'}</code> </p>
     * </li> <li> <p> <code>ANDROID</code>: Compilation for the Android OS supports the
     * following compiler options:</p> <ul> <li> <p> <code>ANDROID_PLATFORM</code>:
     * Specifies the Android API levels. Available levels range from 21 to 29. For
     * example, <code>{'ANDROID_PLATFORM': 28}</code>.</p> </li> <li> <p>
     * <code>mattr</code>: Add <code>{'mattr': ['+neon']}</code> to compiler options if
     * compiling for ARM 32-bit platform with NEON support.</p> </li> </ul> </li> <li>
     * <p> <code>INFERENTIA</code>: Compilation for target ml_inf1 uses compiler
     * options passed in as a JSON string. For example, <code>"CompilerOptions":
     * "\"--verbose 1 --num-neuroncores 2 -O2\""</code>. </p> <p>For information about
     * supported compiler options, see <a
     * href="https://github.com/aws/aws-neuron-sdk/blob/master/docs/neuron-cc/command-line-reference.md">
     * Neuron Compiler CLI</a>. </p> </li> <li> <p> <code>CoreML</code>: Compilation
     * for the CoreML <a>OutputConfig$TargetDevice</a> supports the following compiler
     * options:</p> <ul> <li> <p> <code>class_labels</code>: Specifies the
     * classification labels file name inside input tar.gz file. For example,
     * <code>{"class_labels": "imagenet_labels_1000.txt"}</code>. Labels inside the txt
     * file should be separated by newlines.</p> </li> </ul> </li> <li> <p>
     * <code>EIA</code>: Compilation for the Elastic Inference Accelerator supports the
     * following compiler options:</p> <ul> <li> <p> <code>precision_mode</code>:
     * Specifies the precision of compiled artifacts. Supported values are
     * <code>"FP16"</code> and <code>"FP32"</code>. Default is <code>"FP32"</code>.</p>
     * </li> <li> <p> <code>signature_def_key</code>: Specifies the signature to use
     * for models in SavedModel format. Defaults is TensorFlow's default signature def
     * key.</p> </li> <li> <p> <code>output_names</code>: Specifies a list of output
     * tensor names for models in FrozenGraph format. Set at most one API field,
     * either: <code>signature_def_key</code> or <code>output_names</code>.</p> </li>
     * </ul> <p>For example: <code>{"precision_mode": "FP32", "output_names":
     * ["output:0"]}</code> </p> </li> </ul>
     */
    inline void SetCompilerOptions(const Aws::String& value) { m_compilerOptionsHasBeenSet = true; m_compilerOptions = value; }

    /**
     * <p>Specifies additional parameters for compiler options in JSON format. The
     * compiler options are <code>TargetPlatform</code> specific. It is required for
     * NVIDIA accelerators and highly recommended for CPU compilations. For any other
     * cases, it is optional to specify <code>CompilerOptions.</code> </p> <ul> <li>
     * <p> <code>DTYPE</code>: Specifies the data type for the input. When compiling
     * for <code>ml_*</code> (except for <code>ml_inf</code>) instances using PyTorch
     * framework, provide the data type (dtype) of the model's input.
     * <code>"float32"</code> is used if <code>"DTYPE"</code> is not specified. Options
     * for data type are:</p> <ul> <li> <p>float32: Use either <code>"float"</code> or
     * <code>"float32"</code>.</p> </li> <li> <p>int64: Use either <code>"int64"</code>
     * or <code>"long"</code>.</p> </li> </ul> <p> For example, <code>{"dtype" :
     * "float32"}</code>.</p> </li> <li> <p> <code>CPU</code>: Compilation for CPU
     * supports the following compiler options.</p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul> </li> <li> <p> <code>ARM</code>:
     * Details of ARM CPU compilations.</p> <ul> <li> <p> <code>NEON</code>: NEON is an
     * implementation of the Advanced SIMD extension used in ARMv7 processors.</p>
     * <p>For example, add <code>{'mattr': ['+neon']}</code> to the compiler options if
     * compiling for ARM 32-bit platform with the NEON support.</p> </li> </ul> </li>
     * <li> <p> <code>NVIDIA</code>: Compilation for NVIDIA GPU supports the following
     * compiler options.</p> <ul> <li> <p> <code>gpu_code</code>: Specifies the
     * targeted architecture.</p> </li> <li> <p> <code>trt-ver</code>: Specifies the
     * TensorRT versions in x.y.z. format.</p> </li> <li> <p> <code>cuda-ver</code>:
     * Specifies the CUDA version in x.y format.</p> </li> </ul> <p>For example,
     * <code>{'gpu-code': 'sm_72', 'trt-ver': '6.0.1', 'cuda-ver': '10.1'}</code> </p>
     * </li> <li> <p> <code>ANDROID</code>: Compilation for the Android OS supports the
     * following compiler options:</p> <ul> <li> <p> <code>ANDROID_PLATFORM</code>:
     * Specifies the Android API levels. Available levels range from 21 to 29. For
     * example, <code>{'ANDROID_PLATFORM': 28}</code>.</p> </li> <li> <p>
     * <code>mattr</code>: Add <code>{'mattr': ['+neon']}</code> to compiler options if
     * compiling for ARM 32-bit platform with NEON support.</p> </li> </ul> </li> <li>
     * <p> <code>INFERENTIA</code>: Compilation for target ml_inf1 uses compiler
     * options passed in as a JSON string. For example, <code>"CompilerOptions":
     * "\"--verbose 1 --num-neuroncores 2 -O2\""</code>. </p> <p>For information about
     * supported compiler options, see <a
     * href="https://github.com/aws/aws-neuron-sdk/blob/master/docs/neuron-cc/command-line-reference.md">
     * Neuron Compiler CLI</a>. </p> </li> <li> <p> <code>CoreML</code>: Compilation
     * for the CoreML <a>OutputConfig$TargetDevice</a> supports the following compiler
     * options:</p> <ul> <li> <p> <code>class_labels</code>: Specifies the
     * classification labels file name inside input tar.gz file. For example,
     * <code>{"class_labels": "imagenet_labels_1000.txt"}</code>. Labels inside the txt
     * file should be separated by newlines.</p> </li> </ul> </li> <li> <p>
     * <code>EIA</code>: Compilation for the Elastic Inference Accelerator supports the
     * following compiler options:</p> <ul> <li> <p> <code>precision_mode</code>:
     * Specifies the precision of compiled artifacts. Supported values are
     * <code>"FP16"</code> and <code>"FP32"</code>. Default is <code>"FP32"</code>.</p>
     * </li> <li> <p> <code>signature_def_key</code>: Specifies the signature to use
     * for models in SavedModel format. Defaults is TensorFlow's default signature def
     * key.</p> </li> <li> <p> <code>output_names</code>: Specifies a list of output
     * tensor names for models in FrozenGraph format. Set at most one API field,
     * either: <code>signature_def_key</code> or <code>output_names</code>.</p> </li>
     * </ul> <p>For example: <code>{"precision_mode": "FP32", "output_names":
     * ["output:0"]}</code> </p> </li> </ul>
     */
    inline void SetCompilerOptions(Aws::String&& value) { m_compilerOptionsHasBeenSet = true; m_compilerOptions = std::move(value); }

    /**
     * <p>Specifies additional parameters for compiler options in JSON format. The
     * compiler options are <code>TargetPlatform</code> specific. It is required for
     * NVIDIA accelerators and highly recommended for CPU compilations. For any other
     * cases, it is optional to specify <code>CompilerOptions.</code> </p> <ul> <li>
     * <p> <code>DTYPE</code>: Specifies the data type for the input. When compiling
     * for <code>ml_*</code> (except for <code>ml_inf</code>) instances using PyTorch
     * framework, provide the data type (dtype) of the model's input.
     * <code>"float32"</code> is used if <code>"DTYPE"</code> is not specified. Options
     * for data type are:</p> <ul> <li> <p>float32: Use either <code>"float"</code> or
     * <code>"float32"</code>.</p> </li> <li> <p>int64: Use either <code>"int64"</code>
     * or <code>"long"</code>.</p> </li> </ul> <p> For example, <code>{"dtype" :
     * "float32"}</code>.</p> </li> <li> <p> <code>CPU</code>: Compilation for CPU
     * supports the following compiler options.</p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul> </li> <li> <p> <code>ARM</code>:
     * Details of ARM CPU compilations.</p> <ul> <li> <p> <code>NEON</code>: NEON is an
     * implementation of the Advanced SIMD extension used in ARMv7 processors.</p>
     * <p>For example, add <code>{'mattr': ['+neon']}</code> to the compiler options if
     * compiling for ARM 32-bit platform with the NEON support.</p> </li> </ul> </li>
     * <li> <p> <code>NVIDIA</code>: Compilation for NVIDIA GPU supports the following
     * compiler options.</p> <ul> <li> <p> <code>gpu_code</code>: Specifies the
     * targeted architecture.</p> </li> <li> <p> <code>trt-ver</code>: Specifies the
     * TensorRT versions in x.y.z. format.</p> </li> <li> <p> <code>cuda-ver</code>:
     * Specifies the CUDA version in x.y format.</p> </li> </ul> <p>For example,
     * <code>{'gpu-code': 'sm_72', 'trt-ver': '6.0.1', 'cuda-ver': '10.1'}</code> </p>
     * </li> <li> <p> <code>ANDROID</code>: Compilation for the Android OS supports the
     * following compiler options:</p> <ul> <li> <p> <code>ANDROID_PLATFORM</code>:
     * Specifies the Android API levels. Available levels range from 21 to 29. For
     * example, <code>{'ANDROID_PLATFORM': 28}</code>.</p> </li> <li> <p>
     * <code>mattr</code>: Add <code>{'mattr': ['+neon']}</code> to compiler options if
     * compiling for ARM 32-bit platform with NEON support.</p> </li> </ul> </li> <li>
     * <p> <code>INFERENTIA</code>: Compilation for target ml_inf1 uses compiler
     * options passed in as a JSON string. For example, <code>"CompilerOptions":
     * "\"--verbose 1 --num-neuroncores 2 -O2\""</code>. </p> <p>For information about
     * supported compiler options, see <a
     * href="https://github.com/aws/aws-neuron-sdk/blob/master/docs/neuron-cc/command-line-reference.md">
     * Neuron Compiler CLI</a>. </p> </li> <li> <p> <code>CoreML</code>: Compilation
     * for the CoreML <a>OutputConfig$TargetDevice</a> supports the following compiler
     * options:</p> <ul> <li> <p> <code>class_labels</code>: Specifies the
     * classification labels file name inside input tar.gz file. For example,
     * <code>{"class_labels": "imagenet_labels_1000.txt"}</code>. Labels inside the txt
     * file should be separated by newlines.</p> </li> </ul> </li> <li> <p>
     * <code>EIA</code>: Compilation for the Elastic Inference Accelerator supports the
     * following compiler options:</p> <ul> <li> <p> <code>precision_mode</code>:
     * Specifies the precision of compiled artifacts. Supported values are
     * <code>"FP16"</code> and <code>"FP32"</code>. Default is <code>"FP32"</code>.</p>
     * </li> <li> <p> <code>signature_def_key</code>: Specifies the signature to use
     * for models in SavedModel format. Defaults is TensorFlow's default signature def
     * key.</p> </li> <li> <p> <code>output_names</code>: Specifies a list of output
     * tensor names for models in FrozenGraph format. Set at most one API field,
     * either: <code>signature_def_key</code> or <code>output_names</code>.</p> </li>
     * </ul> <p>For example: <code>{"precision_mode": "FP32", "output_names":
     * ["output:0"]}</code> </p> </li> </ul>
     */
    inline void SetCompilerOptions(const char* value) { m_compilerOptionsHasBeenSet = true; m_compilerOptions.assign(value); }

    /**
     * <p>Specifies additional parameters for compiler options in JSON format. The
     * compiler options are <code>TargetPlatform</code> specific. It is required for
     * NVIDIA accelerators and highly recommended for CPU compilations. For any other
     * cases, it is optional to specify <code>CompilerOptions.</code> </p> <ul> <li>
     * <p> <code>DTYPE</code>: Specifies the data type for the input. When compiling
     * for <code>ml_*</code> (except for <code>ml_inf</code>) instances using PyTorch
     * framework, provide the data type (dtype) of the model's input.
     * <code>"float32"</code> is used if <code>"DTYPE"</code> is not specified. Options
     * for data type are:</p> <ul> <li> <p>float32: Use either <code>"float"</code> or
     * <code>"float32"</code>.</p> </li> <li> <p>int64: Use either <code>"int64"</code>
     * or <code>"long"</code>.</p> </li> </ul> <p> For example, <code>{"dtype" :
     * "float32"}</code>.</p> </li> <li> <p> <code>CPU</code>: Compilation for CPU
     * supports the following compiler options.</p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul> </li> <li> <p> <code>ARM</code>:
     * Details of ARM CPU compilations.</p> <ul> <li> <p> <code>NEON</code>: NEON is an
     * implementation of the Advanced SIMD extension used in ARMv7 processors.</p>
     * <p>For example, add <code>{'mattr': ['+neon']}</code> to the compiler options if
     * compiling for ARM 32-bit platform with the NEON support.</p> </li> </ul> </li>
     * <li> <p> <code>NVIDIA</code>: Compilation for NVIDIA GPU supports the following
     * compiler options.</p> <ul> <li> <p> <code>gpu_code</code>: Specifies the
     * targeted architecture.</p> </li> <li> <p> <code>trt-ver</code>: Specifies the
     * TensorRT versions in x.y.z. format.</p> </li> <li> <p> <code>cuda-ver</code>:
     * Specifies the CUDA version in x.y format.</p> </li> </ul> <p>For example,
     * <code>{'gpu-code': 'sm_72', 'trt-ver': '6.0.1', 'cuda-ver': '10.1'}</code> </p>
     * </li> <li> <p> <code>ANDROID</code>: Compilation for the Android OS supports the
     * following compiler options:</p> <ul> <li> <p> <code>ANDROID_PLATFORM</code>:
     * Specifies the Android API levels. Available levels range from 21 to 29. For
     * example, <code>{'ANDROID_PLATFORM': 28}</code>.</p> </li> <li> <p>
     * <code>mattr</code>: Add <code>{'mattr': ['+neon']}</code> to compiler options if
     * compiling for ARM 32-bit platform with NEON support.</p> </li> </ul> </li> <li>
     * <p> <code>INFERENTIA</code>: Compilation for target ml_inf1 uses compiler
     * options passed in as a JSON string. For example, <code>"CompilerOptions":
     * "\"--verbose 1 --num-neuroncores 2 -O2\""</code>. </p> <p>For information about
     * supported compiler options, see <a
     * href="https://github.com/aws/aws-neuron-sdk/blob/master/docs/neuron-cc/command-line-reference.md">
     * Neuron Compiler CLI</a>. </p> </li> <li> <p> <code>CoreML</code>: Compilation
     * for the CoreML <a>OutputConfig$TargetDevice</a> supports the following compiler
     * options:</p> <ul> <li> <p> <code>class_labels</code>: Specifies the
     * classification labels file name inside input tar.gz file. For example,
     * <code>{"class_labels": "imagenet_labels_1000.txt"}</code>. Labels inside the txt
     * file should be separated by newlines.</p> </li> </ul> </li> <li> <p>
     * <code>EIA</code>: Compilation for the Elastic Inference Accelerator supports the
     * following compiler options:</p> <ul> <li> <p> <code>precision_mode</code>:
     * Specifies the precision of compiled artifacts. Supported values are
     * <code>"FP16"</code> and <code>"FP32"</code>. Default is <code>"FP32"</code>.</p>
     * </li> <li> <p> <code>signature_def_key</code>: Specifies the signature to use
     * for models in SavedModel format. Defaults is TensorFlow's default signature def
     * key.</p> </li> <li> <p> <code>output_names</code>: Specifies a list of output
     * tensor names for models in FrozenGraph format. Set at most one API field,
     * either: <code>signature_def_key</code> or <code>output_names</code>.</p> </li>
     * </ul> <p>For example: <code>{"precision_mode": "FP32", "output_names":
     * ["output:0"]}</code> </p> </li> </ul>
     */
    inline OutputConfig& WithCompilerOptions(const Aws::String& value) { SetCompilerOptions(value); return *this;}

    /**
     * <p>Specifies additional parameters for compiler options in JSON format. The
     * compiler options are <code>TargetPlatform</code> specific. It is required for
     * NVIDIA accelerators and highly recommended for CPU compilations. For any other
     * cases, it is optional to specify <code>CompilerOptions.</code> </p> <ul> <li>
     * <p> <code>DTYPE</code>: Specifies the data type for the input. When compiling
     * for <code>ml_*</code> (except for <code>ml_inf</code>) instances using PyTorch
     * framework, provide the data type (dtype) of the model's input.
     * <code>"float32"</code> is used if <code>"DTYPE"</code> is not specified. Options
     * for data type are:</p> <ul> <li> <p>float32: Use either <code>"float"</code> or
     * <code>"float32"</code>.</p> </li> <li> <p>int64: Use either <code>"int64"</code>
     * or <code>"long"</code>.</p> </li> </ul> <p> For example, <code>{"dtype" :
     * "float32"}</code>.</p> </li> <li> <p> <code>CPU</code>: Compilation for CPU
     * supports the following compiler options.</p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul> </li> <li> <p> <code>ARM</code>:
     * Details of ARM CPU compilations.</p> <ul> <li> <p> <code>NEON</code>: NEON is an
     * implementation of the Advanced SIMD extension used in ARMv7 processors.</p>
     * <p>For example, add <code>{'mattr': ['+neon']}</code> to the compiler options if
     * compiling for ARM 32-bit platform with the NEON support.</p> </li> </ul> </li>
     * <li> <p> <code>NVIDIA</code>: Compilation for NVIDIA GPU supports the following
     * compiler options.</p> <ul> <li> <p> <code>gpu_code</code>: Specifies the
     * targeted architecture.</p> </li> <li> <p> <code>trt-ver</code>: Specifies the
     * TensorRT versions in x.y.z. format.</p> </li> <li> <p> <code>cuda-ver</code>:
     * Specifies the CUDA version in x.y format.</p> </li> </ul> <p>For example,
     * <code>{'gpu-code': 'sm_72', 'trt-ver': '6.0.1', 'cuda-ver': '10.1'}</code> </p>
     * </li> <li> <p> <code>ANDROID</code>: Compilation for the Android OS supports the
     * following compiler options:</p> <ul> <li> <p> <code>ANDROID_PLATFORM</code>:
     * Specifies the Android API levels. Available levels range from 21 to 29. For
     * example, <code>{'ANDROID_PLATFORM': 28}</code>.</p> </li> <li> <p>
     * <code>mattr</code>: Add <code>{'mattr': ['+neon']}</code> to compiler options if
     * compiling for ARM 32-bit platform with NEON support.</p> </li> </ul> </li> <li>
     * <p> <code>INFERENTIA</code>: Compilation for target ml_inf1 uses compiler
     * options passed in as a JSON string. For example, <code>"CompilerOptions":
     * "\"--verbose 1 --num-neuroncores 2 -O2\""</code>. </p> <p>For information about
     * supported compiler options, see <a
     * href="https://github.com/aws/aws-neuron-sdk/blob/master/docs/neuron-cc/command-line-reference.md">
     * Neuron Compiler CLI</a>. </p> </li> <li> <p> <code>CoreML</code>: Compilation
     * for the CoreML <a>OutputConfig$TargetDevice</a> supports the following compiler
     * options:</p> <ul> <li> <p> <code>class_labels</code>: Specifies the
     * classification labels file name inside input tar.gz file. For example,
     * <code>{"class_labels": "imagenet_labels_1000.txt"}</code>. Labels inside the txt
     * file should be separated by newlines.</p> </li> </ul> </li> <li> <p>
     * <code>EIA</code>: Compilation for the Elastic Inference Accelerator supports the
     * following compiler options:</p> <ul> <li> <p> <code>precision_mode</code>:
     * Specifies the precision of compiled artifacts. Supported values are
     * <code>"FP16"</code> and <code>"FP32"</code>. Default is <code>"FP32"</code>.</p>
     * </li> <li> <p> <code>signature_def_key</code>: Specifies the signature to use
     * for models in SavedModel format. Defaults is TensorFlow's default signature def
     * key.</p> </li> <li> <p> <code>output_names</code>: Specifies a list of output
     * tensor names for models in FrozenGraph format. Set at most one API field,
     * either: <code>signature_def_key</code> or <code>output_names</code>.</p> </li>
     * </ul> <p>For example: <code>{"precision_mode": "FP32", "output_names":
     * ["output:0"]}</code> </p> </li> </ul>
     */
    inline OutputConfig& WithCompilerOptions(Aws::String&& value) { SetCompilerOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies additional parameters for compiler options in JSON format. The
     * compiler options are <code>TargetPlatform</code> specific. It is required for
     * NVIDIA accelerators and highly recommended for CPU compilations. For any other
     * cases, it is optional to specify <code>CompilerOptions.</code> </p> <ul> <li>
     * <p> <code>DTYPE</code>: Specifies the data type for the input. When compiling
     * for <code>ml_*</code> (except for <code>ml_inf</code>) instances using PyTorch
     * framework, provide the data type (dtype) of the model's input.
     * <code>"float32"</code> is used if <code>"DTYPE"</code> is not specified. Options
     * for data type are:</p> <ul> <li> <p>float32: Use either <code>"float"</code> or
     * <code>"float32"</code>.</p> </li> <li> <p>int64: Use either <code>"int64"</code>
     * or <code>"long"</code>.</p> </li> </ul> <p> For example, <code>{"dtype" :
     * "float32"}</code>.</p> </li> <li> <p> <code>CPU</code>: Compilation for CPU
     * supports the following compiler options.</p> <ul> <li> <p> <code>mcpu</code>:
     * CPU micro-architecture. For example, <code>{'mcpu': 'skylake-avx512'}</code>
     * </p> </li> <li> <p> <code>mattr</code>: CPU flags. For example, <code>{'mattr':
     * ['+neon', '+vfpv4']}</code> </p> </li> </ul> </li> <li> <p> <code>ARM</code>:
     * Details of ARM CPU compilations.</p> <ul> <li> <p> <code>NEON</code>: NEON is an
     * implementation of the Advanced SIMD extension used in ARMv7 processors.</p>
     * <p>For example, add <code>{'mattr': ['+neon']}</code> to the compiler options if
     * compiling for ARM 32-bit platform with the NEON support.</p> </li> </ul> </li>
     * <li> <p> <code>NVIDIA</code>: Compilation for NVIDIA GPU supports the following
     * compiler options.</p> <ul> <li> <p> <code>gpu_code</code>: Specifies the
     * targeted architecture.</p> </li> <li> <p> <code>trt-ver</code>: Specifies the
     * TensorRT versions in x.y.z. format.</p> </li> <li> <p> <code>cuda-ver</code>:
     * Specifies the CUDA version in x.y format.</p> </li> </ul> <p>For example,
     * <code>{'gpu-code': 'sm_72', 'trt-ver': '6.0.1', 'cuda-ver': '10.1'}</code> </p>
     * </li> <li> <p> <code>ANDROID</code>: Compilation for the Android OS supports the
     * following compiler options:</p> <ul> <li> <p> <code>ANDROID_PLATFORM</code>:
     * Specifies the Android API levels. Available levels range from 21 to 29. For
     * example, <code>{'ANDROID_PLATFORM': 28}</code>.</p> </li> <li> <p>
     * <code>mattr</code>: Add <code>{'mattr': ['+neon']}</code> to compiler options if
     * compiling for ARM 32-bit platform with NEON support.</p> </li> </ul> </li> <li>
     * <p> <code>INFERENTIA</code>: Compilation for target ml_inf1 uses compiler
     * options passed in as a JSON string. For example, <code>"CompilerOptions":
     * "\"--verbose 1 --num-neuroncores 2 -O2\""</code>. </p> <p>For information about
     * supported compiler options, see <a
     * href="https://github.com/aws/aws-neuron-sdk/blob/master/docs/neuron-cc/command-line-reference.md">
     * Neuron Compiler CLI</a>. </p> </li> <li> <p> <code>CoreML</code>: Compilation
     * for the CoreML <a>OutputConfig$TargetDevice</a> supports the following compiler
     * options:</p> <ul> <li> <p> <code>class_labels</code>: Specifies the
     * classification labels file name inside input tar.gz file. For example,
     * <code>{"class_labels": "imagenet_labels_1000.txt"}</code>. Labels inside the txt
     * file should be separated by newlines.</p> </li> </ul> </li> <li> <p>
     * <code>EIA</code>: Compilation for the Elastic Inference Accelerator supports the
     * following compiler options:</p> <ul> <li> <p> <code>precision_mode</code>:
     * Specifies the precision of compiled artifacts. Supported values are
     * <code>"FP16"</code> and <code>"FP32"</code>. Default is <code>"FP32"</code>.</p>
     * </li> <li> <p> <code>signature_def_key</code>: Specifies the signature to use
     * for models in SavedModel format. Defaults is TensorFlow's default signature def
     * key.</p> </li> <li> <p> <code>output_names</code>: Specifies a list of output
     * tensor names for models in FrozenGraph format. Set at most one API field,
     * either: <code>signature_def_key</code> or <code>output_names</code>.</p> </li>
     * </ul> <p>For example: <code>{"precision_mode": "FP32", "output_names":
     * ["output:0"]}</code> </p> </li> </ul>
     */
    inline OutputConfig& WithCompilerOptions(const char* value) { SetCompilerOptions(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management Service key (Amazon Web Services KMS)
     * that Amazon SageMaker uses to encrypt your output models with Amazon S3
     * server-side encryption after compilation job. If you don't provide a KMS key ID,
     * Amazon SageMaker uses the default KMS key for Amazon S3 for your role's account.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service key (Amazon Web Services KMS)
     * that Amazon SageMaker uses to encrypt your output models with Amazon S3
     * server-side encryption after compilation job. If you don't provide a KMS key ID,
     * Amazon SageMaker uses the default KMS key for Amazon S3 for your role's account.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service key (Amazon Web Services KMS)
     * that Amazon SageMaker uses to encrypt your output models with Amazon S3
     * server-side encryption after compilation job. If you don't provide a KMS key ID,
     * Amazon SageMaker uses the default KMS key for Amazon S3 for your role's account.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service key (Amazon Web Services KMS)
     * that Amazon SageMaker uses to encrypt your output models with Amazon S3
     * server-side encryption after compilation job. If you don't provide a KMS key ID,
     * Amazon SageMaker uses the default KMS key for Amazon S3 for your role's account.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service key (Amazon Web Services KMS)
     * that Amazon SageMaker uses to encrypt your output models with Amazon S3
     * server-side encryption after compilation job. If you don't provide a KMS key ID,
     * Amazon SageMaker uses the default KMS key for Amazon S3 for your role's account.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service key (Amazon Web Services KMS)
     * that Amazon SageMaker uses to encrypt your output models with Amazon S3
     * server-side encryption after compilation job. If you don't provide a KMS key ID,
     * Amazon SageMaker uses the default KMS key for Amazon S3 for your role's account.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline OutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service key (Amazon Web Services KMS)
     * that Amazon SageMaker uses to encrypt your output models with Amazon S3
     * server-side encryption after compilation job. If you don't provide a KMS key ID,
     * Amazon SageMaker uses the default KMS key for Amazon S3 for your role's account.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline OutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service key (Amazon Web Services KMS)
     * that Amazon SageMaker uses to encrypt your output models with Amazon S3
     * server-side encryption after compilation job. If you don't provide a KMS key ID,
     * Amazon SageMaker uses the default KMS key for Amazon S3 for your role's account.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KmsKeyId can be any of the following formats: </p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline OutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_s3OutputLocation;
    bool m_s3OutputLocationHasBeenSet = false;

    TargetDevice m_targetDevice;
    bool m_targetDeviceHasBeenSet = false;

    TargetPlatform m_targetPlatform;
    bool m_targetPlatformHasBeenSet = false;

    Aws::String m_compilerOptions;
    bool m_compilerOptionsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
