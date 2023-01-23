/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/NamespaceFilterName.h>
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
   * <p>A complex type that identifies the namespaces that you want to list. You can
   * choose to list public or private namespaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/NamespaceFilter">AWS
   * API Reference</a></p>
   */
  class NamespaceFilter
  {
  public:
    AWS_SERVICEDISCOVERY_API NamespaceFilter();
    AWS_SERVICEDISCOVERY_API NamespaceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API NamespaceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the namespaces that you want to get using one of the following.</p>
     * <ul> <li> <p> <code>TYPE</code>: Gets the namespaces of the specified type.</p>
     * </li> <li> <p> <code>NAME</code>: Gets the namespaces with the specified
     * name.</p> </li> <li> <p> <code>HTTP_NAME</code>: Gets the namespaces with the
     * specified HTTP name.</p> </li> </ul>
     */
    inline const NamespaceFilterName& GetName() const{ return m_name; }

    /**
     * <p>Specify the namespaces that you want to get using one of the following.</p>
     * <ul> <li> <p> <code>TYPE</code>: Gets the namespaces of the specified type.</p>
     * </li> <li> <p> <code>NAME</code>: Gets the namespaces with the specified
     * name.</p> </li> <li> <p> <code>HTTP_NAME</code>: Gets the namespaces with the
     * specified HTTP name.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specify the namespaces that you want to get using one of the following.</p>
     * <ul> <li> <p> <code>TYPE</code>: Gets the namespaces of the specified type.</p>
     * </li> <li> <p> <code>NAME</code>: Gets the namespaces with the specified
     * name.</p> </li> <li> <p> <code>HTTP_NAME</code>: Gets the namespaces with the
     * specified HTTP name.</p> </li> </ul>
     */
    inline void SetName(const NamespaceFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specify the namespaces that you want to get using one of the following.</p>
     * <ul> <li> <p> <code>TYPE</code>: Gets the namespaces of the specified type.</p>
     * </li> <li> <p> <code>NAME</code>: Gets the namespaces with the specified
     * name.</p> </li> <li> <p> <code>HTTP_NAME</code>: Gets the namespaces with the
     * specified HTTP name.</p> </li> </ul>
     */
    inline void SetName(NamespaceFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specify the namespaces that you want to get using one of the following.</p>
     * <ul> <li> <p> <code>TYPE</code>: Gets the namespaces of the specified type.</p>
     * </li> <li> <p> <code>NAME</code>: Gets the namespaces with the specified
     * name.</p> </li> <li> <p> <code>HTTP_NAME</code>: Gets the namespaces with the
     * specified HTTP name.</p> </li> </ul>
     */
    inline NamespaceFilter& WithName(const NamespaceFilterName& value) { SetName(value); return *this;}

    /**
     * <p>Specify the namespaces that you want to get using one of the following.</p>
     * <ul> <li> <p> <code>TYPE</code>: Gets the namespaces of the specified type.</p>
     * </li> <li> <p> <code>NAME</code>: Gets the namespaces with the specified
     * name.</p> </li> <li> <p> <code>HTTP_NAME</code>: Gets the namespaces with the
     * specified HTTP name.</p> </li> </ul>
     */
    inline NamespaceFilter& WithName(NamespaceFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline NamespaceFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline NamespaceFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline NamespaceFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline NamespaceFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify the values that are applicable to the value that you specify for
     * <code>Name</code>.</p> <ul> <li> <p> <code>TYPE</code>: Specify
     * <code>HTTP</code>, <code>DNS_PUBLIC</code>, or <code>DNS_PRIVATE</code>.</p>
     * </li> <li> <p> <code>NAME</code>: Specify the name of the namespace, which is
     * found in <code>Namespace.Name</code>.</p> </li> <li> <p> <code>HTTP_NAME</code>:
     * Specify the HTTP name of the namespace, which is found in
     * <code>Namespace.Properties.HttpProperties.HttpName</code>.</p> </li> </ul>
     */
    inline NamespaceFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>Specify the operator that you want to use to determine whether a namespace
     * matches the specified value. Valid values for <code>Condition</code> are one of
     * the following.</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code> for <code>Condition</code>, you can specify only one value.
     * <code>EQ</code> is supported for <code>TYPE</code>, <code>NAME</code>, and
     * <code>HTTP_NAME</code>. <code>EQ</code> is the default condition and can be
     * omitted.</p> </li> <li> <p> <code>BEGINS_WITH</code>: When you specify
     * <code>BEGINS_WITH</code> for <code>Condition</code>, you can specify only one
     * value. <code>BEGINS_WITH</code> is supported for <code>TYPE</code>,
     * <code>NAME</code>, and <code>HTTP_NAME</code>.</p> </li> </ul>
     */
    inline const FilterCondition& GetCondition() const{ return m_condition; }

    /**
     * <p>Specify the operator that you want to use to determine whether a namespace
     * matches the specified value. Valid values for <code>Condition</code> are one of
     * the following.</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code> for <code>Condition</code>, you can specify only one value.
     * <code>EQ</code> is supported for <code>TYPE</code>, <code>NAME</code>, and
     * <code>HTTP_NAME</code>. <code>EQ</code> is the default condition and can be
     * omitted.</p> </li> <li> <p> <code>BEGINS_WITH</code>: When you specify
     * <code>BEGINS_WITH</code> for <code>Condition</code>, you can specify only one
     * value. <code>BEGINS_WITH</code> is supported for <code>TYPE</code>,
     * <code>NAME</code>, and <code>HTTP_NAME</code>.</p> </li> </ul>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>Specify the operator that you want to use to determine whether a namespace
     * matches the specified value. Valid values for <code>Condition</code> are one of
     * the following.</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code> for <code>Condition</code>, you can specify only one value.
     * <code>EQ</code> is supported for <code>TYPE</code>, <code>NAME</code>, and
     * <code>HTTP_NAME</code>. <code>EQ</code> is the default condition and can be
     * omitted.</p> </li> <li> <p> <code>BEGINS_WITH</code>: When you specify
     * <code>BEGINS_WITH</code> for <code>Condition</code>, you can specify only one
     * value. <code>BEGINS_WITH</code> is supported for <code>TYPE</code>,
     * <code>NAME</code>, and <code>HTTP_NAME</code>.</p> </li> </ul>
     */
    inline void SetCondition(const FilterCondition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>Specify the operator that you want to use to determine whether a namespace
     * matches the specified value. Valid values for <code>Condition</code> are one of
     * the following.</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code> for <code>Condition</code>, you can specify only one value.
     * <code>EQ</code> is supported for <code>TYPE</code>, <code>NAME</code>, and
     * <code>HTTP_NAME</code>. <code>EQ</code> is the default condition and can be
     * omitted.</p> </li> <li> <p> <code>BEGINS_WITH</code>: When you specify
     * <code>BEGINS_WITH</code> for <code>Condition</code>, you can specify only one
     * value. <code>BEGINS_WITH</code> is supported for <code>TYPE</code>,
     * <code>NAME</code>, and <code>HTTP_NAME</code>.</p> </li> </ul>
     */
    inline void SetCondition(FilterCondition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>Specify the operator that you want to use to determine whether a namespace
     * matches the specified value. Valid values for <code>Condition</code> are one of
     * the following.</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code> for <code>Condition</code>, you can specify only one value.
     * <code>EQ</code> is supported for <code>TYPE</code>, <code>NAME</code>, and
     * <code>HTTP_NAME</code>. <code>EQ</code> is the default condition and can be
     * omitted.</p> </li> <li> <p> <code>BEGINS_WITH</code>: When you specify
     * <code>BEGINS_WITH</code> for <code>Condition</code>, you can specify only one
     * value. <code>BEGINS_WITH</code> is supported for <code>TYPE</code>,
     * <code>NAME</code>, and <code>HTTP_NAME</code>.</p> </li> </ul>
     */
    inline NamespaceFilter& WithCondition(const FilterCondition& value) { SetCondition(value); return *this;}

    /**
     * <p>Specify the operator that you want to use to determine whether a namespace
     * matches the specified value. Valid values for <code>Condition</code> are one of
     * the following.</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code> for <code>Condition</code>, you can specify only one value.
     * <code>EQ</code> is supported for <code>TYPE</code>, <code>NAME</code>, and
     * <code>HTTP_NAME</code>. <code>EQ</code> is the default condition and can be
     * omitted.</p> </li> <li> <p> <code>BEGINS_WITH</code>: When you specify
     * <code>BEGINS_WITH</code> for <code>Condition</code>, you can specify only one
     * value. <code>BEGINS_WITH</code> is supported for <code>TYPE</code>,
     * <code>NAME</code>, and <code>HTTP_NAME</code>.</p> </li> </ul>
     */
    inline NamespaceFilter& WithCondition(FilterCondition&& value) { SetCondition(std::move(value)); return *this;}

  private:

    NamespaceFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    FilterCondition m_condition;
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
