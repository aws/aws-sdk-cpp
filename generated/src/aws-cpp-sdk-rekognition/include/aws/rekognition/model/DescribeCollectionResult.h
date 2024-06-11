﻿/**
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
    AWS_REKOGNITION_API DescribeCollectionResult();
    AWS_REKOGNITION_API DescribeCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of faces that are indexed into the collection. To index faces into
     * a collection, use <a>IndexFaces</a>.</p>
     */
    inline long long GetFaceCount() const{ return m_faceCount; }
    inline void SetFaceCount(long long value) { m_faceCount = value; }
    inline DescribeCollectionResult& WithFaceCount(long long value) { SetFaceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the face model that's used by the collection for face
     * detection.</p> <p>For more information, see Model versioning in the Amazon
     * Rekognition Developer Guide.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }
    inline DescribeCollectionResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}
    inline DescribeCollectionResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}
    inline DescribeCollectionResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collection.</p>
     */
    inline const Aws::String& GetCollectionARN() const{ return m_collectionARN; }
    inline void SetCollectionARN(const Aws::String& value) { m_collectionARN = value; }
    inline void SetCollectionARN(Aws::String&& value) { m_collectionARN = std::move(value); }
    inline void SetCollectionARN(const char* value) { m_collectionARN.assign(value); }
    inline DescribeCollectionResult& WithCollectionARN(const Aws::String& value) { SetCollectionARN(value); return *this;}
    inline DescribeCollectionResult& WithCollectionARN(Aws::String&& value) { SetCollectionARN(std::move(value)); return *this;}
    inline DescribeCollectionResult& WithCollectionARN(const char* value) { SetCollectionARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds since the Unix epoch time until the creation of
     * the collection. The Unix epoch time is 00:00:00 Coordinated Universal Time
     * (UTC), Thursday, 1 January 1970.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }
    inline DescribeCollectionResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline DescribeCollectionResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of UserIDs assigned to the specified colleciton.</p>
     */
    inline long long GetUserCount() const{ return m_userCount; }
    inline void SetUserCount(long long value) { m_userCount = value; }
    inline DescribeCollectionResult& WithUserCount(long long value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCollectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCollectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCollectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    long long m_faceCount;

    Aws::String m_faceModelVersion;

    Aws::String m_collectionARN;

    Aws::Utils::DateTime m_creationTimestamp;

    long long m_userCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
