/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/BlockingInstance.h>
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
namespace Outposts
{
namespace Model
{
  class ListBlockingInstancesForCapacityTaskResult
  {
  public:
    AWS_OUTPOSTS_API ListBlockingInstancesForCapacityTaskResult();
    AWS_OUTPOSTS_API ListBlockingInstancesForCapacityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListBlockingInstancesForCapacityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all running Amazon EC2 instances on the Outpost. Stopping one or
     * more of these instances can free up the capacity needed to run the capacity
     * task.</p>
     */
    inline const Aws::Vector<BlockingInstance>& GetBlockingInstances() const{ return m_blockingInstances; }
    inline void SetBlockingInstances(const Aws::Vector<BlockingInstance>& value) { m_blockingInstances = value; }
    inline void SetBlockingInstances(Aws::Vector<BlockingInstance>&& value) { m_blockingInstances = std::move(value); }
    inline ListBlockingInstancesForCapacityTaskResult& WithBlockingInstances(const Aws::Vector<BlockingInstance>& value) { SetBlockingInstances(value); return *this;}
    inline ListBlockingInstancesForCapacityTaskResult& WithBlockingInstances(Aws::Vector<BlockingInstance>&& value) { SetBlockingInstances(std::move(value)); return *this;}
    inline ListBlockingInstancesForCapacityTaskResult& AddBlockingInstances(const BlockingInstance& value) { m_blockingInstances.push_back(value); return *this; }
    inline ListBlockingInstancesForCapacityTaskResult& AddBlockingInstances(BlockingInstance&& value) { m_blockingInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBlockingInstancesForCapacityTaskResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBlockingInstancesForCapacityTaskResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBlockingInstancesForCapacityTaskResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBlockingInstancesForCapacityTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBlockingInstancesForCapacityTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBlockingInstancesForCapacityTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BlockingInstance> m_blockingInstances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
