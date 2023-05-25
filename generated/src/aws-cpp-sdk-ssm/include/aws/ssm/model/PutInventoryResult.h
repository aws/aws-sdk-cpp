/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class PutInventoryResult
  {
  public:
    AWS_SSM_API PutInventoryResult();
    AWS_SSM_API PutInventoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API PutInventoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the request.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Information about the request.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>Information about the request.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>Information about the request.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>Information about the request.</p>
     */
    inline PutInventoryResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Information about the request.</p>
     */
    inline PutInventoryResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Information about the request.</p>
     */
    inline PutInventoryResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutInventoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutInventoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutInventoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
