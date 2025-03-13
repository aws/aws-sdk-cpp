/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/AttributeType.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies attribute-based criteria for including or excluding endpoints from
   * a segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/AttributeDimension">AWS
   * API Reference</a></p>
   */
  class AttributeDimension
  {
  public:
    AWS_PINPOINT_API AttributeDimension() = default;
    AWS_PINPOINT_API AttributeDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API AttributeDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of segment dimension to use. Valid values are: <ul><li>INCLUSIVE -
     * endpoints that have attributes matching the values are included in the
     * segment.</li><li>EXCLUSIVE - endpoints that have attributes matching the values
     * are excluded in the segment.</li><li>CONTAINS - endpoints that have attributes'
     * substrings match the values are included in the segment.</li><li>BEFORE -
     * endpoints with attributes read as ISO_INSTANT datetimes before the value are
     * included in the segment.</li><li>AFTER - endpoints with attributes read as
     * ISO_INSTANT datetimes after the value are included in the segment.</li><li>ON -
     * endpoints with attributes read as ISO_INSTANT dates on the value are included in
     * the segment. Time is ignored in this comparison.</li><li>BETWEEN - endpoints
     * with attributes read as ISO_INSTANT datetimes between the values are included in
     * the segment.</li></p>
     */
    inline AttributeType GetAttributeType() const { return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(AttributeType value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline AttributeDimension& WithAttributeType(AttributeType value) { SetAttributeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    AttributeDimension& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    AttributeDimension& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    AttributeType m_attributeType{AttributeType::NOT_SET};
    bool m_attributeTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
