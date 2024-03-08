/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AgreementService
{
namespace Model
{

  /**
   */
  class GetAgreementTermsRequest : public AgreementServiceRequest
  {
  public:
    AWS_AGREEMENTSERVICE_API GetAgreementTermsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAgreementTerms"; }

    AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

    AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(const Aws::String& value) { m_agreementIdHasBeenSet = true; m_agreementId = value; }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(Aws::String&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::move(value); }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline void SetAgreementId(const char* value) { m_agreementIdHasBeenSet = true; m_agreementId.assign(value); }

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline GetAgreementTermsRequest& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline GetAgreementTermsRequest& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline GetAgreementTermsRequest& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}


    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline GetAgreementTermsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline GetAgreementTermsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline GetAgreementTermsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline GetAgreementTermsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
