/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p>Describes an attribute value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AttributeValueTarget">AWS
   * API Reference</a></p>
   */
  class AttributeValueTarget
  {
  public:
    AWS_REDSHIFT_API AttributeValueTarget();
    AWS_REDSHIFT_API AttributeValueTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AttributeValueTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline AttributeValueTarget& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline AttributeValueTarget& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline AttributeValueTarget& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
