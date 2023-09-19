/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ProcessingInstanceType.h>
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
   * <p>Configuration for the cluster used to run model monitoring
   * jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringClusterConfig">AWS
   * API Reference</a></p>
   */
  class MonitoringClusterConfig
  {
  public:
    AWS_SAGEMAKER_API MonitoringClusterConfig();
    AWS_SAGEMAKER_API MonitoringClusterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringClusterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of ML compute instances to use in the model monitoring job. For
     * distributed processing jobs, specify a value greater than 1. The default value
     * is 1.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of ML compute instances to use in the model monitoring job. For
     * distributed processing jobs, specify a value greater than 1. The default value
     * is 1.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of ML compute instances to use in the model monitoring job. For
     * distributed processing jobs, specify a value greater than 1. The default value
     * is 1.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of ML compute instances to use in the model monitoring job. For
     * distributed processing jobs, specify a value greater than 1. The default value
     * is 1.</p>
     */
    inline MonitoringClusterConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline const ProcessingInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline void SetInstanceType(const ProcessingInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline void SetInstanceType(ProcessingInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline MonitoringClusterConfig& WithInstanceType(const ProcessingInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The ML compute instance type for the processing job.</p>
     */
    inline MonitoringClusterConfig& WithInstanceType(ProcessingInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The size of the ML storage volume, in gigabytes, that you want to provision.
     * You must specify sufficient ML storage for your scenario.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }

    /**
     * <p>The size of the ML storage volume, in gigabytes, that you want to provision.
     * You must specify sufficient ML storage for your scenario.</p>
     */
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }

    /**
     * <p>The size of the ML storage volume, in gigabytes, that you want to provision.
     * You must specify sufficient ML storage for your scenario.</p>
     */
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }

    /**
     * <p>The size of the ML storage volume, in gigabytes, that you want to provision.
     * You must specify sufficient ML storage for your scenario.</p>
     */
    inline MonitoringClusterConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the model monitoring job.</p>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the model monitoring job.</p>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the model monitoring job.</p>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the model monitoring job.</p>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the model monitoring job.</p>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the model monitoring job.</p>
     */
    inline MonitoringClusterConfig& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the model monitoring job.</p>
     */
    inline MonitoringClusterConfig& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance(s) that run the model monitoring job.</p>
     */
    inline MonitoringClusterConfig& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    ProcessingInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
