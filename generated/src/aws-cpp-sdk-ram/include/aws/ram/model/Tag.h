/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>A structure containing a tag. A tag is metadata that you can attach to your
   * resources to help organize and categorize them. You can also use them to help
   * you secure your resources. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
   * access to Amazon Web Services resources using tags</a>.</p> <p>For more
   * information about tags, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services resources</a> in the <i>Amazon Web Services General
   * Reference Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_RAM_API Tag();
    AWS_RAM_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key, or name, attached to the tag. Every tag must have a key. Key names
     * are case sensitive.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key, or name, attached to the tag. Every tag must have a key. Key names
     * are case sensitive.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key, or name, attached to the tag. Every tag must have a key. Key names
     * are case sensitive.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key, or name, attached to the tag. Every tag must have a key. Key names
     * are case sensitive.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key, or name, attached to the tag. Every tag must have a key. Key names
     * are case sensitive.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key, or name, attached to the tag. Every tag must have a key. Key names
     * are case sensitive.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key, or name, attached to the tag. Every tag must have a key. Key names
     * are case sensitive.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key, or name, attached to the tag. Every tag must have a key. Key names
     * are case sensitive.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The string value attached to the tag. The value can be an empty string. Key
     * values are case sensitive.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The string value attached to the tag. The value can be an empty string. Key
     * values are case sensitive.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The string value attached to the tag. The value can be an empty string. Key
     * values are case sensitive.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The string value attached to the tag. The value can be an empty string. Key
     * values are case sensitive.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The string value attached to the tag. The value can be an empty string. Key
     * values are case sensitive.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The string value attached to the tag. The value can be an empty string. Key
     * values are case sensitive.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The string value attached to the tag. The value can be an empty string. Key
     * values are case sensitive.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The string value attached to the tag. The value can be an empty string. Key
     * values are case sensitive.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
