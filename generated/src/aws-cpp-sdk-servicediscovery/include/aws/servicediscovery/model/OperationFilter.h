/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/OperationFilterName.h>
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
   * <p>A complex type that lets you select the operations that you want to
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/OperationFilter">AWS
   * API Reference</a></p>
   */
  class OperationFilter
  {
  public:
    AWS_SERVICEDISCOVERY_API OperationFilter() = default;
    AWS_SERVICEDISCOVERY_API OperationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API OperationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the operations that you want to get:</p> <ul> <li> <p>
     * <b>NAMESPACE_ID</b>: Gets operations related to specified namespaces.</p> </li>
     * <li> <p> <b>SERVICE_ID</b>: Gets operations related to specified services.</p>
     * </li> <li> <p> <b>STATUS</b>: Gets operations based on the status of the
     * operations: <code>SUBMITTED</code>, <code>PENDING</code>, <code>SUCCEED</code>,
     * or <code>FAIL</code>.</p> </li> <li> <p> <b>TYPE</b>: Gets specified types of
     * operation.</p> </li> <li> <p> <b>UPDATE_DATE</b>: Gets operations that changed
     * status during a specified date/time range. </p> </li> </ul>
     */
    inline OperationFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(OperationFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline OperationFilter& WithName(OperationFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify values that are applicable to the value that you specify for
     * <code>Name</code>: </p> <ul> <li> <p> <b>NAMESPACE_ID</b>: Specify one namespace
     * ID.</p> </li> <li> <p> <b>SERVICE_ID</b>: Specify one service ID.</p> </li> <li>
     * <p> <b>STATUS</b>: Specify one or more statuses: <code>SUBMITTED</code>,
     * <code>PENDING</code>, <code>SUCCEED</code>, or <code>FAIL</code>.</p> </li> <li>
     * <p> <b>TYPE</b>: Specify one or more of the following types:
     * <code>CREATE_NAMESPACE</code>, <code>DELETE_NAMESPACE</code>,
     * <code>UPDATE_SERVICE</code>, <code>REGISTER_INSTANCE</code>, or
     * <code>DEREGISTER_INSTANCE</code>.</p> </li> <li> <p> <b>UPDATE_DATE</b>: Specify
     * a start date and an end date in Unix date/time format and Coordinated Universal
     * Time (UTC). The start date must be the first value.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    OperationFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    OperationFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator that you want to use to determine whether an operation matches
     * the specified value. Valid values for condition include:</p> <ul> <li> <p>
     * <code>EQ</code>: When you specify <code>EQ</code> for the condition, you can
     * specify only one value. <code>EQ</code> is supported for
     * <code>NAMESPACE_ID</code>, <code>SERVICE_ID</code>, <code>STATUS</code>, and
     * <code>TYPE</code>. <code>EQ</code> is the default condition and can be
     * omitted.</p> </li> <li> <p> <code>IN</code>: When you specify <code>IN</code>
     * for the condition, you can specify a list of one or more values. <code>IN</code>
     * is supported for <code>STATUS</code> and <code>TYPE</code>. An operation must
     * match one of the specified values to be returned in the response.</p> </li> <li>
     * <p> <code>BETWEEN</code>: Specify a start date and an end date in Unix date/time
     * format and Coordinated Universal Time (UTC). The start date must be the first
     * value. <code>BETWEEN</code> is supported for <code>UPDATE_DATE</code>. </p>
     * </li> </ul>
     */
    inline FilterCondition GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(FilterCondition value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline OperationFilter& WithCondition(FilterCondition value) { SetCondition(value); return *this;}
    ///@}
  private:

    OperationFilterName m_name{OperationFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    FilterCondition m_condition{FilterCondition::NOT_SET};
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
