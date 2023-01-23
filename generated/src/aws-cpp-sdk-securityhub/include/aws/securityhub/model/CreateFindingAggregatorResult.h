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


    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and stop finding aggregation.</p>
     */
    inline const Aws::String& GetFindingAggregatorArn() const{ return m_findingAggregatorArn; }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and stop finding aggregation.</p>
     */
    inline void SetFindingAggregatorArn(const Aws::String& value) { m_findingAggregatorArn = value; }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and stop finding aggregation.</p>
     */
    inline void SetFindingAggregatorArn(Aws::String&& value) { m_findingAggregatorArn = std::move(value); }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and stop finding aggregation.</p>
     */
    inline void SetFindingAggregatorArn(const char* value) { m_findingAggregatorArn.assign(value); }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and stop finding aggregation.</p>
     */
    inline CreateFindingAggregatorResult& WithFindingAggregatorArn(const Aws::String& value) { SetFindingAggregatorArn(value); return *this;}

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and stop finding aggregation.</p>
     */
    inline CreateFindingAggregatorResult& WithFindingAggregatorArn(Aws::String&& value) { SetFindingAggregatorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and stop finding aggregation.</p>
     */
    inline CreateFindingAggregatorResult& WithFindingAggregatorArn(const char* value) { SetFindingAggregatorArn(value); return *this;}


    /**
     * <p>The aggregation Region.</p>
     */
    inline const Aws::String& GetFindingAggregationRegion() const{ return m_findingAggregationRegion; }

    /**
     * <p>The aggregation Region.</p>
     */
    inline void SetFindingAggregationRegion(const Aws::String& value) { m_findingAggregationRegion = value; }

    /**
     * <p>The aggregation Region.</p>
     */
    inline void SetFindingAggregationRegion(Aws::String&& value) { m_findingAggregationRegion = std::move(value); }

    /**
     * <p>The aggregation Region.</p>
     */
    inline void SetFindingAggregationRegion(const char* value) { m_findingAggregationRegion.assign(value); }

    /**
     * <p>The aggregation Region.</p>
     */
    inline CreateFindingAggregatorResult& WithFindingAggregationRegion(const Aws::String& value) { SetFindingAggregationRegion(value); return *this;}

    /**
     * <p>The aggregation Region.</p>
     */
    inline CreateFindingAggregatorResult& WithFindingAggregationRegion(Aws::String&& value) { SetFindingAggregationRegion(std::move(value)); return *this;}

    /**
     * <p>The aggregation Region.</p>
     */
    inline CreateFindingAggregatorResult& WithFindingAggregationRegion(const char* value) { SetFindingAggregationRegion(value); return *this;}


    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline const Aws::String& GetRegionLinkingMode() const{ return m_regionLinkingMode; }

    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline void SetRegionLinkingMode(const Aws::String& value) { m_regionLinkingMode = value; }

    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline void SetRegionLinkingMode(Aws::String&& value) { m_regionLinkingMode = std::move(value); }

    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline void SetRegionLinkingMode(const char* value) { m_regionLinkingMode.assign(value); }

    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline CreateFindingAggregatorResult& WithRegionLinkingMode(const Aws::String& value) { SetRegionLinkingMode(value); return *this;}

    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline CreateFindingAggregatorResult& WithRegionLinkingMode(Aws::String&& value) { SetRegionLinkingMode(std::move(value)); return *this;}

    /**
     * <p>Indicates whether to link all Regions, all Regions except for a list of
     * excluded Regions, or a list of included Regions.</p>
     */
    inline CreateFindingAggregatorResult& WithRegionLinkingMode(const char* value) { SetRegionLinkingMode(value); return *this;}


    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regions = value; }

    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regions = std::move(value); }

    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline CreateFindingAggregatorResult& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline CreateFindingAggregatorResult& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline CreateFindingAggregatorResult& AddRegions(const Aws::String& value) { m_regions.push_back(value); return *this; }

    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline CreateFindingAggregatorResult& AddRegions(Aws::String&& value) { m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of excluded Regions or included Regions.</p>
     */
    inline CreateFindingAggregatorResult& AddRegions(const char* value) { m_regions.push_back(value); return *this; }

  private:

    Aws::String m_findingAggregatorArn;

    Aws::String m_findingAggregationRegion;

    Aws::String m_regionLinkingMode;

    Aws::Vector<Aws::String> m_regions;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
