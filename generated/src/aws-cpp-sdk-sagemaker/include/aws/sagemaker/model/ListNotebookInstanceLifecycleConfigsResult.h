/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/NotebookInstanceLifecycleConfigSummary.h>
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
  class ListNotebookInstanceLifecycleConfigsResult
  {
  public:
    AWS_SAGEMAKER_API ListNotebookInstanceLifecycleConfigsResult() = default;
    AWS_SAGEMAKER_API ListNotebookInstanceLifecycleConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListNotebookInstanceLifecycleConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, SageMaker AI returns this token. To get the
     * next set of lifecycle configurations, use it in the next request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotebookInstanceLifecycleConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>NotebookInstanceLifecycleConfiguration</code> objects, each
     * listing a lifecycle configuration.</p>
     */
    inline const Aws::Vector<NotebookInstanceLifecycleConfigSummary>& GetNotebookInstanceLifecycleConfigs() const { return m_notebookInstanceLifecycleConfigs; }
    template<typename NotebookInstanceLifecycleConfigsT = Aws::Vector<NotebookInstanceLifecycleConfigSummary>>
    void SetNotebookInstanceLifecycleConfigs(NotebookInstanceLifecycleConfigsT&& value) { m_notebookInstanceLifecycleConfigsHasBeenSet = true; m_notebookInstanceLifecycleConfigs = std::forward<NotebookInstanceLifecycleConfigsT>(value); }
    template<typename NotebookInstanceLifecycleConfigsT = Aws::Vector<NotebookInstanceLifecycleConfigSummary>>
    ListNotebookInstanceLifecycleConfigsResult& WithNotebookInstanceLifecycleConfigs(NotebookInstanceLifecycleConfigsT&& value) { SetNotebookInstanceLifecycleConfigs(std::forward<NotebookInstanceLifecycleConfigsT>(value)); return *this;}
    template<typename NotebookInstanceLifecycleConfigsT = NotebookInstanceLifecycleConfigSummary>
    ListNotebookInstanceLifecycleConfigsResult& AddNotebookInstanceLifecycleConfigs(NotebookInstanceLifecycleConfigsT&& value) { m_notebookInstanceLifecycleConfigsHasBeenSet = true; m_notebookInstanceLifecycleConfigs.emplace_back(std::forward<NotebookInstanceLifecycleConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNotebookInstanceLifecycleConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NotebookInstanceLifecycleConfigSummary> m_notebookInstanceLifecycleConfigs;
    bool m_notebookInstanceLifecycleConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
