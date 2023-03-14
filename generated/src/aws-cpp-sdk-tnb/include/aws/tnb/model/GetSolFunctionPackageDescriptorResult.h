/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/tnb/model/DescriptorContentType.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace tnb
{
namespace Model
{
  class GetSolFunctionPackageDescriptorResult
  {
  public:
    AWS_TNB_API GetSolFunctionPackageDescriptorResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_TNB_API GetSolFunctionPackageDescriptorResult(GetSolFunctionPackageDescriptorResult&&);
    AWS_TNB_API GetSolFunctionPackageDescriptorResult& operator=(GetSolFunctionPackageDescriptorResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSolFunctionPackageDescriptorResult(const GetSolFunctionPackageDescriptorResult&) = delete;
    GetSolFunctionPackageDescriptorResult& operator=(const GetSolFunctionPackageDescriptorResult&) = delete;


    AWS_TNB_API GetSolFunctionPackageDescriptorResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_TNB_API GetSolFunctionPackageDescriptorResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline const DescriptorContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline void SetContentType(const DescriptorContentType& value) { m_contentType = value; }

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline void SetContentType(DescriptorContentType&& value) { m_contentType = std::move(value); }

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline GetSolFunctionPackageDescriptorResult& WithContentType(const DescriptorContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline GetSolFunctionPackageDescriptorResult& WithContentType(DescriptorContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>Contents of the function package descriptor.</p>
     */
    inline Aws::IOStream& GetVnfd() const { return m_vnfd.GetUnderlyingStream(); }

    /**
     * <p>Contents of the function package descriptor.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_vnfd = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSolFunctionPackageDescriptorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSolFunctionPackageDescriptorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSolFunctionPackageDescriptorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DescriptorContentType m_contentType;

    Aws::Utils::Stream::ResponseStream m_vnfd;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
