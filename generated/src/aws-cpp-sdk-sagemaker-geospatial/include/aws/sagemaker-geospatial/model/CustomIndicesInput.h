/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/Operation.h>
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
   * <p>Input object defining the custom BandMath indices to compute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/CustomIndicesInput">AWS
   * API Reference</a></p>
   */
  class CustomIndicesInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API CustomIndicesInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API CustomIndicesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API CustomIndicesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of BandMath indices to compute.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const { return m_operations; }
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
    template<typename OperationsT = Aws::Vector<Operation>>
    void SetOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations = std::forward<OperationsT>(value); }
    template<typename OperationsT = Aws::Vector<Operation>>
    CustomIndicesInput& WithOperations(OperationsT&& value) { SetOperations(std::forward<OperationsT>(value)); return *this;}
    template<typename OperationsT = Operation>
    CustomIndicesInput& AddOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations.emplace_back(std::forward<OperationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Operation> m_operations;
    bool m_operationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
