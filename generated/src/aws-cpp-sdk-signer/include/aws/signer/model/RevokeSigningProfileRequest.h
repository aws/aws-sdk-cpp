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


    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline RevokeSigningProfileRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline RevokeSigningProfileRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the signing profile to be revoked.</p>
     */
    inline RevokeSigningProfileRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }

    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }

    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }

    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }

    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }

    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline RevokeSigningProfileRequest& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}

    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline RevokeSigningProfileRequest& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the signing profile to be revoked.</p>
     */
    inline RevokeSigningProfileRequest& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}


    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline RevokeSigningProfileRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline RevokeSigningProfileRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for revoking a signing profile.</p>
     */
    inline RevokeSigningProfileRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>A timestamp for when revocation of a Signing Profile should become effective.
     * Signatures generated using the signing profile after this timestamp are not
     * trusted.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveTime() const{ return m_effectiveTime; }

    /**
     * <p>A timestamp for when revocation of a Signing Profile should become effective.
     * Signatures generated using the signing profile after this timestamp are not
     * trusted.</p>
     */
    inline bool EffectiveTimeHasBeenSet() const { return m_effectiveTimeHasBeenSet; }

    /**
     * <p>A timestamp for when revocation of a Signing Profile should become effective.
     * Signatures generated using the signing profile after this timestamp are not
     * trusted.</p>
     */
    inline void SetEffectiveTime(const Aws::Utils::DateTime& value) { m_effectiveTimeHasBeenSet = true; m_effectiveTime = value; }

    /**
     * <p>A timestamp for when revocation of a Signing Profile should become effective.
     * Signatures generated using the signing profile after this timestamp are not
     * trusted.</p>
     */
    inline void SetEffectiveTime(Aws::Utils::DateTime&& value) { m_effectiveTimeHasBeenSet = true; m_effectiveTime = std::move(value); }

    /**
     * <p>A timestamp for when revocation of a Signing Profile should become effective.
     * Signatures generated using the signing profile after this timestamp are not
     * trusted.</p>
     */
    inline RevokeSigningProfileRequest& WithEffectiveTime(const Aws::Utils::DateTime& value) { SetEffectiveTime(value); return *this;}

    /**
     * <p>A timestamp for when revocation of a Signing Profile should become effective.
     * Signatures generated using the signing profile after this timestamp are not
     * trusted.</p>
     */
    inline RevokeSigningProfileRequest& WithEffectiveTime(Aws::Utils::DateTime&& value) { SetEffectiveTime(std::move(value)); return *this;}

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
