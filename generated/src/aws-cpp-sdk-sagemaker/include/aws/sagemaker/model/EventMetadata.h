/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterMetadata.h>
#include <aws/sagemaker/model/InstanceGroupMetadata.h>
#include <aws/sagemaker/model/InstanceGroupScalingMetadata.h>
#include <aws/sagemaker/model/InstanceMetadata.h>
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
   * <p>Metadata associated with a cluster event, which may include details about
   * various resource types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EventMetadata">AWS
   * API Reference</a></p>
   */
  class EventMetadata
  {
  public:
    AWS_SAGEMAKER_API EventMetadata() = default;
    AWS_SAGEMAKER_API EventMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EventMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Metadata specific to cluster-level events.</p>
     */
    inline const ClusterMetadata& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = ClusterMetadata>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = ClusterMetadata>
    EventMetadata& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata specific to instance group-level events.</p>
     */
    inline const InstanceGroupMetadata& GetInstanceGroup() const { return m_instanceGroup; }
    inline bool InstanceGroupHasBeenSet() const { return m_instanceGroupHasBeenSet; }
    template<typename InstanceGroupT = InstanceGroupMetadata>
    void SetInstanceGroup(InstanceGroupT&& value) { m_instanceGroupHasBeenSet = true; m_instanceGroup = std::forward<InstanceGroupT>(value); }
    template<typename InstanceGroupT = InstanceGroupMetadata>
    EventMetadata& WithInstanceGroup(InstanceGroupT&& value) { SetInstanceGroup(std::forward<InstanceGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to instance group scaling events.</p>
     */
    inline const InstanceGroupScalingMetadata& GetInstanceGroupScaling() const { return m_instanceGroupScaling; }
    inline bool InstanceGroupScalingHasBeenSet() const { return m_instanceGroupScalingHasBeenSet; }
    template<typename InstanceGroupScalingT = InstanceGroupScalingMetadata>
    void SetInstanceGroupScaling(InstanceGroupScalingT&& value) { m_instanceGroupScalingHasBeenSet = true; m_instanceGroupScaling = std::forward<InstanceGroupScalingT>(value); }
    template<typename InstanceGroupScalingT = InstanceGroupScalingMetadata>
    EventMetadata& WithInstanceGroupScaling(InstanceGroupScalingT&& value) { SetInstanceGroupScaling(std::forward<InstanceGroupScalingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata specific to instance-level events.</p>
     */
    inline const InstanceMetadata& GetInstance() const { return m_instance; }
    inline bool InstanceHasBeenSet() const { return m_instanceHasBeenSet; }
    template<typename InstanceT = InstanceMetadata>
    void SetInstance(InstanceT&& value) { m_instanceHasBeenSet = true; m_instance = std::forward<InstanceT>(value); }
    template<typename InstanceT = InstanceMetadata>
    EventMetadata& WithInstance(InstanceT&& value) { SetInstance(std::forward<InstanceT>(value)); return *this;}
    ///@}
  private:

    ClusterMetadata m_cluster;
    bool m_clusterHasBeenSet = false;

    InstanceGroupMetadata m_instanceGroup;
    bool m_instanceGroupHasBeenSet = false;

    InstanceGroupScalingMetadata m_instanceGroupScaling;
    bool m_instanceGroupScalingHasBeenSet = false;

    InstanceMetadata m_instance;
    bool m_instanceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
