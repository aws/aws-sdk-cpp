/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/InventoryResultItem.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Inventory query results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryResultEntity">AWS
   * API Reference</a></p>
   */
  class InventoryResultEntity
  {
  public:
    AWS_SSM_API InventoryResultEntity() = default;
    AWS_SSM_API InventoryResultEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryResultEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the inventory result entity. For example, for managed node inventory
     * the result will be the managed node ID. For EC2 instance inventory, the result
     * will be the instance ID. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InventoryResultEntity& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data section in the inventory result entity JSON.</p>
     */
    inline const Aws::Map<Aws::String, InventoryResultItem>& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Map<Aws::String, InventoryResultItem>>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Map<Aws::String, InventoryResultItem>>
    InventoryResultEntity& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    template<typename DataKeyT = Aws::String, typename DataValueT = InventoryResultItem>
    InventoryResultEntity& AddData(DataKeyT&& key, DataValueT&& value) {
      m_dataHasBeenSet = true; m_data.emplace(std::forward<DataKeyT>(key), std::forward<DataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, InventoryResultItem> m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
