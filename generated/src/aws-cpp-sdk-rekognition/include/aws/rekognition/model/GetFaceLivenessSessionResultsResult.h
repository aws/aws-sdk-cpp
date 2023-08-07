/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/LivenessSessionStatus.h>
#include <aws/rekognition/model/AuditImage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetFaceLivenessSessionResultsResult
  {
  public:
    AWS_REKOGNITION_API GetFaceLivenessSessionResultsResult();
    AWS_REKOGNITION_API GetFaceLivenessSessionResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetFaceLivenessSessionResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The sessionId for which this request was called.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The sessionId for which this request was called.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The sessionId for which this request was called.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The sessionId for which this request was called.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The sessionId for which this request was called.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The sessionId for which this request was called.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The sessionId for which this request was called.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>Represents a status corresponding to the state of the session. Possible
     * statuses are: CREATED, IN_PROGRESS, SUCCEEDED, FAILED, EXPIRED.</p>
     */
    inline const LivenessSessionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Represents a status corresponding to the state of the session. Possible
     * statuses are: CREATED, IN_PROGRESS, SUCCEEDED, FAILED, EXPIRED.</p>
     */
    inline void SetStatus(const LivenessSessionStatus& value) { m_status = value; }

    /**
     * <p>Represents a status corresponding to the state of the session. Possible
     * statuses are: CREATED, IN_PROGRESS, SUCCEEDED, FAILED, EXPIRED.</p>
     */
    inline void SetStatus(LivenessSessionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Represents a status corresponding to the state of the session. Possible
     * statuses are: CREATED, IN_PROGRESS, SUCCEEDED, FAILED, EXPIRED.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithStatus(const LivenessSessionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Represents a status corresponding to the state of the session. Possible
     * statuses are: CREATED, IN_PROGRESS, SUCCEEDED, FAILED, EXPIRED.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithStatus(LivenessSessionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Probabalistic confidence score for if the person in the given video was live,
     * represented as a float value between 0 to 100.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Probabalistic confidence score for if the person in the given video was live,
     * represented as a float value between 0 to 100.</p>
     */
    inline void SetConfidence(double value) { m_confidence = value; }

    /**
     * <p>Probabalistic confidence score for if the person in the given video was live,
     * represented as a float value between 0 to 100.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>A high-quality image from the Face Liveness video that can be used for face
     * comparison or search. It includes a bounding box of the face and the
     * Base64-encoded bytes that return an image. If the CreateFaceLivenessSession
     * request included an OutputConfig argument, the image will be uploaded to an
     * S3Object specified in the output configuration. In case the reference image is
     * not returned, it's recommended to retry the Liveness check.</p>
     */
    inline const AuditImage& GetReferenceImage() const{ return m_referenceImage; }

    /**
     * <p>A high-quality image from the Face Liveness video that can be used for face
     * comparison or search. It includes a bounding box of the face and the
     * Base64-encoded bytes that return an image. If the CreateFaceLivenessSession
     * request included an OutputConfig argument, the image will be uploaded to an
     * S3Object specified in the output configuration. In case the reference image is
     * not returned, it's recommended to retry the Liveness check.</p>
     */
    inline void SetReferenceImage(const AuditImage& value) { m_referenceImage = value; }

    /**
     * <p>A high-quality image from the Face Liveness video that can be used for face
     * comparison or search. It includes a bounding box of the face and the
     * Base64-encoded bytes that return an image. If the CreateFaceLivenessSession
     * request included an OutputConfig argument, the image will be uploaded to an
     * S3Object specified in the output configuration. In case the reference image is
     * not returned, it's recommended to retry the Liveness check.</p>
     */
    inline void SetReferenceImage(AuditImage&& value) { m_referenceImage = std::move(value); }

    /**
     * <p>A high-quality image from the Face Liveness video that can be used for face
     * comparison or search. It includes a bounding box of the face and the
     * Base64-encoded bytes that return an image. If the CreateFaceLivenessSession
     * request included an OutputConfig argument, the image will be uploaded to an
     * S3Object specified in the output configuration. In case the reference image is
     * not returned, it's recommended to retry the Liveness check.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithReferenceImage(const AuditImage& value) { SetReferenceImage(value); return *this;}

    /**
     * <p>A high-quality image from the Face Liveness video that can be used for face
     * comparison or search. It includes a bounding box of the face and the
     * Base64-encoded bytes that return an image. If the CreateFaceLivenessSession
     * request included an OutputConfig argument, the image will be uploaded to an
     * S3Object specified in the output configuration. In case the reference image is
     * not returned, it's recommended to retry the Liveness check.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithReferenceImage(AuditImage&& value) { SetReferenceImage(std::move(value)); return *this;}


    /**
     * <p>A set of images from the Face Liveness video that can be used for audit
     * purposes. It includes a bounding box of the face and the Base64-encoded bytes
     * that return an image. If the CreateFaceLivenessSession request included an
     * OutputConfig argument, the image will be uploaded to an S3Object specified in
     * the output configuration. If no Amazon S3 bucket is defined, raw bytes are sent
     * instead.</p>
     */
    inline const Aws::Vector<AuditImage>& GetAuditImages() const{ return m_auditImages; }

    /**
     * <p>A set of images from the Face Liveness video that can be used for audit
     * purposes. It includes a bounding box of the face and the Base64-encoded bytes
     * that return an image. If the CreateFaceLivenessSession request included an
     * OutputConfig argument, the image will be uploaded to an S3Object specified in
     * the output configuration. If no Amazon S3 bucket is defined, raw bytes are sent
     * instead.</p>
     */
    inline void SetAuditImages(const Aws::Vector<AuditImage>& value) { m_auditImages = value; }

    /**
     * <p>A set of images from the Face Liveness video that can be used for audit
     * purposes. It includes a bounding box of the face and the Base64-encoded bytes
     * that return an image. If the CreateFaceLivenessSession request included an
     * OutputConfig argument, the image will be uploaded to an S3Object specified in
     * the output configuration. If no Amazon S3 bucket is defined, raw bytes are sent
     * instead.</p>
     */
    inline void SetAuditImages(Aws::Vector<AuditImage>&& value) { m_auditImages = std::move(value); }

    /**
     * <p>A set of images from the Face Liveness video that can be used for audit
     * purposes. It includes a bounding box of the face and the Base64-encoded bytes
     * that return an image. If the CreateFaceLivenessSession request included an
     * OutputConfig argument, the image will be uploaded to an S3Object specified in
     * the output configuration. If no Amazon S3 bucket is defined, raw bytes are sent
     * instead.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithAuditImages(const Aws::Vector<AuditImage>& value) { SetAuditImages(value); return *this;}

    /**
     * <p>A set of images from the Face Liveness video that can be used for audit
     * purposes. It includes a bounding box of the face and the Base64-encoded bytes
     * that return an image. If the CreateFaceLivenessSession request included an
     * OutputConfig argument, the image will be uploaded to an S3Object specified in
     * the output configuration. If no Amazon S3 bucket is defined, raw bytes are sent
     * instead.</p>
     */
    inline GetFaceLivenessSessionResultsResult& WithAuditImages(Aws::Vector<AuditImage>&& value) { SetAuditImages(std::move(value)); return *this;}

    /**
     * <p>A set of images from the Face Liveness video that can be used for audit
     * purposes. It includes a bounding box of the face and the Base64-encoded bytes
     * that return an image. If the CreateFaceLivenessSession request included an
     * OutputConfig argument, the image will be uploaded to an S3Object specified in
     * the output configuration. If no Amazon S3 bucket is defined, raw bytes are sent
     * instead.</p>
     */
    inline GetFaceLivenessSessionResultsResult& AddAuditImages(const AuditImage& value) { m_auditImages.push_back(value); return *this; }

    /**
     * <p>A set of images from the Face Liveness video that can be used for audit
     * purposes. It includes a bounding box of the face and the Base64-encoded bytes
     * that return an image. If the CreateFaceLivenessSession request included an
     * OutputConfig argument, the image will be uploaded to an S3Object specified in
     * the output configuration. If no Amazon S3 bucket is defined, raw bytes are sent
     * instead.</p>
     */
    inline GetFaceLivenessSessionResultsResult& AddAuditImages(AuditImage&& value) { m_auditImages.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFaceLivenessSessionResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFaceLivenessSessionResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFaceLivenessSessionResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_sessionId;

    LivenessSessionStatus m_status;

    double m_confidence;

    AuditImage m_referenceImage;

    Aws::Vector<AuditImage> m_auditImages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
