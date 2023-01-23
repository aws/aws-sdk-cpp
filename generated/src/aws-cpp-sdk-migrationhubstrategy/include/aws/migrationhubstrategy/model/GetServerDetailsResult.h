/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/ServerDetail.h>
#include <aws/migrationhubstrategy/model/AssociatedApplication.h>
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
  class GetServerDetailsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerDetailsResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The associated application group the server belongs to, as defined in AWS
     * Application Discovery Service. </p>
     */
    inline const Aws::Vector<AssociatedApplication>& GetAssociatedApplications() const{ return m_associatedApplications; }

    /**
     * <p> The associated application group the server belongs to, as defined in AWS
     * Application Discovery Service. </p>
     */
    inline void SetAssociatedApplications(const Aws::Vector<AssociatedApplication>& value) { m_associatedApplications = value; }

    /**
     * <p> The associated application group the server belongs to, as defined in AWS
     * Application Discovery Service. </p>
     */
    inline void SetAssociatedApplications(Aws::Vector<AssociatedApplication>&& value) { m_associatedApplications = std::move(value); }

    /**
     * <p> The associated application group the server belongs to, as defined in AWS
     * Application Discovery Service. </p>
     */
    inline GetServerDetailsResult& WithAssociatedApplications(const Aws::Vector<AssociatedApplication>& value) { SetAssociatedApplications(value); return *this;}

    /**
     * <p> The associated application group the server belongs to, as defined in AWS
     * Application Discovery Service. </p>
     */
    inline GetServerDetailsResult& WithAssociatedApplications(Aws::Vector<AssociatedApplication>&& value) { SetAssociatedApplications(std::move(value)); return *this;}

    /**
     * <p> The associated application group the server belongs to, as defined in AWS
     * Application Discovery Service. </p>
     */
    inline GetServerDetailsResult& AddAssociatedApplications(const AssociatedApplication& value) { m_associatedApplications.push_back(value); return *this; }

    /**
     * <p> The associated application group the server belongs to, as defined in AWS
     * Application Discovery Service. </p>
     */
    inline GetServerDetailsResult& AddAssociatedApplications(AssociatedApplication&& value) { m_associatedApplications.push_back(std::move(value)); return *this; }


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
    inline GetServerDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline GetServerDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline GetServerDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Detailed information about the server. </p>
     */
    inline const ServerDetail& GetServerDetail() const{ return m_serverDetail; }

    /**
     * <p> Detailed information about the server. </p>
     */
    inline void SetServerDetail(const ServerDetail& value) { m_serverDetail = value; }

    /**
     * <p> Detailed information about the server. </p>
     */
    inline void SetServerDetail(ServerDetail&& value) { m_serverDetail = std::move(value); }

    /**
     * <p> Detailed information about the server. </p>
     */
    inline GetServerDetailsResult& WithServerDetail(const ServerDetail& value) { SetServerDetail(value); return *this;}

    /**
     * <p> Detailed information about the server. </p>
     */
    inline GetServerDetailsResult& WithServerDetail(ServerDetail&& value) { SetServerDetail(std::move(value)); return *this;}

  private:

    Aws::Vector<AssociatedApplication> m_associatedApplications;

    Aws::String m_nextToken;

    ServerDetail m_serverDetail;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
