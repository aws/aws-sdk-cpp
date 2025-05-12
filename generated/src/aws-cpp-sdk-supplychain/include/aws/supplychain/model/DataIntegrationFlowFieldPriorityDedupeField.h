/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationFlowFieldPriorityDedupeSortOrder.h>
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
   * <p>The field used in the field priority deduplication strategy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowFieldPriorityDedupeField">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowFieldPriorityDedupeField
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowFieldPriorityDedupeField() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowFieldPriorityDedupeField(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowFieldPriorityDedupeField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the deduplication field. Must exist in the dataset and not be a
     * primary key.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataIntegrationFlowFieldPriorityDedupeField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the deduplication field.</p>
     */
    inline DataIntegrationFlowFieldPriorityDedupeSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(DataIntegrationFlowFieldPriorityDedupeSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline DataIntegrationFlowFieldPriorityDedupeField& WithSortOrder(DataIntegrationFlowFieldPriorityDedupeSortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataIntegrationFlowFieldPriorityDedupeSortOrder m_sortOrder{DataIntegrationFlowFieldPriorityDedupeSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
