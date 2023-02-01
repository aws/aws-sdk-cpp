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

  class DeletableItem
  {
  public:
    AWS_SIMPLEDB_API DeletableItem();
    AWS_SIMPLEDB_API DeletableItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API DeletableItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline DeletableItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline DeletableItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline DeletableItem& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    
    inline DeletableItem& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    
    inline DeletableItem& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    
    inline DeletableItem& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    
    inline DeletableItem& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
