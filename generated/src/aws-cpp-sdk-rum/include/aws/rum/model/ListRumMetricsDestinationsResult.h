/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/MetricDestinationSummary.h>
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
namespace CloudWatchRUM
{
namespace Model
{
  class ListRumMetricsDestinationsResult
  {
  public:
    AWS_CLOUDWATCHRUM_API ListRumMetricsDestinationsResult();
    AWS_CLOUDWATCHRUM_API ListRumMetricsDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API ListRumMetricsDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of CloudWatch RUM extended metrics destinations associated with the
     * app monitor that you specified.</p>
     */
    inline const Aws::Vector<MetricDestinationSummary>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The list of CloudWatch RUM extended metrics destinations associated with the
     * app monitor that you specified.</p>
     */
    inline void SetDestinations(const Aws::Vector<MetricDestinationSummary>& value) { m_destinations = value; }

    /**
     * <p>The list of CloudWatch RUM extended metrics destinations associated with the
     * app monitor that you specified.</p>
     */
    inline void SetDestinations(Aws::Vector<MetricDestinationSummary>&& value) { m_destinations = std::move(value); }

    /**
     * <p>The list of CloudWatch RUM extended metrics destinations associated with the
     * app monitor that you specified.</p>
     */
    inline ListRumMetricsDestinationsResult& WithDestinations(const Aws::Vector<MetricDestinationSummary>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The list of CloudWatch RUM extended metrics destinations associated with the
     * app monitor that you specified.</p>
     */
    inline ListRumMetricsDestinationsResult& WithDestinations(Aws::Vector<MetricDestinationSummary>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The list of CloudWatch RUM extended metrics destinations associated with the
     * app monitor that you specified.</p>
     */
    inline ListRumMetricsDestinationsResult& AddDestinations(const MetricDestinationSummary& value) { m_destinations.push_back(value); return *this; }

    /**
     * <p>The list of CloudWatch RUM extended metrics destinations associated with the
     * app monitor that you specified.</p>
     */
    inline ListRumMetricsDestinationsResult& AddDestinations(MetricDestinationSummary&& value) { m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline ListRumMetricsDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline ListRumMetricsDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline ListRumMetricsDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MetricDestinationSummary> m_destinations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
