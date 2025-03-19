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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerDetailsResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The associated application group the server belongs to, as defined in AWS
     * Application Discovery Service. </p>
     */
    inline const Aws::Vector<AssociatedApplication>& GetAssociatedApplications() const { return m_associatedApplications; }
    template<typename AssociatedApplicationsT = Aws::Vector<AssociatedApplication>>
    void SetAssociatedApplications(AssociatedApplicationsT&& value) { m_associatedApplicationsHasBeenSet = true; m_associatedApplications = std::forward<AssociatedApplicationsT>(value); }
    template<typename AssociatedApplicationsT = Aws::Vector<AssociatedApplication>>
    GetServerDetailsResult& WithAssociatedApplications(AssociatedApplicationsT&& value) { SetAssociatedApplications(std::forward<AssociatedApplicationsT>(value)); return *this;}
    template<typename AssociatedApplicationsT = AssociatedApplication>
    GetServerDetailsResult& AddAssociatedApplications(AssociatedApplicationsT&& value) { m_associatedApplicationsHasBeenSet = true; m_associatedApplications.emplace_back(std::forward<AssociatedApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetServerDetailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Detailed information about the server. </p>
     */
    inline const ServerDetail& GetServerDetail() const { return m_serverDetail; }
    template<typename ServerDetailT = ServerDetail>
    void SetServerDetail(ServerDetailT&& value) { m_serverDetailHasBeenSet = true; m_serverDetail = std::forward<ServerDetailT>(value); }
    template<typename ServerDetailT = ServerDetail>
    GetServerDetailsResult& WithServerDetail(ServerDetailT&& value) { SetServerDetail(std::forward<ServerDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServerDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedApplication> m_associatedApplications;
    bool m_associatedApplicationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ServerDetail m_serverDetail;
    bool m_serverDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
