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
  class CreateAggregatorV2Result
  {
  public:
    AWS_SECURITYHUB_API CreateAggregatorV2Result() = default;
    AWS_SECURITYHUB_API CreateAggregatorV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API CreateAggregatorV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the AggregatorV2.</p>
     */
    inline const Aws::String& GetAggregatorV2Arn() const { return m_aggregatorV2Arn; }
    template<typename AggregatorV2ArnT = Aws::String>
    void SetAggregatorV2Arn(AggregatorV2ArnT&& value) { m_aggregatorV2ArnHasBeenSet = true; m_aggregatorV2Arn = std::forward<AggregatorV2ArnT>(value); }
    template<typename AggregatorV2ArnT = Aws::String>
    CreateAggregatorV2Result& WithAggregatorV2Arn(AggregatorV2ArnT&& value) { SetAggregatorV2Arn(std::forward<AggregatorV2ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where data is aggregated.</p>
     */
    inline const Aws::String& GetAggregationRegion() const { return m_aggregationRegion; }
    template<typename AggregationRegionT = Aws::String>
    void SetAggregationRegion(AggregationRegionT&& value) { m_aggregationRegionHasBeenSet = true; m_aggregationRegion = std::forward<AggregationRegionT>(value); }
    template<typename AggregationRegionT = Aws::String>
    CreateAggregatorV2Result& WithAggregationRegion(AggregationRegionT&& value) { SetAggregationRegion(std::forward<AggregationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how Regions are linked to an Aggregator V2.</p>
     */
    inline const Aws::String& GetRegionLinkingMode() const { return m_regionLinkingMode; }
    template<typename RegionLinkingModeT = Aws::String>
    void SetRegionLinkingMode(RegionLinkingModeT&& value) { m_regionLinkingModeHasBeenSet = true; m_regionLinkingMode = std::forward<RegionLinkingModeT>(value); }
    template<typename RegionLinkingModeT = Aws::String>
    CreateAggregatorV2Result& WithRegionLinkingMode(RegionLinkingModeT&& value) { SetRegionLinkingMode(std::forward<RegionLinkingModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Regions that are linked to the aggregation Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedRegions() const { return m_linkedRegions; }
    template<typename LinkedRegionsT = Aws::Vector<Aws::String>>
    void SetLinkedRegions(LinkedRegionsT&& value) { m_linkedRegionsHasBeenSet = true; m_linkedRegions = std::forward<LinkedRegionsT>(value); }
    template<typename LinkedRegionsT = Aws::Vector<Aws::String>>
    CreateAggregatorV2Result& WithLinkedRegions(LinkedRegionsT&& value) { SetLinkedRegions(std::forward<LinkedRegionsT>(value)); return *this;}
    template<typename LinkedRegionsT = Aws::String>
    CreateAggregatorV2Result& AddLinkedRegions(LinkedRegionsT&& value) { m_linkedRegionsHasBeenSet = true; m_linkedRegions.emplace_back(std::forward<LinkedRegionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAggregatorV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aggregatorV2Arn;
    bool m_aggregatorV2ArnHasBeenSet = false;

    Aws::String m_aggregationRegion;
    bool m_aggregationRegionHasBeenSet = false;

    Aws::String m_regionLinkingMode;
    bool m_regionLinkingModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkedRegions;
    bool m_linkedRegionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
