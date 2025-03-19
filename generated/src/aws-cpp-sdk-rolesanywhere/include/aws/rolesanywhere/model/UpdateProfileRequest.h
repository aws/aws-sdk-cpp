/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class UpdateProfileRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API UpdateProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfile"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Used to determine if a custom role session name will be accepted in a
     * temporary credential request.</p>
     */
    inline bool GetAcceptRoleSessionName() const { return m_acceptRoleSessionName; }
    inline bool AcceptRoleSessionNameHasBeenSet() const { return m_acceptRoleSessionNameHasBeenSet; }
    inline void SetAcceptRoleSessionName(bool value) { m_acceptRoleSessionNameHasBeenSet = true; m_acceptRoleSessionName = value; }
    inline UpdateProfileRequest& WithAcceptRoleSessionName(bool value) { SetAcceptRoleSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used to determine how long sessions vended using this profile are valid for.
     * See the <code>Expiration</code> section of the <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/userguide/authentication-create-session.html#credentials-object">CreateSession
     * API documentation</a> page for more details. In requests, if this value is not
     * provided, the default value will be 3600. </p>
     */
    inline int GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline UpdateProfileRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedPolicyArns() const { return m_managedPolicyArns; }
    inline bool ManagedPolicyArnsHasBeenSet() const { return m_managedPolicyArnsHasBeenSet; }
    template<typename ManagedPolicyArnsT = Aws::Vector<Aws::String>>
    void SetManagedPolicyArns(ManagedPolicyArnsT&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns = std::forward<ManagedPolicyArnsT>(value); }
    template<typename ManagedPolicyArnsT = Aws::Vector<Aws::String>>
    UpdateProfileRequest& WithManagedPolicyArns(ManagedPolicyArnsT&& value) { SetManagedPolicyArns(std::forward<ManagedPolicyArnsT>(value)); return *this;}
    template<typename ManagedPolicyArnsT = Aws::String>
    UpdateProfileRequest& AddManagedPolicyArns(ManagedPolicyArnsT&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.emplace_back(std::forward<ManagedPolicyArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    UpdateProfileRequest& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IAM roles that this profile can assume in a temporary credential
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const { return m_roleArns; }
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }
    template<typename RoleArnsT = Aws::Vector<Aws::String>>
    void SetRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::forward<RoleArnsT>(value); }
    template<typename RoleArnsT = Aws::Vector<Aws::String>>
    UpdateProfileRequest& WithRoleArns(RoleArnsT&& value) { SetRoleArns(std::forward<RoleArnsT>(value)); return *this;}
    template<typename RoleArnsT = Aws::String>
    UpdateProfileRequest& AddRoleArns(RoleArnsT&& value) { m_roleArnsHasBeenSet = true; m_roleArns.emplace_back(std::forward<RoleArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline const Aws::String& GetSessionPolicy() const { return m_sessionPolicy; }
    inline bool SessionPolicyHasBeenSet() const { return m_sessionPolicyHasBeenSet; }
    template<typename SessionPolicyT = Aws::String>
    void SetSessionPolicy(SessionPolicyT&& value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy = std::forward<SessionPolicyT>(value); }
    template<typename SessionPolicyT = Aws::String>
    UpdateProfileRequest& WithSessionPolicy(SessionPolicyT&& value) { SetSessionPolicy(std::forward<SessionPolicyT>(value)); return *this;}
    ///@}
  private:

    bool m_acceptRoleSessionName{false};
    bool m_acceptRoleSessionNameHasBeenSet = false;

    int m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedPolicyArns;
    bool m_managedPolicyArnsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_roleArns;
    bool m_roleArnsHasBeenSet = false;

    Aws::String m_sessionPolicy;
    bool m_sessionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
