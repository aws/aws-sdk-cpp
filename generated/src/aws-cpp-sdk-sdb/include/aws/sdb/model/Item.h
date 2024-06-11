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
    AWS_SIMPLEDB_API Item();
    AWS_SIMPLEDB_API Item(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API Item& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * The name of the item.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Item& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Item& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Item& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p></p>
     */
    inline const Aws::String& GetAlternateNameEncoding() const{ return m_alternateNameEncoding; }
    inline bool AlternateNameEncodingHasBeenSet() const { return m_alternateNameEncodingHasBeenSet; }
    inline void SetAlternateNameEncoding(const Aws::String& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = value; }
    inline void SetAlternateNameEncoding(Aws::String&& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = std::move(value); }
    inline void SetAlternateNameEncoding(const char* value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding.assign(value); }
    inline Item& WithAlternateNameEncoding(const Aws::String& value) { SetAlternateNameEncoding(value); return *this;}
    inline Item& WithAlternateNameEncoding(Aws::String&& value) { SetAlternateNameEncoding(std::move(value)); return *this;}
    inline Item& WithAlternateNameEncoding(const char* value) { SetAlternateNameEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of attributes.
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Item& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}
    inline Item& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline Item& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline Item& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
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
