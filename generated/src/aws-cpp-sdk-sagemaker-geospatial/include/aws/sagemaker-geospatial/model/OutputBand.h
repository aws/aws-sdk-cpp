/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/OutputType.h>
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
   * <p>A single EarthObservationJob output band.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/OutputBand">AWS
   * API Reference</a></p>
   */
  class OutputBand
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API OutputBand();
    AWS_SAGEMAKERGEOSPATIAL_API OutputBand(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API OutputBand& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the band.</p>
     */
    inline const Aws::String& GetBandName() const{ return m_bandName; }

    /**
     * <p>The name of the band.</p>
     */
    inline bool BandNameHasBeenSet() const { return m_bandNameHasBeenSet; }

    /**
     * <p>The name of the band.</p>
     */
    inline void SetBandName(const Aws::String& value) { m_bandNameHasBeenSet = true; m_bandName = value; }

    /**
     * <p>The name of the band.</p>
     */
    inline void SetBandName(Aws::String&& value) { m_bandNameHasBeenSet = true; m_bandName = std::move(value); }

    /**
     * <p>The name of the band.</p>
     */
    inline void SetBandName(const char* value) { m_bandNameHasBeenSet = true; m_bandName.assign(value); }

    /**
     * <p>The name of the band.</p>
     */
    inline OutputBand& WithBandName(const Aws::String& value) { SetBandName(value); return *this;}

    /**
     * <p>The name of the band.</p>
     */
    inline OutputBand& WithBandName(Aws::String&& value) { SetBandName(std::move(value)); return *this;}

    /**
     * <p>The name of the band.</p>
     */
    inline OutputBand& WithBandName(const char* value) { SetBandName(value); return *this;}


    /**
     * <p>The datatype of the output band.</p>
     */
    inline const OutputType& GetOutputDataType() const{ return m_outputDataType; }

    /**
     * <p>The datatype of the output band.</p>
     */
    inline bool OutputDataTypeHasBeenSet() const { return m_outputDataTypeHasBeenSet; }

    /**
     * <p>The datatype of the output band.</p>
     */
    inline void SetOutputDataType(const OutputType& value) { m_outputDataTypeHasBeenSet = true; m_outputDataType = value; }

    /**
     * <p>The datatype of the output band.</p>
     */
    inline void SetOutputDataType(OutputType&& value) { m_outputDataTypeHasBeenSet = true; m_outputDataType = std::move(value); }

    /**
     * <p>The datatype of the output band.</p>
     */
    inline OutputBand& WithOutputDataType(const OutputType& value) { SetOutputDataType(value); return *this;}

    /**
     * <p>The datatype of the output band.</p>
     */
    inline OutputBand& WithOutputDataType(OutputType&& value) { SetOutputDataType(std::move(value)); return *this;}

  private:

    Aws::String m_bandName;
    bool m_bandNameHasBeenSet = false;

    OutputType m_outputDataType;
    bool m_outputDataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
