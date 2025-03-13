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
    AWS_AGREEMENTSERVICE_API GetAgreementTermsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAgreementTerms"; }

    AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

    AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const { return m_agreementId; }
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
    template<typename AgreementIdT = Aws::String>
    void SetAgreementId(AgreementIdT&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::forward<AgreementIdT>(value); }
    template<typename AgreementIdT = Aws::String>
    GetAgreementTermsRequest& WithAgreementId(AgreementIdT&& value) { SetAgreementId(std::forward<AgreementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetAgreementTermsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start pagination</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAgreementTermsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
