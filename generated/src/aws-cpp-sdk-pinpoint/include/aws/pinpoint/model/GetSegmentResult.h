/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SegmentResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetSegmentResult
  {
  public:
    AWS_PINPOINT_API GetSegmentResult();
    AWS_PINPOINT_API GetSegmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSegmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SegmentResponse& GetSegmentResponse() const{ return m_segmentResponse; }

    
    inline void SetSegmentResponse(const SegmentResponse& value) { m_segmentResponse = value; }

    
    inline void SetSegmentResponse(SegmentResponse&& value) { m_segmentResponse = std::move(value); }

    
    inline GetSegmentResult& WithSegmentResponse(const SegmentResponse& value) { SetSegmentResponse(value); return *this;}

    
    inline GetSegmentResult& WithSegmentResponse(SegmentResponse&& value) { SetSegmentResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSegmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSegmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSegmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SegmentResponse m_segmentResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
