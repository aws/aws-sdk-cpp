/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/DocumentAttribute.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The filter criteria used on responses based on document attributes or
   * metadata fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/AttributeFilter">AWS
   * API Reference</a></p>
   */
  class AttributeFilter
  {
  public:
    AWS_QAPPS_API AttributeFilter();
    AWS_QAPPS_API AttributeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API AttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Performs a logical <code>AND</code> operation on all supplied filters.</p>
     */
    inline const Aws::Vector<AttributeFilter>& GetAndAllFilters() const{ return m_andAllFilters; }
    inline bool AndAllFiltersHasBeenSet() const { return m_andAllFiltersHasBeenSet; }
    inline void SetAndAllFilters(const Aws::Vector<AttributeFilter>& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters = value; }
    inline void SetAndAllFilters(Aws::Vector<AttributeFilter>&& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters = std::move(value); }
    inline AttributeFilter& WithAndAllFilters(const Aws::Vector<AttributeFilter>& value) { SetAndAllFilters(value); return *this;}
    inline AttributeFilter& WithAndAllFilters(Aws::Vector<AttributeFilter>&& value) { SetAndAllFilters(std::move(value)); return *this;}
    inline AttributeFilter& AddAndAllFilters(const AttributeFilter& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters.push_back(value); return *this; }
    inline AttributeFilter& AddAndAllFilters(AttributeFilter&& value) { m_andAllFiltersHasBeenSet = true; m_andAllFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Performs a logical <code>OR</code> operation on all supplied filters. </p>
     */
    inline const Aws::Vector<AttributeFilter>& GetOrAllFilters() const{ return m_orAllFilters; }
    inline bool OrAllFiltersHasBeenSet() const { return m_orAllFiltersHasBeenSet; }
    inline void SetOrAllFilters(const Aws::Vector<AttributeFilter>& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters = value; }
    inline void SetOrAllFilters(Aws::Vector<AttributeFilter>&& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters = std::move(value); }
    inline AttributeFilter& WithOrAllFilters(const Aws::Vector<AttributeFilter>& value) { SetOrAllFilters(value); return *this;}
    inline AttributeFilter& WithOrAllFilters(Aws::Vector<AttributeFilter>&& value) { SetOrAllFilters(std::move(value)); return *this;}
    inline AttributeFilter& AddOrAllFilters(const AttributeFilter& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters.push_back(value); return *this; }
    inline AttributeFilter& AddOrAllFilters(AttributeFilter&& value) { m_orAllFiltersHasBeenSet = true; m_orAllFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Performs a logical <code>NOT</code> operation on all supplied filters. </p>
     */
    AWS_QAPPS_API const AttributeFilter& GetNotFilter() const;
    AWS_QAPPS_API bool NotFilterHasBeenSet() const;
    AWS_QAPPS_API void SetNotFilter(const AttributeFilter& value);
    AWS_QAPPS_API void SetNotFilter(AttributeFilter&& value);
    AWS_QAPPS_API AttributeFilter& WithNotFilter(const AttributeFilter& value);
    AWS_QAPPS_API AttributeFilter& WithNotFilter(AttributeFilter&& value);
    ///@}

    ///@{
    /**
     * <p>Performs an <i>equals</i> operation on two document attributes or metadata
     * fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>dateValue</code>, <code>longValue</code>,
     * <code>stringListValue</code> and <code>stringValue</code>.</p>
     */
    inline const DocumentAttribute& GetEqualsTo() const{ return m_equalsTo; }
    inline bool EqualsToHasBeenSet() const { return m_equalsToHasBeenSet; }
    inline void SetEqualsTo(const DocumentAttribute& value) { m_equalsToHasBeenSet = true; m_equalsTo = value; }
    inline void SetEqualsTo(DocumentAttribute&& value) { m_equalsToHasBeenSet = true; m_equalsTo = std::move(value); }
    inline AttributeFilter& WithEqualsTo(const DocumentAttribute& value) { SetEqualsTo(value); return *this;}
    inline AttributeFilter& WithEqualsTo(DocumentAttribute&& value) { SetEqualsTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns <code>true</code> when a document contains all the specified document
     * attributes or metadata fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>stringListValue</code>.</p>
     */
    inline const DocumentAttribute& GetContainsAll() const{ return m_containsAll; }
    inline bool ContainsAllHasBeenSet() const { return m_containsAllHasBeenSet; }
    inline void SetContainsAll(const DocumentAttribute& value) { m_containsAllHasBeenSet = true; m_containsAll = value; }
    inline void SetContainsAll(DocumentAttribute&& value) { m_containsAllHasBeenSet = true; m_containsAll = std::move(value); }
    inline AttributeFilter& WithContainsAll(const DocumentAttribute& value) { SetContainsAll(value); return *this;}
    inline AttributeFilter& WithContainsAll(DocumentAttribute&& value) { SetContainsAll(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns <code>true</code> when a document contains any of the specified
     * document attributes or metadata fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>stringListValue</code>.</p>
     */
    inline const DocumentAttribute& GetContainsAny() const{ return m_containsAny; }
    inline bool ContainsAnyHasBeenSet() const { return m_containsAnyHasBeenSet; }
    inline void SetContainsAny(const DocumentAttribute& value) { m_containsAnyHasBeenSet = true; m_containsAny = value; }
    inline void SetContainsAny(DocumentAttribute&& value) { m_containsAnyHasBeenSet = true; m_containsAny = std::move(value); }
    inline AttributeFilter& WithContainsAny(const DocumentAttribute& value) { SetContainsAny(value); return *this;}
    inline AttributeFilter& WithContainsAny(DocumentAttribute&& value) { SetContainsAny(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a <i>greater than</i> operation on two document attributes or
     * metadata fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>dateValue</code> and
     * <code>longValue</code>.</p>
     */
    inline const DocumentAttribute& GetGreaterThan() const{ return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    inline void SetGreaterThan(const DocumentAttribute& value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }
    inline void SetGreaterThan(DocumentAttribute&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::move(value); }
    inline AttributeFilter& WithGreaterThan(const DocumentAttribute& value) { SetGreaterThan(value); return *this;}
    inline AttributeFilter& WithGreaterThan(DocumentAttribute&& value) { SetGreaterThan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a <i>greater than or equals</i> operation on two document attributes
     * or metadata fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>dateValue</code> and <code>longValue</code>.
     * </p>
     */
    inline const DocumentAttribute& GetGreaterThanOrEquals() const{ return m_greaterThanOrEquals; }
    inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }
    inline void SetGreaterThanOrEquals(const DocumentAttribute& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = value; }
    inline void SetGreaterThanOrEquals(DocumentAttribute&& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = std::move(value); }
    inline AttributeFilter& WithGreaterThanOrEquals(const DocumentAttribute& value) { SetGreaterThanOrEquals(value); return *this;}
    inline AttributeFilter& WithGreaterThanOrEquals(DocumentAttribute&& value) { SetGreaterThanOrEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a <i>less than</i> operation on two document attributes or metadata
     * fields. Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value types</a>: <code>dateValue</code> and
     * <code>longValue</code>.</p>
     */
    inline const DocumentAttribute& GetLessThan() const{ return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    inline void SetLessThan(const DocumentAttribute& value) { m_lessThanHasBeenSet = true; m_lessThan = value; }
    inline void SetLessThan(DocumentAttribute&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::move(value); }
    inline AttributeFilter& WithLessThan(const DocumentAttribute& value) { SetLessThan(value); return *this;}
    inline AttributeFilter& WithLessThan(DocumentAttribute&& value) { SetLessThan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a <i>less than or equals</i> operation on two document attributes or
     * metadata fields.Supported for the following <a
     * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeValue.html">document
     * attribute value type</a>: <code>dateValue</code> and <code>longValue</code>.
     * </p>
     */
    inline const DocumentAttribute& GetLessThanOrEquals() const{ return m_lessThanOrEquals; }
    inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }
    inline void SetLessThanOrEquals(const DocumentAttribute& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = value; }
    inline void SetLessThanOrEquals(DocumentAttribute&& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = std::move(value); }
    inline AttributeFilter& WithLessThanOrEquals(const DocumentAttribute& value) { SetLessThanOrEquals(value); return *this;}
    inline AttributeFilter& WithLessThanOrEquals(DocumentAttribute&& value) { SetLessThanOrEquals(std::move(value)); return *this;}
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
} // namespace QApps
} // namespace Aws
