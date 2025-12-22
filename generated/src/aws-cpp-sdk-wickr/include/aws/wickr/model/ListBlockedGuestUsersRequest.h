/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/SortDirection.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Wickr {
namespace Model {

/**
 */
class ListBlockedGuestUsersRequest : public WickrRequest {
 public:
  AWS_WICKR_API ListBlockedGuestUsersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBlockedGuestUsers"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  AWS_WICKR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the Wickr network from which to list blocked guest users.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  ListBlockedGuestUsersRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of blocked guest users to return in a single page. Valid
   * range is 1-100. Default is 10.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBlockedGuestUsersRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction to sort results. Valid values are 'ASC' (ascending) or 'DESC'
   * (descending). Default is 'DESC'.</p>
   */
  inline SortDirection GetSortDirection() const { return m_sortDirection; }
  inline bool SortDirectionHasBeenSet() const { return m_sortDirectionHasBeenSet; }
  inline void SetSortDirection(SortDirection value) {
    m_sortDirectionHasBeenSet = true;
    m_sortDirection = value;
  }
  inline ListBlockedGuestUsersRequest& WithSortDirection(SortDirection value) {
    SetSortDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort blocked guest users by. Accepted values include 'username',
   * 'admin', and 'modified'.</p>
   */
  inline const Aws::String& GetSortFields() const { return m_sortFields; }
  inline bool SortFieldsHasBeenSet() const { return m_sortFieldsHasBeenSet; }
  template <typename SortFieldsT = Aws::String>
  void SetSortFields(SortFieldsT&& value) {
    m_sortFieldsHasBeenSet = true;
    m_sortFields = std::forward<SortFieldsT>(value);
  }
  template <typename SortFieldsT = Aws::String>
  ListBlockedGuestUsersRequest& WithSortFields(SortFieldsT&& value) {
    SetSortFields(std::forward<SortFieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include blocked guest users with usernames matching
   * this value.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  ListBlockedGuestUsersRequest& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include blocked guest users that were blocked by this
   * administrator.</p>
   */
  inline const Aws::String& GetAdmin() const { return m_admin; }
  inline bool AdminHasBeenSet() const { return m_adminHasBeenSet; }
  template <typename AdminT = Aws::String>
  void SetAdmin(AdminT&& value) {
    m_adminHasBeenSet = true;
    m_admin = std::forward<AdminT>(value);
  }
  template <typename AdminT = Aws::String>
  ListBlockedGuestUsersRequest& WithAdmin(AdminT&& value) {
    SetAdmin(std::forward<AdminT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for retrieving the next page of results. This is returned from a
   * previous request when there are more results available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBlockedGuestUsersRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  int m_maxResults{0};

  SortDirection m_sortDirection{SortDirection::NOT_SET};

  Aws::String m_sortFields;

  Aws::String m_username;

  Aws::String m_admin;

  Aws::String m_nextToken;
  bool m_networkIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_sortDirectionHasBeenSet = false;
  bool m_sortFieldsHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_adminHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
