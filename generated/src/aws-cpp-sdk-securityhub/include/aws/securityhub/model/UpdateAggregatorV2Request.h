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
  class UpdateAggregatorV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateAggregatorV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAggregatorV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the Aggregator V2.</p>
     */
    inline const Aws::String& GetAggregatorV2Arn() const { return m_aggregatorV2Arn; }
    inline bool AggregatorV2ArnHasBeenSet() const { return m_aggregatorV2ArnHasBeenSet; }
    template<typename AggregatorV2ArnT = Aws::String>
    void SetAggregatorV2Arn(AggregatorV2ArnT&& value) { m_aggregatorV2ArnHasBeenSet = true; m_aggregatorV2Arn = std::forward<AggregatorV2ArnT>(value); }
    template<typename AggregatorV2ArnT = Aws::String>
    UpdateAggregatorV2Request& WithAggregatorV2Arn(AggregatorV2ArnT&& value) { SetAggregatorV2Arn(std::forward<AggregatorV2ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how Amazon Web Services Regions should be linked to the Aggregator
     * V2.</p>
     */
    inline const Aws::String& GetRegionLinkingMode() const { return m_regionLinkingMode; }
    inline bool RegionLinkingModeHasBeenSet() const { return m_regionLinkingModeHasBeenSet; }
    template<typename RegionLinkingModeT = Aws::String>
    void SetRegionLinkingMode(RegionLinkingModeT&& value) { m_regionLinkingModeHasBeenSet = true; m_regionLinkingMode = std::forward<RegionLinkingModeT>(value); }
    template<typename RegionLinkingModeT = Aws::String>
    UpdateAggregatorV2Request& WithRegionLinkingMode(RegionLinkingModeT&& value) { SetRegionLinkingMode(std::forward<RegionLinkingModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services Regions linked to the aggegation Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedRegions() const { return m_linkedRegions; }
    inline bool LinkedRegionsHasBeenSet() const { return m_linkedRegionsHasBeenSet; }
    template<typename LinkedRegionsT = Aws::Vector<Aws::String>>
    void SetLinkedRegions(LinkedRegionsT&& value) { m_linkedRegionsHasBeenSet = true; m_linkedRegions = std::forward<LinkedRegionsT>(value); }
    template<typename LinkedRegionsT = Aws::Vector<Aws::String>>
    UpdateAggregatorV2Request& WithLinkedRegions(LinkedRegionsT&& value) { SetLinkedRegions(std::forward<LinkedRegionsT>(value)); return *this;}
    template<typename LinkedRegionsT = Aws::String>
    UpdateAggregatorV2Request& AddLinkedRegions(LinkedRegionsT&& value) { m_linkedRegionsHasBeenSet = true; m_linkedRegions.emplace_back(std::forward<LinkedRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aggregatorV2Arn;
    bool m_aggregatorV2ArnHasBeenSet = false;

    Aws::String m_regionLinkingMode;
    bool m_regionLinkingModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkedRegions;
    bool m_linkedRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
