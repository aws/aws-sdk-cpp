﻿/**
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
    AWS_SECURITYHUB_API UpdateFindingAggregatorRequest();

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
    inline const Aws::String& GetFindingAggregatorArn() const{ return m_findingAggregatorArn; }
    inline bool FindingAggregatorArnHasBeenSet() const { return m_findingAggregatorArnHasBeenSet; }
    inline void SetFindingAggregatorArn(const Aws::String& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = value; }
    inline void SetFindingAggregatorArn(Aws::String&& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = std::move(value); }
    inline void SetFindingAggregatorArn(const char* value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn.assign(value); }
    inline UpdateFindingAggregatorRequest& WithFindingAggregatorArn(const Aws::String& value) { SetFindingAggregatorArn(value); return *this;}
    inline UpdateFindingAggregatorRequest& WithFindingAggregatorArn(Aws::String&& value) { SetFindingAggregatorArn(std::move(value)); return *this;}
    inline UpdateFindingAggregatorRequest& WithFindingAggregatorArn(const char* value) { SetFindingAggregatorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to aggregate findings from all of the available Regions in
     * the current partition. Also determines whether to automatically aggregate
     * findings from new Regions as Security Hub supports them and you opt into
     * them.</p> <p>The selected option also determines how to use the Regions provided
     * in the Regions list.</p> <p>The options are as follows:</p> <ul> <li> <p>
     * <code>ALL_REGIONS</code> - Indicates to aggregate findings from all of the
     * Regions where Security Hub is enabled. When you choose this option, Security Hub
     * also automatically aggregates findings from new Regions as Security Hub supports
     * them and you opt into them. </p> </li> <li> <p>
     * <code>ALL_REGIONS_EXCEPT_SPECIFIED</code> - Indicates to aggregate findings from
     * all of the Regions where Security Hub is enabled, except for the Regions listed
     * in the <code>Regions</code> parameter. When you choose this option, Security Hub
     * also automatically aggregates findings from new Regions as Security Hub supports
     * them and you opt into them. </p> </li> <li> <p> <code>SPECIFIED_REGIONS</code> -
     * Indicates to aggregate findings only from the Regions listed in the
     * <code>Regions</code> parameter. Security Hub does not automatically aggregate
     * findings from new Regions. </p> </li> </ul>
     */
    inline const Aws::String& GetRegionLinkingMode() const{ return m_regionLinkingMode; }
    inline bool RegionLinkingModeHasBeenSet() const { return m_regionLinkingModeHasBeenSet; }
    inline void SetRegionLinkingMode(const Aws::String& value) { m_regionLinkingModeHasBeenSet = true; m_regionLinkingMode = value; }
    inline void SetRegionLinkingMode(Aws::String&& value) { m_regionLinkingModeHasBeenSet = true; m_regionLinkingMode = std::move(value); }
    inline void SetRegionLinkingMode(const char* value) { m_regionLinkingModeHasBeenSet = true; m_regionLinkingMode.assign(value); }
    inline UpdateFindingAggregatorRequest& WithRegionLinkingMode(const Aws::String& value) { SetRegionLinkingMode(value); return *this;}
    inline UpdateFindingAggregatorRequest& WithRegionLinkingMode(Aws::String&& value) { SetRegionLinkingMode(std::move(value)); return *this;}
    inline UpdateFindingAggregatorRequest& WithRegionLinkingMode(const char* value) { SetRegionLinkingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>RegionLinkingMode</code> is
     * <code>ALL_REGIONS_EXCEPT_SPECIFIED</code>, then this is a space-separated list
     * of Regions that do not aggregate findings to the aggregation Region.</p> <p>If
     * <code>RegionLinkingMode</code> is <code>SPECIFIED_REGIONS</code>, then this is a
     * space-separated list of Regions that do aggregate findings to the aggregation
     * Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }
    inline UpdateFindingAggregatorRequest& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline UpdateFindingAggregatorRequest& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline UpdateFindingAggregatorRequest& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    inline UpdateFindingAggregatorRequest& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }
    inline UpdateFindingAggregatorRequest& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
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
