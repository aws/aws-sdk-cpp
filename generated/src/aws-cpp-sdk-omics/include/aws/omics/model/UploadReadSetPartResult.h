/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Omics
{
namespace Model
{
  class UploadReadSetPartResult
  {
  public:
    AWS_OMICS_API UploadReadSetPartResult();
    AWS_OMICS_API UploadReadSetPartResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API UploadReadSetPartResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An identifier used to confirm that parts are being added to the intended
     * upload. </p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p> An identifier used to confirm that parts are being added to the intended
     * upload. </p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p> An identifier used to confirm that parts are being added to the intended
     * upload. </p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p> An identifier used to confirm that parts are being added to the intended
     * upload. </p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p> An identifier used to confirm that parts are being added to the intended
     * upload. </p>
     */
    inline UploadReadSetPartResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p> An identifier used to confirm that parts are being added to the intended
     * upload. </p>
     */
    inline UploadReadSetPartResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p> An identifier used to confirm that parts are being added to the intended
     * upload. </p>
     */
    inline UploadReadSetPartResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UploadReadSetPartResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UploadReadSetPartResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UploadReadSetPartResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_checksum;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
