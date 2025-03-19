/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/TaskCredentials.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a task scheduled during an execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TaskScheduledEventDetails">AWS
   * API Reference</a></p>
   */
  class TaskScheduledEventDetails
  {
  public:
    AWS_SFN_API TaskScheduledEventDetails() = default;
    AWS_SFN_API TaskScheduledEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API TaskScheduledEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    TaskScheduledEventDetails& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    TaskScheduledEventDetails& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region of the scheduled task</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    TaskScheduledEventDetails& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON data passed to the resource referenced in a task state. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    TaskScheduledEventDetails& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed duration of the task.</p>
     */
    inline long long GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(long long value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline TaskScheduledEventDetails& WithTimeoutInSeconds(long long value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed duration between two heartbeats for the task.</p>
     */
    inline long long GetHeartbeatInSeconds() const { return m_heartbeatInSeconds; }
    inline bool HeartbeatInSecondsHasBeenSet() const { return m_heartbeatInSecondsHasBeenSet; }
    inline void SetHeartbeatInSeconds(long long value) { m_heartbeatInSecondsHasBeenSet = true; m_heartbeatInSeconds = value; }
    inline TaskScheduledEventDetails& WithHeartbeatInSeconds(long long value) { SetHeartbeatInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials that Step Functions uses for the task.</p>
     */
    inline const TaskCredentials& GetTaskCredentials() const { return m_taskCredentials; }
    inline bool TaskCredentialsHasBeenSet() const { return m_taskCredentialsHasBeenSet; }
    template<typename TaskCredentialsT = TaskCredentials>
    void SetTaskCredentials(TaskCredentialsT&& value) { m_taskCredentialsHasBeenSet = true; m_taskCredentials = std::forward<TaskCredentialsT>(value); }
    template<typename TaskCredentialsT = TaskCredentials>
    TaskScheduledEventDetails& WithTaskCredentials(TaskCredentialsT&& value) { SetTaskCredentials(std::forward<TaskCredentialsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;

    long long m_timeoutInSeconds{0};
    bool m_timeoutInSecondsHasBeenSet = false;

    long long m_heartbeatInSeconds{0};
    bool m_heartbeatInSecondsHasBeenSet = false;

    TaskCredentials m_taskCredentials;
    bool m_taskCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
