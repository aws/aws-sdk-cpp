/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/signer/model/SigningStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace signer
{
namespace Model
{

  /**
   */
  class ListSigningJobsRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API ListSigningJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSigningJobs"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline SigningStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SigningStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListSigningJobsRequest& WithStatus(SigningStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    ListSigningJobsRequest& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline const Aws::String& GetRequestedBy() const { return m_requestedBy; }
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
    template<typename RequestedByT = Aws::String>
    void SetRequestedBy(RequestedByT&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::forward<RequestedByT>(value); }
    template<typename RequestedByT = Aws::String>
    ListSigningJobsRequest& WithRequestedBy(RequestedByT&& value) { SetRequestedBy(std::forward<RequestedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSigningJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSigningJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters results to return only signing jobs with revoked signatures.</p>
     */
    inline bool GetIsRevoked() const { return m_isRevoked; }
    inline bool IsRevokedHasBeenSet() const { return m_isRevokedHasBeenSet; }
    inline void SetIsRevoked(bool value) { m_isRevokedHasBeenSet = true; m_isRevoked = value; }
    inline ListSigningJobsRequest& WithIsRevoked(bool value) { SetIsRevoked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters results to return only signing jobs with signatures expiring before a
     * specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureExpiresBefore() const { return m_signatureExpiresBefore; }
    inline bool SignatureExpiresBeforeHasBeenSet() const { return m_signatureExpiresBeforeHasBeenSet; }
    template<typename SignatureExpiresBeforeT = Aws::Utils::DateTime>
    void SetSignatureExpiresBefore(SignatureExpiresBeforeT&& value) { m_signatureExpiresBeforeHasBeenSet = true; m_signatureExpiresBefore = std::forward<SignatureExpiresBeforeT>(value); }
    template<typename SignatureExpiresBeforeT = Aws::Utils::DateTime>
    ListSigningJobsRequest& WithSignatureExpiresBefore(SignatureExpiresBeforeT&& value) { SetSignatureExpiresBefore(std::forward<SignatureExpiresBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters results to return only signing jobs with signatures expiring after a
     * specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureExpiresAfter() const { return m_signatureExpiresAfter; }
    inline bool SignatureExpiresAfterHasBeenSet() const { return m_signatureExpiresAfterHasBeenSet; }
    template<typename SignatureExpiresAfterT = Aws::Utils::DateTime>
    void SetSignatureExpiresAfter(SignatureExpiresAfterT&& value) { m_signatureExpiresAfterHasBeenSet = true; m_signatureExpiresAfter = std::forward<SignatureExpiresAfterT>(value); }
    template<typename SignatureExpiresAfterT = Aws::Utils::DateTime>
    ListSigningJobsRequest& WithSignatureExpiresAfter(SignatureExpiresAfterT&& value) { SetSignatureExpiresAfter(std::forward<SignatureExpiresAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline const Aws::String& GetJobInvoker() const { return m_jobInvoker; }
    inline bool JobInvokerHasBeenSet() const { return m_jobInvokerHasBeenSet; }
    template<typename JobInvokerT = Aws::String>
    void SetJobInvoker(JobInvokerT&& value) { m_jobInvokerHasBeenSet = true; m_jobInvoker = std::forward<JobInvokerT>(value); }
    template<typename JobInvokerT = Aws::String>
    ListSigningJobsRequest& WithJobInvoker(JobInvokerT&& value) { SetJobInvoker(std::forward<JobInvokerT>(value)); return *this;}
    ///@}
  private:

    SigningStatus m_status{SigningStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_isRevoked{false};
    bool m_isRevokedHasBeenSet = false;

    Aws::Utils::DateTime m_signatureExpiresBefore{};
    bool m_signatureExpiresBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_signatureExpiresAfter{};
    bool m_signatureExpiresAfterHasBeenSet = false;

    Aws::String m_jobInvoker;
    bool m_jobInvokerHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
