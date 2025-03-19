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
  class CreateNotebookInstanceLifecycleConfigResult
  {
  public:
    AWS_SAGEMAKER_API CreateNotebookInstanceLifecycleConfigResult() = default;
    AWS_SAGEMAKER_API CreateNotebookInstanceLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateNotebookInstanceLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigArn() const { return m_notebookInstanceLifecycleConfigArn; }
    template<typename NotebookInstanceLifecycleConfigArnT = Aws::String>
    void SetNotebookInstanceLifecycleConfigArn(NotebookInstanceLifecycleConfigArnT&& value) { m_notebookInstanceLifecycleConfigArnHasBeenSet = true; m_notebookInstanceLifecycleConfigArn = std::forward<NotebookInstanceLifecycleConfigArnT>(value); }
    template<typename NotebookInstanceLifecycleConfigArnT = Aws::String>
    CreateNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(NotebookInstanceLifecycleConfigArnT&& value) { SetNotebookInstanceLifecycleConfigArn(std::forward<NotebookInstanceLifecycleConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateNotebookInstanceLifecycleConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceLifecycleConfigArn;
    bool m_notebookInstanceLifecycleConfigArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
