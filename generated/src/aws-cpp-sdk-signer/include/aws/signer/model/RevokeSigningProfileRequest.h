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
    AWS_SIGNER_API RevokeSigningProfileRequest();

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
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline RevokeSigningProfileRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline RevokeSigningProfileRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline RevokeSigningProfileRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }
    inline RevokeSigningProfileRequest& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}
    inline RevokeSigningProfileRequest& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}
    inline RevokeSigningProfileRequest& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline RevokeSigningProfileRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline RevokeSigningProfileRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline RevokeSigningProfileRequest& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp for when revocation of a Signing Profile should become effective.
     * Signatures generated using the signing profile after this timestamp are not
     * trusted.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveTime() const{ return m_effectiveTime; }
    inline bool EffectiveTimeHasBeenSet() const { return m_effectiveTimeHasBeenSet; }
    inline void SetEffectiveTime(const Aws::Utils::DateTime& value) { m_effectiveTimeHasBeenSet = true; m_effectiveTime = value; }
    inline void SetEffectiveTime(Aws::Utils::DateTime&& value) { m_effectiveTimeHasBeenSet = true; m_effectiveTime = std::move(value); }
    inline RevokeSigningProfileRequest& WithEffectiveTime(const Aws::Utils::DateTime& value) { SetEffectiveTime(value); return *this;}
    inline RevokeSigningProfileRequest& WithEffectiveTime(Aws::Utils::DateTime&& value) { SetEffectiveTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveTime;
    bool m_effectiveTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
