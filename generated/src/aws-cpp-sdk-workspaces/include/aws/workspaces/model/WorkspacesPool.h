/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/CapacityStatus.h>
#include <aws/workspaces/model/WorkspacesPoolState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ApplicationSettingsResponse.h>
#include <aws/workspaces/model/TimeoutSettings.h>
#include <aws/workspaces/model/WorkspacesPoolError.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a pool of WorkSpaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspacesPool">AWS
   * API Reference</a></p>
   */
  class WorkspacesPool
  {
  public:
    AWS_WORKSPACES_API WorkspacesPool();
    AWS_WORKSPACES_API WorkspacesPool(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspacesPool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline WorkspacesPool& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline WorkspacesPool& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline WorkspacesPool& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the pool.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }
    inline bool PoolArnHasBeenSet() const { return m_poolArnHasBeenSet; }
    inline void SetPoolArn(const Aws::String& value) { m_poolArnHasBeenSet = true; m_poolArn = value; }
    inline void SetPoolArn(Aws::String&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::move(value); }
    inline void SetPoolArn(const char* value) { m_poolArnHasBeenSet = true; m_poolArn.assign(value); }
    inline WorkspacesPool& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}
    inline WorkspacesPool& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}
    inline WorkspacesPool& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity status for the pool</p>
     */
    inline const CapacityStatus& GetCapacityStatus() const{ return m_capacityStatus; }
    inline bool CapacityStatusHasBeenSet() const { return m_capacityStatusHasBeenSet; }
    inline void SetCapacityStatus(const CapacityStatus& value) { m_capacityStatusHasBeenSet = true; m_capacityStatus = value; }
    inline void SetCapacityStatus(CapacityStatus&& value) { m_capacityStatusHasBeenSet = true; m_capacityStatus = std::move(value); }
    inline WorkspacesPool& WithCapacityStatus(const CapacityStatus& value) { SetCapacityStatus(value); return *this;}
    inline WorkspacesPool& WithCapacityStatus(CapacityStatus&& value) { SetCapacityStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pool,</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }
    inline WorkspacesPool& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}
    inline WorkspacesPool& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}
    inline WorkspacesPool& WithPoolName(const char* value) { SetPoolName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WorkspacesPool& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkspacesPool& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkspacesPool& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the pool.</p>
     */
    inline const WorkspacesPoolState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkspacesPoolState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkspacesPoolState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline WorkspacesPool& WithState(const WorkspacesPoolState& value) { SetState(value); return *this;}
    inline WorkspacesPool& WithState(WorkspacesPoolState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the pool was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline WorkspacesPool& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline WorkspacesPool& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle used by the pool.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline WorkspacesPool& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline WorkspacesPool& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline WorkspacesPool& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory used by the pool.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline WorkspacesPool& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline WorkspacesPool& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline WorkspacesPool& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pool errors.</p>
     */
    inline const Aws::Vector<WorkspacesPoolError>& GetErrors() const{ return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    inline void SetErrors(const Aws::Vector<WorkspacesPoolError>& value) { m_errorsHasBeenSet = true; m_errors = value; }
    inline void SetErrors(Aws::Vector<WorkspacesPoolError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }
    inline WorkspacesPool& WithErrors(const Aws::Vector<WorkspacesPoolError>& value) { SetErrors(value); return *this;}
    inline WorkspacesPool& WithErrors(Aws::Vector<WorkspacesPoolError>&& value) { SetErrors(std::move(value)); return *this;}
    inline WorkspacesPool& AddErrors(const WorkspacesPoolError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }
    inline WorkspacesPool& AddErrors(WorkspacesPoolError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The persistent application settings for users of the pool.</p>
     */
    inline const ApplicationSettingsResponse& GetApplicationSettings() const{ return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    inline void SetApplicationSettings(const ApplicationSettingsResponse& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = value; }
    inline void SetApplicationSettings(ApplicationSettingsResponse&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::move(value); }
    inline WorkspacesPool& WithApplicationSettings(const ApplicationSettingsResponse& value) { SetApplicationSettings(value); return *this;}
    inline WorkspacesPool& WithApplicationSettings(ApplicationSettingsResponse&& value) { SetApplicationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that a pool session remains active after users disconnect.
     * If they try to reconnect to the pool session after a disconnection or network
     * interruption within this time interval, they are connected to their previous
     * session. Otherwise, they are connected to a new session with a new pool
     * instance.</p>
     */
    inline const TimeoutSettings& GetTimeoutSettings() const{ return m_timeoutSettings; }
    inline bool TimeoutSettingsHasBeenSet() const { return m_timeoutSettingsHasBeenSet; }
    inline void SetTimeoutSettings(const TimeoutSettings& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = value; }
    inline void SetTimeoutSettings(TimeoutSettings&& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = std::move(value); }
    inline WorkspacesPool& WithTimeoutSettings(const TimeoutSettings& value) { SetTimeoutSettings(value); return *this;}
    inline WorkspacesPool& WithTimeoutSettings(TimeoutSettings&& value) { SetTimeoutSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_poolArn;
    bool m_poolArnHasBeenSet = false;

    CapacityStatus m_capacityStatus;
    bool m_capacityStatusHasBeenSet = false;

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkspacesPoolState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<WorkspacesPoolError> m_errors;
    bool m_errorsHasBeenSet = false;

    ApplicationSettingsResponse m_applicationSettings;
    bool m_applicationSettingsHasBeenSet = false;

    TimeoutSettings m_timeoutSettings;
    bool m_timeoutSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
