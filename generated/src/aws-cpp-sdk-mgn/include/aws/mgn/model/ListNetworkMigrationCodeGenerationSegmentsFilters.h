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
 * <p>Filters for listing code generation segments.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationCodeGenerationSegmentsFilters">AWS
 * API Reference</a></p>
 */
class ListNetworkMigrationCodeGenerationSegmentsFilters {
 public:
  AWS_MGN_API ListNetworkMigrationCodeGenerationSegmentsFilters() = default;
  AWS_MGN_API ListNetworkMigrationCodeGenerationSegmentsFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListNetworkMigrationCodeGenerationSegmentsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of segment IDs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSegmentIDs() const { return m_segmentIDs; }
  inline bool SegmentIDsHasBeenSet() const { return m_segmentIDsHasBeenSet; }
  template <typename SegmentIDsT = Aws::Vector<Aws::String>>
  void SetSegmentIDs(SegmentIDsT&& value) {
    m_segmentIDsHasBeenSet = true;
    m_segmentIDs = std::forward<SegmentIDsT>(value);
  }
  template <typename SegmentIDsT = Aws::Vector<Aws::String>>
  ListNetworkMigrationCodeGenerationSegmentsFilters& WithSegmentIDs(SegmentIDsT&& value) {
    SetSegmentIDs(std::forward<SegmentIDsT>(value));
    return *this;
  }
  template <typename SegmentIDsT = Aws::String>
  ListNetworkMigrationCodeGenerationSegmentsFilters& AddSegmentIDs(SegmentIDsT&& value) {
    m_segmentIDsHasBeenSet = true;
    m_segmentIDs.emplace_back(std::forward<SegmentIDsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_segmentIDs;
  bool m_segmentIDsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
