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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/Operation">AWS
   * API Reference</a></p>
   */
  class Operation
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API Operation();
    AWS_SAGEMAKERGEOSPATIAL_API Operation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Operation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetEquation() const{ return m_equation; }

    /**
     * <p/>
     */
    inline bool EquationHasBeenSet() const { return m_equationHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEquation(const Aws::String& value) { m_equationHasBeenSet = true; m_equation = value; }

    /**
     * <p/>
     */
    inline void SetEquation(Aws::String&& value) { m_equationHasBeenSet = true; m_equation = std::move(value); }

    /**
     * <p/>
     */
    inline void SetEquation(const char* value) { m_equationHasBeenSet = true; m_equation.assign(value); }

    /**
     * <p/>
     */
    inline Operation& WithEquation(const Aws::String& value) { SetEquation(value); return *this;}

    /**
     * <p/>
     */
    inline Operation& WithEquation(Aws::String&& value) { SetEquation(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Operation& WithEquation(const char* value) { SetEquation(value); return *this;}


    /**
     * <p>The name of the operation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the operation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the operation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the operation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the operation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the operation.</p>
     */
    inline Operation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the operation.</p>
     */
    inline Operation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the operation.</p>
     */
    inline Operation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the operation.</p>
     */
    inline const OutputType& GetOutputType() const{ return m_outputType; }

    /**
     * <p>The type of the operation.</p>
     */
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }

    /**
     * <p>The type of the operation.</p>
     */
    inline void SetOutputType(const OutputType& value) { m_outputTypeHasBeenSet = true; m_outputType = value; }

    /**
     * <p>The type of the operation.</p>
     */
    inline void SetOutputType(OutputType&& value) { m_outputTypeHasBeenSet = true; m_outputType = std::move(value); }

    /**
     * <p>The type of the operation.</p>
     */
    inline Operation& WithOutputType(const OutputType& value) { SetOutputType(value); return *this;}

    /**
     * <p>The type of the operation.</p>
     */
    inline Operation& WithOutputType(OutputType&& value) { SetOutputType(std::move(value)); return *this;}

  private:

    Aws::String m_equation;
    bool m_equationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    OutputType m_outputType;
    bool m_outputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
