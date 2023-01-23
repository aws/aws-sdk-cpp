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
   * <p/><p><h3>See Also:</h3>   <a
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
     * <p/>
     */
    inline const CustomIndicesInput& GetCustomIndices() const{ return m_customIndices; }

    /**
     * <p/>
     */
    inline bool CustomIndicesHasBeenSet() const { return m_customIndicesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCustomIndices(const CustomIndicesInput& value) { m_customIndicesHasBeenSet = true; m_customIndices = value; }

    /**
     * <p/>
     */
    inline void SetCustomIndices(CustomIndicesInput&& value) { m_customIndicesHasBeenSet = true; m_customIndices = std::move(value); }

    /**
     * <p/>
     */
    inline BandMathConfigInput& WithCustomIndices(const CustomIndicesInput& value) { SetCustomIndices(value); return *this;}

    /**
     * <p/>
     */
    inline BandMathConfigInput& WithCustomIndices(CustomIndicesInput&& value) { SetCustomIndices(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetPredefinedIndices() const{ return m_predefinedIndices; }

    /**
     * <p/>
     */
    inline bool PredefinedIndicesHasBeenSet() const { return m_predefinedIndicesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPredefinedIndices(const Aws::Vector<Aws::String>& value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices = value; }

    /**
     * <p/>
     */
    inline void SetPredefinedIndices(Aws::Vector<Aws::String>&& value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices = std::move(value); }

    /**
     * <p/>
     */
    inline BandMathConfigInput& WithPredefinedIndices(const Aws::Vector<Aws::String>& value) { SetPredefinedIndices(value); return *this;}

    /**
     * <p/>
     */
    inline BandMathConfigInput& WithPredefinedIndices(Aws::Vector<Aws::String>&& value) { SetPredefinedIndices(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BandMathConfigInput& AddPredefinedIndices(const Aws::String& value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline BandMathConfigInput& AddPredefinedIndices(Aws::String&& value) { m_predefinedIndicesHasBeenSet = true; m_predefinedIndices.push_back(std::move(value)); return *this; }

    /**
     * <p/>
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
