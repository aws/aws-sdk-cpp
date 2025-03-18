/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{
  class CreateRetrieverResult
  {
  public:
    AWS_QBUSINESS_API CreateRetrieverResult() = default;
    AWS_QBUSINESS_API CreateRetrieverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateRetrieverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the retriever you are using.</p>
     */
    inline const Aws::String& GetRetrieverId() const { return m_retrieverId; }
    template<typename RetrieverIdT = Aws::String>
    void SetRetrieverId(RetrieverIdT&& value) { m_retrieverIdHasBeenSet = true; m_retrieverId = std::forward<RetrieverIdT>(value); }
    template<typename RetrieverIdT = Aws::String>
    CreateRetrieverResult& WithRetrieverId(RetrieverIdT&& value) { SetRetrieverId(std::forward<RetrieverIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role associated with a
     * retriever.</p>
     */
    inline const Aws::String& GetRetrieverArn() const { return m_retrieverArn; }
    template<typename RetrieverArnT = Aws::String>
    void SetRetrieverArn(RetrieverArnT&& value) { m_retrieverArnHasBeenSet = true; m_retrieverArn = std::forward<RetrieverArnT>(value); }
    template<typename RetrieverArnT = Aws::String>
    CreateRetrieverResult& WithRetrieverArn(RetrieverArnT&& value) { SetRetrieverArn(std::forward<RetrieverArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRetrieverResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_retrieverId;
    bool m_retrieverIdHasBeenSet = false;

    Aws::String m_retrieverArn;
    bool m_retrieverArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
