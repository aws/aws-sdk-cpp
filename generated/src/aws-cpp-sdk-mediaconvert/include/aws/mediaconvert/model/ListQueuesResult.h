/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Queue.h>
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
namespace MediaConvert
{
namespace Model
{
  class ListQueuesResult
  {
  public:
    AWS_MEDIACONVERT_API ListQueuesResult();
    AWS_MEDIACONVERT_API ListQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ListQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Use this string to request the next batch of queues.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string to request the next batch of queues.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Use this string to request the next batch of queues.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Use this string to request the next batch of queues.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Use this string to request the next batch of queues.
     */
    inline ListQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string to request the next batch of queues.
     */
    inline ListQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string to request the next batch of queues.
     */
    inline ListQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * List of queues.
     */
    inline const Aws::Vector<Queue>& GetQueues() const{ return m_queues; }

    /**
     * List of queues.
     */
    inline void SetQueues(const Aws::Vector<Queue>& value) { m_queues = value; }

    /**
     * List of queues.
     */
    inline void SetQueues(Aws::Vector<Queue>&& value) { m_queues = std::move(value); }

    /**
     * List of queues.
     */
    inline ListQueuesResult& WithQueues(const Aws::Vector<Queue>& value) { SetQueues(value); return *this;}

    /**
     * List of queues.
     */
    inline ListQueuesResult& WithQueues(Aws::Vector<Queue>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * List of queues.
     */
    inline ListQueuesResult& AddQueues(const Queue& value) { m_queues.push_back(value); return *this; }

    /**
     * List of queues.
     */
    inline ListQueuesResult& AddQueues(Queue&& value) { m_queues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Queue> m_queues;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
