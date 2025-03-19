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
   * <p>Represents an arithmetic operation to compute spectral index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/Operation">AWS
   * API Reference</a></p>
   */
  class Operation
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API Operation() = default;
    AWS_SAGEMAKERGEOSPATIAL_API Operation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Operation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Textual representation of the math operation; Equation used to compute the
     * spectral index.</p>
     */
    inline const Aws::String& GetEquation() const { return m_equation; }
    inline bool EquationHasBeenSet() const { return m_equationHasBeenSet; }
    template<typename EquationT = Aws::String>
    void SetEquation(EquationT&& value) { m_equationHasBeenSet = true; m_equation = std::forward<EquationT>(value); }
    template<typename EquationT = Aws::String>
    Operation& WithEquation(EquationT&& value) { SetEquation(std::forward<EquationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Operation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the operation.</p>
     */
    inline OutputType GetOutputType() const { return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    inline void SetOutputType(OutputType value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline Operation& WithOutputType(OutputType value) { SetOutputType(value); return *this;}
    ///@}
  private:

    Aws::String m_equation;
    bool m_equationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OutputType m_outputType{OutputType::NOT_SET};
    bool m_outputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
