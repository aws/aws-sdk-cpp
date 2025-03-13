/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sdb/model/Attribute.h>
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
namespace SimpleDB
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/Item">AWS API
   * Reference</a></p>
   */
  class Item
  {
  public:
    AWS_SIMPLEDB_API Item() = default;
    AWS_SIMPLEDB_API Item(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API Item& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * The name of the item.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Item& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p></p>
     */
    inline const Aws::String& GetAlternateNameEncoding() const { return m_alternateNameEncoding; }
    inline bool AlternateNameEncodingHasBeenSet() const { return m_alternateNameEncodingHasBeenSet; }
    template<typename AlternateNameEncodingT = Aws::String>
    void SetAlternateNameEncoding(AlternateNameEncodingT&& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = std::forward<AlternateNameEncodingT>(value); }
    template<typename AlternateNameEncodingT = Aws::String>
    Item& WithAlternateNameEncoding(AlternateNameEncodingT&& value) { SetAlternateNameEncoding(std::forward<AlternateNameEncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of attributes.
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    Item& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    Item& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_alternateNameEncoding;
    bool m_alternateNameEncodingHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
