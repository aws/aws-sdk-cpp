/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/KnowledgeBaseData.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class CreateKnowledgeBaseResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API CreateKnowledgeBaseResult() = default;
    AWS_CONNECTWISDOMSERVICE_API CreateKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API CreateKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The knowledge base.</p>
     */
    inline const KnowledgeBaseData& GetKnowledgeBase() const { return m_knowledgeBase; }
    template<typename KnowledgeBaseT = KnowledgeBaseData>
    void SetKnowledgeBase(KnowledgeBaseT&& value) { m_knowledgeBaseHasBeenSet = true; m_knowledgeBase = std::forward<KnowledgeBaseT>(value); }
    template<typename KnowledgeBaseT = KnowledgeBaseData>
    CreateKnowledgeBaseResult& WithKnowledgeBase(KnowledgeBaseT&& value) { SetKnowledgeBase(std::forward<KnowledgeBaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateKnowledgeBaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseData m_knowledgeBase;
    bool m_knowledgeBaseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
