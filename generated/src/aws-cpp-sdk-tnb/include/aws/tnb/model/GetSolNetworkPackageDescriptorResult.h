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
  class GetSolNetworkPackageDescriptorResult
  {
  public:
    AWS_TNB_API GetSolNetworkPackageDescriptorResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_TNB_API GetSolNetworkPackageDescriptorResult(GetSolNetworkPackageDescriptorResult&&);
    AWS_TNB_API GetSolNetworkPackageDescriptorResult& operator=(GetSolNetworkPackageDescriptorResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSolNetworkPackageDescriptorResult(const GetSolNetworkPackageDescriptorResult&) = delete;
    GetSolNetworkPackageDescriptorResult& operator=(const GetSolNetworkPackageDescriptorResult&) = delete;


    AWS_TNB_API GetSolNetworkPackageDescriptorResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_TNB_API GetSolNetworkPackageDescriptorResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



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
    inline GetSolNetworkPackageDescriptorResult& WithContentType(const DescriptorContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline GetSolNetworkPackageDescriptorResult& WithContentType(DescriptorContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>Contents of the network service descriptor in the network package.</p>
     */
    inline Aws::IOStream& GetNsd() const { return m_nsd.GetUnderlyingStream(); }

    /**
     * <p>Contents of the network service descriptor in the network package.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_nsd = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSolNetworkPackageDescriptorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSolNetworkPackageDescriptorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSolNetworkPackageDescriptorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DescriptorContentType m_contentType;

    Aws::Utils::Stream::ResponseStream m_nsd;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
