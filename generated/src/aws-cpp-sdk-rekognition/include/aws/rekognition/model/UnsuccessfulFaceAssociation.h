/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/UnsuccessfulFaceAssociationReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Contains metadata like FaceId, UserID, and Reasons, for a face that was
   * unsuccessfully associated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UnsuccessfulFaceAssociation">AWS
   * API Reference</a></p>
   */
  class UnsuccessfulFaceAssociation
  {
  public:
    AWS_REKOGNITION_API UnsuccessfulFaceAssociation();
    AWS_REKOGNITION_API UnsuccessfulFaceAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API UnsuccessfulFaceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }

    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }

    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }

    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }

    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }

    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline UnsuccessfulFaceAssociation& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}

    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline UnsuccessfulFaceAssociation& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline UnsuccessfulFaceAssociation& WithFaceId(const char* value) { SetFaceId(value); return *this;}


    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline UnsuccessfulFaceAssociation& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline UnsuccessfulFaceAssociation& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline UnsuccessfulFaceAssociation& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>Match confidence with the UserID, provides information regarding if a face
     * association was unsuccessful because it didn't meet UserMatchThreshold.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Match confidence with the UserID, provides information regarding if a face
     * association was unsuccessful because it didn't meet UserMatchThreshold.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Match confidence with the UserID, provides information regarding if a face
     * association was unsuccessful because it didn't meet UserMatchThreshold.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Match confidence with the UserID, provides information regarding if a face
     * association was unsuccessful because it didn't meet UserMatchThreshold.</p>
     */
    inline UnsuccessfulFaceAssociation& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p> The reason why the association was unsuccessful. </p>
     */
    inline const Aws::Vector<UnsuccessfulFaceAssociationReason>& GetReasons() const{ return m_reasons; }

    /**
     * <p> The reason why the association was unsuccessful. </p>
     */
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }

    /**
     * <p> The reason why the association was unsuccessful. </p>
     */
    inline void SetReasons(const Aws::Vector<UnsuccessfulFaceAssociationReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }

    /**
     * <p> The reason why the association was unsuccessful. </p>
     */
    inline void SetReasons(Aws::Vector<UnsuccessfulFaceAssociationReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }

    /**
     * <p> The reason why the association was unsuccessful. </p>
     */
    inline UnsuccessfulFaceAssociation& WithReasons(const Aws::Vector<UnsuccessfulFaceAssociationReason>& value) { SetReasons(value); return *this;}

    /**
     * <p> The reason why the association was unsuccessful. </p>
     */
    inline UnsuccessfulFaceAssociation& WithReasons(Aws::Vector<UnsuccessfulFaceAssociationReason>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p> The reason why the association was unsuccessful. </p>
     */
    inline UnsuccessfulFaceAssociation& AddReasons(const UnsuccessfulFaceAssociationReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }

    /**
     * <p> The reason why the association was unsuccessful. </p>
     */
    inline UnsuccessfulFaceAssociation& AddReasons(UnsuccessfulFaceAssociationReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<UnsuccessfulFaceAssociationReason> m_reasons;
    bool m_reasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
