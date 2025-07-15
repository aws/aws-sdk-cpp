/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/model/FilterType.h>
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
namespace Pricing
{
namespace Model
{

  /**
   * <p>The constraints that you want all returned products to match.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_PRICING_API Filter() = default;
    AWS_PRICING_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of filter that you want to use.</p> <p>Valid values are:</p> <ul>
     * <li> <p> <code>TERM_MATCH</code>: Returns only products that match both the
     * given filter field and the given value.</p> </li> <li> <p> <code>EQUALS</code>:
     * Returns products that have a field value exactly matching the provided
     * value.</p> </li> <li> <p> <code>CONTAINS</code>: Returns products where the
     * field value contains the provided value as a substring.</p> </li> <li> <p>
     * <code>ANY_OF</code>: Returns products where the field value is any of the
     * provided values.</p> </li> <li> <p> <code>NONE_OF</code>: Returns products where
     * the field value is not any of the provided values.</p> </li> </ul>
     */
    inline FilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Filter& WithType(FilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product metadata field that you want to filter on. You can filter by just
     * the service code to see all products for a specific service, filter by just the
     * attribute name to see a specific attribute for multiple services, or use both a
     * service code and an attribute name to retrieve only products that match both
     * fields.</p> <p>Valid values include: <code>ServiceCode</code>, and all attribute
     * names</p> <p>For example, you can filter by the <code>AmazonEC2</code> service
     * code and the <code>volumeType</code> attribute name to get the prices for only
     * Amazon EC2 volumes.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    Filter& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service code or attribute value that you want to filter by. If you're
     * filtering by service code this is the actual service code, such as
     * <code>AmazonEC2</code>. If you're filtering by attribute name, this is the
     * attribute value that you want the returned products to match, such as a
     * <code>Provisioned IOPS</code> volume.</p> <p>For <code>ANY_OF</code> and
     * <code>NONE_OF</code> filter types, you can provide multiple values as a
     * comma-separated string. For example, <code>t2.micro,t2.small,t2.medium</code> or
     * <code>Compute optimized, GPU instance, Micro instances</code>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Filter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    FilterType m_type{FilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
