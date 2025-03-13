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
    AWS_REDSHIFT_API AttributeValueTarget() = default;
    AWS_REDSHIFT_API AttributeValueTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AttributeValueTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetAttributeValue() const { return m_attributeValue; }
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
    template<typename AttributeValueT = Aws::String>
    void SetAttributeValue(AttributeValueT&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::forward<AttributeValueT>(value); }
    template<typename AttributeValueT = Aws::String>
    AttributeValueTarget& WithAttributeValue(AttributeValueT&& value) { SetAttributeValue(std::forward<AttributeValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
