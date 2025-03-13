/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ProfileNotificationType.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The profile notification summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ProfileNotificationSummary">AWS
   * API Reference</a></p>
   */
  class ProfileNotificationSummary
  {
  public:
    AWS_WELLARCHITECTED_API ProfileNotificationSummary() = default;
    AWS_WELLARCHITECTED_API ProfileNotificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileNotificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current profile version.</p>
     */
    inline const Aws::String& GetCurrentProfileVersion() const { return m_currentProfileVersion; }
    inline bool CurrentProfileVersionHasBeenSet() const { return m_currentProfileVersionHasBeenSet; }
    template<typename CurrentProfileVersionT = Aws::String>
    void SetCurrentProfileVersion(CurrentProfileVersionT&& value) { m_currentProfileVersionHasBeenSet = true; m_currentProfileVersion = std::forward<CurrentProfileVersionT>(value); }
    template<typename CurrentProfileVersionT = Aws::String>
    ProfileNotificationSummary& WithCurrentProfileVersion(CurrentProfileVersionT&& value) { SetCurrentProfileVersion(std::forward<CurrentProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest profile version.</p>
     */
    inline const Aws::String& GetLatestProfileVersion() const { return m_latestProfileVersion; }
    inline bool LatestProfileVersionHasBeenSet() const { return m_latestProfileVersionHasBeenSet; }
    template<typename LatestProfileVersionT = Aws::String>
    void SetLatestProfileVersion(LatestProfileVersionT&& value) { m_latestProfileVersionHasBeenSet = true; m_latestProfileVersion = std::forward<LatestProfileVersionT>(value); }
    template<typename LatestProfileVersionT = Aws::String>
    ProfileNotificationSummary& WithLatestProfileVersion(LatestProfileVersionT&& value) { SetLatestProfileVersion(std::forward<LatestProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of notification.</p>
     */
    inline ProfileNotificationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ProfileNotificationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProfileNotificationSummary& WithType(ProfileNotificationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const { return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    template<typename ProfileArnT = Aws::String>
    void SetProfileArn(ProfileArnT&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::forward<ProfileArnT>(value); }
    template<typename ProfileArnT = Aws::String>
    ProfileNotificationSummary& WithProfileArn(ProfileArnT&& value) { SetProfileArn(std::forward<ProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile name.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    ProfileNotificationSummary& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    ProfileNotificationSummary& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    ProfileNotificationSummary& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_currentProfileVersion;
    bool m_currentProfileVersionHasBeenSet = false;

    Aws::String m_latestProfileVersion;
    bool m_latestProfileVersionHasBeenSet = false;

    ProfileNotificationType m_type{ProfileNotificationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
