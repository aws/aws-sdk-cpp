﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class CreateMaintenanceWindowResult
  {
  public:
    AWS_SSM_API CreateMaintenanceWindowResult();
    AWS_SSM_API CreateMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CreateMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline CreateMaintenanceWindowResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline CreateMaintenanceWindowResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline CreateMaintenanceWindowResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMaintenanceWindowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMaintenanceWindowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMaintenanceWindowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_windowId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
