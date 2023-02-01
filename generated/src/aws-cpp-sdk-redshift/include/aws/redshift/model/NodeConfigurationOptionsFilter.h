/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/NodeConfigurationOptionsFilterName.h>
#include <aws/redshift/model/OperatorType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>A set of elements to filter the returned node configurations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/NodeConfigurationOptionsFilter">AWS
   * API Reference</a></p>
   */
  class NodeConfigurationOptionsFilter
  {
  public:
    AWS_REDSHIFT_API NodeConfigurationOptionsFilter();
    AWS_REDSHIFT_API NodeConfigurationOptionsFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API NodeConfigurationOptionsFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the element to filter.</p>
     */
    inline const NodeConfigurationOptionsFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the element to filter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the element to filter.</p>
     */
    inline void SetName(const NodeConfigurationOptionsFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the element to filter.</p>
     */
    inline void SetName(NodeConfigurationOptionsFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the element to filter.</p>
     */
    inline NodeConfigurationOptionsFilter& WithName(const NodeConfigurationOptionsFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the element to filter.</p>
     */
    inline NodeConfigurationOptionsFilter& WithName(NodeConfigurationOptionsFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The filter operator. If filter Name is NodeType only the 'in' operator is
     * supported. Provide one value to evaluate for 'eq', 'lt', 'le', 'gt', and 'ge'.
     * Provide two values to evaluate for 'between'. Provide a list of values for
     * 'in'.</p>
     */
    inline const OperatorType& GetOperator() const{ return m_operator; }

    /**
     * <p>The filter operator. If filter Name is NodeType only the 'in' operator is
     * supported. Provide one value to evaluate for 'eq', 'lt', 'le', 'gt', and 'ge'.
     * Provide two values to evaluate for 'between'. Provide a list of values for
     * 'in'.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The filter operator. If filter Name is NodeType only the 'in' operator is
     * supported. Provide one value to evaluate for 'eq', 'lt', 'le', 'gt', and 'ge'.
     * Provide two values to evaluate for 'between'. Provide a list of values for
     * 'in'.</p>
     */
    inline void SetOperator(const OperatorType& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The filter operator. If filter Name is NodeType only the 'in' operator is
     * supported. Provide one value to evaluate for 'eq', 'lt', 'le', 'gt', and 'ge'.
     * Provide two values to evaluate for 'between'. Provide a list of values for
     * 'in'.</p>
     */
    inline void SetOperator(OperatorType&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The filter operator. If filter Name is NodeType only the 'in' operator is
     * supported. Provide one value to evaluate for 'eq', 'lt', 'le', 'gt', and 'ge'.
     * Provide two values to evaluate for 'between'. Provide a list of values for
     * 'in'.</p>
     */
    inline NodeConfigurationOptionsFilter& WithOperator(const OperatorType& value) { SetOperator(value); return *this;}

    /**
     * <p>The filter operator. If filter Name is NodeType only the 'in' operator is
     * supported. Provide one value to evaluate for 'eq', 'lt', 'le', 'gt', and 'ge'.
     * Provide two values to evaluate for 'between'. Provide a list of values for
     * 'in'.</p>
     */
    inline NodeConfigurationOptionsFilter& WithOperator(OperatorType&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline NodeConfigurationOptionsFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline NodeConfigurationOptionsFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline NodeConfigurationOptionsFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline NodeConfigurationOptionsFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline NodeConfigurationOptionsFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    NodeConfigurationOptionsFilterName m_name;
    bool m_nameHasBeenSet = false;

    OperatorType m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
