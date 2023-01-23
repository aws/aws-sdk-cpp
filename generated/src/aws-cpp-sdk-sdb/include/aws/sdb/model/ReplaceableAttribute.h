/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
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
namespace SimpleDB
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/ReplaceableAttribute">AWS
   * API Reference</a></p>
   */
  class ReplaceableAttribute
  {
  public:
    AWS_SIMPLEDB_API ReplaceableAttribute();
    AWS_SIMPLEDB_API ReplaceableAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API ReplaceableAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * The name of the replaceable attribute.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the replaceable attribute.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the replaceable attribute.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the replaceable attribute.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the replaceable attribute.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The value of the replaceable attribute.
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * The value of the replaceable attribute.
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * The value of the replaceable attribute.
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * The value of the replaceable attribute.
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * The value of the replaceable attribute.
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * The value of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * The value of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * The value of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * A flag specifying whether or not to replace the attribute/value pair or to add a
     * new attribute/value pair. The default setting is <code>false</code>.
     */
    inline bool GetReplace() const{ return m_replace; }

    /**
     * A flag specifying whether or not to replace the attribute/value pair or to add a
     * new attribute/value pair. The default setting is <code>false</code>.
     */
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }

    /**
     * A flag specifying whether or not to replace the attribute/value pair or to add a
     * new attribute/value pair. The default setting is <code>false</code>.
     */
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }

    /**
     * A flag specifying whether or not to replace the attribute/value pair or to add a
     * new attribute/value pair. The default setting is <code>false</code>.
     */
    inline ReplaceableAttribute& WithReplace(bool value) { SetReplace(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_replace;
    bool m_replaceHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
