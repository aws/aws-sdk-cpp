/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the name and values of a manual DB snapshot attribute</p> <p>Manual
   * DB snapshot attributes are used to authorize other Amazon Web Services accounts
   * to restore a manual DB snapshot. For more information, see the
   * <code>ModifyDBSnapshotAttribute</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshotAttribute">AWS
   * API Reference</a></p>
   */
  class DBSnapshotAttribute
  {
  public:
    AWS_RDS_API DBSnapshotAttribute() = default;
    AWS_RDS_API DBSnapshotAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBSnapshotAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the manual DB snapshot attribute.</p> <p>The attribute named
     * <code>restore</code> refers to the list of Amazon Web Services accounts that
     * have permission to copy or restore the manual DB cluster snapshot. For more
     * information, see the <code>ModifyDBSnapshotAttribute</code> API action.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    DBSnapshotAttribute& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value or values for the manual DB snapshot attribute.</p> <p>If the
     * <code>AttributeName</code> field is set to <code>restore</code>, then this
     * element returns a list of IDs of the Amazon Web Services accounts that are
     * authorized to copy or restore the manual DB snapshot. If a value of
     * <code>all</code> is in the list, then the manual DB snapshot is public and
     * available for any Amazon Web Services account to copy or restore.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeValues() const { return m_attributeValues; }
    inline bool AttributeValuesHasBeenSet() const { return m_attributeValuesHasBeenSet; }
    template<typename AttributeValuesT = Aws::Vector<Aws::String>>
    void SetAttributeValues(AttributeValuesT&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues = std::forward<AttributeValuesT>(value); }
    template<typename AttributeValuesT = Aws::Vector<Aws::String>>
    DBSnapshotAttribute& WithAttributeValues(AttributeValuesT&& value) { SetAttributeValues(std::forward<AttributeValuesT>(value)); return *this;}
    template<typename AttributeValuesT = Aws::String>
    DBSnapshotAttribute& AddAttributeValues(AttributeValuesT&& value) { m_attributeValuesHasBeenSet = true; m_attributeValues.emplace_back(std::forward<AttributeValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeValues;
    bool m_attributeValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
