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
 * <p>Filters for listing mapper segment constructs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationMapperSegmentConstructsFilters">AWS
 * API Reference</a></p>
 */
class ListNetworkMigrationMapperSegmentConstructsFilters {
 public:
  AWS_MGN_API ListNetworkMigrationMapperSegmentConstructsFilters() = default;
  AWS_MGN_API ListNetworkMigrationMapperSegmentConstructsFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListNetworkMigrationMapperSegmentConstructsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of construct IDs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConstructIDs() const { return m_constructIDs; }
  inline bool ConstructIDsHasBeenSet() const { return m_constructIDsHasBeenSet; }
  template <typename ConstructIDsT = Aws::Vector<Aws::String>>
  void SetConstructIDs(ConstructIDsT&& value) {
    m_constructIDsHasBeenSet = true;
    m_constructIDs = std::forward<ConstructIDsT>(value);
  }
  template <typename ConstructIDsT = Aws::Vector<Aws::String>>
  ListNetworkMigrationMapperSegmentConstructsFilters& WithConstructIDs(ConstructIDsT&& value) {
    SetConstructIDs(std::forward<ConstructIDsT>(value));
    return *this;
  }
  template <typename ConstructIDsT = Aws::String>
  ListNetworkMigrationMapperSegmentConstructsFilters& AddConstructIDs(ConstructIDsT&& value) {
    m_constructIDsHasBeenSet = true;
    m_constructIDs.emplace_back(std::forward<ConstructIDsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of construct types to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConstructTypes() const { return m_constructTypes; }
  inline bool ConstructTypesHasBeenSet() const { return m_constructTypesHasBeenSet; }
  template <typename ConstructTypesT = Aws::Vector<Aws::String>>
  void SetConstructTypes(ConstructTypesT&& value) {
    m_constructTypesHasBeenSet = true;
    m_constructTypes = std::forward<ConstructTypesT>(value);
  }
  template <typename ConstructTypesT = Aws::Vector<Aws::String>>
  ListNetworkMigrationMapperSegmentConstructsFilters& WithConstructTypes(ConstructTypesT&& value) {
    SetConstructTypes(std::forward<ConstructTypesT>(value));
    return *this;
  }
  template <typename ConstructTypesT = Aws::String>
  ListNetworkMigrationMapperSegmentConstructsFilters& AddConstructTypes(ConstructTypesT&& value) {
    m_constructTypesHasBeenSet = true;
    m_constructTypes.emplace_back(std::forward<ConstructTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_constructIDs;

  Aws::Vector<Aws::String> m_constructTypes;
  bool m_constructIDsHasBeenSet = false;
  bool m_constructTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
