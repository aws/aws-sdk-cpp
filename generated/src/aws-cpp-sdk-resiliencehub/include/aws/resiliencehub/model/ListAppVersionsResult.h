/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppVersionSummary.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppVersionsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppVersionsResult();
    AWS_RESILIENCEHUB_API ListAppVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::Vector<AppVersionSummary>& GetAppVersions() const{ return m_appVersions; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersions(const Aws::Vector<AppVersionSummary>& value) { m_appVersions = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersions(Aws::Vector<AppVersionSummary>&& value) { m_appVersions = std::move(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline ListAppVersionsResult& WithAppVersions(const Aws::Vector<AppVersionSummary>& value) { SetAppVersions(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline ListAppVersionsResult& WithAppVersions(Aws::Vector<AppVersionSummary>&& value) { SetAppVersions(std::move(value)); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline ListAppVersionsResult& AddAppVersions(const AppVersionSummary& value) { m_appVersions.push_back(value); return *this; }

    /**
     * <p>The version of the application.</p>
     */
    inline ListAppVersionsResult& AddAppVersions(AppVersionSummary&& value) { m_appVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AppVersionSummary> m_appVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
