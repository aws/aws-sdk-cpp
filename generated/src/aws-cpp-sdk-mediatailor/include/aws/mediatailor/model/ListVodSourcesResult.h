﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/VodSource.h>
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
namespace MediaTailor
{
namespace Model
{
  class ListVodSourcesResult
  {
  public:
    AWS_MEDIATAILOR_API ListVodSourcesResult();
    AWS_MEDIATAILOR_API ListVodSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ListVodSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the VOD sources.</p>
     */
    inline const Aws::Vector<VodSource>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<VodSource>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<VodSource>&& value) { m_items = std::move(value); }
    inline ListVodSourcesResult& WithItems(const Aws::Vector<VodSource>& value) { SetItems(value); return *this;}
    inline ListVodSourcesResult& WithItems(Aws::Vector<VodSource>&& value) { SetItems(std::move(value)); return *this;}
    inline ListVodSourcesResult& AddItems(const VodSource& value) { m_items.push_back(value); return *this; }
    inline ListVodSourcesResult& AddItems(VodSource&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListVodSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVodSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVodSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVodSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVodSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVodSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VodSource> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
