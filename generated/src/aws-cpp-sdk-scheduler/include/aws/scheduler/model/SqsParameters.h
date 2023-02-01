/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The templated target type for the Amazon SQS <a
   * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html">
   * <code>SendMessage</code> </a> API operation. Contains the message group ID to
   * use when the target is a FIFO queue. If you specify an Amazon SQS FIFO queue as
   * a target, the queue must have content-based deduplication enabled. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagededuplicationid-property.html">Using
   * the Amazon SQS message deduplication ID</a> in the <i>Amazon SQS Developer
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/SqsParameters">AWS
   * API Reference</a></p>
   */
  class SqsParameters
  {
  public:
    AWS_SCHEDULER_API SqsParameters();
    AWS_SCHEDULER_API SqsParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API SqsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline const Aws::String& GetMessageGroupId() const{ return m_messageGroupId; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(const Aws::String& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = value; }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(Aws::String&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::move(value); }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline void SetMessageGroupId(const char* value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId.assign(value); }

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline SqsParameters& WithMessageGroupId(const Aws::String& value) { SetMessageGroupId(value); return *this;}

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline SqsParameters& WithMessageGroupId(Aws::String&& value) { SetMessageGroupId(std::move(value)); return *this;}

    /**
     * <p>The FIFO message group ID to use as the target.</p>
     */
    inline SqsParameters& WithMessageGroupId(const char* value) { SetMessageGroupId(value); return *this;}

  private:

    Aws::String m_messageGroupId;
    bool m_messageGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
