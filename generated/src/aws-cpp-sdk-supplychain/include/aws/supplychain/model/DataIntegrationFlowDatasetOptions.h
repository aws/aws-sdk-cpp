/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowLoadType.h>
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
   * <p>The dataset options used in dataset source and target
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowDatasetOptions">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowDatasetOptions
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetOptions() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dataset data load type in dataset options.</p>
     */
    inline DataIntegrationFlowLoadType GetLoadType() const { return m_loadType; }
    inline bool LoadTypeHasBeenSet() const { return m_loadTypeHasBeenSet; }
    inline void SetLoadType(DataIntegrationFlowLoadType value) { m_loadTypeHasBeenSet = true; m_loadType = value; }
    inline DataIntegrationFlowDatasetOptions& WithLoadType(DataIntegrationFlowLoadType value) { SetLoadType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset load option to remove duplicates.</p>
     */
    inline bool GetDedupeRecords() const { return m_dedupeRecords; }
    inline bool DedupeRecordsHasBeenSet() const { return m_dedupeRecordsHasBeenSet; }
    inline void SetDedupeRecords(bool value) { m_dedupeRecordsHasBeenSet = true; m_dedupeRecords = value; }
    inline DataIntegrationFlowDatasetOptions& WithDedupeRecords(bool value) { SetDedupeRecords(value); return *this;}
    ///@}
  private:

    DataIntegrationFlowLoadType m_loadType{DataIntegrationFlowLoadType::NOT_SET};
    bool m_loadTypeHasBeenSet = false;

    bool m_dedupeRecords{false};
    bool m_dedupeRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
