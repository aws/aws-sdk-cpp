/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The details of a flow execution with dataset source.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowDatasetSource">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowDatasetSource
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetSource() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the dataset source.</p>
     */
    inline const Aws::String& GetDatasetIdentifier() const { return m_datasetIdentifier; }
    inline bool DatasetIdentifierHasBeenSet() const { return m_datasetIdentifierHasBeenSet; }
    template<typename DatasetIdentifierT = Aws::String>
    void SetDatasetIdentifier(DatasetIdentifierT&& value) { m_datasetIdentifierHasBeenSet = true; m_datasetIdentifier = std::forward<DatasetIdentifierT>(value); }
    template<typename DatasetIdentifierT = Aws::String>
    DataIntegrationFlowDatasetSource& WithDatasetIdentifier(DatasetIdentifierT&& value) { SetDatasetIdentifier(std::forward<DatasetIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetIdentifier;
    bool m_datasetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
