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
  class GetSolFunctionPackageContentResult
  {
  public:
    AWS_TNB_API GetSolFunctionPackageContentResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_TNB_API GetSolFunctionPackageContentResult(GetSolFunctionPackageContentResult&&);
    AWS_TNB_API GetSolFunctionPackageContentResult& operator=(GetSolFunctionPackageContentResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSolFunctionPackageContentResult(const GetSolFunctionPackageContentResult&) = delete;
    GetSolFunctionPackageContentResult& operator=(const GetSolFunctionPackageContentResult&) = delete;


    AWS_TNB_API GetSolFunctionPackageContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_TNB_API GetSolFunctionPackageContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



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
    inline GetSolFunctionPackageContentResult& WithContentType(const PackageContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline GetSolFunctionPackageContentResult& WithContentType(PackageContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>Contents of the function package.</p>
     */
    inline Aws::IOStream& GetPackageContent() const { return m_packageContent.GetUnderlyingStream(); }

    /**
     * <p>Contents of the function package.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_packageContent = Aws::Utils::Stream::ResponseStream(body); }

  private:

    PackageContentType m_contentType;

    Aws::Utils::Stream::ResponseStream m_packageContent;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
