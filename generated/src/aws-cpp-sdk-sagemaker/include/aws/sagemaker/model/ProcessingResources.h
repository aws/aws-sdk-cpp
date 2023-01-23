/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ProcessingClusterConfig.h>
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
   * <p>Identifies the resources, ML compute instances, and ML storage volumes to
   * deploy for a processing job. In distributed training, you specify more than one
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingResources">AWS
   * API Reference</a></p>
   */
  class ProcessingResources
  {
  public:
    AWS_SAGEMAKER_API ProcessingResources();
    AWS_SAGEMAKER_API ProcessingResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the resources in a cluster used to run the processing
     * job.</p>
     */
    inline const ProcessingClusterConfig& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>The configuration for the resources in a cluster used to run the processing
     * job.</p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>The configuration for the resources in a cluster used to run the processing
     * job.</p>
     */
    inline void SetClusterConfig(const ProcessingClusterConfig& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>The configuration for the resources in a cluster used to run the processing
     * job.</p>
     */
    inline void SetClusterConfig(ProcessingClusterConfig&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>The configuration for the resources in a cluster used to run the processing
     * job.</p>
     */
    inline ProcessingResources& WithClusterConfig(const ProcessingClusterConfig& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>The configuration for the resources in a cluster used to run the processing
     * job.</p>
     */
    inline ProcessingResources& WithClusterConfig(ProcessingClusterConfig&& value) { SetClusterConfig(std::move(value)); return *this;}

  private:

    ProcessingClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
