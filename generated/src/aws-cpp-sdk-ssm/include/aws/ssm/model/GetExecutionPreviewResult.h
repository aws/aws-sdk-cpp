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
    AWS_SSM_API GetExecutionPreviewResult();
    AWS_SSM_API GetExecutionPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetExecutionPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The generated ID for the existing execution preview.</p>
     */
    inline const Aws::String& GetExecutionPreviewId() const{ return m_executionPreviewId; }
    inline void SetExecutionPreviewId(const Aws::String& value) { m_executionPreviewId = value; }
    inline void SetExecutionPreviewId(Aws::String&& value) { m_executionPreviewId = std::move(value); }
    inline void SetExecutionPreviewId(const char* value) { m_executionPreviewId.assign(value); }
    inline GetExecutionPreviewResult& WithExecutionPreviewId(const Aws::String& value) { SetExecutionPreviewId(value); return *this;}
    inline GetExecutionPreviewResult& WithExecutionPreviewId(Aws::String&& value) { SetExecutionPreviewId(std::move(value)); return *this;}
    inline GetExecutionPreviewResult& WithExecutionPreviewId(const char* value) { SetExecutionPreviewId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTC timestamp indicating when the execution preview operation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }
    inline GetExecutionPreviewResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline GetExecutionPreviewResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the execution preview operation.</p>
     */
    inline const ExecutionPreviewStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ExecutionPreviewStatus& value) { m_status = value; }
    inline void SetStatus(ExecutionPreviewStatus&& value) { m_status = std::move(value); }
    inline GetExecutionPreviewResult& WithStatus(const ExecutionPreviewStatus& value) { SetStatus(value); return *this;}
    inline GetExecutionPreviewResult& WithStatus(ExecutionPreviewStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplemental information about the current status of the execution
     * preview.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetExecutionPreviewResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetExecutionPreviewResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetExecutionPreviewResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionPreview& GetExecutionPreview() const{ return m_executionPreview; }
    inline void SetExecutionPreview(const ExecutionPreview& value) { m_executionPreview = value; }
    inline void SetExecutionPreview(ExecutionPreview&& value) { m_executionPreview = std::move(value); }
    inline GetExecutionPreviewResult& WithExecutionPreview(const ExecutionPreview& value) { SetExecutionPreview(value); return *this;}
    inline GetExecutionPreviewResult& WithExecutionPreview(ExecutionPreview&& value) { SetExecutionPreview(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetExecutionPreviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetExecutionPreviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetExecutionPreviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_executionPreviewId;

    Aws::Utils::DateTime m_endedAt;

    ExecutionPreviewStatus m_status;

    Aws::String m_statusMessage;

    ExecutionPreview m_executionPreview;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
