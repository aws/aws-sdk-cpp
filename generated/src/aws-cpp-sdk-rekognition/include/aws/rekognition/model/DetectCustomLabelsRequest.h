/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/Image.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DetectCustomLabelsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DetectCustomLabelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectCustomLabels"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline const Aws::String& GetProjectVersionArn() const{ return m_projectVersionArn; }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline bool ProjectVersionArnHasBeenSet() const { return m_projectVersionArnHasBeenSet; }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline void SetProjectVersionArn(const Aws::String& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = value; }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline void SetProjectVersionArn(Aws::String&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::move(value); }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline void SetProjectVersionArn(const char* value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn.assign(value); }

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline DetectCustomLabelsRequest& WithProjectVersionArn(const Aws::String& value) { SetProjectVersionArn(value); return *this;}

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline DetectCustomLabelsRequest& WithProjectVersionArn(Aws::String&& value) { SetProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model version that you want to use.</p>
     */
    inline DetectCustomLabelsRequest& WithProjectVersionArn(const char* value) { SetProjectVersionArn(value); return *this;}


    
    inline const Image& GetImage() const{ return m_image; }

    
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    
    inline DetectCustomLabelsRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    
    inline DetectCustomLabelsRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}


    /**
     * <p>Maximum number of results you want the service to return in the response. The
     * service returns the specified number of highest confidence labels ranked from
     * highest confidence to lowest.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results you want the service to return in the response. The
     * service returns the specified number of highest confidence labels ranked from
     * highest confidence to lowest.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results you want the service to return in the response. The
     * service returns the specified number of highest confidence labels ranked from
     * highest confidence to lowest.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results you want the service to return in the response. The
     * service returns the specified number of highest confidence labels ranked from
     * highest confidence to lowest.</p>
     */
    inline DetectCustomLabelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies the minimum confidence level for the labels to return.
     * <code>DetectCustomLabels</code> doesn't return any labels with a confidence
     * value that's lower than this specified value. If you specify a value of 0,
     * <code>DetectCustomLabels</code> returns all labels, regardless of the assumed
     * threshold applied to each label. If you don't specify a value for
     * <code>MinConfidence</code>, <code>DetectCustomLabels</code> returns labels based
     * on the assumed threshold of each label.</p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return.
     * <code>DetectCustomLabels</code> doesn't return any labels with a confidence
     * value that's lower than this specified value. If you specify a value of 0,
     * <code>DetectCustomLabels</code> returns all labels, regardless of the assumed
     * threshold applied to each label. If you don't specify a value for
     * <code>MinConfidence</code>, <code>DetectCustomLabels</code> returns labels based
     * on the assumed threshold of each label.</p>
     */
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return.
     * <code>DetectCustomLabels</code> doesn't return any labels with a confidence
     * value that's lower than this specified value. If you specify a value of 0,
     * <code>DetectCustomLabels</code> returns all labels, regardless of the assumed
     * threshold applied to each label. If you don't specify a value for
     * <code>MinConfidence</code>, <code>DetectCustomLabels</code> returns labels based
     * on the assumed threshold of each label.</p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p>Specifies the minimum confidence level for the labels to return.
     * <code>DetectCustomLabels</code> doesn't return any labels with a confidence
     * value that's lower than this specified value. If you specify a value of 0,
     * <code>DetectCustomLabels</code> returns all labels, regardless of the assumed
     * threshold applied to each label. If you don't specify a value for
     * <code>MinConfidence</code>, <code>DetectCustomLabels</code> returns labels based
     * on the assumed threshold of each label.</p>
     */
    inline DetectCustomLabelsRequest& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}

  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet = false;

    Image m_image;
    bool m_imageHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    double m_minConfidence;
    bool m_minConfidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
