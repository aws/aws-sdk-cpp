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
  class CreateModelCardExportJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateModelCardExportJobResult() = default;
    AWS_SAGEMAKER_API CreateModelCardExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateModelCardExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobArn() const { return m_modelCardExportJobArn; }
    template<typename ModelCardExportJobArnT = Aws::String>
    void SetModelCardExportJobArn(ModelCardExportJobArnT&& value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn = std::forward<ModelCardExportJobArnT>(value); }
    template<typename ModelCardExportJobArnT = Aws::String>
    CreateModelCardExportJobResult& WithModelCardExportJobArn(ModelCardExportJobArnT&& value) { SetModelCardExportJobArn(std::forward<ModelCardExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateModelCardExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelCardExportJobArn;
    bool m_modelCardExportJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
