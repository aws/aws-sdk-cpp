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
    AWS_SIGNER_API SigningProfileRevocationRecord() = default;
    AWS_SIGNER_API SigningProfileRevocationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningProfileRevocationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when revocation becomes effective.</p>
     */
    inline const Aws::Utils::DateTime& GetRevocationEffectiveFrom() const { return m_revocationEffectiveFrom; }
    inline bool RevocationEffectiveFromHasBeenSet() const { return m_revocationEffectiveFromHasBeenSet; }
    template<typename RevocationEffectiveFromT = Aws::Utils::DateTime>
    void SetRevocationEffectiveFrom(RevocationEffectiveFromT&& value) { m_revocationEffectiveFromHasBeenSet = true; m_revocationEffectiveFrom = std::forward<RevocationEffectiveFromT>(value); }
    template<typename RevocationEffectiveFromT = Aws::Utils::DateTime>
    SigningProfileRevocationRecord& WithRevocationEffectiveFrom(RevocationEffectiveFromT&& value) { SetRevocationEffectiveFrom(std::forward<RevocationEffectiveFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the signing profile was revoked.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const { return m_revokedAt; }
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    void SetRevokedAt(RevokedAtT&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::forward<RevokedAtT>(value); }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    SigningProfileRevocationRecord& WithRevokedAt(RevokedAtT&& value) { SetRevokedAt(std::forward<RevokedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity of the revoker.</p>
     */
    inline const Aws::String& GetRevokedBy() const { return m_revokedBy; }
    inline bool RevokedByHasBeenSet() const { return m_revokedByHasBeenSet; }
    template<typename RevokedByT = Aws::String>
    void SetRevokedBy(RevokedByT&& value) { m_revokedByHasBeenSet = true; m_revokedBy = std::forward<RevokedByT>(value); }
    template<typename RevokedByT = Aws::String>
    SigningProfileRevocationRecord& WithRevokedBy(RevokedByT&& value) { SetRevokedBy(std::forward<RevokedByT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_revocationEffectiveFrom{};
    bool m_revocationEffectiveFromHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt{};
    bool m_revokedAtHasBeenSet = false;

    Aws::String m_revokedBy;
    bool m_revokedByHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
