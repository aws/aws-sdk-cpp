/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ListDomainsAttributeName.h>
#include <aws/route53domains/model/Operator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Information for the filtering of a list of domains returned by <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains__ListDomains.html">ListDomains</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/FilterCondition">AWS
   * API Reference</a></p>
   */
  class FilterCondition
  {
  public:
    AWS_ROUTE53DOMAINS_API FilterCondition() = default;
    AWS_ROUTE53DOMAINS_API FilterCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API FilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the field which should be used for filtering the list of domains.</p>
     */
    inline ListDomainsAttributeName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ListDomainsAttributeName value) { m_nameHasBeenSet = true; m_name = value; }
    inline FilterCondition& WithName(ListDomainsAttributeName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator values for filtering domain names. The values can be:</p> <ul>
     * <li> <p> <code>LE</code>: Less than, or equal to</p> </li> <li> <p>
     * <code>GE</code>: Greater than, or equal to</p> </li> <li> <p>
     * <code>BEGINS_WITH</code>: Begins with</p> </li> </ul>
     */
    inline Operator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(Operator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline FilterCondition& WithOperator(Operator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of strings presenting values to compare. Only 1 item in the list is
     * currently supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    FilterCondition& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    FilterCondition& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    ListDomainsAttributeName m_name{ListDomainsAttributeName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Operator m_operator{Operator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
