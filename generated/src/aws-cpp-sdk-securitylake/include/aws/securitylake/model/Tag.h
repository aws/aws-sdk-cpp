/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>A <i>tag</i> is a label that you can define and associate with Amazon Web
   * Services resources, including certain types of Amazon Security Lake resources.
   * Tags can help you identify, categorize, and manage resources in different ways,
   * such as by owner, environment, or other criteria. You can associate tags with
   * the following types of Security Lake resources: subscribers, and the data lake
   * configuration for your Amazon Web Services account in individual Amazon Web
   * Services Regions.</p> <p>A resource can have up to 50 tags. Each tag consists of
   * a required <i>tag key</i> and an associated <i>tag value</i>. A <i>tag key</i>
   * is a general label that acts as a category for a more specific tag value. Each
   * tag key must be unique and it can have only one tag value. A <i>tag value</i>
   * acts as a descriptor for a tag key. Tag keys and values are case sensitive. They
   * can contain letters, numbers, spaces, or the following symbols: _ . : / = + @
   * -</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/security-lake/latest/userguide/tagging-resources.html">Tagging
   * Amazon Security Lake resources</a> in the <i>Amazon Security Lake User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/Tag">AWS
   * API Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_SECURITYLAKE_API Tag();
    AWS_SECURITYLAKE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the tag. This is a general label that acts as a category for a
     * more specific tag value (<code>value</code>).</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the tag. This is a general label that acts as a category for a
     * more specific tag value (<code>value</code>).</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the tag. This is a general label that acts as a category for a
     * more specific tag value (<code>value</code>).</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the tag. This is a general label that acts as a category for a
     * more specific tag value (<code>value</code>).</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the tag. This is a general label that acts as a category for a
     * more specific tag value (<code>value</code>).</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the tag. This is a general label that acts as a category for a
     * more specific tag value (<code>value</code>).</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the tag. This is a general label that acts as a category for a
     * more specific tag value (<code>value</code>).</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the tag. This is a general label that acts as a category for a
     * more specific tag value (<code>value</code>).</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value that’s associated with the specified tag key (<code>key</code>).
     * This value acts as a descriptor for the tag key. A tag value cannot be null, but
     * it can be an empty string.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value that’s associated with the specified tag key (<code>key</code>).
     * This value acts as a descriptor for the tag key. A tag value cannot be null, but
     * it can be an empty string.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that’s associated with the specified tag key (<code>key</code>).
     * This value acts as a descriptor for the tag key. A tag value cannot be null, but
     * it can be an empty string.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that’s associated with the specified tag key (<code>key</code>).
     * This value acts as a descriptor for the tag key. A tag value cannot be null, but
     * it can be an empty string.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value that’s associated with the specified tag key (<code>key</code>).
     * This value acts as a descriptor for the tag key. A tag value cannot be null, but
     * it can be an empty string.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value that’s associated with the specified tag key (<code>key</code>).
     * This value acts as a descriptor for the tag key. A tag value cannot be null, but
     * it can be an empty string.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value that’s associated with the specified tag key (<code>key</code>).
     * This value acts as a descriptor for the tag key. A tag value cannot be null, but
     * it can be an empty string.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value that’s associated with the specified tag key (<code>key</code>).
     * This value acts as a descriptor for the tag key. A tag value cannot be null, but
     * it can be an empty string.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
