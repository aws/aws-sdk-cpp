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
    AWS_SAGEMAKER_API ListCodeRepositoriesResult();
    AWS_SAGEMAKER_API ListCodeRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListCodeRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Gets a list of summaries of the Git repositories. Each summary specifies the
     * following values for the repository: </p> <ul> <li> <p>Name</p> </li> <li>
     * <p>Amazon Resource Name (ARN)</p> </li> <li> <p>Creation time</p> </li> <li>
     * <p>Last modified time</p> </li> <li> <p>Configuration information, including the
     * URL location of the repository and the ARN of the Amazon Web Services Secrets
     * Manager secret that contains the credentials used to access the repository.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<CodeRepositorySummary>& GetCodeRepositorySummaryList() const{ return m_codeRepositorySummaryList; }

    /**
     * <p>Gets a list of summaries of the Git repositories. Each summary specifies the
     * following values for the repository: </p> <ul> <li> <p>Name</p> </li> <li>
     * <p>Amazon Resource Name (ARN)</p> </li> <li> <p>Creation time</p> </li> <li>
     * <p>Last modified time</p> </li> <li> <p>Configuration information, including the
     * URL location of the repository and the ARN of the Amazon Web Services Secrets
     * Manager secret that contains the credentials used to access the repository.</p>
     * </li> </ul>
     */
    inline void SetCodeRepositorySummaryList(const Aws::Vector<CodeRepositorySummary>& value) { m_codeRepositorySummaryList = value; }

    /**
     * <p>Gets a list of summaries of the Git repositories. Each summary specifies the
     * following values for the repository: </p> <ul> <li> <p>Name</p> </li> <li>
     * <p>Amazon Resource Name (ARN)</p> </li> <li> <p>Creation time</p> </li> <li>
     * <p>Last modified time</p> </li> <li> <p>Configuration information, including the
     * URL location of the repository and the ARN of the Amazon Web Services Secrets
     * Manager secret that contains the credentials used to access the repository.</p>
     * </li> </ul>
     */
    inline void SetCodeRepositorySummaryList(Aws::Vector<CodeRepositorySummary>&& value) { m_codeRepositorySummaryList = std::move(value); }

    /**
     * <p>Gets a list of summaries of the Git repositories. Each summary specifies the
     * following values for the repository: </p> <ul> <li> <p>Name</p> </li> <li>
     * <p>Amazon Resource Name (ARN)</p> </li> <li> <p>Creation time</p> </li> <li>
     * <p>Last modified time</p> </li> <li> <p>Configuration information, including the
     * URL location of the repository and the ARN of the Amazon Web Services Secrets
     * Manager secret that contains the credentials used to access the repository.</p>
     * </li> </ul>
     */
    inline ListCodeRepositoriesResult& WithCodeRepositorySummaryList(const Aws::Vector<CodeRepositorySummary>& value) { SetCodeRepositorySummaryList(value); return *this;}

    /**
     * <p>Gets a list of summaries of the Git repositories. Each summary specifies the
     * following values for the repository: </p> <ul> <li> <p>Name</p> </li> <li>
     * <p>Amazon Resource Name (ARN)</p> </li> <li> <p>Creation time</p> </li> <li>
     * <p>Last modified time</p> </li> <li> <p>Configuration information, including the
     * URL location of the repository and the ARN of the Amazon Web Services Secrets
     * Manager secret that contains the credentials used to access the repository.</p>
     * </li> </ul>
     */
    inline ListCodeRepositoriesResult& WithCodeRepositorySummaryList(Aws::Vector<CodeRepositorySummary>&& value) { SetCodeRepositorySummaryList(std::move(value)); return *this;}

    /**
     * <p>Gets a list of summaries of the Git repositories. Each summary specifies the
     * following values for the repository: </p> <ul> <li> <p>Name</p> </li> <li>
     * <p>Amazon Resource Name (ARN)</p> </li> <li> <p>Creation time</p> </li> <li>
     * <p>Last modified time</p> </li> <li> <p>Configuration information, including the
     * URL location of the repository and the ARN of the Amazon Web Services Secrets
     * Manager secret that contains the credentials used to access the repository.</p>
     * </li> </ul>
     */
    inline ListCodeRepositoriesResult& AddCodeRepositorySummaryList(const CodeRepositorySummary& value) { m_codeRepositorySummaryList.push_back(value); return *this; }

    /**
     * <p>Gets a list of summaries of the Git repositories. Each summary specifies the
     * following values for the repository: </p> <ul> <li> <p>Name</p> </li> <li>
     * <p>Amazon Resource Name (ARN)</p> </li> <li> <p>Creation time</p> </li> <li>
     * <p>Last modified time</p> </li> <li> <p>Configuration information, including the
     * URL location of the repository and the ARN of the Amazon Web Services Secrets
     * Manager secret that contains the credentials used to access the repository.</p>
     * </li> </ul>
     */
    inline ListCodeRepositoriesResult& AddCodeRepositorySummaryList(CodeRepositorySummary&& value) { m_codeRepositorySummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline ListCodeRepositoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline ListCodeRepositoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of a <code>ListCodeRepositoriesOutput</code> request was
     * truncated, the response includes a <code>NextToken</code>. To get the next set
     * of Git repositories, use the token in the next request.</p>
     */
    inline ListCodeRepositoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CodeRepositorySummary> m_codeRepositorySummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
