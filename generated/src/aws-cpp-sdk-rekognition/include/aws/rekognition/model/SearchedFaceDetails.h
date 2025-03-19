/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/FaceDetail.h>
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
   * <p>Contains data regarding the input face used for a search.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchedFaceDetails">AWS
   * API Reference</a></p>
   */
  class SearchedFaceDetails
  {
  public:
    AWS_REKOGNITION_API SearchedFaceDetails() = default;
    AWS_REKOGNITION_API SearchedFaceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API SearchedFaceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FaceDetail& GetFaceDetail() const { return m_faceDetail; }
    inline bool FaceDetailHasBeenSet() const { return m_faceDetailHasBeenSet; }
    template<typename FaceDetailT = FaceDetail>
    void SetFaceDetail(FaceDetailT&& value) { m_faceDetailHasBeenSet = true; m_faceDetail = std::forward<FaceDetailT>(value); }
    template<typename FaceDetailT = FaceDetail>
    SearchedFaceDetails& WithFaceDetail(FaceDetailT&& value) { SetFaceDetail(std::forward<FaceDetailT>(value)); return *this;}
    ///@}
  private:

    FaceDetail m_faceDetail;
    bool m_faceDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
