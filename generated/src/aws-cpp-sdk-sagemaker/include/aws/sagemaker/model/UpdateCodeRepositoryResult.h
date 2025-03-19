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
  class UpdateCodeRepositoryResult
  {
  public:
    AWS_SAGEMAKER_API UpdateCodeRepositoryResult() = default;
    AWS_SAGEMAKER_API UpdateCodeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateCodeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const { return m_codeRepositoryArn; }
    template<typename CodeRepositoryArnT = Aws::String>
    void SetCodeRepositoryArn(CodeRepositoryArnT&& value) { m_codeRepositoryArnHasBeenSet = true; m_codeRepositoryArn = std::forward<CodeRepositoryArnT>(value); }
    template<typename CodeRepositoryArnT = Aws::String>
    UpdateCodeRepositoryResult& WithCodeRepositoryArn(CodeRepositoryArnT&& value) { SetCodeRepositoryArn(std::forward<CodeRepositoryArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCodeRepositoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeRepositoryArn;
    bool m_codeRepositoryArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
