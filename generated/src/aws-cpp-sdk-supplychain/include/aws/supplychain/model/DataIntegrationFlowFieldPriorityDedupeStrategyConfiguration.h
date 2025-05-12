/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supplychain/model/DataIntegrationFlowFieldPriorityDedupeField.h>
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
   * <p>The field priority deduplication strategy details.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of field names and their sort order for deduplication, arranged in
     * descending priority from highest to lowest.</p>
     */
    inline const Aws::Vector<DataIntegrationFlowFieldPriorityDedupeField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<DataIntegrationFlowFieldPriorityDedupeField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<DataIntegrationFlowFieldPriorityDedupeField>>
    DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = DataIntegrationFlowFieldPriorityDedupeField>
    DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DataIntegrationFlowFieldPriorityDedupeField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
