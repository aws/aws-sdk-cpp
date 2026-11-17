/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class GetAgreementRequestTermsRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementRequestTermsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgreementRequestTerms"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the agreement request.</p>
   */
  inline const Aws::String& GetAgreementRequestId() const { return m_agreementRequestId; }
  inline bool AgreementRequestIdHasBeenSet() const { return m_agreementRequestIdHasBeenSet; }
  template <typename AgreementRequestIdT = Aws::String>
  void SetAgreementRequestId(AgreementRequestIdT&& value) {
    m_agreementRequestIdHasBeenSet = true;
    m_agreementRequestId = std::forward<AgreementRequestIdT>(value);
  }
  template <typename AgreementRequestIdT = Aws::String>
  GetAgreementRequestTermsRequest& WithAgreementRequestId(AgreementRequestIdT&& value) {
    SetAgreementRequestId(std::forward<AgreementRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of terms to return in the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetAgreementRequestTermsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to specify where to start pagination.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetAgreementRequestTermsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementRequestId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_agreementRequestIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
