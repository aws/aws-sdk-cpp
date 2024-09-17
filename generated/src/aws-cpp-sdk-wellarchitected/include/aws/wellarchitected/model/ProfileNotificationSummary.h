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
    AWS_WELLARCHITECTED_API ProfileNotificationSummary();
    AWS_WELLARCHITECTED_API ProfileNotificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ProfileNotificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current profile version.</p>
     */
    inline const Aws::String& GetCurrentProfileVersion() const{ return m_currentProfileVersion; }
    inline bool CurrentProfileVersionHasBeenSet() const { return m_currentProfileVersionHasBeenSet; }
    inline void SetCurrentProfileVersion(const Aws::String& value) { m_currentProfileVersionHasBeenSet = true; m_currentProfileVersion = value; }
    inline void SetCurrentProfileVersion(Aws::String&& value) { m_currentProfileVersionHasBeenSet = true; m_currentProfileVersion = std::move(value); }
    inline void SetCurrentProfileVersion(const char* value) { m_currentProfileVersionHasBeenSet = true; m_currentProfileVersion.assign(value); }
    inline ProfileNotificationSummary& WithCurrentProfileVersion(const Aws::String& value) { SetCurrentProfileVersion(value); return *this;}
    inline ProfileNotificationSummary& WithCurrentProfileVersion(Aws::String&& value) { SetCurrentProfileVersion(std::move(value)); return *this;}
    inline ProfileNotificationSummary& WithCurrentProfileVersion(const char* value) { SetCurrentProfileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest profile version.</p>
     */
    inline const Aws::String& GetLatestProfileVersion() const{ return m_latestProfileVersion; }
    inline bool LatestProfileVersionHasBeenSet() const { return m_latestProfileVersionHasBeenSet; }
    inline void SetLatestProfileVersion(const Aws::String& value) { m_latestProfileVersionHasBeenSet = true; m_latestProfileVersion = value; }
    inline void SetLatestProfileVersion(Aws::String&& value) { m_latestProfileVersionHasBeenSet = true; m_latestProfileVersion = std::move(value); }
    inline void SetLatestProfileVersion(const char* value) { m_latestProfileVersionHasBeenSet = true; m_latestProfileVersion.assign(value); }
    inline ProfileNotificationSummary& WithLatestProfileVersion(const Aws::String& value) { SetLatestProfileVersion(value); return *this;}
    inline ProfileNotificationSummary& WithLatestProfileVersion(Aws::String&& value) { SetLatestProfileVersion(std::move(value)); return *this;}
    inline ProfileNotificationSummary& WithLatestProfileVersion(const char* value) { SetLatestProfileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of notification.</p>
     */
    inline const ProfileNotificationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ProfileNotificationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ProfileNotificationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ProfileNotificationSummary& WithType(const ProfileNotificationType& value) { SetType(value); return *this;}
    inline ProfileNotificationSummary& WithType(ProfileNotificationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }
    inline ProfileNotificationSummary& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}
    inline ProfileNotificationSummary& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}
    inline ProfileNotificationSummary& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile name.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline ProfileNotificationSummary& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline ProfileNotificationSummary& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline ProfileNotificationSummary& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }
    inline ProfileNotificationSummary& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}
    inline ProfileNotificationSummary& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}
    inline ProfileNotificationSummary& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }
    inline ProfileNotificationSummary& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}
    inline ProfileNotificationSummary& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}
    inline ProfileNotificationSummary& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}
    ///@}
  private:

    Aws::String m_currentProfileVersion;
    bool m_currentProfileVersionHasBeenSet = false;

    Aws::String m_latestProfileVersion;
    bool m_latestProfileVersionHasBeenSet = false;

    ProfileNotificationType m_type;
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
