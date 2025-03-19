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
  class GetSolNetworkPackageContentResult
  {
  public:
    AWS_TNB_API GetSolNetworkPackageContentResult() = default;
    AWS_TNB_API GetSolNetworkPackageContentResult(GetSolNetworkPackageContentResult&&) = default;
    AWS_TNB_API GetSolNetworkPackageContentResult& operator=(GetSolNetworkPackageContentResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSolNetworkPackageContentResult(const GetSolNetworkPackageContentResult&) = delete;
    GetSolNetworkPackageContentResult& operator=(const GetSolNetworkPackageContentResult&) = delete;


    AWS_TNB_API GetSolNetworkPackageContentResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_TNB_API GetSolNetworkPackageContentResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline PackageContentType GetContentType() const { return m_contentType; }
    inline void SetContentType(PackageContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline GetSolNetworkPackageContentResult& WithContentType(PackageContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Content of the network service descriptor in the network package.</p>
     */
    inline Aws::IOStream& GetNsdContent() const { return m_nsdContent.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_nsdContent = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSolNetworkPackageContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageContentType m_contentType{PackageContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_nsdContent{};
    bool m_nsdContentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
