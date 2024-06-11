﻿/**
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
   * <p>Provides face metadata for the faces that are associated to a specific
   * UserID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/AssociatedFace">AWS
   * API Reference</a></p>
   */
  class AssociatedFace
  {
  public:
    AWS_REKOGNITION_API AssociatedFace();
    AWS_REKOGNITION_API AssociatedFace(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API AssociatedFace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier assigned to the face.</p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }
    inline AssociatedFace& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}
    inline AssociatedFace& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}
    inline AssociatedFace& WithFaceId(const char* value) { SetFaceId(value); return *this;}
    ///@}
  private:

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
