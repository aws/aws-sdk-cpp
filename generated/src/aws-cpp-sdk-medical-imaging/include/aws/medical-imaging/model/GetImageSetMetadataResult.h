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
    AWS_MEDICALIMAGING_API GetImageSetMetadataResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_MEDICALIMAGING_API GetImageSetMetadataResult(GetImageSetMetadataResult&&);
    AWS_MEDICALIMAGING_API GetImageSetMetadataResult& operator=(GetImageSetMetadataResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetImageSetMetadataResult(const GetImageSetMetadataResult&) = delete;
    GetImageSetMetadataResult& operator=(const GetImageSetMetadataResult&) = delete;


    AWS_MEDICALIMAGING_API GetImageSetMetadataResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_MEDICALIMAGING_API GetImageSetMetadataResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The blob containing the aggregated metadata information for the image
     * set.</p>
     */
    inline Aws::IOStream& GetImageSetMetadataBlob() const { return m_imageSetMetadataBlob.GetUnderlyingStream(); }

    /**
     * <p>The blob containing the aggregated metadata information for the image
     * set.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_imageSetMetadataBlob = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The format in which the study metadata is returned to the customer. Default
     * is <code>text/plain</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The format in which the study metadata is returned to the customer. Default
     * is <code>text/plain</code>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The format in which the study metadata is returned to the customer. Default
     * is <code>text/plain</code>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The format in which the study metadata is returned to the customer. Default
     * is <code>text/plain</code>.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The format in which the study metadata is returned to the customer. Default
     * is <code>text/plain</code>.</p>
     */
    inline GetImageSetMetadataResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The format in which the study metadata is returned to the customer. Default
     * is <code>text/plain</code>.</p>
     */
    inline GetImageSetMetadataResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The format in which the study metadata is returned to the customer. Default
     * is <code>text/plain</code>.</p>
     */
    inline GetImageSetMetadataResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The compression format in which image set metadata attributes are
     * returned.</p>
     */
    inline const Aws::String& GetContentEncoding() const{ return m_contentEncoding; }

    /**
     * <p>The compression format in which image set metadata attributes are
     * returned.</p>
     */
    inline void SetContentEncoding(const Aws::String& value) { m_contentEncoding = value; }

    /**
     * <p>The compression format in which image set metadata attributes are
     * returned.</p>
     */
    inline void SetContentEncoding(Aws::String&& value) { m_contentEncoding = std::move(value); }

    /**
     * <p>The compression format in which image set metadata attributes are
     * returned.</p>
     */
    inline void SetContentEncoding(const char* value) { m_contentEncoding.assign(value); }

    /**
     * <p>The compression format in which image set metadata attributes are
     * returned.</p>
     */
    inline GetImageSetMetadataResult& WithContentEncoding(const Aws::String& value) { SetContentEncoding(value); return *this;}

    /**
     * <p>The compression format in which image set metadata attributes are
     * returned.</p>
     */
    inline GetImageSetMetadataResult& WithContentEncoding(Aws::String&& value) { SetContentEncoding(std::move(value)); return *this;}

    /**
     * <p>The compression format in which image set metadata attributes are
     * returned.</p>
     */
    inline GetImageSetMetadataResult& WithContentEncoding(const char* value) { SetContentEncoding(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetImageSetMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetImageSetMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetImageSetMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_imageSetMetadataBlob;

    Aws::String m_contentType;

    Aws::String m_contentEncoding;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
