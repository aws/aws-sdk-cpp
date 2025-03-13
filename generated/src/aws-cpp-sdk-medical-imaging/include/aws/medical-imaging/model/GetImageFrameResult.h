/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace MedicalImaging
{
namespace Model
{
  class GetImageFrameResult
  {
  public:
    AWS_MEDICALIMAGING_API GetImageFrameResult() = default;
    AWS_MEDICALIMAGING_API GetImageFrameResult(GetImageFrameResult&&) = default;
    AWS_MEDICALIMAGING_API GetImageFrameResult& operator=(GetImageFrameResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetImageFrameResult(const GetImageFrameResult&) = delete;
    GetImageFrameResult& operator=(const GetImageFrameResult&) = delete;


    AWS_MEDICALIMAGING_API GetImageFrameResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_MEDICALIMAGING_API GetImageFrameResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The blob containing the aggregated image frame information.</p>
     */
    inline Aws::IOStream& GetImageFrameBlob() const { return m_imageFrameBlob.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_imageFrameBlob = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The format in which the image frame information is returned to the customer.
     * Default is <code>application/octet-stream</code>.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetImageFrameResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImageFrameResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_imageFrameBlob{};
    bool m_imageFrameBlobHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
