/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/DbNodeResourceStatus.h>
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
namespace odb
{
namespace Model
{
  class StopDbNodeResult
  {
  public:
    AWS_ODB_API StopDbNodeResult() = default;
    AWS_ODB_API StopDbNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API StopDbNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the DB node that was stopped.</p>
     */
    inline const Aws::String& GetDbNodeId() const { return m_dbNodeId; }
    template<typename DbNodeIdT = Aws::String>
    void SetDbNodeId(DbNodeIdT&& value) { m_dbNodeIdHasBeenSet = true; m_dbNodeId = std::forward<DbNodeIdT>(value); }
    template<typename DbNodeIdT = Aws::String>
    StopDbNodeResult& WithDbNodeId(DbNodeIdT&& value) { SetDbNodeId(std::forward<DbNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the DB node after the stop operation.</p>
     */
    inline DbNodeResourceStatus GetStatus() const { return m_status; }
    inline void SetStatus(DbNodeResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StopDbNodeResult& WithStatus(DbNodeResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the status of the DB node after the stop
     * operation.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    StopDbNodeResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopDbNodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbNodeId;
    bool m_dbNodeIdHasBeenSet = false;

    DbNodeResourceStatus m_status{DbNodeResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
