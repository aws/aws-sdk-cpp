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
    AWS_QBUSINESS_API CreateRetrieverResult();
    AWS_QBUSINESS_API CreateRetrieverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateRetrieverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role associated with a
     * retriever.</p>
     */
    inline const Aws::String& GetRetrieverArn() const{ return m_retrieverArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role associated with a
     * retriever.</p>
     */
    inline void SetRetrieverArn(const Aws::String& value) { m_retrieverArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role associated with a
     * retriever.</p>
     */
    inline void SetRetrieverArn(Aws::String&& value) { m_retrieverArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role associated with a
     * retriever.</p>
     */
    inline void SetRetrieverArn(const char* value) { m_retrieverArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role associated with a
     * retriever.</p>
     */
    inline CreateRetrieverResult& WithRetrieverArn(const Aws::String& value) { SetRetrieverArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role associated with a
     * retriever.</p>
     */
    inline CreateRetrieverResult& WithRetrieverArn(Aws::String&& value) { SetRetrieverArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role associated with a
     * retriever.</p>
     */
    inline CreateRetrieverResult& WithRetrieverArn(const char* value) { SetRetrieverArn(value); return *this;}


    /**
     * <p>The identifier of the retriever you are using.</p>
     */
    inline const Aws::String& GetRetrieverId() const{ return m_retrieverId; }

    /**
     * <p>The identifier of the retriever you are using.</p>
     */
    inline void SetRetrieverId(const Aws::String& value) { m_retrieverId = value; }

    /**
     * <p>The identifier of the retriever you are using.</p>
     */
    inline void SetRetrieverId(Aws::String&& value) { m_retrieverId = std::move(value); }

    /**
     * <p>The identifier of the retriever you are using.</p>
     */
    inline void SetRetrieverId(const char* value) { m_retrieverId.assign(value); }

    /**
     * <p>The identifier of the retriever you are using.</p>
     */
    inline CreateRetrieverResult& WithRetrieverId(const Aws::String& value) { SetRetrieverId(value); return *this;}

    /**
     * <p>The identifier of the retriever you are using.</p>
     */
    inline CreateRetrieverResult& WithRetrieverId(Aws::String&& value) { SetRetrieverId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the retriever you are using.</p>
     */
    inline CreateRetrieverResult& WithRetrieverId(const char* value) { SetRetrieverId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRetrieverResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRetrieverResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRetrieverResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_retrieverArn;

    Aws::String m_retrieverId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
