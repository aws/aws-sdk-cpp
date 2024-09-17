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
  class DeregisterTargetFromMaintenanceWindowResult
  {
  public:
    AWS_SSM_API DeregisterTargetFromMaintenanceWindowResult();
    AWS_SSM_API DeregisterTargetFromMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DeregisterTargetFromMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the maintenance window the target was removed from.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the removed target definition.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetId = value; }
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetId = std::move(value); }
    inline void SetWindowTargetId(const char* value) { m_windowTargetId.assign(value); }
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeregisterTargetFromMaintenanceWindowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeregisterTargetFromMaintenanceWindowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeregisterTargetFromMaintenanceWindowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;

    Aws::String m_windowTargetId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
