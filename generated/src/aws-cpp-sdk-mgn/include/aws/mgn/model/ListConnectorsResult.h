/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/Connector.h>
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
namespace mgn
{
namespace Model
{
  class ListConnectorsResult
  {
  public:
    AWS_MGN_API ListConnectorsResult();
    AWS_MGN_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List connectors response items.</p>
     */
    inline const Aws::Vector<Connector>& GetItems() const{ return m_items; }

    /**
     * <p>List connectors response items.</p>
     */
    inline void SetItems(const Aws::Vector<Connector>& value) { m_items = value; }

    /**
     * <p>List connectors response items.</p>
     */
    inline void SetItems(Aws::Vector<Connector>&& value) { m_items = std::move(value); }

    /**
     * <p>List connectors response items.</p>
     */
    inline ListConnectorsResult& WithItems(const Aws::Vector<Connector>& value) { SetItems(value); return *this;}

    /**
     * <p>List connectors response items.</p>
     */
    inline ListConnectorsResult& WithItems(Aws::Vector<Connector>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List connectors response items.</p>
     */
    inline ListConnectorsResult& AddItems(const Connector& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List connectors response items.</p>
     */
    inline ListConnectorsResult& AddItems(Connector&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>List connectors response next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List connectors response next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>List connectors response next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>List connectors response next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>List connectors response next token.</p>
     */
    inline ListConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List connectors response next token.</p>
     */
    inline ListConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List connectors response next token.</p>
     */
    inline ListConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConnectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConnectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConnectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Connector> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
