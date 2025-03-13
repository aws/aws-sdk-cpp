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
  class CancelMaintenanceWindowExecutionResult
  {
  public:
    AWS_SSM_API CancelMaintenanceWindowExecutionResult() = default;
    AWS_SSM_API CancelMaintenanceWindowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CancelMaintenanceWindowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the maintenance window execution that has been stopped.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const { return m_windowExecutionId; }
    template<typename WindowExecutionIdT = Aws::String>
    void SetWindowExecutionId(WindowExecutionIdT&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = std::forward<WindowExecutionIdT>(value); }
    template<typename WindowExecutionIdT = Aws::String>
    CancelMaintenanceWindowExecutionResult& WithWindowExecutionId(WindowExecutionIdT&& value) { SetWindowExecutionId(std::forward<WindowExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelMaintenanceWindowExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
