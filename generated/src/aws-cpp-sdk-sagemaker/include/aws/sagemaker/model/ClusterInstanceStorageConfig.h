/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterEbsVolumeConfig.h>
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
   * <p>Defines the configuration for attaching additional storage to the instances
   * in the SageMaker HyperPod cluster instance group. To learn more, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod-release-notes.html#sagemaker-hyperpod-release-notes-20240620">SageMaker
   * HyperPod release notes: June 20, 2024</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceStorageConfig">AWS
   * API Reference</a></p>
   */
  class ClusterInstanceStorageConfig
  {
  public:
    AWS_SAGEMAKER_API ClusterInstanceStorageConfig();
    AWS_SAGEMAKER_API ClusterInstanceStorageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterInstanceStorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the configuration for attaching additional Amazon Elastic Block Store
     * (EBS) volumes to the instances in the SageMaker HyperPod cluster instance group.
     * The additional EBS volume is attached to each instance within the SageMaker
     * HyperPod cluster instance group and mounted to <code>/opt/sagemaker</code>.</p>
     */
    inline const ClusterEbsVolumeConfig& GetEbsVolumeConfig() const{ return m_ebsVolumeConfig; }
    inline bool EbsVolumeConfigHasBeenSet() const { return m_ebsVolumeConfigHasBeenSet; }
    inline void SetEbsVolumeConfig(const ClusterEbsVolumeConfig& value) { m_ebsVolumeConfigHasBeenSet = true; m_ebsVolumeConfig = value; }
    inline void SetEbsVolumeConfig(ClusterEbsVolumeConfig&& value) { m_ebsVolumeConfigHasBeenSet = true; m_ebsVolumeConfig = std::move(value); }
    inline ClusterInstanceStorageConfig& WithEbsVolumeConfig(const ClusterEbsVolumeConfig& value) { SetEbsVolumeConfig(value); return *this;}
    inline ClusterInstanceStorageConfig& WithEbsVolumeConfig(ClusterEbsVolumeConfig&& value) { SetEbsVolumeConfig(std::move(value)); return *this;}
    ///@}
  private:

    ClusterEbsVolumeConfig m_ebsVolumeConfig;
    bool m_ebsVolumeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
