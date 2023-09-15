﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>Metadata assigned to an Amazon RDS resource consisting of a key-value
   * pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_PI_API Tag();
    AWS_PI_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * <code>"^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$"</code>).</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * <code>"^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$"</code>).</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * <code>"^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$"</code>).</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * <code>"^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$"</code>).</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * <code>"^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$"</code>).</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * <code>"^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$"</code>).</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * <code>"^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$"</code>).</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A key is the required name of the tag. The string value can be from 1 to 128
     * Unicode characters in length and can't be prefixed with <code>aws:</code> or
     * <code>rds:</code>. The string can only contain only the set of Unicode letters,
     * digits, white-space, '_', '.', ':', '/', '=', '+', '-', '@' (Java regex:
     * <code>"^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-@]*)$"</code>).</p>
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
} // namespace PI
} // namespace Aws
