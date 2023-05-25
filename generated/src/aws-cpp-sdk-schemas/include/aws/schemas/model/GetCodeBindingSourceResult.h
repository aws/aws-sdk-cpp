/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Schemas
{
namespace Model
{
  class GetCodeBindingSourceResult
  {
  public:
    AWS_SCHEMAS_API GetCodeBindingSourceResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_SCHEMAS_API GetCodeBindingSourceResult(GetCodeBindingSourceResult&&);
    AWS_SCHEMAS_API GetCodeBindingSourceResult& operator=(GetCodeBindingSourceResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetCodeBindingSourceResult(const GetCodeBindingSourceResult&) = delete;
    GetCodeBindingSourceResult& operator=(const GetCodeBindingSourceResult&) = delete;


    AWS_SCHEMAS_API GetCodeBindingSourceResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_SCHEMAS_API GetCodeBindingSourceResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }

    
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCodeBindingSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCodeBindingSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCodeBindingSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_body;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
