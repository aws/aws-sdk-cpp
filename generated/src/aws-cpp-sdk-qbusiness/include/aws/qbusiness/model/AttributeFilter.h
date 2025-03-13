/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DocumentAttribute.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Enables filtering of responses based on document attributes or metadata
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AttributeFilter">AWS
   * API Reference</a></p>
   */
  class AttributeFilter
  {
  public:
    AWS_QBUSINESS_API AttributeFilter() = default;
    AWS_QBUSINESS_API AttributeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline const Aws::Vector<AttributeFilter>& GetAndAllFilters() const { return m_andAllFilters; }
    inline bool AndAllFiltersHasBeenSet() const { return m_andAllFiltersHasBeenSet; }
    template<typename AndAllFiltersT = Aws::Vector<AttributeFilter>>
    void SetAndAllFilters(AndAllFiltersT&& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters = std::forward<AndAllFiltersT>(value); }
    template<typename AndAllFiltersT = Aws::Vector<AttributeFilter>>
    AttributeFilter& WithAndAllFilters(AndAllFiltersT&& value) { SetAndAllFilters(std::forward<AndAllFiltersT>(value)); return *this;}
    template<typename AndAllFiltersT = AttributeFilter>
    AttributeFilter& AddAndAllFilters(AndAllFiltersT&& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters.emplace_back(std::forward<AndAllFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Performs a logical <code>OR</code> operation on all supplied filters. </p>
     */
    inline const Aws::Vector<AttributeFilter>& GetOrAllFilters() const { return m_orAllFilters; }
    inline bool OrAllFiltersHasBeenSet() const { return m_orAllFiltersHasBeenSet; }
    template<typename OrAllFiltersT = Aws::Vector<AttributeFilter>>
    void SetOrAllFilters(OrAllFiltersT&& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters = std::forward<OrAllFiltersT>(value); }
    template<typename OrAllFiltersT = Aws::Vector<AttributeFilter>>
    AttributeFilter& WithOrAllFilters(OrAllFiltersT&& value) { SetOrAllFilters(std::forward<OrAllFiltersT>(value)); return *this;}
    template<typename OrAllFiltersT = AttributeFilter>
    AttributeFilter& AddOrAllFilters(OrAllFiltersT&& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters.emplace_back(std::forward<OrAllFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Performs a logical <code>NOT</code> operation on all supplied filters. </p>
     */
    inline const AttributeFilter& GetNotFilter() const{
      return *m_notFilter;
    }
    inline bool NotFilterHasBeenSet() const { return m_notFilterHasBeenSet; }
    template<typename NotFilterT = AttributeFilter>
    void SetNotFilter(NotFilterT&& value) {
      m_notFilterHasBeenSet = true; 
      m_notFilter = Aws::MakeShared<AttributeFilter>("AttributeFilter", std::forward<NotFilterT>(value));
    }
    template<typename NotFilterT = AttributeFilter>
    AttributeFilter& WithNotFilter(NotFilterT&& value) { SetNotFilter(std::forward<NotFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs an equals operation on two document attributes or metadata fields.
     * Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>dateValue</code>, <code>longValue</code>,
     * <code>stringListValue</code> and <code>stringValue</code>.</p>
     */
    inline const DocumentAttribute& GetEqualsTo() const { return m_equalsTo; }
    inline bool EqualsToHasBeenSet() const { return m_equalsToHasBeenSet; }
    template<typename EqualsToT = DocumentAttribute>
    void SetEqualsTo(EqualsToT&& value) { m_equalsToHasBeenSet = true; m_equalsTo = std::forward<EqualsToT>(value); }
    template<typename EqualsToT = DocumentAttribute>
    AttributeFilter& WithEqualsTo(EqualsToT&& value) { SetEqualsTo(std::forward<EqualsToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns <code>true</code> when a document contains all the specified document
     * attributes or metadata fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>stringListValue</code>.</p>
     */
    inline const DocumentAttribute& GetContainsAll() const { return m_containsAll; }
    inline bool ContainsAllHasBeenSet() const { return m_containsAllHasBeenSet; }
    template<typename ContainsAllT = DocumentAttribute>
    void SetContainsAll(ContainsAllT&& value) { m_containsAllHasBeenSet = true; m_containsAll = std::forward<ContainsAllT>(value); }
    template<typename ContainsAllT = DocumentAttribute>
    AttributeFilter& WithContainsAll(ContainsAllT&& value) { SetContainsAll(std::forward<ContainsAllT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns <code>true</code> when a document contains any of the specified
     * document attributes or metadata fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>stringListValue</code>.</p>
     */
    inline const DocumentAttribute& GetContainsAny() const { return m_containsAny; }
    inline bool ContainsAnyHasBeenSet() const { return m_containsAnyHasBeenSet; }
    template<typename ContainsAnyT = DocumentAttribute>
    void SetContainsAny(ContainsAnyT&& value) { m_containsAnyHasBeenSet = true; m_containsAny = std::forward<ContainsAnyT>(value); }
    template<typename ContainsAnyT = DocumentAttribute>
    AttributeFilter& WithContainsAny(ContainsAnyT&& value) { SetContainsAny(std::forward<ContainsAnyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a greater than operation on two document attributes or metadata
     * fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>dateValue</code> and
     * <code>longValue</code>.</p>
     */
    inline const DocumentAttribute& GetGreaterThan() const { return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    template<typename GreaterThanT = DocumentAttribute>
    void SetGreaterThan(GreaterThanT&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::forward<GreaterThanT>(value); }
    template<typename GreaterThanT = DocumentAttribute>
    AttributeFilter& WithGreaterThan(GreaterThanT&& value) { SetGreaterThan(std::forward<GreaterThanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a greater or equals than operation on two document attributes or
     * metadata fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>dateValue</code> and <code>longValue</code>.
     * </p>
     */
    inline const DocumentAttribute& GetGreaterThanOrEquals() const { return m_greaterThanOrEquals; }
    inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }
    template<typename GreaterThanOrEqualsT = DocumentAttribute>
    void SetGreaterThanOrEquals(GreaterThanOrEqualsT&& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = std::forward<GreaterThanOrEqualsT>(value); }
    template<typename GreaterThanOrEqualsT = DocumentAttribute>
    AttributeFilter& WithGreaterThanOrEquals(GreaterThanOrEqualsT&& value) { SetGreaterThanOrEquals(std::forward<GreaterThanOrEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a less than operation on two document attributes or metadata fields.
     * Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>dateValue</code> and
     * <code>longValue</code>.</p>
     */
    inline const DocumentAttribute& GetLessThan() const { return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    template<typename LessThanT = DocumentAttribute>
    void SetLessThan(LessThanT&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::forward<LessThanT>(value); }
    template<typename LessThanT = DocumentAttribute>
    AttributeFilter& WithLessThan(LessThanT&& value) { SetLessThan(std::forward<LessThanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a less than or equals operation on two document attributes or
     * metadata fields.Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value type</a>: <code>dateValue</code> and <code>longValue</code>.
     * </p>
     */
    inline const DocumentAttribute& GetLessThanOrEquals() const { return m_lessThanOrEquals; }
    inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }
    template<typename LessThanOrEqualsT = DocumentAttribute>
    void SetLessThanOrEquals(LessThanOrEqualsT&& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = std::forward<LessThanOrEqualsT>(value); }
    template<typename LessThanOrEqualsT = DocumentAttribute>
    AttributeFilter& WithLessThanOrEquals(LessThanOrEqualsT&& value) { SetLessThanOrEquals(std::forward<LessThanOrEqualsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeFilter> m_andAllFilters;
    bool m_andAllFiltersHasBeenSet = false;

    Aws::Vector<AttributeFilter> m_orAllFilters;
    bool m_orAllFiltersHasBeenSet = false;

    std::shared_ptr<AttributeFilter> m_notFilter;
    bool m_notFilterHasBeenSet = false;

    DocumentAttribute m_equalsTo;
    bool m_equalsToHasBeenSet = false;

    DocumentAttribute m_containsAll;
    bool m_containsAllHasBeenSet = false;

    DocumentAttribute m_containsAny;
    bool m_containsAnyHasBeenSet = false;

    DocumentAttribute m_greaterThan;
    bool m_greaterThanHasBeenSet = false;

    DocumentAttribute m_greaterThanOrEquals;
    bool m_greaterThanOrEqualsHasBeenSet = false;

    DocumentAttribute m_lessThan;
    bool m_lessThanHasBeenSet = false;

    DocumentAttribute m_lessThanOrEquals;
    bool m_lessThanOrEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
