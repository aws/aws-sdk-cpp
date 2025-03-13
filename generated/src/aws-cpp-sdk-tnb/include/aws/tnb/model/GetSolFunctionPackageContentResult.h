/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/tnb/model/PackageContentType.h>
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
  class GetSolFunctionPackageContentResult
  {
  public:
    AWS_TNB_API GetSolFunctionPackageContentResult() = default;
    AWS_TNB_API GetSolFunctionPackageContentResult(GetSolFunctionPackageContentResult&&) = default;
    AWS_TNB_API GetSolFunctionPackageContentResult& operator=(GetSolFunctionPackageContentResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSolFunctionPackageContentResult(const GetSolFunctionPackageContentResult&) = delete;
    GetSolFunctionPackageContentResult& operator=(const GetSolFunctionPackageContentResult&) = delete;


    AWS_TNB_API GetSolFunctionPackageContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_TNB_API GetSolFunctionPackageContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline PackageContentType GetContentType() const { return m_contentType; }
    inline void SetContentType(PackageContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline GetSolFunctionPackageContentResult& WithContentType(PackageContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contents of the function package.</p>
     */
    inline Aws::IOStream& GetPackageContent() const { return m_packageContent.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_packageContent = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSolFunctionPackageContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageContentType m_contentType{PackageContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_packageContent{};
    bool m_packageContentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
