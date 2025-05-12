/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationEventDatasetOperationType.h>
#include <aws/supplychain/model/DataIntegrationEventDatasetLoadExecutionDetails.h>
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
   * <p>The target dataset details for a DATASET event type.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationEventDatasetTargetDetails">AWS
   * API Reference</a></p>
   */
  class DataIntegrationEventDatasetTargetDetails
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetTargetDetails() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetTargetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetTargetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    DataIntegrationEventDatasetTargetDetails& WithDatasetIdentifier(DatasetIdentifierT&& value) { SetDatasetIdentifier(std::forward<DatasetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target dataset load operation type. The available options are:</p> <ul>
     * <li> <p> <b>APPEND</b> - Add new records to the dataset. Noted that this
     * operation type will just try to append records as-is without any primary key or
     * partition constraints.</p> </li> <li> <p> <b>UPSERT</b> - Modify existing
     * records in the dataset with primary key configured, events for datasets without
     * primary keys are not allowed. If event data contains primary keys that match
     * records in the dataset within same partition, then those existing records (in
     * that partition) will be updated. If primary keys do not match, new records will
     * be added. Note that if dataset contain records with duplicate primary key values
     * in the same partition, those duplicate records will be deduped into one updated
     * record.</p> </li> <li> <p> <b>DELETE</b> - Remove existing records in the
     * dataset with primary key configured, events for datasets without primary keys
     * are not allowed. If event data contains primary keys that match records in the
     * dataset within same partition, then those existing records (in that partition)
     * will be deleted. If primary keys do not match, no actions will be done. Note
     * that if dataset contain records with duplicate primary key values in the same
     * partition, all those duplicates will be removed.</p> </li> </ul>
     */
    inline DataIntegrationEventDatasetOperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(DataIntegrationEventDatasetOperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline DataIntegrationEventDatasetTargetDetails& WithOperationType(DataIntegrationEventDatasetOperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target dataset load execution.</p>
     */
    inline const DataIntegrationEventDatasetLoadExecutionDetails& GetDatasetLoadExecution() const { return m_datasetLoadExecution; }
    inline bool DatasetLoadExecutionHasBeenSet() const { return m_datasetLoadExecutionHasBeenSet; }
    template<typename DatasetLoadExecutionT = DataIntegrationEventDatasetLoadExecutionDetails>
    void SetDatasetLoadExecution(DatasetLoadExecutionT&& value) { m_datasetLoadExecutionHasBeenSet = true; m_datasetLoadExecution = std::forward<DatasetLoadExecutionT>(value); }
    template<typename DatasetLoadExecutionT = DataIntegrationEventDatasetLoadExecutionDetails>
    DataIntegrationEventDatasetTargetDetails& WithDatasetLoadExecution(DatasetLoadExecutionT&& value) { SetDatasetLoadExecution(std::forward<DatasetLoadExecutionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetIdentifier;
    bool m_datasetIdentifierHasBeenSet = false;

    DataIntegrationEventDatasetOperationType m_operationType{DataIntegrationEventDatasetOperationType::NOT_SET};
    bool m_operationTypeHasBeenSet = false;

    DataIntegrationEventDatasetLoadExecutionDetails m_datasetLoadExecution;
    bool m_datasetLoadExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
