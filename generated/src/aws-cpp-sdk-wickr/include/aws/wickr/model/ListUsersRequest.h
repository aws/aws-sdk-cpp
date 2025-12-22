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
class ListUsersRequest : public WickrRequest {
 public:
  AWS_WICKR_API ListUsersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListUsers"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  AWS_WICKR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the Wickr network from which to list users.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  ListUsersRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
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
  ListUsersRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of users to return in a single page. Valid range is 1-100.
   * Default is 10.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListUsersRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fields to sort users by. Multiple fields can be specified by separating
   * them with '+'. Accepted values include 'username', 'firstName', 'lastName',
   * 'status', and 'groupId'.</p>
   */
  inline const Aws::String& GetSortFields() const { return m_sortFields; }
  inline bool SortFieldsHasBeenSet() const { return m_sortFieldsHasBeenSet; }
  template <typename SortFieldsT = Aws::String>
  void SetSortFields(SortFieldsT&& value) {
    m_sortFieldsHasBeenSet = true;
    m_sortFields = std::forward<SortFieldsT>(value);
  }
  template <typename SortFieldsT = Aws::String>
  ListUsersRequest& WithSortFields(SortFieldsT&& value) {
    SetSortFields(std::forward<SortFieldsT>(value));
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
  inline ListUsersRequest& WithSortDirection(SortDirection value) {
    SetSortDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include users with first names matching this
   * value.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  ListUsersRequest& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include users with last names matching this value.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  ListUsersRequest& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include users with usernames matching this value.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  ListUsersRequest& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include users with this status (1 for pending, 2 for
   * active).</p>
   */
  inline int GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListUsersRequest& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only include users belonging to this security group.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  ListUsersRequest& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::String m_sortFields;

  SortDirection m_sortDirection{SortDirection::NOT_SET};

  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_username;

  int m_status{0};

  Aws::String m_groupId;
  bool m_networkIdHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_sortFieldsHasBeenSet = false;
  bool m_sortDirectionHasBeenSet = false;
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
