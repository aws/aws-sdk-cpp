/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SegmentsResponse.h>
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
  class GetSegmentsResult
  {
  public:
    AWS_PINPOINT_API GetSegmentsResult();
    AWS_PINPOINT_API GetSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SegmentsResponse& GetSegmentsResponse() const{ return m_segmentsResponse; }

    
    inline void SetSegmentsResponse(const SegmentsResponse& value) { m_segmentsResponse = value; }

    
    inline void SetSegmentsResponse(SegmentsResponse&& value) { m_segmentsResponse = std::move(value); }

    
    inline GetSegmentsResult& WithSegmentsResponse(const SegmentsResponse& value) { SetSegmentsResponse(value); return *this;}

    
    inline GetSegmentsResult& WithSegmentsResponse(SegmentsResponse&& value) { SetSegmentsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSegmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSegmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSegmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SegmentsResponse m_segmentsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
