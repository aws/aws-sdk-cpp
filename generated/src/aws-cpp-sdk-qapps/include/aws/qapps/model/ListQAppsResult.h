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
    AWS_QAPPS_API ListQAppsResult() = default;
    AWS_QAPPS_API ListQAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ListQAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Amazon Q Apps meeting the request criteria.</p>
     */
    inline const Aws::Vector<UserAppItem>& GetApps() const { return m_apps; }
    template<typename AppsT = Aws::Vector<UserAppItem>>
    void SetApps(AppsT&& value) { m_appsHasBeenSet = true; m_apps = std::forward<AppsT>(value); }
    template<typename AppsT = Aws::Vector<UserAppItem>>
    ListQAppsResult& WithApps(AppsT&& value) { SetApps(std::forward<AppsT>(value)); return *this;}
    template<typename AppsT = UserAppItem>
    ListQAppsResult& AddApps(AppsT&& value) { m_appsHasBeenSet = true; m_apps.emplace_back(std::forward<AppsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQAppsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQAppsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserAppItem> m_apps;
    bool m_appsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
