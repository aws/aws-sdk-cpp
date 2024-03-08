/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/AnalyzableServerSummary.h>
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
  /**
   * <p>Represents output for ListAnalyzableServers operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListAnalyzableServersResponse">AWS
   * API Reference</a></p>
   */
  class ListAnalyzableServersResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListAnalyzableServersResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListAnalyzableServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListAnalyzableServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of analyzable servers with summary information about each
     * server.</p>
     */
    inline const Aws::Vector<AnalyzableServerSummary>& GetAnalyzableServers() const{ return m_analyzableServers; }

    /**
     * <p>The list of analyzable servers with summary information about each
     * server.</p>
     */
    inline void SetAnalyzableServers(const Aws::Vector<AnalyzableServerSummary>& value) { m_analyzableServers = value; }

    /**
     * <p>The list of analyzable servers with summary information about each
     * server.</p>
     */
    inline void SetAnalyzableServers(Aws::Vector<AnalyzableServerSummary>&& value) { m_analyzableServers = std::move(value); }

    /**
     * <p>The list of analyzable servers with summary information about each
     * server.</p>
     */
    inline ListAnalyzableServersResult& WithAnalyzableServers(const Aws::Vector<AnalyzableServerSummary>& value) { SetAnalyzableServers(value); return *this;}

    /**
     * <p>The list of analyzable servers with summary information about each
     * server.</p>
     */
    inline ListAnalyzableServersResult& WithAnalyzableServers(Aws::Vector<AnalyzableServerSummary>&& value) { SetAnalyzableServers(std::move(value)); return *this;}

    /**
     * <p>The list of analyzable servers with summary information about each
     * server.</p>
     */
    inline ListAnalyzableServersResult& AddAnalyzableServers(const AnalyzableServerSummary& value) { m_analyzableServers.push_back(value); return *this; }

    /**
     * <p>The list of analyzable servers with summary information about each
     * server.</p>
     */
    inline ListAnalyzableServersResult& AddAnalyzableServers(AnalyzableServerSummary&& value) { m_analyzableServers.push_back(std::move(value)); return *this; }


    /**
     * <p>The token you use to retrieve the next set of results, or null if there are
     * no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token you use to retrieve the next set of results, or null if there are
     * no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token you use to retrieve the next set of results, or null if there are
     * no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token you use to retrieve the next set of results, or null if there are
     * no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token you use to retrieve the next set of results, or null if there are
     * no more results.</p>
     */
    inline ListAnalyzableServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token you use to retrieve the next set of results, or null if there are
     * no more results.</p>
     */
    inline ListAnalyzableServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token you use to retrieve the next set of results, or null if there are
     * no more results.</p>
     */
    inline ListAnalyzableServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAnalyzableServersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAnalyzableServersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAnalyzableServersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnalyzableServerSummary> m_analyzableServers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
