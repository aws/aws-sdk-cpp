/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/BatchScheduleActionCreateResult.h>
#include <aws/medialive/model/BatchScheduleActionDeleteResult.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for BatchUpdateScheduleResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateScheduleResponse">AWS
   * API Reference</a></p>
   */
  class BatchUpdateScheduleResult
  {
  public:
    AWS_MEDIALIVE_API BatchUpdateScheduleResult() = default;
    AWS_MEDIALIVE_API BatchUpdateScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API BatchUpdateScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Schedule actions created in the schedule.
     */
    inline const BatchScheduleActionCreateResult& GetCreates() const { return m_creates; }
    template<typename CreatesT = BatchScheduleActionCreateResult>
    void SetCreates(CreatesT&& value) { m_createsHasBeenSet = true; m_creates = std::forward<CreatesT>(value); }
    template<typename CreatesT = BatchScheduleActionCreateResult>
    BatchUpdateScheduleResult& WithCreates(CreatesT&& value) { SetCreates(std::forward<CreatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Schedule actions deleted from the schedule.
     */
    inline const BatchScheduleActionDeleteResult& GetDeletes() const { return m_deletes; }
    template<typename DeletesT = BatchScheduleActionDeleteResult>
    void SetDeletes(DeletesT&& value) { m_deletesHasBeenSet = true; m_deletes = std::forward<DeletesT>(value); }
    template<typename DeletesT = BatchScheduleActionDeleteResult>
    BatchUpdateScheduleResult& WithDeletes(DeletesT&& value) { SetDeletes(std::forward<DeletesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BatchScheduleActionCreateResult m_creates;
    bool m_createsHasBeenSet = false;

    BatchScheduleActionDeleteResult m_deletes;
    bool m_deletesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
