/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/FaceDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/UnsearchedFaceReason.h>
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
   * <p>Face details inferred from the image but not used for search. The response
   * attribute contains reasons for why a face wasn't used for Search. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UnsearchedFace">AWS
   * API Reference</a></p>
   */
  class UnsearchedFace
  {
  public:
    AWS_REKOGNITION_API UnsearchedFace();
    AWS_REKOGNITION_API UnsearchedFace(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API UnsearchedFace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const FaceDetail& GetFaceDetails() const{ return m_faceDetails; }

    
    inline bool FaceDetailsHasBeenSet() const { return m_faceDetailsHasBeenSet; }

    
    inline void SetFaceDetails(const FaceDetail& value) { m_faceDetailsHasBeenSet = true; m_faceDetails = value; }

    
    inline void SetFaceDetails(FaceDetail&& value) { m_faceDetailsHasBeenSet = true; m_faceDetails = std::move(value); }

    
    inline UnsearchedFace& WithFaceDetails(const FaceDetail& value) { SetFaceDetails(value); return *this;}

    
    inline UnsearchedFace& WithFaceDetails(FaceDetail&& value) { SetFaceDetails(std::move(value)); return *this;}


    /**
     * <p> Reasons why a face wasn't used for Search. </p>
     */
    inline const Aws::Vector<UnsearchedFaceReason>& GetReasons() const{ return m_reasons; }

    /**
     * <p> Reasons why a face wasn't used for Search. </p>
     */
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }

    /**
     * <p> Reasons why a face wasn't used for Search. </p>
     */
    inline void SetReasons(const Aws::Vector<UnsearchedFaceReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }

    /**
     * <p> Reasons why a face wasn't used for Search. </p>
     */
    inline void SetReasons(Aws::Vector<UnsearchedFaceReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }

    /**
     * <p> Reasons why a face wasn't used for Search. </p>
     */
    inline UnsearchedFace& WithReasons(const Aws::Vector<UnsearchedFaceReason>& value) { SetReasons(value); return *this;}

    /**
     * <p> Reasons why a face wasn't used for Search. </p>
     */
    inline UnsearchedFace& WithReasons(Aws::Vector<UnsearchedFaceReason>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p> Reasons why a face wasn't used for Search. </p>
     */
    inline UnsearchedFace& AddReasons(const UnsearchedFaceReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }

    /**
     * <p> Reasons why a face wasn't used for Search. </p>
     */
    inline UnsearchedFace& AddReasons(UnsearchedFaceReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }

  private:

    FaceDetail m_faceDetails;
    bool m_faceDetailsHasBeenSet = false;

    Aws::Vector<UnsearchedFaceReason> m_reasons;
    bool m_reasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
