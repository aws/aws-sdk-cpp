/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class UpdateFindingAggregatorResult
  {
  public:
    AWS_SECURITYHUB_API UpdateFindingAggregatorResult() = default;
    AWS_SECURITYHUB_API UpdateFindingAggregatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API UpdateFindingAggregatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the finding aggregator.</p>
     */
    inline const Aws::String& GetFindingAggregatorArn() const { return m_findingAggregatorArn; }
    template<typename FindingAggregatorArnT = Aws::String>
    void SetFindingAggregatorArn(FindingAggregatorArnT&& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = std::forward<FindingAggregatorArnT>(value); }
    template<typename FindingAggregatorArnT = Aws::String>
    UpdateFindingAggregatorResult& WithFindingAggregatorArn(FindingAggregatorArnT&& value) { SetFindingAggregatorArn(std::forward<FindingAggregatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The home Region. Findings generated in linked Regions are replicated and sent
     * to the home Region.</p>
     */
    inline const Aws::String& GetFindingAggregationRegion() const { return m_findingAggregationRegion; }
    template<typename FindingAggregationRegionT = Aws::String>
    void SetFindingAggregationRegion(FindingAggregationRegionT&& value) { m_findingAggregationRegionHasBeenSet = true; m_findingAggregationRegion = std::forward<FindingAggregationRegionT>(value); }
    template<typename FindingAggregationRegionT = Aws::String>
    UpdateFindingAggregatorResult& WithFindingAggregationRegion(FindingAggregationRegionT&& value) { SetFindingAggregationRegion(std::forward<FindingAggregationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline const Aws::String& GetRegionLinkingMode() const { return m_regionLinkingMode; }
    template<typename RegionLinkingModeT = Aws::String>
    void SetRegionLinkingMode(RegionLinkingModeT&& value) { m_regionLinkingModeHasBeenSet = true; m_regionLinkingMode = std::forward<RegionLinkingModeT>(value); }
    template<typename RegionLinkingModeT = Aws::String>
    UpdateFindingAggregatorResult& WithRegionLinkingMode(RegionLinkingModeT&& value) { SetRegionLinkingMode(std::forward<RegionLinkingModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    UpdateFindingAggregatorResult& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    UpdateFindingAggregatorResult& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateFindingAggregatorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_findingAggregatorArn;
    bool m_findingAggregatorArnHasBeenSet = false;

    Aws::String m_findingAggregationRegion;
    bool m_findingAggregationRegionHasBeenSet = false;

    Aws::String m_regionLinkingMode;
    bool m_regionLinkingModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
