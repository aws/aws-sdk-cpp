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
   * <p>Defines the configuration for attaching an additional Amazon Elastic Block
   * Store (EBS) volume to each instance of the SageMaker HyperPod cluster instance
   * group. To learn more, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod-release-notes.html#sagemaker-hyperpod-release-notes-20240620">SageMaker
   * HyperPod release notes: June 20, 2024</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterEbsVolumeConfig">AWS
   * API Reference</a></p>
   */
  class ClusterEbsVolumeConfig
  {
  public:
    AWS_SAGEMAKER_API ClusterEbsVolumeConfig();
    AWS_SAGEMAKER_API ClusterEbsVolumeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterEbsVolumeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size in gigabytes (GB) of the additional EBS volume to be attached to the
     * instances in the SageMaker HyperPod cluster instance group. The additional EBS
     * volume is attached to each instance within the SageMaker HyperPod cluster
     * instance group and mounted to <code>/opt/sagemaker</code>.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline ClusterEbsVolumeConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}
  private:

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
