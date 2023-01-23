/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>A custom key-value pair associated with a resource within your
   * organization.</p> <p>You can attach tags to any of the following organization
   * resources.</p> <ul> <li> <p>Amazon Web Services account</p> </li> <li>
   * <p>Organizational unit (OU)</p> </li> <li> <p>Organization root</p> </li> <li>
   * <p>Policy</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Tag">AWS
   * API Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_ORGANIZATIONS_API Tag();
    AWS_ORGANIZATIONS_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key identifier, or name, of the tag.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key identifier, or name, of the tag.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key identifier, or name, of the tag.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key identifier, or name, of the tag.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key identifier, or name, of the tag.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key identifier, or name, of the tag.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key identifier, or name, of the tag.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key identifier, or name, of the tag.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The string value that's associated with the key of the tag. You can set the
     * value of a tag to an empty string, but you can't set the value of a tag to
     * null.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The string value that's associated with the key of the tag. You can set the
     * value of a tag to an empty string, but you can't set the value of a tag to
     * null.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The string value that's associated with the key of the tag. You can set the
     * value of a tag to an empty string, but you can't set the value of a tag to
     * null.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The string value that's associated with the key of the tag. You can set the
     * value of a tag to an empty string, but you can't set the value of a tag to
     * null.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The string value that's associated with the key of the tag. You can set the
     * value of a tag to an empty string, but you can't set the value of a tag to
     * null.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The string value that's associated with the key of the tag. You can set the
     * value of a tag to an empty string, but you can't set the value of a tag to
     * null.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The string value that's associated with the key of the tag. You can set the
     * value of a tag to an empty string, but you can't set the value of a tag to
     * null.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The string value that's associated with the key of the tag. You can set the
     * value of a tag to an empty string, but you can't set the value of a tag to
     * null.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
