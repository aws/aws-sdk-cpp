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
  class CreateBatchSegmentJobResult
  {
  public:
    AWS_PERSONALIZE_API CreateBatchSegmentJobResult() = default;
    AWS_PERSONALIZE_API CreateBatchSegmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateBatchSegmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the batch segment job.</p>
     */
    inline const Aws::String& GetBatchSegmentJobArn() const { return m_batchSegmentJobArn; }
    template<typename BatchSegmentJobArnT = Aws::String>
    void SetBatchSegmentJobArn(BatchSegmentJobArnT&& value) { m_batchSegmentJobArnHasBeenSet = true; m_batchSegmentJobArn = std::forward<BatchSegmentJobArnT>(value); }
    template<typename BatchSegmentJobArnT = Aws::String>
    CreateBatchSegmentJobResult& WithBatchSegmentJobArn(BatchSegmentJobArnT&& value) { SetBatchSegmentJobArn(std::forward<BatchSegmentJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBatchSegmentJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_batchSegmentJobArn;
    bool m_batchSegmentJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
