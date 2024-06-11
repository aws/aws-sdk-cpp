/**
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
  class RegisterTaskWithMaintenanceWindowResult
  {
  public:
    AWS_SSM_API RegisterTaskWithMaintenanceWindowResult();
    AWS_SSM_API RegisterTaskWithMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API RegisterTaskWithMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the task in the maintenance window.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskId = value; }
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskId = std::move(value); }
    inline void SetWindowTaskId(const char* value) { m_windowTaskId.assign(value); }
    inline RegisterTaskWithMaintenanceWindowResult& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}
    inline RegisterTaskWithMaintenanceWindowResult& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}
    inline RegisterTaskWithMaintenanceWindowResult& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterTaskWithMaintenanceWindowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterTaskWithMaintenanceWindowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterTaskWithMaintenanceWindowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowTaskId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
