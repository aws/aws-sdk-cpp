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
    AWS_REDSHIFT_API NodeConfigurationOptionsFilter() = default;
    AWS_REDSHIFT_API NodeConfigurationOptionsFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API NodeConfigurationOptionsFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the element to filter.</p>
     */
    inline NodeConfigurationOptionsFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(NodeConfigurationOptionsFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline NodeConfigurationOptionsFilter& WithName(NodeConfigurationOptionsFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter operator. If filter Name is NodeType only the 'in' operator is
     * supported. Provide one value to evaluate for 'eq', 'lt', 'le', 'gt', and 'ge'.
     * Provide two values to evaluate for 'between'. Provide a list of values for
     * 'in'.</p>
     */
    inline OperatorType GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(OperatorType value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline NodeConfigurationOptionsFilter& WithOperator(OperatorType value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of values. Compare Name using Operator to Values. If filter Name is
     * NumberOfNodes, then values can range from 0 to 200. If filter Name is
     * EstimatedDiskUtilizationPercent, then values can range from 0 to 100. For
     * example, filter NumberOfNodes (name) GT (operator) 3 (values).</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    NodeConfigurationOptionsFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    NodeConfigurationOptionsFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    NodeConfigurationOptionsFilterName m_name{NodeConfigurationOptionsFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    OperatorType m_operator{OperatorType::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
