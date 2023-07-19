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
    AWS_MEDICALIMAGING_API GetImageFrameResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_MEDICALIMAGING_API GetImageFrameResult(GetImageFrameResult&&);
    AWS_MEDICALIMAGING_API GetImageFrameResult& operator=(GetImageFrameResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetImageFrameResult(const GetImageFrameResult&) = delete;
    GetImageFrameResult& operator=(const GetImageFrameResult&) = delete;


    AWS_MEDICALIMAGING_API GetImageFrameResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_MEDICALIMAGING_API GetImageFrameResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The blob containing the aggregated image frame information.</p>
     */
    inline Aws::IOStream& GetImageFrameBlob() const { return m_imageFrameBlob.GetUnderlyingStream(); }

    /**
     * <p>The blob containing the aggregated image frame information.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_imageFrameBlob = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The format in which the image frame information is returned to the customer.
     * Default is <code>application/octet-stream</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The format in which the image frame information is returned to the customer.
     * Default is <code>application/octet-stream</code>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The format in which the image frame information is returned to the customer.
     * Default is <code>application/octet-stream</code>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The format in which the image frame information is returned to the customer.
     * Default is <code>application/octet-stream</code>.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The format in which the image frame information is returned to the customer.
     * Default is <code>application/octet-stream</code>.</p>
     */
    inline GetImageFrameResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The format in which the image frame information is returned to the customer.
     * Default is <code>application/octet-stream</code>.</p>
     */
    inline GetImageFrameResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The format in which the image frame information is returned to the customer.
     * Default is <code>application/octet-stream</code>.</p>
     */
    inline GetImageFrameResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetImageFrameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetImageFrameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetImageFrameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_imageFrameBlob;

    Aws::String m_contentType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
