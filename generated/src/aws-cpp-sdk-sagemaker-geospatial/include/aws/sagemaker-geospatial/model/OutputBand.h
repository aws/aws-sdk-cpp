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
    AWS_SAGEMAKERGEOSPATIAL_API OutputBand() = default;
    AWS_SAGEMAKERGEOSPATIAL_API OutputBand(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API OutputBand& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the band.</p>
     */
    inline const Aws::String& GetBandName() const { return m_bandName; }
    inline bool BandNameHasBeenSet() const { return m_bandNameHasBeenSet; }
    template<typename BandNameT = Aws::String>
    void SetBandName(BandNameT&& value) { m_bandNameHasBeenSet = true; m_bandName = std::forward<BandNameT>(value); }
    template<typename BandNameT = Aws::String>
    OutputBand& WithBandName(BandNameT&& value) { SetBandName(std::forward<BandNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datatype of the output band.</p>
     */
    inline OutputType GetOutputDataType() const { return m_outputDataType; }
    inline bool OutputDataTypeHasBeenSet() const { return m_outputDataTypeHasBeenSet; }
    inline void SetOutputDataType(OutputType value) { m_outputDataTypeHasBeenSet = true; m_outputDataType = value; }
    inline OutputBand& WithOutputDataType(OutputType value) { SetOutputDataType(value); return *this;}
    ///@}
  private:

    Aws::String m_bandName;
    bool m_bandNameHasBeenSet = false;

    OutputType m_outputDataType{OutputType::NOT_SET};
    bool m_outputDataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
