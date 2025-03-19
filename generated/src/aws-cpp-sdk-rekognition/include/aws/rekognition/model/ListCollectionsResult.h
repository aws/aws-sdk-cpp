/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Rekognition
{
namespace Model
{
  class ListCollectionsResult
  {
  public:
    AWS_REKOGNITION_API ListCollectionsResult() = default;
    AWS_REKOGNITION_API ListCollectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListCollectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of collection IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCollectionIds() const { return m_collectionIds; }
    template<typename CollectionIdsT = Aws::Vector<Aws::String>>
    void SetCollectionIds(CollectionIdsT&& value) { m_collectionIdsHasBeenSet = true; m_collectionIds = std::forward<CollectionIdsT>(value); }
    template<typename CollectionIdsT = Aws::Vector<Aws::String>>
    ListCollectionsResult& WithCollectionIds(CollectionIdsT&& value) { SetCollectionIds(std::forward<CollectionIdsT>(value)); return *this;}
    template<typename CollectionIdsT = Aws::String>
    ListCollectionsResult& AddCollectionIds(CollectionIdsT&& value) { m_collectionIdsHasBeenSet = true; m_collectionIds.emplace_back(std::forward<CollectionIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version numbers of the face detection models associated with the collections
     * in the array <code>CollectionIds</code>. For example, the value of
     * <code>FaceModelVersions[2]</code> is the version number for the face detection
     * model used by the collection in <code>CollectionId[2]</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceModelVersions() const { return m_faceModelVersions; }
    template<typename FaceModelVersionsT = Aws::Vector<Aws::String>>
    void SetFaceModelVersions(FaceModelVersionsT&& value) { m_faceModelVersionsHasBeenSet = true; m_faceModelVersions = std::forward<FaceModelVersionsT>(value); }
    template<typename FaceModelVersionsT = Aws::Vector<Aws::String>>
    ListCollectionsResult& WithFaceModelVersions(FaceModelVersionsT&& value) { SetFaceModelVersions(std::forward<FaceModelVersionsT>(value)); return *this;}
    template<typename FaceModelVersionsT = Aws::String>
    ListCollectionsResult& AddFaceModelVersions(FaceModelVersionsT&& value) { m_faceModelVersionsHasBeenSet = true; m_faceModelVersions.emplace_back(std::forward<FaceModelVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_collectionIds;
    bool m_collectionIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_faceModelVersions;
    bool m_faceModelVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
