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
  class CreateIndexResult
  {
  public:
    AWS_QBUSINESS_API CreateIndexResult();
    AWS_QBUSINESS_API CreateIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q index.</p>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q index.</p>
     */
    inline void SetIndexArn(const Aws::String& value) { m_indexArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q index.</p>
     */
    inline void SetIndexArn(Aws::String&& value) { m_indexArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q index.</p>
     */
    inline void SetIndexArn(const char* value) { m_indexArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q index.</p>
     */
    inline CreateIndexResult& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q index.</p>
     */
    inline CreateIndexResult& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q index.</p>
     */
    inline CreateIndexResult& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}


    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline CreateIndexResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline CreateIndexResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Amazon Q index.</p>
     */
    inline CreateIndexResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateIndexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateIndexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateIndexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_indexArn;

    Aws::String m_indexId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
