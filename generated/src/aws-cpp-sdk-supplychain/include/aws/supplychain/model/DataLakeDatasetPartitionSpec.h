/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supplychain/model/DataLakeDatasetPartitionField.h>
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
   * <p>The partition specification for a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataLakeDatasetPartitionSpec">AWS
   * API Reference</a></p>
   */
  class DataLakeDatasetPartitionSpec
  {
  public:
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionSpec() = default;
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fields on which to partition a dataset. The partitions will be applied
     * hierarchically based on the order of this list.</p>
     */
    inline const Aws::Vector<DataLakeDatasetPartitionField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<DataLakeDatasetPartitionField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<DataLakeDatasetPartitionField>>
    DataLakeDatasetPartitionSpec& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = DataLakeDatasetPartitionField>
    DataLakeDatasetPartitionSpec& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DataLakeDatasetPartitionField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
