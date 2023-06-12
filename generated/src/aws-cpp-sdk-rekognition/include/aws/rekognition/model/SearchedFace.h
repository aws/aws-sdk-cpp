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
   * <p>Provides face metadata such as FaceId, BoundingBox, Confidence of the input
   * face used for search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchedFace">AWS
   * API Reference</a></p>
   */
  class SearchedFace
  {
  public:
    AWS_REKOGNITION_API SearchedFace();
    AWS_REKOGNITION_API SearchedFace(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API SearchedFace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Unique identifier assigned to the face.</p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }

    /**
     * <p> Unique identifier assigned to the face.</p>
     */
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }

    /**
     * <p> Unique identifier assigned to the face.</p>
     */
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }

    /**
     * <p> Unique identifier assigned to the face.</p>
     */
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }

    /**
     * <p> Unique identifier assigned to the face.</p>
     */
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }

    /**
     * <p> Unique identifier assigned to the face.</p>
     */
    inline SearchedFace& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}

    /**
     * <p> Unique identifier assigned to the face.</p>
     */
    inline SearchedFace& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}

    /**
     * <p> Unique identifier assigned to the face.</p>
     */
    inline SearchedFace& WithFaceId(const char* value) { SetFaceId(value); return *this;}

  private:

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
