/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Revocation information for a signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningJobRevocationRecord">AWS
   * API Reference</a></p>
   */
  class SigningJobRevocationRecord
  {
  public:
    AWS_SIGNER_API SigningJobRevocationRecord() = default;
    AWS_SIGNER_API SigningJobRevocationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningJobRevocationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A caller-supplied reason for revocation.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    SigningJobRevocationRecord& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of revocation.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const { return m_revokedAt; }
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    void SetRevokedAt(RevokedAtT&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::forward<RevokedAtT>(value); }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    SigningJobRevocationRecord& WithRevokedAt(RevokedAtT&& value) { SetRevokedAt(std::forward<RevokedAtT>(value)); return *this;}
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
    SigningJobRevocationRecord& WithRevokedBy(RevokedByT&& value) { SetRevokedBy(std::forward<RevokedByT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt{};
    bool m_revokedAtHasBeenSet = false;

    Aws::String m_revokedBy;
    bool m_revokedByHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
