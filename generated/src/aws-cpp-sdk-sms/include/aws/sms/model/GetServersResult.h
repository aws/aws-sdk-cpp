/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/ServerCatalogStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/Server.h>
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
  class GetServersResult
  {
  public:
    AWS_SMS_API GetServersResult() = default;
    AWS_SMS_API GetServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time when the server was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    GetServersResult& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the server catalog.</p>
     */
    inline ServerCatalogStatus GetServerCatalogStatus() const { return m_serverCatalogStatus; }
    inline void SetServerCatalogStatus(ServerCatalogStatus value) { m_serverCatalogStatusHasBeenSet = true; m_serverCatalogStatus = value; }
    inline GetServersResult& WithServerCatalogStatus(ServerCatalogStatus value) { SetServerCatalogStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the servers.</p>
     */
    inline const Aws::Vector<Server>& GetServerList() const { return m_serverList; }
    template<typename ServerListT = Aws::Vector<Server>>
    void SetServerList(ServerListT&& value) { m_serverListHasBeenSet = true; m_serverList = std::forward<ServerListT>(value); }
    template<typename ServerListT = Aws::Vector<Server>>
    GetServersResult& WithServerList(ServerListT&& value) { SetServerList(std::forward<ServerListT>(value)); return *this;}
    template<typename ServerListT = Server>
    GetServersResult& AddServerList(ServerListT&& value) { m_serverListHasBeenSet = true; m_serverList.emplace_back(std::forward<ServerListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetServersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    ServerCatalogStatus m_serverCatalogStatus{ServerCatalogStatus::NOT_SET};
    bool m_serverCatalogStatusHasBeenSet = false;

    Aws::Vector<Server> m_serverList;
    bool m_serverListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
