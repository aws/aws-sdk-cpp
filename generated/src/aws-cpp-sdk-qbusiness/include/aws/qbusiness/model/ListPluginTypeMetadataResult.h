/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/PluginTypeMetadataSummary.h>
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
namespace QBusiness
{
namespace Model
{
  class ListPluginTypeMetadataResult
  {
  public:
    AWS_QBUSINESS_API ListPluginTypeMetadataResult();
    AWS_QBUSINESS_API ListPluginTypeMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListPluginTypeMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Q Business returns this token, which you
     * can use in a later request to list the next set of plugin metadata.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPluginTypeMetadataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPluginTypeMetadataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPluginTypeMetadataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of information on plugin metadata.</p>
     */
    inline const Aws::Vector<PluginTypeMetadataSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<PluginTypeMetadataSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<PluginTypeMetadataSummary>&& value) { m_items = std::move(value); }
    inline ListPluginTypeMetadataResult& WithItems(const Aws::Vector<PluginTypeMetadataSummary>& value) { SetItems(value); return *this;}
    inline ListPluginTypeMetadataResult& WithItems(Aws::Vector<PluginTypeMetadataSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListPluginTypeMetadataResult& AddItems(const PluginTypeMetadataSummary& value) { m_items.push_back(value); return *this; }
    inline ListPluginTypeMetadataResult& AddItems(PluginTypeMetadataSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPluginTypeMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPluginTypeMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPluginTypeMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PluginTypeMetadataSummary> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
