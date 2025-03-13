/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class RevokeSignatureRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API RevokeSignatureRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeSignature"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    RevokeSignatureRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline const Aws::String& GetJobOwner() const { return m_jobOwner; }
    inline bool JobOwnerHasBeenSet() const { return m_jobOwnerHasBeenSet; }
    template<typename JobOwnerT = Aws::String>
    void SetJobOwner(JobOwnerT&& value) { m_jobOwnerHasBeenSet = true; m_jobOwner = std::forward<JobOwnerT>(value); }
    template<typename JobOwnerT = Aws::String>
    RevokeSignatureRequest& WithJobOwner(JobOwnerT&& value) { SetJobOwner(std::forward<JobOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    RevokeSignatureRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobOwner;
    bool m_jobOwnerHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
