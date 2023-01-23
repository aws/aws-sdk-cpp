/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simspaceweaver/model/SimulationAppMetadata.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class ListAppsResult
  {
  public:
    AWS_SIMSPACEWEAVER_API ListAppsResult();
    AWS_SIMSPACEWEAVER_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of apps for the given simulation and domain.</p>
     */
    inline const Aws::Vector<SimulationAppMetadata>& GetApps() const{ return m_apps; }

    /**
     * <p>The list of apps for the given simulation and domain.</p>
     */
    inline void SetApps(const Aws::Vector<SimulationAppMetadata>& value) { m_apps = value; }

    /**
     * <p>The list of apps for the given simulation and domain.</p>
     */
    inline void SetApps(Aws::Vector<SimulationAppMetadata>&& value) { m_apps = std::move(value); }

    /**
     * <p>The list of apps for the given simulation and domain.</p>
     */
    inline ListAppsResult& WithApps(const Aws::Vector<SimulationAppMetadata>& value) { SetApps(value); return *this;}

    /**
     * <p>The list of apps for the given simulation and domain.</p>
     */
    inline ListAppsResult& WithApps(Aws::Vector<SimulationAppMetadata>&& value) { SetApps(std::move(value)); return *this;}

    /**
     * <p>The list of apps for the given simulation and domain.</p>
     */
    inline ListAppsResult& AddApps(const SimulationAppMetadata& value) { m_apps.push_back(value); return *this; }

    /**
     * <p>The list of apps for the given simulation and domain.</p>
     */
    inline ListAppsResult& AddApps(SimulationAppMetadata&& value) { m_apps.push_back(std::move(value)); return *this; }


    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline ListAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline ListAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain,
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, you receive an
     * <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline ListAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SimulationAppMetadata> m_apps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
