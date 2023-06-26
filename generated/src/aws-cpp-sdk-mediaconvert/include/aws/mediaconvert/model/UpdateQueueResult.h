/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Queue.h>
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
namespace MediaConvert
{
namespace Model
{
  class UpdateQueueResult
  {
  public:
    AWS_MEDIACONVERT_API UpdateQueueResult();
    AWS_MEDIACONVERT_API UpdateQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API UpdateQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline const Queue& GetQueue() const{ return m_queue; }

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline void SetQueue(const Queue& value) { m_queue = value; }

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline void SetQueue(Queue&& value) { m_queue = std::move(value); }

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline UpdateQueueResult& WithQueue(const Queue& value) { SetQueue(value); return *this;}

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline UpdateQueueResult& WithQueue(Queue&& value) { SetQueue(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Queue m_queue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
