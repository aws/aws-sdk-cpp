/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/UserAppItem.h>
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
namespace QApps
{
namespace Model
{
  class ListQAppsResult
  {
  public:
    AWS_QAPPS_API ListQAppsResult();
    AWS_QAPPS_API ListQAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ListQAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Amazon Q Apps meeting the request criteria.</p>
     */
    inline const Aws::Vector<UserAppItem>& GetApps() const{ return m_apps; }
    inline void SetApps(const Aws::Vector<UserAppItem>& value) { m_apps = value; }
    inline void SetApps(Aws::Vector<UserAppItem>&& value) { m_apps = std::move(value); }
    inline ListQAppsResult& WithApps(const Aws::Vector<UserAppItem>& value) { SetApps(value); return *this;}
    inline ListQAppsResult& WithApps(Aws::Vector<UserAppItem>&& value) { SetApps(std::move(value)); return *this;}
    inline ListQAppsResult& AddApps(const UserAppItem& value) { m_apps.push_back(value); return *this; }
    inline ListQAppsResult& AddApps(UserAppItem&& value) { m_apps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListQAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQAppsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQAppsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQAppsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UserAppItem> m_apps;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
