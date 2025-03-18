﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ClusterInstanceStatusDetails.h>
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
   * <p>Lists a summary of the properties of an instance (also called a <i>node</i>
   * interchangeably) of a SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterNodeSummary">AWS
   * API Reference</a></p>
   */
  class ClusterNodeSummary
  {
  public:
    AWS_SAGEMAKER_API ClusterNodeSummary() = default;
    AWS_SAGEMAKER_API ClusterNodeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterNodeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the instance group in which the instance is.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    ClusterNodeSummary& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ClusterNodeSummary& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the instance.</p>
     */
    inline ClusterInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ClusterInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ClusterNodeSummary& WithInstanceType(ClusterInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the instance is launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const { return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    void SetLaunchTime(LaunchTimeT&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::forward<LaunchTimeT>(value); }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    ClusterNodeSummary& WithLaunchTime(LaunchTimeT&& value) { SetLaunchTime(std::forward<LaunchTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the instance.</p>
     */
    inline const ClusterInstanceStatusDetails& GetInstanceStatus() const { return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    template<typename InstanceStatusT = ClusterInstanceStatusDetails>
    void SetInstanceStatus(InstanceStatusT&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::forward<InstanceStatusT>(value); }
    template<typename InstanceStatusT = ClusterInstanceStatusDetails>
    ClusterNodeSummary& WithInstanceStatus(InstanceStatusT&& value) { SetInstanceStatus(std::forward<InstanceStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ClusterInstanceType m_instanceType{ClusterInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime{};
    bool m_launchTimeHasBeenSet = false;

    ClusterInstanceStatusDetails m_instanceStatus;
    bool m_instanceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
