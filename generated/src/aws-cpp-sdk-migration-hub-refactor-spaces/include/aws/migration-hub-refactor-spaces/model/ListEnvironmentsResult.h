/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentSummary.h>
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
  class ListEnvironmentsResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentsResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of <code>EnvironmentSummary</code> objects. </p>
     */
    inline const Aws::Vector<EnvironmentSummary>& GetEnvironmentSummaryList() const{ return m_environmentSummaryList; }

    /**
     * <p>The list of <code>EnvironmentSummary</code> objects. </p>
     */
    inline void SetEnvironmentSummaryList(const Aws::Vector<EnvironmentSummary>& value) { m_environmentSummaryList = value; }

    /**
     * <p>The list of <code>EnvironmentSummary</code> objects. </p>
     */
    inline void SetEnvironmentSummaryList(Aws::Vector<EnvironmentSummary>&& value) { m_environmentSummaryList = std::move(value); }

    /**
     * <p>The list of <code>EnvironmentSummary</code> objects. </p>
     */
    inline ListEnvironmentsResult& WithEnvironmentSummaryList(const Aws::Vector<EnvironmentSummary>& value) { SetEnvironmentSummaryList(value); return *this;}

    /**
     * <p>The list of <code>EnvironmentSummary</code> objects. </p>
     */
    inline ListEnvironmentsResult& WithEnvironmentSummaryList(Aws::Vector<EnvironmentSummary>&& value) { SetEnvironmentSummaryList(std::move(value)); return *this;}

    /**
     * <p>The list of <code>EnvironmentSummary</code> objects. </p>
     */
    inline ListEnvironmentsResult& AddEnvironmentSummaryList(const EnvironmentSummary& value) { m_environmentSummaryList.push_back(value); return *this; }

    /**
     * <p>The list of <code>EnvironmentSummary</code> objects. </p>
     */
    inline ListEnvironmentsResult& AddEnvironmentSummaryList(EnvironmentSummary&& value) { m_environmentSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnvironmentSummary> m_environmentSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
