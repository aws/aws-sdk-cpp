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
  class CompleteMultipartReadSetUploadResult
  {
  public:
    AWS_OMICS_API CompleteMultipartReadSetUploadResult();
    AWS_OMICS_API CompleteMultipartReadSetUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CompleteMultipartReadSetUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The read set ID created for an uploaded read set. </p>
     */
    inline const Aws::String& GetReadSetId() const{ return m_readSetId; }

    /**
     * <p> The read set ID created for an uploaded read set. </p>
     */
    inline void SetReadSetId(const Aws::String& value) { m_readSetId = value; }

    /**
     * <p> The read set ID created for an uploaded read set. </p>
     */
    inline void SetReadSetId(Aws::String&& value) { m_readSetId = std::move(value); }

    /**
     * <p> The read set ID created for an uploaded read set. </p>
     */
    inline void SetReadSetId(const char* value) { m_readSetId.assign(value); }

    /**
     * <p> The read set ID created for an uploaded read set. </p>
     */
    inline CompleteMultipartReadSetUploadResult& WithReadSetId(const Aws::String& value) { SetReadSetId(value); return *this;}

    /**
     * <p> The read set ID created for an uploaded read set. </p>
     */
    inline CompleteMultipartReadSetUploadResult& WithReadSetId(Aws::String&& value) { SetReadSetId(std::move(value)); return *this;}

    /**
     * <p> The read set ID created for an uploaded read set. </p>
     */
    inline CompleteMultipartReadSetUploadResult& WithReadSetId(const char* value) { SetReadSetId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CompleteMultipartReadSetUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CompleteMultipartReadSetUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CompleteMultipartReadSetUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_readSetId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
