/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/VersionSummary.h>
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
  class ListApplicationVersionsResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationVersionsResult();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListApplicationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListApplicationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListApplicationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of version summaries for the application.</p>
     */
    inline const Aws::Vector<VersionSummary>& GetVersions() const{ return m_versions; }
    inline void SetVersions(const Aws::Vector<VersionSummary>& value) { m_versions = value; }
    inline void SetVersions(Aws::Vector<VersionSummary>&& value) { m_versions = std::move(value); }
    inline ListApplicationVersionsResult& WithVersions(const Aws::Vector<VersionSummary>& value) { SetVersions(value); return *this;}
    inline ListApplicationVersionsResult& WithVersions(Aws::Vector<VersionSummary>&& value) { SetVersions(std::move(value)); return *this;}
    inline ListApplicationVersionsResult& AddVersions(const VersionSummary& value) { m_versions.push_back(value); return *this; }
    inline ListApplicationVersionsResult& AddVersions(VersionSummary&& value) { m_versions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListApplicationVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListApplicationVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListApplicationVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<VersionSummary> m_versions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
