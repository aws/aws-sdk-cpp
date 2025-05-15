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
#include <aws/workspaces/model/PoolsRunningMode.h>
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
    AWS_WORKSPACES_API WorkspacesPool() = default;
    AWS_WORKSPACES_API WorkspacesPool(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspacesPool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a pool.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    WorkspacesPool& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the pool.</p>
     */
    inline const Aws::String& GetPoolArn() const { return m_poolArn; }
    inline bool PoolArnHasBeenSet() const { return m_poolArnHasBeenSet; }
    template<typename PoolArnT = Aws::String>
    void SetPoolArn(PoolArnT&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::forward<PoolArnT>(value); }
    template<typename PoolArnT = Aws::String>
    WorkspacesPool& WithPoolArn(PoolArnT&& value) { SetPoolArn(std::forward<PoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity status for the pool</p>
     */
    inline const CapacityStatus& GetCapacityStatus() const { return m_capacityStatus; }
    inline bool CapacityStatusHasBeenSet() const { return m_capacityStatusHasBeenSet; }
    template<typename CapacityStatusT = CapacityStatus>
    void SetCapacityStatus(CapacityStatusT&& value) { m_capacityStatusHasBeenSet = true; m_capacityStatus = std::forward<CapacityStatusT>(value); }
    template<typename CapacityStatusT = CapacityStatus>
    WorkspacesPool& WithCapacityStatus(CapacityStatusT&& value) { SetCapacityStatus(std::forward<CapacityStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pool.</p>
     */
    inline const Aws::String& GetPoolName() const { return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    template<typename PoolNameT = Aws::String>
    void SetPoolName(PoolNameT&& value) { m_poolNameHasBeenSet = true; m_poolName = std::forward<PoolNameT>(value); }
    template<typename PoolNameT = Aws::String>
    WorkspacesPool& WithPoolName(PoolNameT&& value) { SetPoolName(std::forward<PoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pool.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkspacesPool& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the pool.</p>
     */
    inline WorkspacesPoolState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(WorkspacesPoolState value) { m_stateHasBeenSet = true; m_state = value; }
    inline WorkspacesPool& WithState(WorkspacesPoolState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the pool was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    WorkspacesPool& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle used by the pool.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    WorkspacesPool& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory used by the pool.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    WorkspacesPool& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pool errors.</p>
     */
    inline const Aws::Vector<WorkspacesPoolError>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<WorkspacesPoolError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<WorkspacesPoolError>>
    WorkspacesPool& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = WorkspacesPoolError>
    WorkspacesPool& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The persistent application settings for users of the pool.</p>
     */
    inline const ApplicationSettingsResponse& GetApplicationSettings() const { return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    template<typename ApplicationSettingsT = ApplicationSettingsResponse>
    void SetApplicationSettings(ApplicationSettingsT&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::forward<ApplicationSettingsT>(value); }
    template<typename ApplicationSettingsT = ApplicationSettingsResponse>
    WorkspacesPool& WithApplicationSettings(ApplicationSettingsT&& value) { SetApplicationSettings(std::forward<ApplicationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that a pool session remains active after users disconnect.
     * If they try to reconnect to the pool session after a disconnection or network
     * interruption within this time interval, they are connected to their previous
     * session. Otherwise, they are connected to a new session with a new pool
     * instance.</p>
     */
    inline const TimeoutSettings& GetTimeoutSettings() const { return m_timeoutSettings; }
    inline bool TimeoutSettingsHasBeenSet() const { return m_timeoutSettingsHasBeenSet; }
    template<typename TimeoutSettingsT = TimeoutSettings>
    void SetTimeoutSettings(TimeoutSettingsT&& value) { m_timeoutSettingsHasBeenSet = true; m_timeoutSettings = std::forward<TimeoutSettingsT>(value); }
    template<typename TimeoutSettingsT = TimeoutSettings>
    WorkspacesPool& WithTimeoutSettings(TimeoutSettingsT&& value) { SetTimeoutSettings(std::forward<TimeoutSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The running mode of the pool.</p>
     */
    inline PoolsRunningMode GetRunningMode() const { return m_runningMode; }
    inline bool RunningModeHasBeenSet() const { return m_runningModeHasBeenSet; }
    inline void SetRunningMode(PoolsRunningMode value) { m_runningModeHasBeenSet = true; m_runningMode = value; }
    inline WorkspacesPool& WithRunningMode(PoolsRunningMode value) { SetRunningMode(value); return *this;}
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

    WorkspacesPoolState m_state{WorkspacesPoolState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
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

    PoolsRunningMode m_runningMode{PoolsRunningMode::NOT_SET};
    bool m_runningModeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
