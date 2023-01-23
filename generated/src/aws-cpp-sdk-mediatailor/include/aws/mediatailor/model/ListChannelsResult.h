/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/Channel.h>
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
  class ListChannelsResult
  {
  public:
    AWS_MEDIATAILOR_API ListChannelsResult();
    AWS_MEDIATAILOR_API ListChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ListChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of channels that are associated with this account.</p>
     */
    inline const Aws::Vector<Channel>& GetItems() const{ return m_items; }

    /**
     * <p>A list of channels that are associated with this account.</p>
     */
    inline void SetItems(const Aws::Vector<Channel>& value) { m_items = value; }

    /**
     * <p>A list of channels that are associated with this account.</p>
     */
    inline void SetItems(Aws::Vector<Channel>&& value) { m_items = std::move(value); }

    /**
     * <p>A list of channels that are associated with this account.</p>
     */
    inline ListChannelsResult& WithItems(const Aws::Vector<Channel>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of channels that are associated with this account.</p>
     */
    inline ListChannelsResult& WithItems(Aws::Vector<Channel>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of channels that are associated with this account.</p>
     */
    inline ListChannelsResult& AddItems(const Channel& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A list of channels that are associated with this account.</p>
     */
    inline ListChannelsResult& AddItems(Channel&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Channel> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
