/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/AnnotationStoreVersionItem.h>
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
  class ListAnnotationStoreVersionsResult
  {
  public:
    AWS_OMICS_API ListAnnotationStoreVersionsResult() = default;
    AWS_OMICS_API ListAnnotationStoreVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListAnnotationStoreVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Lists all versions of an annotation store. </p>
     */
    inline const Aws::Vector<AnnotationStoreVersionItem>& GetAnnotationStoreVersions() const { return m_annotationStoreVersions; }
    template<typename AnnotationStoreVersionsT = Aws::Vector<AnnotationStoreVersionItem>>
    void SetAnnotationStoreVersions(AnnotationStoreVersionsT&& value) { m_annotationStoreVersionsHasBeenSet = true; m_annotationStoreVersions = std::forward<AnnotationStoreVersionsT>(value); }
    template<typename AnnotationStoreVersionsT = Aws::Vector<AnnotationStoreVersionItem>>
    ListAnnotationStoreVersionsResult& WithAnnotationStoreVersions(AnnotationStoreVersionsT&& value) { SetAnnotationStoreVersions(std::forward<AnnotationStoreVersionsT>(value)); return *this;}
    template<typename AnnotationStoreVersionsT = AnnotationStoreVersionItem>
    ListAnnotationStoreVersionsResult& AddAnnotationStoreVersions(AnnotationStoreVersionsT&& value) { m_annotationStoreVersionsHasBeenSet = true; m_annotationStoreVersions.emplace_back(std::forward<AnnotationStoreVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the pagination token from a previous request to retrieve the next
     * page of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnnotationStoreVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnnotationStoreVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnnotationStoreVersionItem> m_annotationStoreVersions;
    bool m_annotationStoreVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
