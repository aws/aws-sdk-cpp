﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/Connector.h>
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
  class GetConnectorsResult
  {
  public:
    AWS_SMS_API GetConnectorsResult();
    AWS_SMS_API GetConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the registered connectors.</p>
     */
    inline const Aws::Vector<Connector>& GetConnectorList() const{ return m_connectorList; }
    inline void SetConnectorList(const Aws::Vector<Connector>& value) { m_connectorList = value; }
    inline void SetConnectorList(Aws::Vector<Connector>&& value) { m_connectorList = std::move(value); }
    inline GetConnectorsResult& WithConnectorList(const Aws::Vector<Connector>& value) { SetConnectorList(value); return *this;}
    inline GetConnectorsResult& WithConnectorList(Aws::Vector<Connector>&& value) { SetConnectorList(std::move(value)); return *this;}
    inline GetConnectorsResult& AddConnectorList(const Connector& value) { m_connectorList.push_back(value); return *this; }
    inline GetConnectorsResult& AddConnectorList(Connector&& value) { m_connectorList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConnectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConnectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConnectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Connector> m_connectorList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
