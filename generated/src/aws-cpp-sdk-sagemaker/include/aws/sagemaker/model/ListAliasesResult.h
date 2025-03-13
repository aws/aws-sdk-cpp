/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListAliasesResult
  {
  public:
    AWS_SAGEMAKER_API ListAliasesResult() = default;
    AWS_SAGEMAKER_API ListAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of SageMaker AI image version aliases.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSageMakerImageVersionAliases() const { return m_sageMakerImageVersionAliases; }
    template<typename SageMakerImageVersionAliasesT = Aws::Vector<Aws::String>>
    void SetSageMakerImageVersionAliases(SageMakerImageVersionAliasesT&& value) { m_sageMakerImageVersionAliasesHasBeenSet = true; m_sageMakerImageVersionAliases = std::forward<SageMakerImageVersionAliasesT>(value); }
    template<typename SageMakerImageVersionAliasesT = Aws::Vector<Aws::String>>
    ListAliasesResult& WithSageMakerImageVersionAliases(SageMakerImageVersionAliasesT&& value) { SetSageMakerImageVersionAliases(std::forward<SageMakerImageVersionAliasesT>(value)); return *this;}
    template<typename SageMakerImageVersionAliasesT = Aws::String>
    ListAliasesResult& AddSageMakerImageVersionAliases(SageMakerImageVersionAliasesT&& value) { m_sageMakerImageVersionAliasesHasBeenSet = true; m_sageMakerImageVersionAliases.emplace_back(std::forward<SageMakerImageVersionAliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of aliases, if more aliases exist.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAliasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAliasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_sageMakerImageVersionAliases;
    bool m_sageMakerImageVersionAliasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
