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
  class UpdateModelCardResult
  {
  public:
    AWS_SAGEMAKER_API UpdateModelCardResult() = default;
    AWS_SAGEMAKER_API UpdateModelCardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateModelCardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const { return m_modelCardArn; }
    template<typename ModelCardArnT = Aws::String>
    void SetModelCardArn(ModelCardArnT&& value) { m_modelCardArnHasBeenSet = true; m_modelCardArn = std::forward<ModelCardArnT>(value); }
    template<typename ModelCardArnT = Aws::String>
    UpdateModelCardResult& WithModelCardArn(ModelCardArnT&& value) { SetModelCardArn(std::forward<ModelCardArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateModelCardResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelCardArn;
    bool m_modelCardArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
