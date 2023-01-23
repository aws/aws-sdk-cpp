/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
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
namespace SnowDeviceManagement
{
namespace Model
{
  class CreateTaskResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API CreateTaskResult();
    AWS_SNOWDEVICEMANAGEMENT_API CreateTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API CreateTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the task that you created.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you created.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you created.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you created.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you created.</p>
     */
    inline CreateTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you created.</p>
     */
    inline CreateTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that you created.</p>
     */
    inline CreateTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The ID of the task that you created.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the task that you created.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The ID of the task that you created.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The ID of the task that you created.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The ID of the task that you created.</p>
     */
    inline CreateTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the task that you created.</p>
     */
    inline CreateTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task that you created.</p>
     */
    inline CreateTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::String m_taskArn;

    Aws::String m_taskId;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
