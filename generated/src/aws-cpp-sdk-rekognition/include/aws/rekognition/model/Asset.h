/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/GroundTruthManifest.h>
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
   * <p>Assets are the images that you use to train and evaluate a model version.
   * Assets can also contain validation information that you use to debug a failed
   * model training. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Asset">AWS
   * API Reference</a></p>
   */
  class Asset
  {
  public:
    AWS_REKOGNITION_API Asset();
    AWS_REKOGNITION_API Asset(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Asset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const GroundTruthManifest& GetGroundTruthManifest() const{ return m_groundTruthManifest; }

    
    inline bool GroundTruthManifestHasBeenSet() const { return m_groundTruthManifestHasBeenSet; }

    
    inline void SetGroundTruthManifest(const GroundTruthManifest& value) { m_groundTruthManifestHasBeenSet = true; m_groundTruthManifest = value; }

    
    inline void SetGroundTruthManifest(GroundTruthManifest&& value) { m_groundTruthManifestHasBeenSet = true; m_groundTruthManifest = std::move(value); }

    
    inline Asset& WithGroundTruthManifest(const GroundTruthManifest& value) { SetGroundTruthManifest(value); return *this;}

    
    inline Asset& WithGroundTruthManifest(GroundTruthManifest&& value) { SetGroundTruthManifest(std::move(value)); return *this;}

  private:

    GroundTruthManifest m_groundTruthManifest;
    bool m_groundTruthManifestHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
