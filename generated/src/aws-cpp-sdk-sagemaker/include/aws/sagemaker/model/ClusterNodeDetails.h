/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterInstanceStatusDetails.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ClusterLifeCycleConfig.h>
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
   * <p>Details of an instance (also called a <i>node</i> interchangeably) in a
   * SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterNodeDetails">AWS
   * API Reference</a></p>
   */
  class ClusterNodeDetails
  {
  public:
    AWS_SAGEMAKER_API ClusterNodeDetails();
    AWS_SAGEMAKER_API ClusterNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const{ return m_instanceGroupName; }

    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }

    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline void SetInstanceGroupName(const Aws::String& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = value; }

    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline void SetInstanceGroupName(Aws::String&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::move(value); }

    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline void SetInstanceGroupName(const char* value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName.assign(value); }

    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline ClusterNodeDetails& WithInstanceGroupName(const Aws::String& value) { SetInstanceGroupName(value); return *this;}

    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline ClusterNodeDetails& WithInstanceGroupName(Aws::String&& value) { SetInstanceGroupName(std::move(value)); return *this;}

    /**
     * <p>The instance group name in which the instance is.</p>
     */
    inline ClusterNodeDetails& WithInstanceGroupName(const char* value) { SetInstanceGroupName(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline ClusterNodeDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ClusterNodeDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ClusterNodeDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The status of the instance.</p>
     */
    inline const ClusterInstanceStatusDetails& GetInstanceStatus() const{ return m_instanceStatus; }

    /**
     * <p>The status of the instance.</p>
     */
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }

    /**
     * <p>The status of the instance.</p>
     */
    inline void SetInstanceStatus(const ClusterInstanceStatusDetails& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }

    /**
     * <p>The status of the instance.</p>
     */
    inline void SetInstanceStatus(ClusterInstanceStatusDetails&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::move(value); }

    /**
     * <p>The status of the instance.</p>
     */
    inline ClusterNodeDetails& WithInstanceStatus(const ClusterInstanceStatusDetails& value) { SetInstanceStatus(value); return *this;}

    /**
     * <p>The status of the instance.</p>
     */
    inline ClusterNodeDetails& WithInstanceStatus(ClusterInstanceStatusDetails&& value) { SetInstanceStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the instance.</p>
     */
    inline const ClusterInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of the instance.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of the instance.</p>
     */
    inline void SetInstanceType(const ClusterInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of the instance.</p>
     */
    inline void SetInstanceType(ClusterInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of the instance.</p>
     */
    inline ClusterNodeDetails& WithInstanceType(const ClusterInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of the instance.</p>
     */
    inline ClusterNodeDetails& WithInstanceType(ClusterInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The time when the instance is launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }

    /**
     * <p>The time when the instance is launched.</p>
     */
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }

    /**
     * <p>The time when the instance is launched.</p>
     */
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }

    /**
     * <p>The time when the instance is launched.</p>
     */
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }

    /**
     * <p>The time when the instance is launched.</p>
     */
    inline ClusterNodeDetails& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}

    /**
     * <p>The time when the instance is launched.</p>
     */
    inline ClusterNodeDetails& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}


    /**
     * <p>The LifeCycle configuration applied to the instance.</p>
     */
    inline const ClusterLifeCycleConfig& GetLifeCycleConfig() const{ return m_lifeCycleConfig; }

    /**
     * <p>The LifeCycle configuration applied to the instance.</p>
     */
    inline bool LifeCycleConfigHasBeenSet() const { return m_lifeCycleConfigHasBeenSet; }

    /**
     * <p>The LifeCycle configuration applied to the instance.</p>
     */
    inline void SetLifeCycleConfig(const ClusterLifeCycleConfig& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = value; }

    /**
     * <p>The LifeCycle configuration applied to the instance.</p>
     */
    inline void SetLifeCycleConfig(ClusterLifeCycleConfig&& value) { m_lifeCycleConfigHasBeenSet = true; m_lifeCycleConfig = std::move(value); }

    /**
     * <p>The LifeCycle configuration applied to the instance.</p>
     */
    inline ClusterNodeDetails& WithLifeCycleConfig(const ClusterLifeCycleConfig& value) { SetLifeCycleConfig(value); return *this;}

    /**
     * <p>The LifeCycle configuration applied to the instance.</p>
     */
    inline ClusterNodeDetails& WithLifeCycleConfig(ClusterLifeCycleConfig&& value) { SetLifeCycleConfig(std::move(value)); return *this;}


    /**
     * <p>The number of threads per CPU core you specified under
     * <code>CreateCluster</code>.</p>
     */
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }

    /**
     * <p>The number of threads per CPU core you specified under
     * <code>CreateCluster</code>.</p>
     */
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }

    /**
     * <p>The number of threads per CPU core you specified under
     * <code>CreateCluster</code>.</p>
     */
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }

    /**
     * <p>The number of threads per CPU core you specified under
     * <code>CreateCluster</code>.</p>
     */
    inline ClusterNodeDetails& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}

  private:

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ClusterInstanceStatusDetails m_instanceStatus;
    bool m_instanceStatusHasBeenSet = false;

    ClusterInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    ClusterLifeCycleConfig m_lifeCycleConfig;
    bool m_lifeCycleConfigHasBeenSet = false;

    int m_threadsPerCore;
    bool m_threadsPerCoreHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
