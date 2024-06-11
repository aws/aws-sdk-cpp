﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>
#include <aws/rekognition/model/ProtectiveEquipmentSummarizationAttributes.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DetectProtectiveEquipmentRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DetectProtectiveEquipmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectProtectiveEquipment"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The image in which you want to detect PPE on detected persons. The image can
     * be passed as image bytes or you can reference an image stored in an Amazon S3
     * bucket. </p>
     */
    inline const Image& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline DetectProtectiveEquipmentRequest& WithImage(const Image& value) { SetImage(value); return *this;}
    inline DetectProtectiveEquipmentRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of PPE types that you want to summarize.</p>
     */
    inline const ProtectiveEquipmentSummarizationAttributes& GetSummarizationAttributes() const{ return m_summarizationAttributes; }
    inline bool SummarizationAttributesHasBeenSet() const { return m_summarizationAttributesHasBeenSet; }
    inline void SetSummarizationAttributes(const ProtectiveEquipmentSummarizationAttributes& value) { m_summarizationAttributesHasBeenSet = true; m_summarizationAttributes = value; }
    inline void SetSummarizationAttributes(ProtectiveEquipmentSummarizationAttributes&& value) { m_summarizationAttributesHasBeenSet = true; m_summarizationAttributes = std::move(value); }
    inline DetectProtectiveEquipmentRequest& WithSummarizationAttributes(const ProtectiveEquipmentSummarizationAttributes& value) { SetSummarizationAttributes(value); return *this;}
    inline DetectProtectiveEquipmentRequest& WithSummarizationAttributes(ProtectiveEquipmentSummarizationAttributes&& value) { SetSummarizationAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Image m_image;
    bool m_imageHasBeenSet = false;

    ProtectiveEquipmentSummarizationAttributes m_summarizationAttributes;
    bool m_summarizationAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
