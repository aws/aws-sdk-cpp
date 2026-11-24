/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace QuickSight {
namespace Model {

/**
 */
class ListInboundConnectorApplicationAssociationsRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API ListInboundConnectorApplicationAssociationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListInboundConnectorApplicationAssociations"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the Quick Sight
   * account.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  ListInboundConnectorApplicationAssociationsRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the inbound connector.</p>
   */
  inline const Aws::String& GetInboundConnectorId() const { return m_inboundConnectorId; }
  inline bool InboundConnectorIdHasBeenSet() const { return m_inboundConnectorIdHasBeenSet; }
  template <typename InboundConnectorIdT = Aws::String>
  void SetInboundConnectorId(InboundConnectorIdT&& value) {
    m_inboundConnectorIdHasBeenSet = true;
    m_inboundConnectorId = std::forward<InboundConnectorIdT>(value);
  }
  template <typename InboundConnectorIdT = Aws::String>
  ListInboundConnectorApplicationAssociationsRequest& WithInboundConnectorId(InboundConnectorIdT&& value) {
    SetInboundConnectorId(std::forward<InboundConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return. The default is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListInboundConnectorApplicationAssociationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInboundConnectorApplicationAssociationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_inboundConnectorId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_inboundConnectorIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
