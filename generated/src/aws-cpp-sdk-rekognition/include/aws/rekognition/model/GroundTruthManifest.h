/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/S3Object.h>
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
   * <p>The S3 bucket that contains an Amazon Sagemaker Ground Truth format manifest
   * file. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GroundTruthManifest">AWS
   * API Reference</a></p>
   */
  class GroundTruthManifest
  {
  public:
    AWS_REKOGNITION_API GroundTruthManifest();
    AWS_REKOGNITION_API GroundTruthManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API GroundTruthManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    
    inline GroundTruthManifest& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    
    inline GroundTruthManifest& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
