/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ExecutionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Filters for listing network migration executions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationExecutionRequestFilters">AWS
 * API Reference</a></p>
 */
class ListNetworkMigrationExecutionRequestFilters {
 public:
  AWS_MGN_API ListNetworkMigrationExecutionRequestFilters() = default;
  AWS_MGN_API ListNetworkMigrationExecutionRequestFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListNetworkMigrationExecutionRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of execution IDs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNetworkMigrationExecutionIDs() const { return m_networkMigrationExecutionIDs; }
  inline bool NetworkMigrationExecutionIDsHasBeenSet() const { return m_networkMigrationExecutionIDsHasBeenSet; }
  template <typename NetworkMigrationExecutionIDsT = Aws::Vector<Aws::String>>
  void SetNetworkMigrationExecutionIDs(NetworkMigrationExecutionIDsT&& value) {
    m_networkMigrationExecutionIDsHasBeenSet = true;
    m_networkMigrationExecutionIDs = std::forward<NetworkMigrationExecutionIDsT>(value);
  }
  template <typename NetworkMigrationExecutionIDsT = Aws::Vector<Aws::String>>
  ListNetworkMigrationExecutionRequestFilters& WithNetworkMigrationExecutionIDs(NetworkMigrationExecutionIDsT&& value) {
    SetNetworkMigrationExecutionIDs(std::forward<NetworkMigrationExecutionIDsT>(value));
    return *this;
  }
  template <typename NetworkMigrationExecutionIDsT = Aws::String>
  ListNetworkMigrationExecutionRequestFilters& AddNetworkMigrationExecutionIDs(NetworkMigrationExecutionIDsT&& value) {
    m_networkMigrationExecutionIDsHasBeenSet = true;
    m_networkMigrationExecutionIDs.emplace_back(std::forward<NetworkMigrationExecutionIDsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of execution statuses to filter by.</p>
   */
  inline const Aws::Vector<ExecutionStatus>& GetNetworkMigrationExecutionStatuses() const { return m_networkMigrationExecutionStatuses; }
  inline bool NetworkMigrationExecutionStatusesHasBeenSet() const { return m_networkMigrationExecutionStatusesHasBeenSet; }
  template <typename NetworkMigrationExecutionStatusesT = Aws::Vector<ExecutionStatus>>
  void SetNetworkMigrationExecutionStatuses(NetworkMigrationExecutionStatusesT&& value) {
    m_networkMigrationExecutionStatusesHasBeenSet = true;
    m_networkMigrationExecutionStatuses = std::forward<NetworkMigrationExecutionStatusesT>(value);
  }
  template <typename NetworkMigrationExecutionStatusesT = Aws::Vector<ExecutionStatus>>
  ListNetworkMigrationExecutionRequestFilters& WithNetworkMigrationExecutionStatuses(NetworkMigrationExecutionStatusesT&& value) {
    SetNetworkMigrationExecutionStatuses(std::forward<NetworkMigrationExecutionStatusesT>(value));
    return *this;
  }
  inline ListNetworkMigrationExecutionRequestFilters& AddNetworkMigrationExecutionStatuses(ExecutionStatus value) {
    m_networkMigrationExecutionStatusesHasBeenSet = true;
    m_networkMigrationExecutionStatuses.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_networkMigrationExecutionIDs;

  Aws::Vector<ExecutionStatus> m_networkMigrationExecutionStatuses;
  bool m_networkMigrationExecutionIDsHasBeenSet = false;
  bool m_networkMigrationExecutionStatusesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
