/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/BatchSegmentJob.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeBatchSegmentJobResult
  {
  public:
    AWS_PERSONALIZE_API DescribeBatchSegmentJobResult() = default;
    AWS_PERSONALIZE_API DescribeBatchSegmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeBatchSegmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information on the specified batch segment job.</p>
     */
    inline const BatchSegmentJob& GetBatchSegmentJob() const { return m_batchSegmentJob; }
    template<typename BatchSegmentJobT = BatchSegmentJob>
    void SetBatchSegmentJob(BatchSegmentJobT&& value) { m_batchSegmentJobHasBeenSet = true; m_batchSegmentJob = std::forward<BatchSegmentJobT>(value); }
    template<typename BatchSegmentJobT = BatchSegmentJob>
    DescribeBatchSegmentJobResult& WithBatchSegmentJob(BatchSegmentJobT&& value) { SetBatchSegmentJob(std::forward<BatchSegmentJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBatchSegmentJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BatchSegmentJob m_batchSegmentJob;
    bool m_batchSegmentJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
