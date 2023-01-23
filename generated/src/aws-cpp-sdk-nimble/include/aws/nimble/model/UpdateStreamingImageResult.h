/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
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
  class UpdateStreamingImageResult
  {
  public:
    AWS_NIMBLESTUDIO_API UpdateStreamingImageResult();
    AWS_NIMBLESTUDIO_API UpdateStreamingImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API UpdateStreamingImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const StreamingImage& GetStreamingImage() const{ return m_streamingImage; }

    
    inline void SetStreamingImage(const StreamingImage& value) { m_streamingImage = value; }

    
    inline void SetStreamingImage(StreamingImage&& value) { m_streamingImage = std::move(value); }

    
    inline UpdateStreamingImageResult& WithStreamingImage(const StreamingImage& value) { SetStreamingImage(value); return *this;}

    
    inline UpdateStreamingImageResult& WithStreamingImage(StreamingImage&& value) { SetStreamingImage(std::move(value)); return *this;}

  private:

    StreamingImage m_streamingImage;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
