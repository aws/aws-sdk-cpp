/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class RevokeSigningProfileRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API RevokeSigningProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeSigningProfile"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    RevokeSigningProfileRequest& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline const Aws::String& GetProfileVersion() const { return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    template<typename ProfileVersionT = Aws::String>
    void SetProfileVersion(ProfileVersionT&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::forward<ProfileVersionT>(value); }
    template<typename ProfileVersionT = Aws::String>
    RevokeSigningProfileRequest& WithProfileVersion(ProfileVersionT&& value) { SetProfileVersion(std::forward<ProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    RevokeSigningProfileRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp for when revocation of a Signing Profile should become effective.
     * Signatures generated using the signing profile after this timestamp are not
     * trusted.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveTime() const { return m_effectiveTime; }
    inline bool EffectiveTimeHasBeenSet() const { return m_effectiveTimeHasBeenSet; }
    template<typename EffectiveTimeT = Aws::Utils::DateTime>
    void SetEffectiveTime(EffectiveTimeT&& value) { m_effectiveTimeHasBeenSet = true; m_effectiveTime = std::forward<EffectiveTimeT>(value); }
    template<typename EffectiveTimeT = Aws::Utils::DateTime>
    RevokeSigningProfileRequest& WithEffectiveTime(EffectiveTimeT&& value) { SetEffectiveTime(std::forward<EffectiveTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveTime{};
    bool m_effectiveTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
