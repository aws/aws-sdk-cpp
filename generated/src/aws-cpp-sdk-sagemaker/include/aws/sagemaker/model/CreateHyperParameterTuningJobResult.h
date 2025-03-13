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
  class CreateHyperParameterTuningJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateHyperParameterTuningJobResult() = default;
    AWS_SAGEMAKER_API CreateHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateHyperParameterTuningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. SageMaker assigns an ARN to
     * a hyperparameter tuning job when you create it.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const { return m_hyperParameterTuningJobArn; }
    template<typename HyperParameterTuningJobArnT = Aws::String>
    void SetHyperParameterTuningJobArn(HyperParameterTuningJobArnT&& value) { m_hyperParameterTuningJobArnHasBeenSet = true; m_hyperParameterTuningJobArn = std::forward<HyperParameterTuningJobArnT>(value); }
    template<typename HyperParameterTuningJobArnT = Aws::String>
    CreateHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(HyperParameterTuningJobArnT&& value) { SetHyperParameterTuningJobArn(std::forward<HyperParameterTuningJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateHyperParameterTuningJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hyperParameterTuningJobArn;
    bool m_hyperParameterTuningJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
