/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/serverlessrepo/model/ApplicationDependencySummary.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class ListApplicationDependenciesResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationDependenciesResult() = default;
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationDependenciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationDependenciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of application summaries nested in the application.</p>
     */
    inline const Aws::Vector<ApplicationDependencySummary>& GetDependencies() const { return m_dependencies; }
    template<typename DependenciesT = Aws::Vector<ApplicationDependencySummary>>
    void SetDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::forward<DependenciesT>(value); }
    template<typename DependenciesT = Aws::Vector<ApplicationDependencySummary>>
    ListApplicationDependenciesResult& WithDependencies(DependenciesT&& value) { SetDependencies(std::forward<DependenciesT>(value)); return *this;}
    template<typename DependenciesT = ApplicationDependencySummary>
    ListApplicationDependenciesResult& AddDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies.emplace_back(std::forward<DependenciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationDependenciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationDependenciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationDependencySummary> m_dependencies;
    bool m_dependenciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
