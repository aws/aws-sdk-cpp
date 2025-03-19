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
  class CreateCompilationJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateCompilationJobResult() = default;
    AWS_SAGEMAKER_API CreateCompilationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateCompilationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the action is successful, the service sends back an HTTP 200 response.
     * Amazon SageMaker AI returns the following data in JSON format:</p> <ul> <li> <p>
     * <code>CompilationJobArn</code>: The Amazon Resource Name (ARN) of the compiled
     * job.</p> </li> </ul>
     */
    inline const Aws::String& GetCompilationJobArn() const { return m_compilationJobArn; }
    template<typename CompilationJobArnT = Aws::String>
    void SetCompilationJobArn(CompilationJobArnT&& value) { m_compilationJobArnHasBeenSet = true; m_compilationJobArn = std::forward<CompilationJobArnT>(value); }
    template<typename CompilationJobArnT = Aws::String>
    CreateCompilationJobResult& WithCompilationJobArn(CompilationJobArnT&& value) { SetCompilationJobArn(std::forward<CompilationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCompilationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_compilationJobArn;
    bool m_compilationJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
