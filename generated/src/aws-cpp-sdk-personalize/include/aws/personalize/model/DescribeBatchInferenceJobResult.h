/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/BatchInferenceJob.h>
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
  class DescribeBatchInferenceJobResult
  {
  public:
    AWS_PERSONALIZE_API DescribeBatchInferenceJobResult() = default;
    AWS_PERSONALIZE_API DescribeBatchInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeBatchInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline const BatchInferenceJob& GetBatchInferenceJob() const { return m_batchInferenceJob; }
    template<typename BatchInferenceJobT = BatchInferenceJob>
    void SetBatchInferenceJob(BatchInferenceJobT&& value) { m_batchInferenceJobHasBeenSet = true; m_batchInferenceJob = std::forward<BatchInferenceJobT>(value); }
    template<typename BatchInferenceJobT = BatchInferenceJob>
    DescribeBatchInferenceJobResult& WithBatchInferenceJob(BatchInferenceJobT&& value) { SetBatchInferenceJob(std::forward<BatchInferenceJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBatchInferenceJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BatchInferenceJob m_batchInferenceJob;
    bool m_batchInferenceJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
