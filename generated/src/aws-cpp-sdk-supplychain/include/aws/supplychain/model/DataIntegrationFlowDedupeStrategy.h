/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowDedupeStrategyType.h>
#include <aws/supplychain/model/DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration.h>
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
   * <p>The deduplication strategy details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowDedupeStrategy">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowDedupeStrategy
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDedupeStrategy() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDedupeStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDedupeStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the deduplication strategy.</p> <ul> <li> <p>
     * <b>FIELD_PRIORITY</b> - Field priority configuration for the deduplication
     * strategy specifies an ordered list of fields used to tie-break the data records
     * sharing the same primary key values. Fields earlier in the list have higher
     * priority for evaluation. For each field, the sort order determines whether to
     * retain data record with larger or smaller field value.</p> </li> </ul>
     */
    inline DataIntegrationFlowDedupeStrategyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataIntegrationFlowDedupeStrategyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataIntegrationFlowDedupeStrategy& WithType(DataIntegrationFlowDedupeStrategyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field priority deduplication strategy.</p>
     */
    inline const DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration& GetFieldPriority() const { return m_fieldPriority; }
    inline bool FieldPriorityHasBeenSet() const { return m_fieldPriorityHasBeenSet; }
    template<typename FieldPriorityT = DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration>
    void SetFieldPriority(FieldPriorityT&& value) { m_fieldPriorityHasBeenSet = true; m_fieldPriority = std::forward<FieldPriorityT>(value); }
    template<typename FieldPriorityT = DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration>
    DataIntegrationFlowDedupeStrategy& WithFieldPriority(FieldPriorityT&& value) { SetFieldPriority(std::forward<FieldPriorityT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowDedupeStrategyType m_type{DataIntegrationFlowDedupeStrategyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    DataIntegrationFlowFieldPriorityDedupeStrategyConfiguration m_fieldPriority;
    bool m_fieldPriorityHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
