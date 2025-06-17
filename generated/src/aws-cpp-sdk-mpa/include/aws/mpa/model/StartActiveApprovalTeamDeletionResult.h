/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace MPA
{
namespace Model
{
  class StartActiveApprovalTeamDeletionResult
  {
  public:
    AWS_MPA_API StartActiveApprovalTeamDeletionResult() = default;
    AWS_MPA_API StartActiveApprovalTeamDeletionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API StartActiveApprovalTeamDeletionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Timestamp when the deletion process is scheduled to complete.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionCompletionTime() const { return m_deletionCompletionTime; }
    template<typename DeletionCompletionTimeT = Aws::Utils::DateTime>
    void SetDeletionCompletionTime(DeletionCompletionTimeT&& value) { m_deletionCompletionTimeHasBeenSet = true; m_deletionCompletionTime = std::forward<DeletionCompletionTimeT>(value); }
    template<typename DeletionCompletionTimeT = Aws::Utils::DateTime>
    StartActiveApprovalTeamDeletionResult& WithDeletionCompletionTime(DeletionCompletionTimeT&& value) { SetDeletionCompletionTime(std::forward<DeletionCompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the deletion process was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionStartTime() const { return m_deletionStartTime; }
    template<typename DeletionStartTimeT = Aws::Utils::DateTime>
    void SetDeletionStartTime(DeletionStartTimeT&& value) { m_deletionStartTimeHasBeenSet = true; m_deletionStartTime = std::forward<DeletionStartTimeT>(value); }
    template<typename DeletionStartTimeT = Aws::Utils::DateTime>
    StartActiveApprovalTeamDeletionResult& WithDeletionStartTime(DeletionStartTimeT&& value) { SetDeletionStartTime(std::forward<DeletionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartActiveApprovalTeamDeletionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_deletionCompletionTime{};
    bool m_deletionCompletionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deletionStartTime{};
    bool m_deletionStartTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
