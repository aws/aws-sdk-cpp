/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Metadata assigned to an Amazon RDS resource consisting of a key-value
   * pair.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
   * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_RDS_API Tag();
    AWS_RDS_API Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A value is the optional value of the tag. The string value can be from 1 to
     * 256 Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$").</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
