/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
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
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
   * Chef Automate or AWS OpsWorks for Puppet Enterprise server. Leading and trailing
   * white spaces are trimmed from both the key and value. A maximum of 50
   * user-applied tags is allowed for tag-supported AWS OpsWorks-CM
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_OPSWORKSCM_API Tag();
    AWS_OPSWORKSCM_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A tag key, such as <code>Stage</code> or <code>Name</code>. A tag key cannot
     * be empty. The key can be a maximum of 127 characters, and can contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A tag key, such as <code>Stage</code> or <code>Name</code>. A tag key cannot
     * be empty. The key can be a maximum of 127 characters, and can contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A tag key, such as <code>Stage</code> or <code>Name</code>. A tag key cannot
     * be empty. The key can be a maximum of 127 characters, and can contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A tag key, such as <code>Stage</code> or <code>Name</code>. A tag key cannot
     * be empty. The key can be a maximum of 127 characters, and can contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A tag key, such as <code>Stage</code> or <code>Name</code>. A tag key cannot
     * be empty. The key can be a maximum of 127 characters, and can contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A tag key, such as <code>Stage</code> or <code>Name</code>. A tag key cannot
     * be empty. The key can be a maximum of 127 characters, and can contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A tag key, such as <code>Stage</code> or <code>Name</code>. A tag key cannot
     * be empty. The key can be a maximum of 127 characters, and can contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A tag key, such as <code>Stage</code> or <code>Name</code>. A tag key cannot
     * be empty. The key can be a maximum of 127 characters, and can contain only
     * Unicode letters, numbers, or separators, or the following special characters:
     * <code>+ - = . _ : /</code> </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>An optional tag value, such as <code>Production</code> or
     * <code>test-owcm-server</code>. The value can be a maximum of 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>An optional tag value, such as <code>Production</code> or
     * <code>test-owcm-server</code>. The value can be a maximum of 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An optional tag value, such as <code>Production</code> or
     * <code>test-owcm-server</code>. The value can be a maximum of 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An optional tag value, such as <code>Production</code> or
     * <code>test-owcm-server</code>. The value can be a maximum of 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>An optional tag value, such as <code>Production</code> or
     * <code>test-owcm-server</code>. The value can be a maximum of 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>An optional tag value, such as <code>Production</code> or
     * <code>test-owcm-server</code>. The value can be a maximum of 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>An optional tag value, such as <code>Production</code> or
     * <code>test-owcm-server</code>. The value can be a maximum of 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>An optional tag value, such as <code>Production</code> or
     * <code>test-owcm-server</code>. The value can be a maximum of 255 characters, and
     * contain only Unicode letters, numbers, or separators, or the following special
     * characters: <code>+ - = . _ : /</code> </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
