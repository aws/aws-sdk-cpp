/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateFindingAggregatorRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateFindingAggregatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFindingAggregator"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the finding aggregator. To obtain the ARN, use
     * <code>ListFindingAggregators</code>.</p>
     */
    inline const Aws::String& GetFindingAggregatorArn() const { return m_findingAggregatorArn; }
    inline bool FindingAggregatorArnHasBeenSet() const { return m_findingAggregatorArnHasBeenSet; }
    template<typename FindingAggregatorArnT = Aws::String>
    void SetFindingAggregatorArn(FindingAggregatorArnT&& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = std::forward<FindingAggregatorArnT>(value); }
    template<typename FindingAggregatorArnT = Aws::String>
    UpdateFindingAggregatorRequest& WithFindingAggregatorArn(FindingAggregatorArnT&& value) { SetFindingAggregatorArn(std::forward<FindingAggregatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to aggregate findings from all of the available Regions in
     * the current partition. Also determines whether to automatically aggregate
     * findings from new Regions as Security Hub supports them and you opt into
     * them.</p> <p>The selected option also determines how to use the Regions provided
     * in the Regions list.</p> <p>The options are as follows:</p> <ul> <li> <p>
     * <code>ALL_REGIONS</code> - Aggregates findings from all of the Regions where
     * Security Hub is enabled. When you choose this option, Security Hub also
     * automatically aggregates findings from new Regions as Security Hub supports them
     * and you opt into them. </p> </li> <li> <p>
     * <code>ALL_REGIONS_EXCEPT_SPECIFIED</code> - Aggregates findings from all of the
     * Regions where Security Hub is enabled, except for the Regions listed in the
     * <code>Regions</code> parameter. When you choose this option, Security Hub also
     * automatically aggregates findings from new Regions as Security Hub supports them
     * and you opt into them. </p> </li> <li> <p> <code>SPECIFIED_REGIONS</code> -
     * Aggregates findings only from the Regions listed in the <code>Regions</code>
     * parameter. Security Hub does not automatically aggregate findings from new
     * Regions. </p> </li> <li> <p> <code>NO_REGIONS</code> - Aggregates no data
     * because no Regions are selected as linked Regions. </p> </li> </ul>
     */
    inline const Aws::String& GetRegionLinkingMode() const { return m_regionLinkingMode; }
    inline bool RegionLinkingModeHasBeenSet() const { return m_regionLinkingModeHasBeenSet; }
    template<typename RegionLinkingModeT = Aws::String>
    void SetRegionLinkingMode(RegionLinkingModeT&& value) { m_regionLinkingModeHasBeenSet = true; m_regionLinkingMode = std::forward<RegionLinkingModeT>(value); }
    template<typename RegionLinkingModeT = Aws::String>
    UpdateFindingAggregatorRequest& WithRegionLinkingMode(RegionLinkingModeT&& value) { SetRegionLinkingMode(std::forward<RegionLinkingModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>RegionLinkingMode</code> is
     * <code>ALL_REGIONS_EXCEPT_SPECIFIED</code>, then this is a space-separated list
     * of Regions that don't replicate and send findings to the home Region.</p> <p>If
     * <code>RegionLinkingMode</code> is <code>SPECIFIED_REGIONS</code>, then this is a
     * space-separated list of Regions that do replicate and send findings to the home
     * Region.</p> <p>An <code>InvalidInputException</code> error results if you
     * populate this field while <code>RegionLinkingMode</code> is
     * <code>NO_REGIONS</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    UpdateFindingAggregatorRequest& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    UpdateFindingAggregatorRequest& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_findingAggregatorArn;
    bool m_findingAggregatorArnHasBeenSet = false;

    Aws::String m_regionLinkingMode;
    bool m_regionLinkingModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
