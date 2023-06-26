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
    AWS_PINPOINT_API AttributeDimension();
    AWS_PINPOINT_API AttributeDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API AttributeDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const AttributeType& GetAttributeType() const{ return m_attributeType; }

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
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

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
    inline void SetAttributeType(const AttributeType& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

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
    inline void SetAttributeType(AttributeType&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

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
    inline AttributeDimension& WithAttributeType(const AttributeType& value) { SetAttributeType(value); return *this;}

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
    inline AttributeDimension& WithAttributeType(AttributeType&& value) { SetAttributeType(std::move(value)); return *this;}


    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The criteria values to use for the segment dimension. Depending on the value
     * of the AttributeType property, endpoints are included or excluded from the
     * segment if their attribute values match the criteria values.</p>
     */
    inline AttributeDimension& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    AttributeType m_attributeType;
    bool m_attributeTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
