/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {

/**
 */
class CreateResourceExplorerSetupRequest : public ResourceExplorer2Request {
 public:
  AWS_RESOURCEEXPLORER2_API CreateResourceExplorerSetupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateResourceExplorerSetup"; }

  AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A list of Amazon Web Services Regions where Resource Explorer should be
   * configured. Each Region in the list will have a user-owned index created.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegionList() const { return m_regionList; }
  inline bool RegionListHasBeenSet() const { return m_regionListHasBeenSet; }
  template <typename RegionListT = Aws::Vector<Aws::String>>
  void SetRegionList(RegionListT&& value) {
    m_regionListHasBeenSet = true;
    m_regionList = std::forward<RegionListT>(value);
  }
  template <typename RegionListT = Aws::Vector<Aws::String>>
  CreateResourceExplorerSetupRequest& WithRegionList(RegionListT&& value) {
    SetRegionList(std::forward<RegionListT>(value));
    return *this;
  }
  template <typename RegionListT = Aws::String>
  CreateResourceExplorerSetupRequest& AddRegionList(RegionListT&& value) {
    m_regionListHasBeenSet = true;
    m_regionList.emplace_back(std::forward<RegionListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of Amazon Web Services Regions that should be configured as aggregator
   * Regions. Aggregator Regions receive replicated index information from all other
   * Regions where there is a user-owned index.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAggregatorRegions() const { return m_aggregatorRegions; }
  inline bool AggregatorRegionsHasBeenSet() const { return m_aggregatorRegionsHasBeenSet; }
  template <typename AggregatorRegionsT = Aws::Vector<Aws::String>>
  void SetAggregatorRegions(AggregatorRegionsT&& value) {
    m_aggregatorRegionsHasBeenSet = true;
    m_aggregatorRegions = std::forward<AggregatorRegionsT>(value);
  }
  template <typename AggregatorRegionsT = Aws::Vector<Aws::String>>
  CreateResourceExplorerSetupRequest& WithAggregatorRegions(AggregatorRegionsT&& value) {
    SetAggregatorRegions(std::forward<AggregatorRegionsT>(value));
    return *this;
  }
  template <typename AggregatorRegionsT = Aws::String>
  CreateResourceExplorerSetupRequest& AddAggregatorRegions(AggregatorRegionsT&& value) {
    m_aggregatorRegionsHasBeenSet = true;
    m_aggregatorRegions.emplace_back(std::forward<AggregatorRegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the view to be created as part of the Resource Explorer setup.
   * The view name must be unique within the Amazon Web Services account and
   * Region.</p>
   */
  inline const Aws::String& GetViewName() const { return m_viewName; }
  inline bool ViewNameHasBeenSet() const { return m_viewNameHasBeenSet; }
  template <typename ViewNameT = Aws::String>
  void SetViewName(ViewNameT&& value) {
    m_viewNameHasBeenSet = true;
    m_viewName = std::forward<ViewNameT>(value);
  }
  template <typename ViewNameT = Aws::String>
  CreateResourceExplorerSetupRequest& WithViewName(ViewNameT&& value) {
    SetViewName(std::forward<ViewNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_regionList;
  bool m_regionListHasBeenSet = false;

  Aws::Vector<Aws::String> m_aggregatorRegions;
  bool m_aggregatorRegionsHasBeenSet = false;

  Aws::String m_viewName;
  bool m_viewNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
