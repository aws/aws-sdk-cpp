/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class CancelMessageMoveTaskRequest : public SQSRequest
  {
  public:
    AWS_SQS_API CancelMessageMoveTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelMessageMoveTask"; }

    AWS_SQS_API Aws::String SerializePayload() const override;

    AWS_SQS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identifier associated with a message movement task.</p>
     */
    inline const Aws::String& GetTaskHandle() const{ return m_taskHandle; }

    /**
     * <p>An identifier associated with a message movement task.</p>
     */
    inline bool TaskHandleHasBeenSet() const { return m_taskHandleHasBeenSet; }

    /**
     * <p>An identifier associated with a message movement task.</p>
     */
    inline void SetTaskHandle(const Aws::String& value) { m_taskHandleHasBeenSet = true; m_taskHandle = value; }

    /**
     * <p>An identifier associated with a message movement task.</p>
     */
    inline void SetTaskHandle(Aws::String&& value) { m_taskHandleHasBeenSet = true; m_taskHandle = std::move(value); }

    /**
     * <p>An identifier associated with a message movement task.</p>
     */
    inline void SetTaskHandle(const char* value) { m_taskHandleHasBeenSet = true; m_taskHandle.assign(value); }

    /**
     * <p>An identifier associated with a message movement task.</p>
     */
    inline CancelMessageMoveTaskRequest& WithTaskHandle(const Aws::String& value) { SetTaskHandle(value); return *this;}

    /**
     * <p>An identifier associated with a message movement task.</p>
     */
    inline CancelMessageMoveTaskRequest& WithTaskHandle(Aws::String&& value) { SetTaskHandle(std::move(value)); return *this;}

    /**
     * <p>An identifier associated with a message movement task.</p>
     */
    inline CancelMessageMoveTaskRequest& WithTaskHandle(const char* value) { SetTaskHandle(value); return *this;}

  private:

    Aws::String m_taskHandle;
    bool m_taskHandleHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
