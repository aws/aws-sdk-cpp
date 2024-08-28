/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/Queue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PCS
{
namespace Model
{
  class GetQueueResult
  {
  public:
    AWS_PCS_API GetQueueResult();
    AWS_PCS_API GetQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API GetQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Queue& GetQueue() const{ return m_queue; }
    inline void SetQueue(const Queue& value) { m_queue = value; }
    inline void SetQueue(Queue&& value) { m_queue = std::move(value); }
    inline GetQueueResult& WithQueue(const Queue& value) { SetQueue(value); return *this;}
    inline GetQueueResult& WithQueue(Queue&& value) { SetQueue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Queue m_queue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
