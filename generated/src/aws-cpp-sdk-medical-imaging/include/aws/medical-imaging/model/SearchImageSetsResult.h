/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medical-imaging/model/Sort.h>
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
    AWS_MEDICALIMAGING_API SearchImageSetsResult() = default;
    AWS_MEDICALIMAGING_API SearchImageSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API SearchImageSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model containing the image set results.</p>
     */
    inline const Aws::Vector<ImageSetsMetadataSummary>& GetImageSetsMetadataSummaries() const { return m_imageSetsMetadataSummaries; }
    template<typename ImageSetsMetadataSummariesT = Aws::Vector<ImageSetsMetadataSummary>>
    void SetImageSetsMetadataSummaries(ImageSetsMetadataSummariesT&& value) { m_imageSetsMetadataSummariesHasBeenSet = true; m_imageSetsMetadataSummaries = std::forward<ImageSetsMetadataSummariesT>(value); }
    template<typename ImageSetsMetadataSummariesT = Aws::Vector<ImageSetsMetadataSummary>>
    SearchImageSetsResult& WithImageSetsMetadataSummaries(ImageSetsMetadataSummariesT&& value) { SetImageSetsMetadataSummaries(std::forward<ImageSetsMetadataSummariesT>(value)); return *this;}
    template<typename ImageSetsMetadataSummariesT = ImageSetsMetadataSummary>
    SearchImageSetsResult& AddImageSetsMetadataSummaries(ImageSetsMetadataSummariesT&& value) { m_imageSetsMetadataSummariesHasBeenSet = true; m_imageSetsMetadataSummaries.emplace_back(std::forward<ImageSetsMetadataSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The sort order for image set search results.</p>
     */
    inline const Sort& GetSort() const { return m_sort; }
    template<typename SortT = Sort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = Sort>
    SearchImageSetsResult& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for pagination results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchImageSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchImageSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImageSetsMetadataSummary> m_imageSetsMetadataSummaries;
    bool m_imageSetsMetadataSummariesHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
