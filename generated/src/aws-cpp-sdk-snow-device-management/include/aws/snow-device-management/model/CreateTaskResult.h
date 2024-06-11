﻿/**
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task that you created.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline CreateTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline CreateTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline CreateTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the task that you created.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }
    inline CreateTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline CreateTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline CreateTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskArn;

    Aws::String m_taskId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
