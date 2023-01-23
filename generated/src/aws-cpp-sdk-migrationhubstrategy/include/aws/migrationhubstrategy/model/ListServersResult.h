/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/ServerDetail.h>
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
  class ListServersResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListServersResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline ListServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline ListServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The list of servers with detailed information about each server. </p>
     */
    inline const Aws::Vector<ServerDetail>& GetServerInfos() const{ return m_serverInfos; }

    /**
     * <p> The list of servers with detailed information about each server. </p>
     */
    inline void SetServerInfos(const Aws::Vector<ServerDetail>& value) { m_serverInfos = value; }

    /**
     * <p> The list of servers with detailed information about each server. </p>
     */
    inline void SetServerInfos(Aws::Vector<ServerDetail>&& value) { m_serverInfos = std::move(value); }

    /**
     * <p> The list of servers with detailed information about each server. </p>
     */
    inline ListServersResult& WithServerInfos(const Aws::Vector<ServerDetail>& value) { SetServerInfos(value); return *this;}

    /**
     * <p> The list of servers with detailed information about each server. </p>
     */
    inline ListServersResult& WithServerInfos(Aws::Vector<ServerDetail>&& value) { SetServerInfos(std::move(value)); return *this;}

    /**
     * <p> The list of servers with detailed information about each server. </p>
     */
    inline ListServersResult& AddServerInfos(const ServerDetail& value) { m_serverInfos.push_back(value); return *this; }

    /**
     * <p> The list of servers with detailed information about each server. </p>
     */
    inline ListServersResult& AddServerInfos(ServerDetail&& value) { m_serverInfos.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServerDetail> m_serverInfos;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
