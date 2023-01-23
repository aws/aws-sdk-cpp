/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/Collector.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class ListCollectorsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListCollectorsResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListCollectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListCollectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of all the installed collectors. </p>
     */
    inline const Aws::Vector<Collector>& GetCollectors() const{ return m_collectors; }

    /**
     * <p> The list of all the installed collectors. </p>
     */
    inline void SetCollectors(const Aws::Vector<Collector>& value) { m_collectors = value; }

    /**
     * <p> The list of all the installed collectors. </p>
     */
    inline void SetCollectors(Aws::Vector<Collector>&& value) { m_collectors = std::move(value); }

    /**
     * <p> The list of all the installed collectors. </p>
     */
    inline ListCollectorsResult& WithCollectors(const Aws::Vector<Collector>& value) { SetCollectors(value); return *this;}

    /**
     * <p> The list of all the installed collectors. </p>
     */
    inline ListCollectorsResult& WithCollectors(Aws::Vector<Collector>&& value) { SetCollectors(std::move(value)); return *this;}

    /**
     * <p> The list of all the installed collectors. </p>
     */
    inline ListCollectorsResult& AddCollectors(const Collector& value) { m_collectors.push_back(value); return *this; }

    /**
     * <p> The list of all the installed collectors. </p>
     */
    inline ListCollectorsResult& AddCollectors(Collector&& value) { m_collectors.push_back(std::move(value)); return *this; }


    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline ListCollectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline ListCollectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline ListCollectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Collector> m_collectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
