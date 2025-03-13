/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/ExecutionPreviewStatus.h>
#include <aws/ssm/model/ExecutionPreview.h>
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
  class GetExecutionPreviewResult
  {
  public:
    AWS_SSM_API GetExecutionPreviewResult() = default;
    AWS_SSM_API GetExecutionPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetExecutionPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The generated ID for the existing execution preview.</p>
     */
    inline const Aws::String& GetExecutionPreviewId() const { return m_executionPreviewId; }
    template<typename ExecutionPreviewIdT = Aws::String>
    void SetExecutionPreviewId(ExecutionPreviewIdT&& value) { m_executionPreviewIdHasBeenSet = true; m_executionPreviewId = std::forward<ExecutionPreviewIdT>(value); }
    template<typename ExecutionPreviewIdT = Aws::String>
    GetExecutionPreviewResult& WithExecutionPreviewId(ExecutionPreviewIdT&& value) { SetExecutionPreviewId(std::forward<ExecutionPreviewIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTC timestamp indicating when the execution preview operation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetExecutionPreviewResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the execution preview operation.</p>
     */
    inline ExecutionPreviewStatus GetStatus() const { return m_status; }
    inline void SetStatus(ExecutionPreviewStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetExecutionPreviewResult& WithStatus(ExecutionPreviewStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplemental information about the current status of the execution
     * preview.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetExecutionPreviewResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionPreview& GetExecutionPreview() const { return m_executionPreview; }
    template<typename ExecutionPreviewT = ExecutionPreview>
    void SetExecutionPreview(ExecutionPreviewT&& value) { m_executionPreviewHasBeenSet = true; m_executionPreview = std::forward<ExecutionPreviewT>(value); }
    template<typename ExecutionPreviewT = ExecutionPreview>
    GetExecutionPreviewResult& WithExecutionPreview(ExecutionPreviewT&& value) { SetExecutionPreview(std::forward<ExecutionPreviewT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExecutionPreviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionPreviewId;
    bool m_executionPreviewIdHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    ExecutionPreviewStatus m_status{ExecutionPreviewStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ExecutionPreview m_executionPreview;
    bool m_executionPreviewHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
