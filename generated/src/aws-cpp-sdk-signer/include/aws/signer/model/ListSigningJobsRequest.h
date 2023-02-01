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
    AWS_SIGNER_API ListSigningJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSigningJobs"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline const SigningStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline void SetStatus(const SigningStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline void SetStatus(SigningStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline ListSigningJobsRequest& WithStatus(const SigningStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline ListSigningJobsRequest& WithStatus(SigningStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline ListSigningJobsRequest& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline ListSigningJobsRequest& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline ListSigningJobsRequest& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline const Aws::String& GetRequestedBy() const{ return m_requestedBy; }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(const Aws::String& value) { m_requestedByHasBeenSet = true; m_requestedBy = value; }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(Aws::String&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::move(value); }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(const char* value) { m_requestedByHasBeenSet = true; m_requestedBy.assign(value); }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline ListSigningJobsRequest& WithRequestedBy(const Aws::String& value) { SetRequestedBy(value); return *this;}

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline ListSigningJobsRequest& WithRequestedBy(Aws::String&& value) { SetRequestedBy(std::move(value)); return *this;}

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline ListSigningJobsRequest& WithRequestedBy(const char* value) { SetRequestedBy(value); return *this;}


    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline ListSigningJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Filters results to return only signing jobs with revoked signatures.</p>
     */
    inline bool GetIsRevoked() const{ return m_isRevoked; }

    /**
     * <p>Filters results to return only signing jobs with revoked signatures.</p>
     */
    inline bool IsRevokedHasBeenSet() const { return m_isRevokedHasBeenSet; }

    /**
     * <p>Filters results to return only signing jobs with revoked signatures.</p>
     */
    inline void SetIsRevoked(bool value) { m_isRevokedHasBeenSet = true; m_isRevoked = value; }

    /**
     * <p>Filters results to return only signing jobs with revoked signatures.</p>
     */
    inline ListSigningJobsRequest& WithIsRevoked(bool value) { SetIsRevoked(value); return *this;}


    /**
     * <p>Filters results to return only signing jobs with signatures expiring before a
     * specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureExpiresBefore() const{ return m_signatureExpiresBefore; }

    /**
     * <p>Filters results to return only signing jobs with signatures expiring before a
     * specified timestamp.</p>
     */
    inline bool SignatureExpiresBeforeHasBeenSet() const { return m_signatureExpiresBeforeHasBeenSet; }

    /**
     * <p>Filters results to return only signing jobs with signatures expiring before a
     * specified timestamp.</p>
     */
    inline void SetSignatureExpiresBefore(const Aws::Utils::DateTime& value) { m_signatureExpiresBeforeHasBeenSet = true; m_signatureExpiresBefore = value; }

    /**
     * <p>Filters results to return only signing jobs with signatures expiring before a
     * specified timestamp.</p>
     */
    inline void SetSignatureExpiresBefore(Aws::Utils::DateTime&& value) { m_signatureExpiresBeforeHasBeenSet = true; m_signatureExpiresBefore = std::move(value); }

    /**
     * <p>Filters results to return only signing jobs with signatures expiring before a
     * specified timestamp.</p>
     */
    inline ListSigningJobsRequest& WithSignatureExpiresBefore(const Aws::Utils::DateTime& value) { SetSignatureExpiresBefore(value); return *this;}

    /**
     * <p>Filters results to return only signing jobs with signatures expiring before a
     * specified timestamp.</p>
     */
    inline ListSigningJobsRequest& WithSignatureExpiresBefore(Aws::Utils::DateTime&& value) { SetSignatureExpiresBefore(std::move(value)); return *this;}


    /**
     * <p>Filters results to return only signing jobs with signatures expiring after a
     * specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureExpiresAfter() const{ return m_signatureExpiresAfter; }

    /**
     * <p>Filters results to return only signing jobs with signatures expiring after a
     * specified timestamp.</p>
     */
    inline bool SignatureExpiresAfterHasBeenSet() const { return m_signatureExpiresAfterHasBeenSet; }

    /**
     * <p>Filters results to return only signing jobs with signatures expiring after a
     * specified timestamp.</p>
     */
    inline void SetSignatureExpiresAfter(const Aws::Utils::DateTime& value) { m_signatureExpiresAfterHasBeenSet = true; m_signatureExpiresAfter = value; }

    /**
     * <p>Filters results to return only signing jobs with signatures expiring after a
     * specified timestamp.</p>
     */
    inline void SetSignatureExpiresAfter(Aws::Utils::DateTime&& value) { m_signatureExpiresAfterHasBeenSet = true; m_signatureExpiresAfter = std::move(value); }

    /**
     * <p>Filters results to return only signing jobs with signatures expiring after a
     * specified timestamp.</p>
     */
    inline ListSigningJobsRequest& WithSignatureExpiresAfter(const Aws::Utils::DateTime& value) { SetSignatureExpiresAfter(value); return *this;}

    /**
     * <p>Filters results to return only signing jobs with signatures expiring after a
     * specified timestamp.</p>
     */
    inline ListSigningJobsRequest& WithSignatureExpiresAfter(Aws::Utils::DateTime&& value) { SetSignatureExpiresAfter(std::move(value)); return *this;}


    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline const Aws::String& GetJobInvoker() const{ return m_jobInvoker; }

    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline bool JobInvokerHasBeenSet() const { return m_jobInvokerHasBeenSet; }

    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline void SetJobInvoker(const Aws::String& value) { m_jobInvokerHasBeenSet = true; m_jobInvoker = value; }

    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline void SetJobInvoker(Aws::String&& value) { m_jobInvokerHasBeenSet = true; m_jobInvoker = std::move(value); }

    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline void SetJobInvoker(const char* value) { m_jobInvokerHasBeenSet = true; m_jobInvoker.assign(value); }

    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline ListSigningJobsRequest& WithJobInvoker(const Aws::String& value) { SetJobInvoker(value); return *this;}

    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline ListSigningJobsRequest& WithJobInvoker(Aws::String&& value) { SetJobInvoker(std::move(value)); return *this;}

    /**
     * <p>Filters results to return only signing jobs initiated by a specified IAM
     * entity.</p>
     */
    inline ListSigningJobsRequest& WithJobInvoker(const char* value) { SetJobInvoker(value); return *this;}

  private:

    SigningStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_isRevoked;
    bool m_isRevokedHasBeenSet = false;

    Aws::Utils::DateTime m_signatureExpiresBefore;
    bool m_signatureExpiresBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_signatureExpiresAfter;
    bool m_signatureExpiresAfterHasBeenSet = false;

    Aws::String m_jobInvoker;
    bool m_jobInvokerHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
