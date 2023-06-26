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
    AWS_CONNECTWISDOMSERVICE_API CreateKnowledgeBaseResult();
    AWS_CONNECTWISDOMSERVICE_API CreateKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API CreateKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateKnowledgeBaseResult& WithKnowledgeBase(const KnowledgeBaseData& value) { SetKnowledgeBase(value); return *this;}

    /**
     * <p>The knowledge base.</p>
     */
    inline CreateKnowledgeBaseResult& WithKnowledgeBase(KnowledgeBaseData&& value) { SetKnowledgeBase(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateKnowledgeBaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateKnowledgeBaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateKnowledgeBaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KnowledgeBaseData m_knowledgeBase;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
