/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ResourceType.h>
#include <aws/quicksight/model/UserLimitsEntry.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class BatchDescribeUserLimitsRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API BatchDescribeUserLimitsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeUserLimits"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the users.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  BatchDescribeUserLimitsRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of users to describe limits for. Each entry contains a user name and
   * namespace.</p>
   */
  inline const Aws::Vector<UserLimitsEntry>& GetUsers() const { return m_users; }
  inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
  template <typename UsersT = Aws::Vector<UserLimitsEntry>>
  void SetUsers(UsersT&& value) {
    m_usersHasBeenSet = true;
    m_users = std::forward<UsersT>(value);
  }
  template <typename UsersT = Aws::Vector<UserLimitsEntry>>
  BatchDescribeUserLimitsRequest& WithUsers(UsersT&& value) {
    SetUsers(std::forward<UsersT>(value));
    return *this;
  }
  template <typename UsersT = UserLimitsEntry>
  BatchDescribeUserLimitsRequest& AddUsers(UsersT&& value) {
    m_usersHasBeenSet = true;
    m_users.emplace_back(std::forward<UsersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter that limits the results to specific resource types. If you
   * don't specify a value, the operation returns limits for all resource types.</p>
   */
  inline const Aws::Vector<ResourceType>& GetResourceTypes() const { return m_resourceTypes; }
  inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
  template <typename ResourceTypesT = Aws::Vector<ResourceType>>
  void SetResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes = std::forward<ResourceTypesT>(value);
  }
  template <typename ResourceTypesT = Aws::Vector<ResourceType>>
  BatchDescribeUserLimitsRequest& WithResourceTypes(ResourceTypesT&& value) {
    SetResourceTypes(std::forward<ResourceTypesT>(value));
    return *this;
  }
  inline BatchDescribeUserLimitsRequest& AddResourceTypes(ResourceType value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::Vector<UserLimitsEntry> m_users;

  Aws::Vector<ResourceType> m_resourceTypes;
  bool m_accountIdHasBeenSet = false;
  bool m_usersHasBeenSet = false;
  bool m_resourceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
