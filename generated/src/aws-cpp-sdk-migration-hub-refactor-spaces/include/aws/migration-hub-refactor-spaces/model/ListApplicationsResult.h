/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/ApplicationSummary.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class ListApplicationsResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListApplicationsResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of <code>ApplicationSummary</code> objects. </p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplicationSummaryList() const{ return m_applicationSummaryList; }

    /**
     * <p>The list of <code>ApplicationSummary</code> objects. </p>
     */
    inline void SetApplicationSummaryList(const Aws::Vector<ApplicationSummary>& value) { m_applicationSummaryList = value; }

    /**
     * <p>The list of <code>ApplicationSummary</code> objects. </p>
     */
    inline void SetApplicationSummaryList(Aws::Vector<ApplicationSummary>&& value) { m_applicationSummaryList = std::move(value); }

    /**
     * <p>The list of <code>ApplicationSummary</code> objects. </p>
     */
    inline ListApplicationsResult& WithApplicationSummaryList(const Aws::Vector<ApplicationSummary>& value) { SetApplicationSummaryList(value); return *this;}

    /**
     * <p>The list of <code>ApplicationSummary</code> objects. </p>
     */
    inline ListApplicationsResult& WithApplicationSummaryList(Aws::Vector<ApplicationSummary>&& value) { SetApplicationSummaryList(std::move(value)); return *this;}

    /**
     * <p>The list of <code>ApplicationSummary</code> objects. </p>
     */
    inline ListApplicationsResult& AddApplicationSummaryList(const ApplicationSummary& value) { m_applicationSummaryList.push_back(value); return *this; }

    /**
     * <p>The list of <code>ApplicationSummary</code> objects. </p>
     */
    inline ListApplicationsResult& AddApplicationSummaryList(ApplicationSummary&& value) { m_applicationSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationSummary> m_applicationSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
