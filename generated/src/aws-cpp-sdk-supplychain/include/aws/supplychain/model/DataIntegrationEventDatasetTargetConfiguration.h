/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationEventDatasetOperationType.h>
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
   * <p>The target dataset configuration for a DATASET event type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationEventDatasetTargetConfiguration">AWS
   * API Reference</a></p>
   */
  class DataIntegrationEventDatasetTargetConfiguration
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetTargetConfiguration() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The datalake dataset ARN identifier.</p>
     */
    inline const Aws::String& GetDatasetIdentifier() const { return m_datasetIdentifier; }
    inline bool DatasetIdentifierHasBeenSet() const { return m_datasetIdentifierHasBeenSet; }
    template<typename DatasetIdentifierT = Aws::String>
    void SetDatasetIdentifier(DatasetIdentifierT&& value) { m_datasetIdentifierHasBeenSet = true; m_datasetIdentifier = std::forward<DatasetIdentifierT>(value); }
    template<typename DatasetIdentifierT = Aws::String>
    DataIntegrationEventDatasetTargetConfiguration& WithDatasetIdentifier(DatasetIdentifierT&& value) { SetDatasetIdentifier(std::forward<DatasetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target dataset load operation type.</p>
     */
    inline DataIntegrationEventDatasetOperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(DataIntegrationEventDatasetOperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline DataIntegrationEventDatasetTargetConfiguration& WithOperationType(DataIntegrationEventDatasetOperationType value) { SetOperationType(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetIdentifier;
    bool m_datasetIdentifierHasBeenSet = false;

    DataIntegrationEventDatasetOperationType m_operationType{DataIntegrationEventDatasetOperationType::NOT_SET};
    bool m_operationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
