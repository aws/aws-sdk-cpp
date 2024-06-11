/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowStatusEnum.h>
#include <aws/core/utils/DateTime.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{
  class StartWorkflowResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API StartWorkflowResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API StartWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API StartWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline StartWorkflowResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StartWorkflowResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StartWorkflowResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the migration workflow.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline StartWorkflowResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StartWorkflowResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StartWorkflowResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the migration workflow.</p>
     */
    inline const MigrationWorkflowStatusEnum& GetStatus() const{ return m_status; }
    inline void SetStatus(const MigrationWorkflowStatusEnum& value) { m_status = value; }
    inline void SetStatus(MigrationWorkflowStatusEnum&& value) { m_status = std::move(value); }
    inline StartWorkflowResult& WithStatus(const MigrationWorkflowStatusEnum& value) { SetStatus(value); return *this;}
    inline StartWorkflowResult& WithStatus(MigrationWorkflowStatusEnum&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the migration workflow.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline StartWorkflowResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline StartWorkflowResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline StartWorkflowResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the migration workflow was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTime = value; }
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTime = std::move(value); }
    inline StartWorkflowResult& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}
    inline StartWorkflowResult& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    MigrationWorkflowStatusEnum m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_lastStartTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
