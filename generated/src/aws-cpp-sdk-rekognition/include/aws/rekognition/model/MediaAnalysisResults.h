/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/S3Object.h>
#include <aws/rekognition/model/MediaAnalysisModelVersions.h>
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
   * <p>Contains the results for a media analysis job created with
   * StartMediaAnalysisJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MediaAnalysisResults">AWS
   * API Reference</a></p>
   */
  class MediaAnalysisResults
  {
  public:
    AWS_REKOGNITION_API MediaAnalysisResults();
    AWS_REKOGNITION_API MediaAnalysisResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    
    inline MediaAnalysisResults& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    
    inline MediaAnalysisResults& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}


    /**
     * <p>Information about the model versions for the features selected in a given
     * job.</p>
     */
    inline const MediaAnalysisModelVersions& GetModelVersions() const{ return m_modelVersions; }

    /**
     * <p>Information about the model versions for the features selected in a given
     * job.</p>
     */
    inline bool ModelVersionsHasBeenSet() const { return m_modelVersionsHasBeenSet; }

    /**
     * <p>Information about the model versions for the features selected in a given
     * job.</p>
     */
    inline void SetModelVersions(const MediaAnalysisModelVersions& value) { m_modelVersionsHasBeenSet = true; m_modelVersions = value; }

    /**
     * <p>Information about the model versions for the features selected in a given
     * job.</p>
     */
    inline void SetModelVersions(MediaAnalysisModelVersions&& value) { m_modelVersionsHasBeenSet = true; m_modelVersions = std::move(value); }

    /**
     * <p>Information about the model versions for the features selected in a given
     * job.</p>
     */
    inline MediaAnalysisResults& WithModelVersions(const MediaAnalysisModelVersions& value) { SetModelVersions(value); return *this;}

    /**
     * <p>Information about the model versions for the features selected in a given
     * job.</p>
     */
    inline MediaAnalysisResults& WithModelVersions(MediaAnalysisModelVersions&& value) { SetModelVersions(std::move(value)); return *this;}

  private:

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;

    MediaAnalysisModelVersions m_modelVersions;
    bool m_modelVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
