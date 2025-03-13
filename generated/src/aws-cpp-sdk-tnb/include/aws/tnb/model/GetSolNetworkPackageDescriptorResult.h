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
    AWS_TNB_API GetSolNetworkPackageDescriptorResult() = default;
    AWS_TNB_API GetSolNetworkPackageDescriptorResult(GetSolNetworkPackageDescriptorResult&&) = default;
    AWS_TNB_API GetSolNetworkPackageDescriptorResult& operator=(GetSolNetworkPackageDescriptorResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSolNetworkPackageDescriptorResult(const GetSolNetworkPackageDescriptorResult&) = delete;
    GetSolNetworkPackageDescriptorResult& operator=(const GetSolNetworkPackageDescriptorResult&) = delete;


    AWS_TNB_API GetSolNetworkPackageDescriptorResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_TNB_API GetSolNetworkPackageDescriptorResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Indicates the media type of the resource.</p>
     */
    inline DescriptorContentType GetContentType() const { return m_contentType; }
    inline void SetContentType(DescriptorContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline GetSolNetworkPackageDescriptorResult& WithContentType(DescriptorContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contents of the network service descriptor in the network package.</p>
     */
    inline Aws::IOStream& GetNsd() const { return m_nsd.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_nsd = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSolNetworkPackageDescriptorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DescriptorContentType m_contentType{DescriptorContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_nsd{};
    bool m_nsdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
