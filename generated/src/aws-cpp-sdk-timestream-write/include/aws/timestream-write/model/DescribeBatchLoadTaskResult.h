/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/BatchLoadTaskDescription.h>
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
  class DescribeBatchLoadTaskResult
  {
  public:
    AWS_TIMESTREAMWRITE_API DescribeBatchLoadTaskResult() = default;
    AWS_TIMESTREAMWRITE_API DescribeBatchLoadTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API DescribeBatchLoadTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Description of the batch load task.</p>
     */
    inline const BatchLoadTaskDescription& GetBatchLoadTaskDescription() const { return m_batchLoadTaskDescription; }
    template<typename BatchLoadTaskDescriptionT = BatchLoadTaskDescription>
    void SetBatchLoadTaskDescription(BatchLoadTaskDescriptionT&& value) { m_batchLoadTaskDescriptionHasBeenSet = true; m_batchLoadTaskDescription = std::forward<BatchLoadTaskDescriptionT>(value); }
    template<typename BatchLoadTaskDescriptionT = BatchLoadTaskDescription>
    DescribeBatchLoadTaskResult& WithBatchLoadTaskDescription(BatchLoadTaskDescriptionT&& value) { SetBatchLoadTaskDescription(std::forward<BatchLoadTaskDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBatchLoadTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BatchLoadTaskDescription m_batchLoadTaskDescription;
    bool m_batchLoadTaskDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
