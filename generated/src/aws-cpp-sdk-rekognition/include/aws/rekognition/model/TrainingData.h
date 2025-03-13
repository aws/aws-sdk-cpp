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
    AWS_REKOGNITION_API TrainingData() = default;
    AWS_REKOGNITION_API TrainingData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TrainingData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A manifest file that contains references to the training images and
     * ground-truth annotations.</p>
     */
    inline const Aws::Vector<Asset>& GetAssets() const { return m_assets; }
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
    template<typename AssetsT = Aws::Vector<Asset>>
    void SetAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets = std::forward<AssetsT>(value); }
    template<typename AssetsT = Aws::Vector<Asset>>
    TrainingData& WithAssets(AssetsT&& value) { SetAssets(std::forward<AssetsT>(value)); return *this;}
    template<typename AssetsT = Asset>
    TrainingData& AddAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets.emplace_back(std::forward<AssetsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Asset> m_assets;
    bool m_assetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
