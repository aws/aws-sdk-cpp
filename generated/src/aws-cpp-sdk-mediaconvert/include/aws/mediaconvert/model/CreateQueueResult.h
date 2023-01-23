/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
  class CreateQueueResult
  {
  public:
    AWS_MEDIACONVERT_API CreateQueueResult();
    AWS_MEDIACONVERT_API CreateQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API CreateQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateQueueResult& WithQueue(const Queue& value) { SetQueue(value); return *this;}

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline CreateQueueResult& WithQueue(Queue&& value) { SetQueue(std::move(value)); return *this;}

  private:

    Queue m_queue;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
