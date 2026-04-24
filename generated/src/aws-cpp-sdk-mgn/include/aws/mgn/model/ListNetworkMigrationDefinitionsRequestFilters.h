/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>

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
 * <p>Filters for listing network migration definitions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationDefinitionsRequestFilters">AWS
 * API Reference</a></p>
 */
class ListNetworkMigrationDefinitionsRequestFilters {
 public:
  AWS_MGN_API ListNetworkMigrationDefinitionsRequestFilters() = default;
  AWS_MGN_API ListNetworkMigrationDefinitionsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListNetworkMigrationDefinitionsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of definition IDs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNetworkMigrationDefinitionIDs() const { return m_networkMigrationDefinitionIDs; }
  inline bool NetworkMigrationDefinitionIDsHasBeenSet() const { return m_networkMigrationDefinitionIDsHasBeenSet; }
  template <typename NetworkMigrationDefinitionIDsT = Aws::Vector<Aws::String>>
  void SetNetworkMigrationDefinitionIDs(NetworkMigrationDefinitionIDsT&& value) {
    m_networkMigrationDefinitionIDsHasBeenSet = true;
    m_networkMigrationDefinitionIDs = std::forward<NetworkMigrationDefinitionIDsT>(value);
  }
  template <typename NetworkMigrationDefinitionIDsT = Aws::Vector<Aws::String>>
  ListNetworkMigrationDefinitionsRequestFilters& WithNetworkMigrationDefinitionIDs(NetworkMigrationDefinitionIDsT&& value) {
    SetNetworkMigrationDefinitionIDs(std::forward<NetworkMigrationDefinitionIDsT>(value));
    return *this;
  }
  template <typename NetworkMigrationDefinitionIDsT = Aws::String>
  ListNetworkMigrationDefinitionsRequestFilters& AddNetworkMigrationDefinitionIDs(NetworkMigrationDefinitionIDsT&& value) {
    m_networkMigrationDefinitionIDsHasBeenSet = true;
    m_networkMigrationDefinitionIDs.emplace_back(std::forward<NetworkMigrationDefinitionIDsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_networkMigrationDefinitionIDs;
  bool m_networkMigrationDefinitionIDsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
