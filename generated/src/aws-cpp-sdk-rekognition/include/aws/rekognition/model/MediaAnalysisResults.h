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
    AWS_REKOGNITION_API MediaAnalysisResults() = default;
    AWS_REKOGNITION_API MediaAnalysisResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const S3Object& GetS3Object() const { return m_s3Object; }
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
    template<typename S3ObjectT = S3Object>
    void SetS3Object(S3ObjectT&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::forward<S3ObjectT>(value); }
    template<typename S3ObjectT = S3Object>
    MediaAnalysisResults& WithS3Object(S3ObjectT&& value) { SetS3Object(std::forward<S3ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the model versions for the features selected in a given
     * job.</p>
     */
    inline const MediaAnalysisModelVersions& GetModelVersions() const { return m_modelVersions; }
    inline bool ModelVersionsHasBeenSet() const { return m_modelVersionsHasBeenSet; }
    template<typename ModelVersionsT = MediaAnalysisModelVersions>
    void SetModelVersions(ModelVersionsT&& value) { m_modelVersionsHasBeenSet = true; m_modelVersions = std::forward<ModelVersionsT>(value); }
    template<typename ModelVersionsT = MediaAnalysisModelVersions>
    MediaAnalysisResults& WithModelVersions(ModelVersionsT&& value) { SetModelVersions(std::forward<ModelVersionsT>(value)); return *this;}
    ///@}
  private:

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;

    MediaAnalysisModelVersions m_modelVersions;
    bool m_modelVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
