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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListAnalyzableServersResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListAnalyzableServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListAnalyzableServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of analyzable servers with summary information about each
     * server.</p>
     */
    inline const Aws::Vector<AnalyzableServerSummary>& GetAnalyzableServers() const { return m_analyzableServers; }
    template<typename AnalyzableServersT = Aws::Vector<AnalyzableServerSummary>>
    void SetAnalyzableServers(AnalyzableServersT&& value) { m_analyzableServersHasBeenSet = true; m_analyzableServers = std::forward<AnalyzableServersT>(value); }
    template<typename AnalyzableServersT = Aws::Vector<AnalyzableServerSummary>>
    ListAnalyzableServersResult& WithAnalyzableServers(AnalyzableServersT&& value) { SetAnalyzableServers(std::forward<AnalyzableServersT>(value)); return *this;}
    template<typename AnalyzableServersT = AnalyzableServerSummary>
    ListAnalyzableServersResult& AddAnalyzableServers(AnalyzableServersT&& value) { m_analyzableServersHasBeenSet = true; m_analyzableServers.emplace_back(std::forward<AnalyzableServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token you use to retrieve the next set of results, or null if there are
     * no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnalyzableServersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnalyzableServersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalyzableServerSummary> m_analyzableServers;
    bool m_analyzableServersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
