/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/UnsuccessfulFaceDeletionReason.h>
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
   * unsuccessfully deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UnsuccessfulFaceDeletion">AWS
   * API Reference</a></p>
   */
  class UnsuccessfulFaceDeletion
  {
  public:
    AWS_REKOGNITION_API UnsuccessfulFaceDeletion();
    AWS_REKOGNITION_API UnsuccessfulFaceDeletion(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API UnsuccessfulFaceDeletion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier assigned to the face.</p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }
    inline UnsuccessfulFaceDeletion& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}
    inline UnsuccessfulFaceDeletion& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}
    inline UnsuccessfulFaceDeletion& WithFaceId(const char* value) { SetFaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UnsuccessfulFaceDeletion& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UnsuccessfulFaceDeletion& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UnsuccessfulFaceDeletion& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the deletion was unsuccessful. </p>
     */
    inline const Aws::Vector<UnsuccessfulFaceDeletionReason>& GetReasons() const{ return m_reasons; }
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
    inline void SetReasons(const Aws::Vector<UnsuccessfulFaceDeletionReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }
    inline void SetReasons(Aws::Vector<UnsuccessfulFaceDeletionReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }
    inline UnsuccessfulFaceDeletion& WithReasons(const Aws::Vector<UnsuccessfulFaceDeletionReason>& value) { SetReasons(value); return *this;}
    inline UnsuccessfulFaceDeletion& WithReasons(Aws::Vector<UnsuccessfulFaceDeletionReason>&& value) { SetReasons(std::move(value)); return *this;}
    inline UnsuccessfulFaceDeletion& AddReasons(const UnsuccessfulFaceDeletionReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }
    inline UnsuccessfulFaceDeletion& AddReasons(UnsuccessfulFaceDeletionReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<UnsuccessfulFaceDeletionReason> m_reasons;
    bool m_reasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
