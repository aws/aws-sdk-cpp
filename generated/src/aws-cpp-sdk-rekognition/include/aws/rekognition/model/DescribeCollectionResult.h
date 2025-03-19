/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribeCollectionResult
  {
  public:
    AWS_REKOGNITION_API DescribeCollectionResult() = default;
    AWS_REKOGNITION_API DescribeCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of faces that are indexed into the collection. To index faces into
     * a collection, use <a>IndexFaces</a>.</p>
     */
    inline long long GetFaceCount() const { return m_faceCount; }
    inline void SetFaceCount(long long value) { m_faceCountHasBeenSet = true; m_faceCount = value; }
    inline DescribeCollectionResult& WithFaceCount(long long value) { SetFaceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const { return m_faceModelVersion; }
    template<typename FaceModelVersionT = Aws::String>
    void SetFaceModelVersion(FaceModelVersionT&& value) { m_faceModelVersionHasBeenSet = true; m_faceModelVersion = std::forward<FaceModelVersionT>(value); }
    template<typename FaceModelVersionT = Aws::String>
    DescribeCollectionResult& WithFaceModelVersion(FaceModelVersionT&& value) { SetFaceModelVersion(std::forward<FaceModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline const Aws::String& GetCollectionARN() const { return m_collectionARN; }
    template<typename CollectionARNT = Aws::String>
    void SetCollectionARN(CollectionARNT&& value) { m_collectionARNHasBeenSet = true; m_collectionARN = std::forward<CollectionARNT>(value); }
    template<typename CollectionARNT = Aws::String>
    DescribeCollectionResult& WithCollectionARN(CollectionARNT&& value) { SetCollectionARN(std::forward<CollectionARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds since the Unix epoch time until the creation of
     * the collection. The Unix epoch time is 00:00:00 Coordinated Universal Time
     * (UTC), Thursday, 1 January 1970.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    DescribeCollectionResult& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of UserIDs assigned to the specified colleciton.</p>
     */
    inline long long GetUserCount() const { return m_userCount; }
    inline void SetUserCount(long long value) { m_userCountHasBeenSet = true; m_userCount = value; }
    inline DescribeCollectionResult& WithUserCount(long long value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCollectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_faceCount{0};
    bool m_faceCountHasBeenSet = false;

    Aws::String m_faceModelVersion;
    bool m_faceModelVersionHasBeenSet = false;

    Aws::String m_collectionARN;
    bool m_collectionARNHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    long long m_userCount{0};
    bool m_userCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
