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
    AWS_SIGNER_API SigningJobRevocationRecord();
    AWS_SIGNER_API SigningJobRevocationRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningJobRevocationRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A caller-supplied reason for revocation.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline SigningJobRevocationRecord& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline SigningJobRevocationRecord& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline SigningJobRevocationRecord& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of revocation.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const{ return m_revokedAt; }
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
    inline void SetRevokedAt(const Aws::Utils::DateTime& value) { m_revokedAtHasBeenSet = true; m_revokedAt = value; }
    inline void SetRevokedAt(Aws::Utils::DateTime&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::move(value); }
    inline SigningJobRevocationRecord& WithRevokedAt(const Aws::Utils::DateTime& value) { SetRevokedAt(value); return *this;}
    inline SigningJobRevocationRecord& WithRevokedAt(Aws::Utils::DateTime&& value) { SetRevokedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity of the revoker.</p>
     */
    inline const Aws::String& GetRevokedBy() const{ return m_revokedBy; }
    inline bool RevokedByHasBeenSet() const { return m_revokedByHasBeenSet; }
    inline void SetRevokedBy(const Aws::String& value) { m_revokedByHasBeenSet = true; m_revokedBy = value; }
    inline void SetRevokedBy(Aws::String&& value) { m_revokedByHasBeenSet = true; m_revokedBy = std::move(value); }
    inline void SetRevokedBy(const char* value) { m_revokedByHasBeenSet = true; m_revokedBy.assign(value); }
    inline SigningJobRevocationRecord& WithRevokedBy(const Aws::String& value) { SetRevokedBy(value); return *this;}
    inline SigningJobRevocationRecord& WithRevokedBy(Aws::String&& value) { SetRevokedBy(std::move(value)); return *this;}
    inline SigningJobRevocationRecord& WithRevokedBy(const char* value) { SetRevokedBy(value); return *this;}
    ///@}
  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt;
    bool m_revokedAtHasBeenSet = false;

    Aws::String m_revokedBy;
    bool m_revokedByHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
