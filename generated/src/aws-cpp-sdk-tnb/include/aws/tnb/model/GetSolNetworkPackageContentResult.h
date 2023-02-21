/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/tnb/model/PackageContentType.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace tnb
{
namespace Model
{
  class GetSolNetworkPackageContentResult
  {
  public:
    AWS_TNB_API GetSolNetworkPackageContentResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_TNB_API GetSolNetworkPackageContentResult(GetSolNetworkPackageContentResult&&);
    AWS_TNB_API GetSolNetworkPackageContentResult& operator=(GetSolNetworkPackageContentResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSolNetworkPackageContentResult(const GetSolNetworkPackageContentResult&) = delete;
    GetSolNetworkPackageContentResult& operator=(const GetSolNetworkPackageContentResult&) = delete;


    AWS_TNB_API GetSolNetworkPackageContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_TNB_API GetSolNetworkPackageContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline const PackageContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline void SetContentType(const PackageContentType& value) { m_contentType = value; }

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline void SetContentType(PackageContentType&& value) { m_contentType = std::move(value); }

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline GetSolNetworkPackageContentResult& WithContentType(const PackageContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline GetSolNetworkPackageContentResult& WithContentType(PackageContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>Content of the network service descriptor in the network package.</p>
     */
    inline Aws::IOStream& GetNsdContent() const { return m_nsdContent.GetUnderlyingStream(); }

    /**
     * <p>Content of the network service descriptor in the network package.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_nsdContent = Aws::Utils::Stream::ResponseStream(body); }

  private:

    PackageContentType m_contentType;

    Aws::Utils::Stream::ResponseStream m_nsdContent;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
