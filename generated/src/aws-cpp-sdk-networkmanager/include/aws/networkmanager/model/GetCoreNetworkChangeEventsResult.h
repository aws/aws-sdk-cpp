﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkChangeEvent.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetCoreNetworkChangeEventsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeEventsResult();
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetCoreNetworkChangeEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response to <code>GetCoreNetworkChangeEventsRequest</code>.</p>
     */
    inline const Aws::Vector<CoreNetworkChangeEvent>& GetCoreNetworkChangeEvents() const{ return m_coreNetworkChangeEvents; }
    inline void SetCoreNetworkChangeEvents(const Aws::Vector<CoreNetworkChangeEvent>& value) { m_coreNetworkChangeEvents = value; }
    inline void SetCoreNetworkChangeEvents(Aws::Vector<CoreNetworkChangeEvent>&& value) { m_coreNetworkChangeEvents = std::move(value); }
    inline GetCoreNetworkChangeEventsResult& WithCoreNetworkChangeEvents(const Aws::Vector<CoreNetworkChangeEvent>& value) { SetCoreNetworkChangeEvents(value); return *this;}
    inline GetCoreNetworkChangeEventsResult& WithCoreNetworkChangeEvents(Aws::Vector<CoreNetworkChangeEvent>&& value) { SetCoreNetworkChangeEvents(std::move(value)); return *this;}
    inline GetCoreNetworkChangeEventsResult& AddCoreNetworkChangeEvents(const CoreNetworkChangeEvent& value) { m_coreNetworkChangeEvents.push_back(value); return *this; }
    inline GetCoreNetworkChangeEventsResult& AddCoreNetworkChangeEvents(CoreNetworkChangeEvent&& value) { m_coreNetworkChangeEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetCoreNetworkChangeEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCoreNetworkChangeEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCoreNetworkChangeEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCoreNetworkChangeEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCoreNetworkChangeEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCoreNetworkChangeEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CoreNetworkChangeEvent> m_coreNetworkChangeEvents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
