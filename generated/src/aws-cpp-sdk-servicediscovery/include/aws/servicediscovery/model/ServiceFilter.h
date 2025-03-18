/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/ServiceFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/FilterCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that lets you specify the namespaces that you want to list
   * services for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ServiceFilter">AWS
   * API Reference</a></p>
   */
  class ServiceFilter
  {
  public:
    AWS_SERVICEDISCOVERY_API ServiceFilter() = default;
    AWS_SERVICEDISCOVERY_API ServiceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API ServiceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify <code>NAMESPACE_ID</code>.</p>
     */
    inline ServiceFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ServiceFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ServiceFilter& WithName(ServiceFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ServiceFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ServiceFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator that you want to use to determine whether a service is returned
     * by <code>ListServices</code>. Valid values for <code>Condition</code> include
     * the following:</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code>, specify one namespace ID for <code>Values</code>.
     * <code>EQ</code> is the default condition and can be omitted.</p> </li> </ul>
     */
    inline FilterCondition GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(FilterCondition value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline ServiceFilter& WithCondition(FilterCondition value) { SetCondition(value); return *this;}
    ///@}
  private:

    ServiceFilterName m_name{ServiceFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    FilterCondition m_condition{FilterCondition::NOT_SET};
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
