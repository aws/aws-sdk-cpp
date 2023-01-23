/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Asset.h>
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
   * <p>The dataset used for training.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TrainingData">AWS
   * API Reference</a></p>
   */
  class TrainingData
  {
  public:
    AWS_REKOGNITION_API TrainingData();
    AWS_REKOGNITION_API TrainingData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TrainingData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Sagemaker GroundTruth manifest file that contains the training images
     * (assets).</p>
     */
    inline const Aws::Vector<Asset>& GetAssets() const{ return m_assets; }

    /**
     * <p>A Sagemaker GroundTruth manifest file that contains the training images
     * (assets).</p>
     */
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }

    /**
     * <p>A Sagemaker GroundTruth manifest file that contains the training images
     * (assets).</p>
     */
    inline void SetAssets(const Aws::Vector<Asset>& value) { m_assetsHasBeenSet = true; m_assets = value; }

    /**
     * <p>A Sagemaker GroundTruth manifest file that contains the training images
     * (assets).</p>
     */
    inline void SetAssets(Aws::Vector<Asset>&& value) { m_assetsHasBeenSet = true; m_assets = std::move(value); }

    /**
     * <p>A Sagemaker GroundTruth manifest file that contains the training images
     * (assets).</p>
     */
    inline TrainingData& WithAssets(const Aws::Vector<Asset>& value) { SetAssets(value); return *this;}

    /**
     * <p>A Sagemaker GroundTruth manifest file that contains the training images
     * (assets).</p>
     */
    inline TrainingData& WithAssets(Aws::Vector<Asset>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p>A Sagemaker GroundTruth manifest file that contains the training images
     * (assets).</p>
     */
    inline TrainingData& AddAssets(const Asset& value) { m_assetsHasBeenSet = true; m_assets.push_back(value); return *this; }

    /**
     * <p>A Sagemaker GroundTruth manifest file that contains the training images
     * (assets).</p>
     */
    inline TrainingData& AddAssets(Asset&& value) { m_assetsHasBeenSet = true; m_assets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Asset> m_assets;
    bool m_assetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
