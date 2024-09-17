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
  class DeleteMaintenanceWindowResult
  {
  public:
    AWS_SSM_API DeleteMaintenanceWindowResult();
    AWS_SSM_API DeleteMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DeleteMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the deleted maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }
    inline DeleteMaintenanceWindowResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline DeleteMaintenanceWindowResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline DeleteMaintenanceWindowResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteMaintenanceWindowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteMaintenanceWindowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteMaintenanceWindowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
