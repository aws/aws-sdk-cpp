﻿/**
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
   * <p>The dataset used for testing. Optionally, if <code>AutoCreate</code> is set,
   * Amazon Rekognition uses the training dataset to create a test dataset with a
   * temporary split of the training dataset. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TestingData">AWS
   * API Reference</a></p>
   */
  class TestingData
  {
  public:
    AWS_REKOGNITION_API TestingData();
    AWS_REKOGNITION_API TestingData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TestingData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The assets used for testing.</p>
     */
    inline const Aws::Vector<Asset>& GetAssets() const{ return m_assets; }
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
    inline void SetAssets(const Aws::Vector<Asset>& value) { m_assetsHasBeenSet = true; m_assets = value; }
    inline void SetAssets(Aws::Vector<Asset>&& value) { m_assetsHasBeenSet = true; m_assets = std::move(value); }
    inline TestingData& WithAssets(const Aws::Vector<Asset>& value) { SetAssets(value); return *this;}
    inline TestingData& WithAssets(Aws::Vector<Asset>&& value) { SetAssets(std::move(value)); return *this;}
    inline TestingData& AddAssets(const Asset& value) { m_assetsHasBeenSet = true; m_assets.push_back(value); return *this; }
    inline TestingData& AddAssets(Asset&& value) { m_assetsHasBeenSet = true; m_assets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, Rekognition splits training dataset to create a test dataset
     * for the training job.</p>
     */
    inline bool GetAutoCreate() const{ return m_autoCreate; }
    inline bool AutoCreateHasBeenSet() const { return m_autoCreateHasBeenSet; }
    inline void SetAutoCreate(bool value) { m_autoCreateHasBeenSet = true; m_autoCreate = value; }
    inline TestingData& WithAutoCreate(bool value) { SetAutoCreate(value); return *this;}
    ///@}
  private:

    Aws::Vector<Asset> m_assets;
    bool m_assetsHasBeenSet = false;

    bool m_autoCreate;
    bool m_autoCreateHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
