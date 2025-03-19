/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
  class CreateBatchInferenceJobResult
  {
  public:
    AWS_PERSONALIZE_API CreateBatchInferenceJobResult() = default;
    AWS_PERSONALIZE_API CreateBatchInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateBatchInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the batch inference job.</p>
     */
    inline const Aws::String& GetBatchInferenceJobArn() const { return m_batchInferenceJobArn; }
    template<typename BatchInferenceJobArnT = Aws::String>
    void SetBatchInferenceJobArn(BatchInferenceJobArnT&& value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn = std::forward<BatchInferenceJobArnT>(value); }
    template<typename BatchInferenceJobArnT = Aws::String>
    CreateBatchInferenceJobResult& WithBatchInferenceJobArn(BatchInferenceJobArnT&& value) { SetBatchInferenceJobArn(std::forward<BatchInferenceJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBatchInferenceJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_batchInferenceJobArn;
    bool m_batchInferenceJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
