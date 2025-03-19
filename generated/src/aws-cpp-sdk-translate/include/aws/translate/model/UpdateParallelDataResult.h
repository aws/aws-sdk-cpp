/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataStatus.h>
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
namespace Translate
{
namespace Model
{
  class UpdateParallelDataResult
  {
  public:
    AWS_TRANSLATE_API UpdateParallelDataResult() = default;
    AWS_TRANSLATE_API UpdateParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API UpdateParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the parallel data resource being updated.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateParallelDataResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parallel data resource that you are attempting to update.
     * Your update request is accepted only if this status is either
     * <code>ACTIVE</code> or <code>FAILED</code>.</p>
     */
    inline ParallelDataStatus GetStatus() const { return m_status; }
    inline void SetStatus(ParallelDataStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateParallelDataResult& WithStatus(ParallelDataStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parallel data update attempt. When the updated parallel
     * data resource is ready for you to use, the status is <code>ACTIVE</code>.</p>
     */
    inline ParallelDataStatus GetLatestUpdateAttemptStatus() const { return m_latestUpdateAttemptStatus; }
    inline void SetLatestUpdateAttemptStatus(ParallelDataStatus value) { m_latestUpdateAttemptStatusHasBeenSet = true; m_latestUpdateAttemptStatus = value; }
    inline UpdateParallelDataResult& WithLatestUpdateAttemptStatus(ParallelDataStatus value) { SetLatestUpdateAttemptStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the most recent update was attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestUpdateAttemptAt() const { return m_latestUpdateAttemptAt; }
    template<typename LatestUpdateAttemptAtT = Aws::Utils::DateTime>
    void SetLatestUpdateAttemptAt(LatestUpdateAttemptAtT&& value) { m_latestUpdateAttemptAtHasBeenSet = true; m_latestUpdateAttemptAt = std::forward<LatestUpdateAttemptAtT>(value); }
    template<typename LatestUpdateAttemptAtT = Aws::Utils::DateTime>
    UpdateParallelDataResult& WithLatestUpdateAttemptAt(LatestUpdateAttemptAtT&& value) { SetLatestUpdateAttemptAt(std::forward<LatestUpdateAttemptAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateParallelDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ParallelDataStatus m_status{ParallelDataStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ParallelDataStatus m_latestUpdateAttemptStatus{ParallelDataStatus::NOT_SET};
    bool m_latestUpdateAttemptStatusHasBeenSet = false;

    Aws::Utils::DateTime m_latestUpdateAttemptAt{};
    bool m_latestUpdateAttemptAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
