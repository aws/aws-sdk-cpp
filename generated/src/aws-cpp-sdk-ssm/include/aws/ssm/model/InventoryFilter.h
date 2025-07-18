/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryQueryOperatorType.h>
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
   * <p>One or more filters. Use a filter to return a more specific list of
   * results.</p> <p> <b>Example formats for the <code>aws ssm get-inventory</code>
   * command:</b> </p> <p> <code>--filters
   * Key=AWS:InstanceInformation.AgentType,Values=amazon-ssm-agent,Type=Equal</code>
   * </p> <p> <code>--filters
   * Key=AWS:InstanceInformation.AgentVersion,Values=3.3.2299.0,Type=Equal</code>
   * </p> <p> <code>--filters
   * Key=AWS:InstanceInformation.ComputerName,Values=ip-192.0.2.0.us-east-2.compute.internal,Type=Equal</code>
   * </p> <p> <code>--filters
   * Key=AWS:InstanceInformation.InstanceId,Values=i-0a4cd6ceffEXAMPLE,i-1a2b3c4d5e6EXAMPLE,Type=Equal</code>
   * </p> <p> <code>--filters
   * Key=AWS:InstanceInformation.InstanceStatus,Values=Active,Type=Equal</code> </p>
   * <p> <code>--filters
   * Key=AWS:InstanceInformation.IpAddress,Values=198.51.100.0,Type=Equal</code> </p>
   * <p> <code>--filters Key=AWS:InstanceInformation.PlatformName,Values="Amazon
   * Linux",Type=Equal</code> </p> <p> <code>--filters
   * Key=AWS:InstanceInformation.PlatformType,Values=Linux,Type=Equal</code> </p> <p>
   * <code>--filters
   * Key=AWS:InstanceInformation.PlatformVersion,Values=2023,Type=BeginWith</code>
   * </p> <p> <code>--filters
   * Key=AWS:InstanceInformation.ResourceType,Values=EC2Instance,Type=Equal</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryFilter">AWS
   * API Reference</a></p>
   */
  class InventoryFilter
  {
  public:
    AWS_SSM_API InventoryFilter() = default;
    AWS_SSM_API InventoryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter key.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    InventoryFilter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inventory filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    InventoryFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    InventoryFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of filter.</p>  <p>The <code>Exists</code> filter must be used
     * with aggregators. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/inventory-aggregate.html">Aggregating
     * inventory data</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p> 
     */
    inline InventoryQueryOperatorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InventoryQueryOperatorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InventoryFilter& WithType(InventoryQueryOperatorType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    InventoryQueryOperatorType m_type{InventoryQueryOperatorType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
