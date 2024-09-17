/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamingImage.h>
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
namespace NimbleStudio
{
namespace Model
{
  class ListStreamingImagesResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListStreamingImagesResult();
    AWS_NIMBLESTUDIO_API ListStreamingImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListStreamingImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStreamingImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStreamingImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStreamingImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of streaming images.</p>
     */
    inline const Aws::Vector<StreamingImage>& GetStreamingImages() const{ return m_streamingImages; }
    inline void SetStreamingImages(const Aws::Vector<StreamingImage>& value) { m_streamingImages = value; }
    inline void SetStreamingImages(Aws::Vector<StreamingImage>&& value) { m_streamingImages = std::move(value); }
    inline ListStreamingImagesResult& WithStreamingImages(const Aws::Vector<StreamingImage>& value) { SetStreamingImages(value); return *this;}
    inline ListStreamingImagesResult& WithStreamingImages(Aws::Vector<StreamingImage>&& value) { SetStreamingImages(std::move(value)); return *this;}
    inline ListStreamingImagesResult& AddStreamingImages(const StreamingImage& value) { m_streamingImages.push_back(value); return *this; }
    inline ListStreamingImagesResult& AddStreamingImages(StreamingImage&& value) { m_streamingImages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStreamingImagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStreamingImagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStreamingImagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<StreamingImage> m_streamingImages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
