/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/ImageSetsMetadataSummary.h>
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
namespace MedicalImaging
{
namespace Model
{
  class SearchImageSetsResult
  {
  public:
    AWS_MEDICALIMAGING_API SearchImageSetsResult();
    AWS_MEDICALIMAGING_API SearchImageSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API SearchImageSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The model containing the image set results.</p>
     */
    inline const Aws::Vector<ImageSetsMetadataSummary>& GetImageSetsMetadataSummaries() const{ return m_imageSetsMetadataSummaries; }

    /**
     * <p>The model containing the image set results.</p>
     */
    inline void SetImageSetsMetadataSummaries(const Aws::Vector<ImageSetsMetadataSummary>& value) { m_imageSetsMetadataSummaries = value; }

    /**
     * <p>The model containing the image set results.</p>
     */
    inline void SetImageSetsMetadataSummaries(Aws::Vector<ImageSetsMetadataSummary>&& value) { m_imageSetsMetadataSummaries = std::move(value); }

    /**
     * <p>The model containing the image set results.</p>
     */
    inline SearchImageSetsResult& WithImageSetsMetadataSummaries(const Aws::Vector<ImageSetsMetadataSummary>& value) { SetImageSetsMetadataSummaries(value); return *this;}

    /**
     * <p>The model containing the image set results.</p>
     */
    inline SearchImageSetsResult& WithImageSetsMetadataSummaries(Aws::Vector<ImageSetsMetadataSummary>&& value) { SetImageSetsMetadataSummaries(std::move(value)); return *this;}

    /**
     * <p>The model containing the image set results.</p>
     */
    inline SearchImageSetsResult& AddImageSetsMetadataSummaries(const ImageSetsMetadataSummary& value) { m_imageSetsMetadataSummaries.push_back(value); return *this; }

    /**
     * <p>The model containing the image set results.</p>
     */
    inline SearchImageSetsResult& AddImageSetsMetadataSummaries(ImageSetsMetadataSummary&& value) { m_imageSetsMetadataSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for pagination results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for pagination results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for pagination results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for pagination results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for pagination results.</p>
     */
    inline SearchImageSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for pagination results.</p>
     */
    inline SearchImageSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for pagination results.</p>
     */
    inline SearchImageSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchImageSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchImageSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchImageSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ImageSetsMetadataSummary> m_imageSetsMetadataSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
