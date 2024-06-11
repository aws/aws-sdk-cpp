﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>
#include <aws/rekognition/model/DetectTextFilters.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DetectTextRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DetectTextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectText"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The input image as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Rekognition operations, you can't pass image bytes.
     * </p> <p>If you are using an AWS SDK to call Amazon Rekognition, you might not
     * need to base64-encode image bytes passed using the <code>Bytes</code> field. For
     * more information, see Images in the Amazon Rekognition developer guide.</p>
     */
    inline const Image& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline DetectTextRequest& WithImage(const Image& value) { SetImage(value); return *this;}
    inline DetectTextRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional parameters that let you set the criteria that the text must meet to
     * be included in your response.</p>
     */
    inline const DetectTextFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const DetectTextFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(DetectTextFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DetectTextRequest& WithFilters(const DetectTextFilters& value) { SetFilters(value); return *this;}
    inline DetectTextRequest& WithFilters(DetectTextFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}
  private:

    Image m_image;
    bool m_imageHasBeenSet = false;

    DetectTextFilters m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
