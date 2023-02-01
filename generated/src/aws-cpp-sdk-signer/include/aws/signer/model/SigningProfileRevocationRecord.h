/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>Revocation information for a signing profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningProfileRevocationRecord">AWS
   * API Reference</a></p>
   */
  class SigningProfileRevocationRecord
  {
  public:
    AWS_SIGNER_API SigningProfileRevocationRecord();
    AWS_SIGNER_API SigningProfileRevocationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningProfileRevocationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when revocation becomes effective.</p>
     */
    inline const Aws::Utils::DateTime& GetRevocationEffectiveFrom() const{ return m_revocationEffectiveFrom; }

    /**
     * <p>The time when revocation becomes effective.</p>
     */
    inline bool RevocationEffectiveFromHasBeenSet() const { return m_revocationEffectiveFromHasBeenSet; }

    /**
     * <p>The time when revocation becomes effective.</p>
     */
    inline void SetRevocationEffectiveFrom(const Aws::Utils::DateTime& value) { m_revocationEffectiveFromHasBeenSet = true; m_revocationEffectiveFrom = value; }

    /**
     * <p>The time when revocation becomes effective.</p>
     */
    inline void SetRevocationEffectiveFrom(Aws::Utils::DateTime&& value) { m_revocationEffectiveFromHasBeenSet = true; m_revocationEffectiveFrom = std::move(value); }

    /**
     * <p>The time when revocation becomes effective.</p>
     */
    inline SigningProfileRevocationRecord& WithRevocationEffectiveFrom(const Aws::Utils::DateTime& value) { SetRevocationEffectiveFrom(value); return *this;}

    /**
     * <p>The time when revocation becomes effective.</p>
     */
    inline SigningProfileRevocationRecord& WithRevocationEffectiveFrom(Aws::Utils::DateTime&& value) { SetRevocationEffectiveFrom(std::move(value)); return *this;}


    /**
     * <p>The time when the signing profile was revoked.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const{ return m_revokedAt; }

    /**
     * <p>The time when the signing profile was revoked.</p>
     */
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }

    /**
     * <p>The time when the signing profile was revoked.</p>
     */
    inline void SetRevokedAt(const Aws::Utils::DateTime& value) { m_revokedAtHasBeenSet = true; m_revokedAt = value; }

    /**
     * <p>The time when the signing profile was revoked.</p>
     */
    inline void SetRevokedAt(Aws::Utils::DateTime&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::move(value); }

    /**
     * <p>The time when the signing profile was revoked.</p>
     */
    inline SigningProfileRevocationRecord& WithRevokedAt(const Aws::Utils::DateTime& value) { SetRevokedAt(value); return *this;}

    /**
     * <p>The time when the signing profile was revoked.</p>
     */
    inline SigningProfileRevocationRecord& WithRevokedAt(Aws::Utils::DateTime&& value) { SetRevokedAt(std::move(value)); return *this;}


    /**
     * <p>The identity of the revoker.</p>
     */
    inline const Aws::String& GetRevokedBy() const{ return m_revokedBy; }

    /**
     * <p>The identity of the revoker.</p>
     */
    inline bool RevokedByHasBeenSet() const { return m_revokedByHasBeenSet; }

    /**
     * <p>The identity of the revoker.</p>
     */
    inline void SetRevokedBy(const Aws::String& value) { m_revokedByHasBeenSet = true; m_revokedBy = value; }

    /**
     * <p>The identity of the revoker.</p>
     */
    inline void SetRevokedBy(Aws::String&& value) { m_revokedByHasBeenSet = true; m_revokedBy = std::move(value); }

    /**
     * <p>The identity of the revoker.</p>
     */
    inline void SetRevokedBy(const char* value) { m_revokedByHasBeenSet = true; m_revokedBy.assign(value); }

    /**
     * <p>The identity of the revoker.</p>
     */
    inline SigningProfileRevocationRecord& WithRevokedBy(const Aws::String& value) { SetRevokedBy(value); return *this;}

    /**
     * <p>The identity of the revoker.</p>
     */
    inline SigningProfileRevocationRecord& WithRevokedBy(Aws::String&& value) { SetRevokedBy(std::move(value)); return *this;}

    /**
     * <p>The identity of the revoker.</p>
     */
    inline SigningProfileRevocationRecord& WithRevokedBy(const char* value) { SetRevokedBy(value); return *this;}

  private:

    Aws::Utils::DateTime m_revocationEffectiveFrom;
    bool m_revocationEffectiveFromHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt;
    bool m_revokedAtHasBeenSet = false;

    Aws::String m_revokedBy;
    bool m_revokedByHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
