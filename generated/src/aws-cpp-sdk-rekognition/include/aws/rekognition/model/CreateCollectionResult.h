/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
  class CreateCollectionResult
  {
  public:
    AWS_REKOGNITION_API CreateCollectionResult() = default;
    AWS_REKOGNITION_API CreateCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CreateCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>HTTP status code indicating the result of the operation.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline CreateCollectionResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the collection. You can use this to manage
     * permissions on your resources. </p>
     */
    inline const Aws::String& GetCollectionArn() const { return m_collectionArn; }
    template<typename CollectionArnT = Aws::String>
    void SetCollectionArn(CollectionArnT&& value) { m_collectionArnHasBeenSet = true; m_collectionArn = std::forward<CollectionArnT>(value); }
    template<typename CollectionArnT = Aws::String>
    CreateCollectionResult& WithCollectionArn(CollectionArnT&& value) { SetCollectionArn(std::forward<CollectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version number of the face detection model associated with the collection you
     * are creating.</p>
     */
    inline const Aws::String& GetFaceModelVersion() const { return m_faceModelVersion; }
    template<typename FaceModelVersionT = Aws::String>
    void SetFaceModelVersion(FaceModelVersionT&& value) { m_faceModelVersionHasBeenSet = true; m_faceModelVersion = std::forward<FaceModelVersionT>(value); }
    template<typename FaceModelVersionT = Aws::String>
    CreateCollectionResult& WithFaceModelVersion(FaceModelVersionT&& value) { SetFaceModelVersion(std::forward<FaceModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCollectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_collectionArn;
    bool m_collectionArnHasBeenSet = false;

    Aws::String m_faceModelVersion;
    bool m_faceModelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
