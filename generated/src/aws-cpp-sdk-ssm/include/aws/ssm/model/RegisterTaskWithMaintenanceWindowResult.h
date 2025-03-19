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
    AWS_SSM_API RegisterTaskWithMaintenanceWindowResult() = default;
    AWS_SSM_API RegisterTaskWithMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API RegisterTaskWithMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the task in the maintenance window.</p>
     */
    inline const Aws::String& GetWindowTaskId() const { return m_windowTaskId; }
    template<typename WindowTaskIdT = Aws::String>
    void SetWindowTaskId(WindowTaskIdT&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::forward<WindowTaskIdT>(value); }
    template<typename WindowTaskIdT = Aws::String>
    RegisterTaskWithMaintenanceWindowResult& WithWindowTaskId(WindowTaskIdT&& value) { SetWindowTaskId(std::forward<WindowTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterTaskWithMaintenanceWindowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
