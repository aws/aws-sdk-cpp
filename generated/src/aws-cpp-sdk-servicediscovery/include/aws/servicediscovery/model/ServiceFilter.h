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
     * <p>Specify the services that you want to get using one of the following.</p>
     * <ul> <li> <p> <code>NAMESPACE_ID</code>: Gets the services associated with the
     * specified namespace.</p> </li> <li> <p> <code>RESOURCE_OWNER</code>: Gets the
     * services associated with the namespaces created by your Amazon Web Services
     * account or by other accounts. This can be used to filter for services created in
     * a shared namespace. For more information about shared namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     * </li> </ul>
     */
    inline ServiceFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ServiceFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ServiceFilter& WithName(ServiceFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p> <ul> <li> <p>
     * <b>NAMESPACE_ID</b>: Specify one namespace ID or ARN. Specify the namespace ARN
     * for namespaces that are shared with your Amazon Web Services account.</p> </li>
     * <li> <p> <b>RESOURCE_OWNER</b>: Specify one of <code>SELF</code> or
     * <code>OTHER_ACCOUNTS</code>. <code>SELF</code> can be used to filter services
     * associated with namespaces created by you and <code>OTHER_ACCOUNTS</code> can be
     * used to filter services associated with namespaces that were shared with
     * you.</p> </li> </ul>
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
     * <code>EQ</code>, specify one value. <code>EQ</code> is the default condition and
     * can be omitted.</p> </li> </ul>
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
