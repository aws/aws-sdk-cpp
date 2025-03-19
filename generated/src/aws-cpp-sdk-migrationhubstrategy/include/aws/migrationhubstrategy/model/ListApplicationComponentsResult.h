/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentDetail.h>
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
  class ListApplicationComponentsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListApplicationComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of application components with detailed information about each
     * component. </p>
     */
    inline const Aws::Vector<ApplicationComponentDetail>& GetApplicationComponentInfos() const { return m_applicationComponentInfos; }
    template<typename ApplicationComponentInfosT = Aws::Vector<ApplicationComponentDetail>>
    void SetApplicationComponentInfos(ApplicationComponentInfosT&& value) { m_applicationComponentInfosHasBeenSet = true; m_applicationComponentInfos = std::forward<ApplicationComponentInfosT>(value); }
    template<typename ApplicationComponentInfosT = Aws::Vector<ApplicationComponentDetail>>
    ListApplicationComponentsResult& WithApplicationComponentInfos(ApplicationComponentInfosT&& value) { SetApplicationComponentInfos(std::forward<ApplicationComponentInfosT>(value)); return *this;}
    template<typename ApplicationComponentInfosT = ApplicationComponentDetail>
    ListApplicationComponentsResult& AddApplicationComponentInfos(ApplicationComponentInfosT&& value) { m_applicationComponentInfosHasBeenSet = true; m_applicationComponentInfos.emplace_back(std::forward<ApplicationComponentInfosT>(value)); return *this; }
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
    ListApplicationComponentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationComponentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationComponentDetail> m_applicationComponentInfos;
    bool m_applicationComponentInfosHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
