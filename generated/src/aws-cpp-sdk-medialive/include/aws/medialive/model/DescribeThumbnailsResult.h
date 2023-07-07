/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ThumbnailDetail.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeThumbnailsResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeThumbnailsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeThumbnailsResult
  {
  public:
    AWS_MEDIALIVE_API DescribeThumbnailsResult();
    AWS_MEDIALIVE_API DescribeThumbnailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeThumbnailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<ThumbnailDetail>& GetThumbnailDetails() const{ return m_thumbnailDetails; }

    
    inline void SetThumbnailDetails(const Aws::Vector<ThumbnailDetail>& value) { m_thumbnailDetails = value; }

    
    inline void SetThumbnailDetails(Aws::Vector<ThumbnailDetail>&& value) { m_thumbnailDetails = std::move(value); }

    
    inline DescribeThumbnailsResult& WithThumbnailDetails(const Aws::Vector<ThumbnailDetail>& value) { SetThumbnailDetails(value); return *this;}

    
    inline DescribeThumbnailsResult& WithThumbnailDetails(Aws::Vector<ThumbnailDetail>&& value) { SetThumbnailDetails(std::move(value)); return *this;}

    
    inline DescribeThumbnailsResult& AddThumbnailDetails(const ThumbnailDetail& value) { m_thumbnailDetails.push_back(value); return *this; }

    
    inline DescribeThumbnailsResult& AddThumbnailDetails(ThumbnailDetail&& value) { m_thumbnailDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeThumbnailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeThumbnailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeThumbnailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ThumbnailDetail> m_thumbnailDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
