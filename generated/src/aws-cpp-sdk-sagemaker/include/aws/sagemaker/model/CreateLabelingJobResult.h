/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class CreateLabelingJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateLabelingJobResult() = default;
    AWS_SAGEMAKER_API CreateLabelingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateLabelingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const { return m_labelingJobArn; }
    template<typename LabelingJobArnT = Aws::String>
    void SetLabelingJobArn(LabelingJobArnT&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::forward<LabelingJobArnT>(value); }
    template<typename LabelingJobArnT = Aws::String>
    CreateLabelingJobResult& WithLabelingJobArn(LabelingJobArnT&& value) { SetLabelingJobArn(std::forward<LabelingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLabelingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelingJobArn;
    bool m_labelingJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
