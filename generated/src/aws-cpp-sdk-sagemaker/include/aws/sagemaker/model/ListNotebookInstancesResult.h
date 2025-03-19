/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/NotebookInstanceSummary.h>
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
  class ListNotebookInstancesResult
  {
  public:
    AWS_SAGEMAKER_API ListNotebookInstancesResult() = default;
    AWS_SAGEMAKER_API ListNotebookInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListNotebookInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response to the previous <code>ListNotebookInstances</code> request
     * was truncated, SageMaker AI returns this token. To retrieve the next set of
     * notebook instances, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotebookInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>NotebookInstanceSummary</code> objects, one for each
     * notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceSummary>& GetNotebookInstances() const { return m_notebookInstances; }
    template<typename NotebookInstancesT = Aws::Vector<NotebookInstanceSummary>>
    void SetNotebookInstances(NotebookInstancesT&& value) { m_notebookInstancesHasBeenSet = true; m_notebookInstances = std::forward<NotebookInstancesT>(value); }
    template<typename NotebookInstancesT = Aws::Vector<NotebookInstanceSummary>>
    ListNotebookInstancesResult& WithNotebookInstances(NotebookInstancesT&& value) { SetNotebookInstances(std::forward<NotebookInstancesT>(value)); return *this;}
    template<typename NotebookInstancesT = NotebookInstanceSummary>
    ListNotebookInstancesResult& AddNotebookInstances(NotebookInstancesT&& value) { m_notebookInstancesHasBeenSet = true; m_notebookInstances.emplace_back(std::forward<NotebookInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNotebookInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NotebookInstanceSummary> m_notebookInstances;
    bool m_notebookInstancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
