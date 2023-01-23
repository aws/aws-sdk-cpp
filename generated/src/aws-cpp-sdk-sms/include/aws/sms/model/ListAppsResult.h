/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/AppSummary.h>
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
namespace SMS
{
namespace Model
{
  class ListAppsResult
  {
  public:
    AWS_SMS_API ListAppsResult();
    AWS_SMS_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application summaries.</p>
     */
    inline const Aws::Vector<AppSummary>& GetApps() const{ return m_apps; }

    /**
     * <p>The application summaries.</p>
     */
    inline void SetApps(const Aws::Vector<AppSummary>& value) { m_apps = value; }

    /**
     * <p>The application summaries.</p>
     */
    inline void SetApps(Aws::Vector<AppSummary>&& value) { m_apps = std::move(value); }

    /**
     * <p>The application summaries.</p>
     */
    inline ListAppsResult& WithApps(const Aws::Vector<AppSummary>& value) { SetApps(value); return *this;}

    /**
     * <p>The application summaries.</p>
     */
    inline ListAppsResult& WithApps(Aws::Vector<AppSummary>&& value) { SetApps(std::move(value)); return *this;}

    /**
     * <p>The application summaries.</p>
     */
    inline ListAppsResult& AddApps(const AppSummary& value) { m_apps.push_back(value); return *this; }

    /**
     * <p>The application summaries.</p>
     */
    inline ListAppsResult& AddApps(AppSummary&& value) { m_apps.push_back(std::move(value)); return *this; }


    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AppSummary> m_apps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
