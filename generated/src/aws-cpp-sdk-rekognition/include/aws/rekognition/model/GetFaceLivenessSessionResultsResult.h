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
#include <aws/rekognition/model/Challenge.h>
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
    AWS_REKOGNITION_API GetFaceLivenessSessionResultsResult() = default;
    AWS_REKOGNITION_API GetFaceLivenessSessionResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetFaceLivenessSessionResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sessionId for which this request was called.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetFaceLivenessSessionResultsResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a status corresponding to the state of the session. Possible
     * statuses are: CREATED, IN_PROGRESS, SUCCEEDED, FAILED, EXPIRED.</p>
     */
    inline LivenessSessionStatus GetStatus() const { return m_status; }
    inline void SetStatus(LivenessSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetFaceLivenessSessionResultsResult& WithStatus(LivenessSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Probabalistic confidence score for if the person in the given video was live,
     * represented as a float value between 0 to 100.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline GetFaceLivenessSessionResultsResult& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A high-quality image from the Face Liveness video that can be used for face
     * comparison or search. It includes a bounding box of the face and the
     * Base64-encoded bytes that return an image. If the CreateFaceLivenessSession
     * request included an OutputConfig argument, the image will be uploaded to an
     * S3Object specified in the output configuration. In case the reference image is
     * not returned, it's recommended to retry the Liveness check.</p>
     */
    inline const AuditImage& GetReferenceImage() const { return m_referenceImage; }
    template<typename ReferenceImageT = AuditImage>
    void SetReferenceImage(ReferenceImageT&& value) { m_referenceImageHasBeenSet = true; m_referenceImage = std::forward<ReferenceImageT>(value); }
    template<typename ReferenceImageT = AuditImage>
    GetFaceLivenessSessionResultsResult& WithReferenceImage(ReferenceImageT&& value) { SetReferenceImage(std::forward<ReferenceImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of images from the Face Liveness video that can be used for audit
     * purposes. It includes a bounding box of the face and the Base64-encoded bytes
     * that return an image. If the CreateFaceLivenessSession request included an
     * OutputConfig argument, the image will be uploaded to an S3Object specified in
     * the output configuration. If no Amazon S3 bucket is defined, raw bytes are sent
     * instead.</p>
     */
    inline const Aws::Vector<AuditImage>& GetAuditImages() const { return m_auditImages; }
    template<typename AuditImagesT = Aws::Vector<AuditImage>>
    void SetAuditImages(AuditImagesT&& value) { m_auditImagesHasBeenSet = true; m_auditImages = std::forward<AuditImagesT>(value); }
    template<typename AuditImagesT = Aws::Vector<AuditImage>>
    GetFaceLivenessSessionResultsResult& WithAuditImages(AuditImagesT&& value) { SetAuditImages(std::forward<AuditImagesT>(value)); return *this;}
    template<typename AuditImagesT = AuditImage>
    GetFaceLivenessSessionResultsResult& AddAuditImages(AuditImagesT&& value) { m_auditImagesHasBeenSet = true; m_auditImages.emplace_back(std::forward<AuditImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information regarding the challenge type used for the Face Liveness
     * check.</p>
     */
    inline const Challenge& GetChallenge() const { return m_challenge; }
    template<typename ChallengeT = Challenge>
    void SetChallenge(ChallengeT&& value) { m_challengeHasBeenSet = true; m_challenge = std::forward<ChallengeT>(value); }
    template<typename ChallengeT = Challenge>
    GetFaceLivenessSessionResultsResult& WithChallenge(ChallengeT&& value) { SetChallenge(std::forward<ChallengeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFaceLivenessSessionResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    LivenessSessionStatus m_status{LivenessSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    AuditImage m_referenceImage;
    bool m_referenceImageHasBeenSet = false;

    Aws::Vector<AuditImage> m_auditImages;
    bool m_auditImagesHasBeenSet = false;

    Challenge m_challenge;
    bool m_challengeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
