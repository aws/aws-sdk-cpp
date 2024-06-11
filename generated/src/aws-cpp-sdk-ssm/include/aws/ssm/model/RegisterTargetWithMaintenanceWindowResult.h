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
  class RegisterTargetWithMaintenanceWindowResult
  {
  public:
    AWS_SSM_API RegisterTargetWithMaintenanceWindowResult();
    AWS_SSM_API RegisterTargetWithMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API RegisterTargetWithMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the target definition in this maintenance window.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetId = value; }
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetId = std::move(value); }
    inline void SetWindowTargetId(const char* value) { m_windowTargetId.assign(value); }
    inline RegisterTargetWithMaintenanceWindowResult& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}
    inline RegisterTargetWithMaintenanceWindowResult& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}
    inline RegisterTargetWithMaintenanceWindowResult& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterTargetWithMaintenanceWindowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterTargetWithMaintenanceWindowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterTargetWithMaintenanceWindowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowTargetId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
