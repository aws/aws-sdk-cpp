/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MonitoringClusterConfig.h>
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
   * <p>Identifies the resources to deploy for a monitoring job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringResources">AWS
   * API Reference</a></p>
   */
  class MonitoringResources
  {
  public:
    AWS_SAGEMAKER_API MonitoringResources() = default;
    AWS_SAGEMAKER_API MonitoringResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the cluster resources used to run the processing
     * job.</p>
     */
    inline const MonitoringClusterConfig& GetClusterConfig() const { return m_clusterConfig; }
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }
    template<typename ClusterConfigT = MonitoringClusterConfig>
    void SetClusterConfig(ClusterConfigT&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::forward<ClusterConfigT>(value); }
    template<typename ClusterConfigT = MonitoringClusterConfig>
    MonitoringResources& WithClusterConfig(ClusterConfigT&& value) { SetClusterConfig(std::forward<ClusterConfigT>(value)); return *this;}
    ///@}
  private:

    MonitoringClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
