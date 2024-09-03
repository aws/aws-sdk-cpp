/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ThumbnailDetails.h>
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
namespace MediaConnect
{
namespace Model
{
  class DescribeFlowSourceThumbnailResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeFlowSourceThumbnailResult();
    AWS_MEDIACONNECT_API DescribeFlowSourceThumbnailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeFlowSourceThumbnailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ThumbnailDetails& GetThumbnailDetails() const{ return m_thumbnailDetails; }
    inline void SetThumbnailDetails(const ThumbnailDetails& value) { m_thumbnailDetails = value; }
    inline void SetThumbnailDetails(ThumbnailDetails&& value) { m_thumbnailDetails = std::move(value); }
    inline DescribeFlowSourceThumbnailResult& WithThumbnailDetails(const ThumbnailDetails& value) { SetThumbnailDetails(value); return *this;}
    inline DescribeFlowSourceThumbnailResult& WithThumbnailDetails(ThumbnailDetails&& value) { SetThumbnailDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFlowSourceThumbnailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFlowSourceThumbnailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFlowSourceThumbnailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ThumbnailDetails m_thumbnailDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
