/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/Channel.h>
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
namespace MediaPackage
{
namespace Model
{
  class ListChannelsResult
  {
  public:
    AWS_MEDIAPACKAGE_API ListChannelsResult();
    AWS_MEDIAPACKAGE_API ListChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGE_API ListChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of Channel records.
     */
    inline const Aws::Vector<Channel>& GetChannels() const{ return m_channels; }

    /**
     * A list of Channel records.
     */
    inline void SetChannels(const Aws::Vector<Channel>& value) { m_channels = value; }

    /**
     * A list of Channel records.
     */
    inline void SetChannels(Aws::Vector<Channel>&& value) { m_channels = std::move(value); }

    /**
     * A list of Channel records.
     */
    inline ListChannelsResult& WithChannels(const Aws::Vector<Channel>& value) { SetChannels(value); return *this;}

    /**
     * A list of Channel records.
     */
    inline ListChannelsResult& WithChannels(Aws::Vector<Channel>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * A list of Channel records.
     */
    inline ListChannelsResult& AddChannels(const Channel& value) { m_channels.push_back(value); return *this; }

    /**
     * A list of Channel records.
     */
    inline ListChannelsResult& AddChannels(Channel&& value) { m_channels.push_back(std::move(value)); return *this; }


    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Channel> m_channels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
