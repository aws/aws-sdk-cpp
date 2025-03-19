/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetApplicationComponentDetailsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentDetailsResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Detailed information about an application component. </p>
     */
    inline const ApplicationComponentDetail& GetApplicationComponentDetail() const { return m_applicationComponentDetail; }
    template<typename ApplicationComponentDetailT = ApplicationComponentDetail>
    void SetApplicationComponentDetail(ApplicationComponentDetailT&& value) { m_applicationComponentDetailHasBeenSet = true; m_applicationComponentDetail = std::forward<ApplicationComponentDetailT>(value); }
    template<typename ApplicationComponentDetailT = ApplicationComponentDetail>
    GetApplicationComponentDetailsResult& WithApplicationComponentDetail(ApplicationComponentDetailT&& value) { SetApplicationComponentDetail(std::forward<ApplicationComponentDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The associated application group as defined in AWS Application Discovery
     * Service. </p>
     */
    inline const Aws::Vector<AssociatedApplication>& GetAssociatedApplications() const { return m_associatedApplications; }
    template<typename AssociatedApplicationsT = Aws::Vector<AssociatedApplication>>
    void SetAssociatedApplications(AssociatedApplicationsT&& value) { m_associatedApplicationsHasBeenSet = true; m_associatedApplications = std::forward<AssociatedApplicationsT>(value); }
    template<typename AssociatedApplicationsT = Aws::Vector<AssociatedApplication>>
    GetApplicationComponentDetailsResult& WithAssociatedApplications(AssociatedApplicationsT&& value) { SetAssociatedApplications(std::forward<AssociatedApplicationsT>(value)); return *this;}
    template<typename AssociatedApplicationsT = AssociatedApplication>
    GetApplicationComponentDetailsResult& AddAssociatedApplications(AssociatedApplicationsT&& value) { m_associatedApplicationsHasBeenSet = true; m_associatedApplications.emplace_back(std::forward<AssociatedApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of the IDs of the servers on which the application component is
     * running. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedServerIds() const { return m_associatedServerIds; }
    template<typename AssociatedServerIdsT = Aws::Vector<Aws::String>>
    void SetAssociatedServerIds(AssociatedServerIdsT&& value) { m_associatedServerIdsHasBeenSet = true; m_associatedServerIds = std::forward<AssociatedServerIdsT>(value); }
    template<typename AssociatedServerIdsT = Aws::Vector<Aws::String>>
    GetApplicationComponentDetailsResult& WithAssociatedServerIds(AssociatedServerIdsT&& value) { SetAssociatedServerIds(std::forward<AssociatedServerIdsT>(value)); return *this;}
    template<typename AssociatedServerIdsT = Aws::String>
    GetApplicationComponentDetailsResult& AddAssociatedServerIds(AssociatedServerIdsT&& value) { m_associatedServerIdsHasBeenSet = true; m_associatedServerIds.emplace_back(std::forward<AssociatedServerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Set to true if the application component belongs to more than one
     * application group. </p>
     */
    inline bool GetMoreApplicationResource() const { return m_moreApplicationResource; }
    inline void SetMoreApplicationResource(bool value) { m_moreApplicationResourceHasBeenSet = true; m_moreApplicationResource = value; }
    inline GetApplicationComponentDetailsResult& WithMoreApplicationResource(bool value) { SetMoreApplicationResource(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationComponentDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationComponentDetail m_applicationComponentDetail;
    bool m_applicationComponentDetailHasBeenSet = false;

    Aws::Vector<AssociatedApplication> m_associatedApplications;
    bool m_associatedApplicationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedServerIds;
    bool m_associatedServerIdsHasBeenSet = false;

    bool m_moreApplicationResource{false};
    bool m_moreApplicationResourceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
