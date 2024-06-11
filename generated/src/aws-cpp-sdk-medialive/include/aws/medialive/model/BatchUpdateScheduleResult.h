﻿/**
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
    AWS_MEDIALIVE_API BatchUpdateScheduleResult();
    AWS_MEDIALIVE_API BatchUpdateScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API BatchUpdateScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Schedule actions created in the schedule.
     */
    inline const BatchScheduleActionCreateResult& GetCreates() const{ return m_creates; }
    inline void SetCreates(const BatchScheduleActionCreateResult& value) { m_creates = value; }
    inline void SetCreates(BatchScheduleActionCreateResult&& value) { m_creates = std::move(value); }
    inline BatchUpdateScheduleResult& WithCreates(const BatchScheduleActionCreateResult& value) { SetCreates(value); return *this;}
    inline BatchUpdateScheduleResult& WithCreates(BatchScheduleActionCreateResult&& value) { SetCreates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Schedule actions deleted from the schedule.
     */
    inline const BatchScheduleActionDeleteResult& GetDeletes() const{ return m_deletes; }
    inline void SetDeletes(const BatchScheduleActionDeleteResult& value) { m_deletes = value; }
    inline void SetDeletes(BatchScheduleActionDeleteResult&& value) { m_deletes = std::move(value); }
    inline BatchUpdateScheduleResult& WithDeletes(const BatchScheduleActionDeleteResult& value) { SetDeletes(value); return *this;}
    inline BatchUpdateScheduleResult& WithDeletes(BatchScheduleActionDeleteResult&& value) { SetDeletes(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    BatchScheduleActionCreateResult m_creates;

    BatchScheduleActionDeleteResult m_deletes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
