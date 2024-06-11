﻿/**
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
    AWS_REKOGNITION_API ListCollectionsResult();
    AWS_REKOGNITION_API ListCollectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListCollectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of collection IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCollectionIds() const{ return m_collectionIds; }
    inline void SetCollectionIds(const Aws::Vector<Aws::String>& value) { m_collectionIds = value; }
    inline void SetCollectionIds(Aws::Vector<Aws::String>&& value) { m_collectionIds = std::move(value); }
    inline ListCollectionsResult& WithCollectionIds(const Aws::Vector<Aws::String>& value) { SetCollectionIds(value); return *this;}
    inline ListCollectionsResult& WithCollectionIds(Aws::Vector<Aws::String>&& value) { SetCollectionIds(std::move(value)); return *this;}
    inline ListCollectionsResult& AddCollectionIds(const Aws::String& value) { m_collectionIds.push_back(value); return *this; }
    inline ListCollectionsResult& AddCollectionIds(Aws::String&& value) { m_collectionIds.push_back(std::move(value)); return *this; }
    inline ListCollectionsResult& AddCollectionIds(const char* value) { m_collectionIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCollectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCollectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCollectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version numbers of the face detection models associated with the collections
     * in the array <code>CollectionIds</code>. For example, the value of
     * <code>FaceModelVersions[2]</code> is the version number for the face detection
     * model used by the collection in <code>CollectionId[2]</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceModelVersions() const{ return m_faceModelVersions; }
    inline void SetFaceModelVersions(const Aws::Vector<Aws::String>& value) { m_faceModelVersions = value; }
    inline void SetFaceModelVersions(Aws::Vector<Aws::String>&& value) { m_faceModelVersions = std::move(value); }
    inline ListCollectionsResult& WithFaceModelVersions(const Aws::Vector<Aws::String>& value) { SetFaceModelVersions(value); return *this;}
    inline ListCollectionsResult& WithFaceModelVersions(Aws::Vector<Aws::String>&& value) { SetFaceModelVersions(std::move(value)); return *this;}
    inline ListCollectionsResult& AddFaceModelVersions(const Aws::String& value) { m_faceModelVersions.push_back(value); return *this; }
    inline ListCollectionsResult& AddFaceModelVersions(Aws::String&& value) { m_faceModelVersions.push_back(std::move(value)); return *this; }
    inline ListCollectionsResult& AddFaceModelVersions(const char* value) { m_faceModelVersions.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCollectionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCollectionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCollectionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_collectionIds;

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_faceModelVersions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
