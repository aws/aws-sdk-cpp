/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/KnowledgeBaseData.h>
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
namespace QConnect
{
namespace Model
{
  class GetKnowledgeBaseResult
  {
  public:
    AWS_QCONNECT_API GetKnowledgeBaseResult() = default;
    AWS_QCONNECT_API GetKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The knowledge base.</p>
     */
    inline const KnowledgeBaseData& GetKnowledgeBase() const { return m_knowledgeBase; }
    template<typename KnowledgeBaseT = KnowledgeBaseData>
    void SetKnowledgeBase(KnowledgeBaseT&& value) { m_knowledgeBaseHasBeenSet = true; m_knowledgeBase = std::forward<KnowledgeBaseT>(value); }
    template<typename KnowledgeBaseT = KnowledgeBaseData>
    GetKnowledgeBaseResult& WithKnowledgeBase(KnowledgeBaseT&& value) { SetKnowledgeBase(std::forward<KnowledgeBaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKnowledgeBaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseData m_knowledgeBase;
    bool m_knowledgeBaseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
