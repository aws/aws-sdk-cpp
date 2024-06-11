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
    AWS_SFN_API TaskScheduledEventDetails();
    AWS_SFN_API TaskScheduledEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API TaskScheduledEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline TaskScheduledEventDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline TaskScheduledEventDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline TaskScheduledEventDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline TaskScheduledEventDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline TaskScheduledEventDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline TaskScheduledEventDetails& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region of the scheduled task</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline TaskScheduledEventDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline TaskScheduledEventDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline TaskScheduledEventDetails& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON data passed to the resource referenced in a task state. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }
    inline TaskScheduledEventDetails& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}
    inline TaskScheduledEventDetails& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}
    inline TaskScheduledEventDetails& WithParameters(const char* value) { SetParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed duration of the task.</p>
     */
    inline long long GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(long long value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline TaskScheduledEventDetails& WithTimeoutInSeconds(long long value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed duration between two heartbeats for the task.</p>
     */
    inline long long GetHeartbeatInSeconds() const{ return m_heartbeatInSeconds; }
    inline bool HeartbeatInSecondsHasBeenSet() const { return m_heartbeatInSecondsHasBeenSet; }
    inline void SetHeartbeatInSeconds(long long value) { m_heartbeatInSecondsHasBeenSet = true; m_heartbeatInSeconds = value; }
    inline TaskScheduledEventDetails& WithHeartbeatInSeconds(long long value) { SetHeartbeatInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials that Step Functions uses for the task.</p>
     */
    inline const TaskCredentials& GetTaskCredentials() const{ return m_taskCredentials; }
    inline bool TaskCredentialsHasBeenSet() const { return m_taskCredentialsHasBeenSet; }
    inline void SetTaskCredentials(const TaskCredentials& value) { m_taskCredentialsHasBeenSet = true; m_taskCredentials = value; }
    inline void SetTaskCredentials(TaskCredentials&& value) { m_taskCredentialsHasBeenSet = true; m_taskCredentials = std::move(value); }
    inline TaskScheduledEventDetails& WithTaskCredentials(const TaskCredentials& value) { SetTaskCredentials(value); return *this;}
    inline TaskScheduledEventDetails& WithTaskCredentials(TaskCredentials&& value) { SetTaskCredentials(std::move(value)); return *this;}
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

    long long m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    long long m_heartbeatInSeconds;
    bool m_heartbeatInSecondsHasBeenSet = false;

    TaskCredentials m_taskCredentials;
    bool m_taskCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
