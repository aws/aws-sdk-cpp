/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supplychain/model/DataLakeDatasetSchemaField.h>
#include <aws/supplychain/model/DataLakeDatasetPrimaryKeyField.h>
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
   * <p>The schema details of the dataset. Note that for AWS Supply Chain dataset
   * under <b>asc</b> namespace, it may have internal fields like connection_id that
   * will be auto populated by data ingestion methods.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataLakeDatasetSchema">AWS
   * API Reference</a></p>
   */
  class DataLakeDatasetSchema
  {
  public:
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchema() = default;
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataLakeDatasetSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dataset schema.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataLakeDatasetSchema& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of field details of the dataset schema.</p>
     */
    inline const Aws::Vector<DataLakeDatasetSchemaField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<DataLakeDatasetSchemaField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<DataLakeDatasetSchemaField>>
    DataLakeDatasetSchema& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = DataLakeDatasetSchemaField>
    DataLakeDatasetSchema& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of primary key fields for the dataset. Primary keys defined can help
     * data ingestion methods to ensure data uniqueness: CreateDataIntegrationFlow's
     * dedupe strategy will leverage primary keys to perform records deduplication
     * before write to dataset; SendDataIntegrationEvent's UPSERT and DELETE can only
     * work with dataset with primary keys. For more details, refer to those data
     * ingestion documentations.</p> <p>Note that defining primary keys does not
     * necessarily mean the dataset cannot have duplicate records, duplicate records
     * can still be ingested if CreateDataIntegrationFlow's dedupe disabled or through
     * SendDataIntegrationEvent's APPEND operation.</p>
     */
    inline const Aws::Vector<DataLakeDatasetPrimaryKeyField>& GetPrimaryKeys() const { return m_primaryKeys; }
    inline bool PrimaryKeysHasBeenSet() const { return m_primaryKeysHasBeenSet; }
    template<typename PrimaryKeysT = Aws::Vector<DataLakeDatasetPrimaryKeyField>>
    void SetPrimaryKeys(PrimaryKeysT&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys = std::forward<PrimaryKeysT>(value); }
    template<typename PrimaryKeysT = Aws::Vector<DataLakeDatasetPrimaryKeyField>>
    DataLakeDatasetSchema& WithPrimaryKeys(PrimaryKeysT&& value) { SetPrimaryKeys(std::forward<PrimaryKeysT>(value)); return *this;}
    template<typename PrimaryKeysT = DataLakeDatasetPrimaryKeyField>
    DataLakeDatasetSchema& AddPrimaryKeys(PrimaryKeysT&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys.emplace_back(std::forward<PrimaryKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<DataLakeDatasetSchemaField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Vector<DataLakeDatasetPrimaryKeyField> m_primaryKeys;
    bool m_primaryKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
