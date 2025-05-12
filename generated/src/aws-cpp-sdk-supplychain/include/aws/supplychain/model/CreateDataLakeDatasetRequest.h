/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataLakeDatasetSchema.h>
#include <aws/supplychain/model/DataLakeDatasetPartitionSpec.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for CreateDataLakeDataset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateDataLakeDatasetRequest">AWS
   * API Reference</a></p>
   */
  class CreateDataLakeDatasetRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API CreateDataLakeDatasetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataLakeDataset"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateDataLakeDatasetRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the dataset, besides the custom defined namespace, every
     * instance comes with below pre-defined namespaces:</p> <ul> <li> <p> <b>asc</b> -
     * For information on the Amazon Web Services Supply Chain supported datasets see
     * <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html">https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html</a>.</p>
     * </li> <li> <p> <b>default</b> - For datasets with custom user-defined
     * schemas.</p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    CreateDataLakeDatasetRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset. For <b>asc</b> name space, the name must be one of
     * the supported data entities under <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html">https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDataLakeDatasetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom schema of the data lake dataset and required for dataset in
     * <b>default</b> and custom namespaces.</p>
     */
    inline const DataLakeDatasetSchema& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = DataLakeDatasetSchema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = DataLakeDatasetSchema>
    CreateDataLakeDatasetRequest& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the dataset.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDataLakeDatasetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The partition specification of the dataset. Partitioning can effectively
     * improve the dataset query performance by reducing the amount of data scanned
     * during query execution. But partitioning or not will affect how data get
     * ingested by data ingestion methods, such as SendDataIntegrationEvent's dataset
     * UPSERT will upsert records within partition (instead of within whole dataset).
     * For more details, refer to those data ingestion documentations.</p>
     */
    inline const DataLakeDatasetPartitionSpec& GetPartitionSpec() const { return m_partitionSpec; }
    inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
    template<typename PartitionSpecT = DataLakeDatasetPartitionSpec>
    void SetPartitionSpec(PartitionSpecT&& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec = std::forward<PartitionSpecT>(value); }
    template<typename PartitionSpecT = DataLakeDatasetPartitionSpec>
    CreateDataLakeDatasetRequest& WithPartitionSpec(PartitionSpecT&& value) { SetPartitionSpec(std::forward<PartitionSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDataLakeDatasetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDataLakeDatasetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataLakeDatasetSchema m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataLakeDatasetPartitionSpec m_partitionSpec;
    bool m_partitionSpecHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
