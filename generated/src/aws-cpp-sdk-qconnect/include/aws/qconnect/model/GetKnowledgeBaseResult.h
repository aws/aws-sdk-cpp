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
    AWS_QCONNECT_API GetKnowledgeBaseResult();
    AWS_QCONNECT_API GetKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The knowledge base.</p>
     */
    inline const KnowledgeBaseData& GetKnowledgeBase() const{ return m_knowledgeBase; }

    /**
     * <p>The knowledge base.</p>
     */
    inline void SetKnowledgeBase(const KnowledgeBaseData& value) { m_knowledgeBase = value; }

    /**
     * <p>The knowledge base.</p>
     */
    inline void SetKnowledgeBase(KnowledgeBaseData&& value) { m_knowledgeBase = std::move(value); }

    /**
     * <p>The knowledge base.</p>
     */
    inline GetKnowledgeBaseResult& WithKnowledgeBase(const KnowledgeBaseData& value) { SetKnowledgeBase(value); return *this;}

    /**
     * <p>The knowledge base.</p>
     */
    inline GetKnowledgeBaseResult& WithKnowledgeBase(KnowledgeBaseData&& value) { SetKnowledgeBase(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKnowledgeBaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKnowledgeBaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKnowledgeBaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KnowledgeBaseData m_knowledgeBase;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
