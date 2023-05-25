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
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationDependenciesResult();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationDependenciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationDependenciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of application summaries nested in the application.</p>
     */
    inline const Aws::Vector<ApplicationDependencySummary>& GetDependencies() const{ return m_dependencies; }

    /**
     * <p>An array of application summaries nested in the application.</p>
     */
    inline void SetDependencies(const Aws::Vector<ApplicationDependencySummary>& value) { m_dependencies = value; }

    /**
     * <p>An array of application summaries nested in the application.</p>
     */
    inline void SetDependencies(Aws::Vector<ApplicationDependencySummary>&& value) { m_dependencies = std::move(value); }

    /**
     * <p>An array of application summaries nested in the application.</p>
     */
    inline ListApplicationDependenciesResult& WithDependencies(const Aws::Vector<ApplicationDependencySummary>& value) { SetDependencies(value); return *this;}

    /**
     * <p>An array of application summaries nested in the application.</p>
     */
    inline ListApplicationDependenciesResult& WithDependencies(Aws::Vector<ApplicationDependencySummary>&& value) { SetDependencies(std::move(value)); return *this;}

    /**
     * <p>An array of application summaries nested in the application.</p>
     */
    inline ListApplicationDependenciesResult& AddDependencies(const ApplicationDependencySummary& value) { m_dependencies.push_back(value); return *this; }

    /**
     * <p>An array of application summaries nested in the application.</p>
     */
    inline ListApplicationDependenciesResult& AddDependencies(ApplicationDependencySummary&& value) { m_dependencies.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationDependenciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationDependenciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationDependenciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListApplicationDependenciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListApplicationDependenciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListApplicationDependenciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ApplicationDependencySummary> m_dependencies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
