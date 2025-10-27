/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/IndexStatus.h>
#include <aws/resource-explorer-2/model/ViewStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ResourceExplorer2 {
namespace Model {

/**
 * <p>Contains information about the status of Resource Explorer configuration in a
 * specific Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/RegionStatus">AWS
 * API Reference</a></p>
 */
class RegionStatus {
 public:
  AWS_RESOURCEEXPLORER2_API RegionStatus() = default;
  AWS_RESOURCEEXPLORER2_API RegionStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API RegionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region for which this status information applies.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  RegionStatus& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status information for the Resource Explorer index in this Region.</p>
   */
  inline const IndexStatus& GetIndex() const { return m_index; }
  inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
  template <typename IndexT = IndexStatus>
  void SetIndex(IndexT&& value) {
    m_indexHasBeenSet = true;
    m_index = std::forward<IndexT>(value);
  }
  template <typename IndexT = IndexStatus>
  RegionStatus& WithIndex(IndexT&& value) {
    SetIndex(std::forward<IndexT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status information for the Resource Explorer view in this Region.</p>
   */
  inline const ViewStatus& GetView() const { return m_view; }
  inline bool ViewHasBeenSet() const { return m_viewHasBeenSet; }
  template <typename ViewT = ViewStatus>
  void SetView(ViewT&& value) {
    m_viewHasBeenSet = true;
    m_view = std::forward<ViewT>(value);
  }
  template <typename ViewT = ViewStatus>
  RegionStatus& WithView(ViewT&& value) {
    SetView(std::forward<ViewT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;
  bool m_regionHasBeenSet = false;

  IndexStatus m_index;
  bool m_indexHasBeenSet = false;

  ViewStatus m_view;
  bool m_viewHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
