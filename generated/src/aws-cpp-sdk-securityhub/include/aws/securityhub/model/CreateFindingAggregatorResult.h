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
  class CreateFindingAggregatorResult
  {
  public:
    AWS_SECURITYHUB_API CreateFindingAggregatorResult();
    AWS_SECURITYHUB_API CreateFindingAggregatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API CreateFindingAggregatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and stop cross-Region aggregation.</p>
     */
    inline const Aws::String& GetFindingAggregatorArn() const{ return m_findingAggregatorArn; }
    inline void SetFindingAggregatorArn(const Aws::String& value) { m_findingAggregatorArn = value; }
    inline void SetFindingAggregatorArn(Aws::String&& value) { m_findingAggregatorArn = std::move(value); }
    inline void SetFindingAggregatorArn(const char* value) { m_findingAggregatorArn.assign(value); }
    inline CreateFindingAggregatorResult& WithFindingAggregatorArn(const Aws::String& value) { SetFindingAggregatorArn(value); return *this;}
    inline CreateFindingAggregatorResult& WithFindingAggregatorArn(Aws::String&& value) { SetFindingAggregatorArn(std::move(value)); return *this;}
    inline CreateFindingAggregatorResult& WithFindingAggregatorArn(const char* value) { SetFindingAggregatorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The home Region. Findings generated in linked Regions are replicated and sent
     * to the home Region.</p>
     */
    inline const Aws::String& GetFindingAggregationRegion() const{ return m_findingAggregationRegion; }
    inline void SetFindingAggregationRegion(const Aws::String& value) { m_findingAggregationRegion = value; }
    inline void SetFindingAggregationRegion(Aws::String&& value) { m_findingAggregationRegion = std::move(value); }
    inline void SetFindingAggregationRegion(const char* value) { m_findingAggregationRegion.assign(value); }
    inline CreateFindingAggregatorResult& WithFindingAggregationRegion(const Aws::String& value) { SetFindingAggregationRegion(value); return *this;}
    inline CreateFindingAggregatorResult& WithFindingAggregationRegion(Aws::String&& value) { SetFindingAggregationRegion(std::move(value)); return *this;}
    inline CreateFindingAggregatorResult& WithFindingAggregationRegion(const char* value) { SetFindingAggregationRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline const Aws::String& GetRegionLinkingMode() const{ return m_regionLinkingMode; }
    inline void SetRegionLinkingMode(const Aws::String& value) { m_regionLinkingMode = value; }
    inline void SetRegionLinkingMode(Aws::String&& value) { m_regionLinkingMode = std::move(value); }
    inline void SetRegionLinkingMode(const char* value) { m_regionLinkingMode.assign(value); }
    inline CreateFindingAggregatorResult& WithRegionLinkingMode(const Aws::String& value) { SetRegionLinkingMode(value); return *this;}
    inline CreateFindingAggregatorResult& WithRegionLinkingMode(Aws::String&& value) { SetRegionLinkingMode(std::move(value)); return *this;}
    inline CreateFindingAggregatorResult& WithRegionLinkingMode(const char* value) { SetRegionLinkingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regions = value; }
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regions = std::move(value); }
    inline CreateFindingAggregatorResult& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline CreateFindingAggregatorResult& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline CreateFindingAggregatorResult& AddRegions(const Aws::String& value) { m_regions.push_back(value); return *this; }
    inline CreateFindingAggregatorResult& AddRegions(Aws::String&& value) { m_regions.push_back(std::move(value)); return *this; }
    inline CreateFindingAggregatorResult& AddRegions(const char* value) { m_regions.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateFindingAggregatorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateFindingAggregatorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateFindingAggregatorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_findingAggregatorArn;

    Aws::String m_findingAggregationRegion;

    Aws::String m_regionLinkingMode;

    Aws::Vector<Aws::String> m_regions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
