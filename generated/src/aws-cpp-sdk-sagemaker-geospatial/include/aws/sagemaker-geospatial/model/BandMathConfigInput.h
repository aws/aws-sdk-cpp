/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/CustomIndicesInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>Input structure for the BandMath operation type. Defines Predefined and
   * CustomIndices to be computed using BandMath.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/BandMathConfigInput">AWS
   * API Reference</a></p>
   */
  class BandMathConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API BandMathConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API BandMathConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API BandMathConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>CustomIndices that are computed.</p>
     */
    inline const CustomIndicesInput& GetCustomIndices() const{ return m_customIndices; }

    /**
     * <p>CustomIndices that are computed.</p>
     */
    inline bool CustomIndicesHasBeenSet() const { return m_customIndicesHasBeenSet; }

    /**
     * <p>CustomIndices that are computed.</p>
     */
    inline void SetCustomIndices(const CustomIndicesInput& value) { m_customIndicesHasBeenSet = true; m_customIndices = value; }

    /**
     * <p>CustomIndices that are computed.</p>
     */
    inline void SetCustomIndices(CustomIndicesInput&& value) { m_customIndicesHasBeenSet = true; m_customIndices = std::move(value); }

    /**
     * <p>CustomIndices that are computed.</p>
     */
    inline BandMathConfigInput& WithCustomIndices(const CustomIndicesInput& value) { SetCustomIndices(value); return *this;}

    /**
     * <p>CustomIndices that are computed.</p>
     */
    inline BandMathConfigInput& WithCustomIndices(CustomIndicesInput&& value) { SetCustomIndices(std::move(value)); return *this;}


    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPredefinedIndices() const{ return m_predefinedIndices; }

    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline bool PredefinedIndicesHasBeenSet() const { return m_predefinedIndicesHasBeenSet; }

    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline void SetPredefinedIndices(const Aws::Vector<Aws::String>& value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices = value; }

    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline void SetPredefinedIndices(Aws::Vector<Aws::String>&& value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices = std::move(value); }

    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline BandMathConfigInput& WithPredefinedIndices(const Aws::Vector<Aws::String>& value) { SetPredefinedIndices(value); return *this;}

    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline BandMathConfigInput& WithPredefinedIndices(Aws::Vector<Aws::String>&& value) { SetPredefinedIndices(std::move(value)); return *this;}

    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline BandMathConfigInput& AddPredefinedIndices(const Aws::String& value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices.push_back(value); return *this; }

    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline BandMathConfigInput& AddPredefinedIndices(Aws::String&& value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices.push_back(std::move(value)); return *this; }

    /**
     * <p>One or many of the supported predefined indices to compute. Allowed values:
     * <code>NDVI</code>, <code>EVI2</code>, <code>MSAVI</code>, <code>NDWI</code>,
     * <code>NDMI</code>, <code>NDSI</code>, and <code>WDRVI</code>.</p>
     */
    inline BandMathConfigInput& AddPredefinedIndices(const char* value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices.push_back(value); return *this; }

  private:

    CustomIndicesInput m_customIndices;
    bool m_customIndicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_predefinedIndices;
    bool m_predefinedIndicesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
