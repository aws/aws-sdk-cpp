/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CodeRepositorySummary.h>
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
  class ListCodeRepositoriesResult
  {
  public:
    AWS_SAGEMAKER_API ListCodeRepositoriesResult() = default;
    AWS_SAGEMAKER_API ListCodeRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListCodeRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Gets a list of summaries of the Git repositories. Each summary specifies the
     * following values for the repository: </p> <ul> <li> <p>Name</p> </li> <li>
     * <p>Amazon Resource Name (ARN)</p> </li> <li> <p>Creation time</p> </li> <li>
     * <p>Last modified time</p> </li> <li> <p>Configuration information, including the
     * URL location of the repository and the ARN of the Amazon Web Services Secrets
     * Manager secret that contains the credentials used to access the repository.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<CodeRepositorySummary>& GetCodeRepositorySummaryList() const { return m_codeRepositorySummaryList; }
    template<typename CodeRepositorySummaryListT = Aws::Vector<CodeRepositorySummary>>
    void SetCodeRepositorySummaryList(CodeRepositorySummaryListT&& value) { m_codeRepositorySummaryListHasBeenSet = true; m_codeRepositorySummaryList = std::forward<CodeRepositorySummaryListT>(value); }
    template<typename CodeRepositorySummaryListT = Aws::Vector<CodeRepositorySummary>>
    ListCodeRepositoriesResult& WithCodeRepositorySummaryList(CodeRepositorySummaryListT&& value) { SetCodeRepositorySummaryList(std::forward<CodeRepositorySummaryListT>(value)); return *this;}
    template<typename CodeRepositorySummaryListT = CodeRepositorySummary>
    ListCodeRepositoriesResult& AddCodeRepositorySummaryList(CodeRepositorySummaryListT&& value) { m_codeRepositorySummaryListHasBeenSet = true; m_codeRepositorySummaryList.emplace_back(std::forward<CodeRepositorySummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCodeRepositoriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCodeRepositoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CodeRepositorySummary> m_codeRepositorySummaryList;
    bool m_codeRepositorySummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
