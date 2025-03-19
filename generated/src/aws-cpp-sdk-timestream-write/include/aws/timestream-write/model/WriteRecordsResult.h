/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/RecordsIngested.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class WriteRecordsResult
  {
  public:
    AWS_TIMESTREAMWRITE_API WriteRecordsResult() = default;
    AWS_TIMESTREAMWRITE_API WriteRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API WriteRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information on the records ingested by this request.</p>
     */
    inline const RecordsIngested& GetRecordsIngested() const { return m_recordsIngested; }
    template<typename RecordsIngestedT = RecordsIngested>
    void SetRecordsIngested(RecordsIngestedT&& value) { m_recordsIngestedHasBeenSet = true; m_recordsIngested = std::forward<RecordsIngestedT>(value); }
    template<typename RecordsIngestedT = RecordsIngested>
    WriteRecordsResult& WithRecordsIngested(RecordsIngestedT&& value) { SetRecordsIngested(std::forward<RecordsIngestedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    WriteRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecordsIngested m_recordsIngested;
    bool m_recordsIngestedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
