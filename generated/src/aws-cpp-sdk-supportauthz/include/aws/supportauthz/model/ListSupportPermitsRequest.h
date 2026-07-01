/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supportauthz/SupportAuthZRequest.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/SupportPermitStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SupportAuthZ {
namespace Model {

/**
 */
class ListSupportPermitsRequest : public SupportAuthZRequest {
 public:
  AWS_SUPPORTAUTHZ_API ListSupportPermitsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSupportPermits"; }

  AWS_SUPPORTAUTHZ_API Aws::String SerializePayload() const override;

  AWS_SUPPORTAUTHZ_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSupportPermitsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Valid range is 1 to
   * 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListSupportPermitsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results by support permit status. Valid values: ACTIVE, INACTIVE,
   * DELETING.</p>
   */
  inline const Aws::Vector<SupportPermitStatus>& GetSupportPermitStatuses() const { return m_supportPermitStatuses; }
  inline bool SupportPermitStatusesHasBeenSet() const { return m_supportPermitStatusesHasBeenSet; }
  template <typename SupportPermitStatusesT = Aws::Vector<SupportPermitStatus>>
  void SetSupportPermitStatuses(SupportPermitStatusesT&& value) {
    m_supportPermitStatusesHasBeenSet = true;
    m_supportPermitStatuses = std::forward<SupportPermitStatusesT>(value);
  }
  template <typename SupportPermitStatusesT = Aws::Vector<SupportPermitStatus>>
  ListSupportPermitsRequest& WithSupportPermitStatuses(SupportPermitStatusesT&& value) {
    SetSupportPermitStatuses(std::forward<SupportPermitStatusesT>(value));
    return *this;
  }
  inline ListSupportPermitsRequest& AddSupportPermitStatuses(SupportPermitStatus value) {
    m_supportPermitStatusesHasBeenSet = true;
    m_supportPermitStatuses.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::Vector<SupportPermitStatus> m_supportPermitStatuses;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_supportPermitStatusesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
