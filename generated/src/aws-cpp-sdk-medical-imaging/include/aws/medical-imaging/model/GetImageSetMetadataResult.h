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
  class GetImageSetMetadataResult
  {
  public:
    AWS_MEDICALIMAGING_API GetImageSetMetadataResult() = default;
    AWS_MEDICALIMAGING_API GetImageSetMetadataResult(GetImageSetMetadataResult&&) = default;
    AWS_MEDICALIMAGING_API GetImageSetMetadataResult& operator=(GetImageSetMetadataResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetImageSetMetadataResult(const GetImageSetMetadataResult&) = delete;
    GetImageSetMetadataResult& operator=(const GetImageSetMetadataResult&) = delete;


    AWS_MEDICALIMAGING_API GetImageSetMetadataResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_MEDICALIMAGING_API GetImageSetMetadataResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The blob containing the aggregated metadata information for the image
     * set.</p>
     */
    inline Aws::IOStream& GetImageSetMetadataBlob() const { return m_imageSetMetadataBlob.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_imageSetMetadataBlob = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The format in which the study metadata is returned to the customer. Default
     * is <code>text/plain</code>.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetImageSetMetadataResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compression format in which image set metadata attributes are
     * returned.</p>
     */
    inline const Aws::String& GetContentEncoding() const { return m_contentEncoding; }
    template<typename ContentEncodingT = Aws::String>
    void SetContentEncoding(ContentEncodingT&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::forward<ContentEncodingT>(value); }
    template<typename ContentEncodingT = Aws::String>
    GetImageSetMetadataResult& WithContentEncoding(ContentEncodingT&& value) { SetContentEncoding(std::forward<ContentEncodingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImageSetMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_imageSetMetadataBlob{};
    bool m_imageSetMetadataBlobHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_contentEncoding;
    bool m_contentEncodingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
