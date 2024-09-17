/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Represents an app's environment variable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/EnvironmentVariable">AWS
   * API Reference</a></p>
   */
  class EnvironmentVariable
  {
  public:
    AWS_OPSWORKS_API EnvironmentVariable();
    AWS_OPSWORKS_API EnvironmentVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API EnvironmentVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(Required) The environment variable's name, which can consist of up to 64
     * characters and must be specified. The name can contain upper- and lowercase
     * letters, numbers, and underscores (_), but it must start with a letter or
     * underscore.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline EnvironmentVariable& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline EnvironmentVariable& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline EnvironmentVariable& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The environment variable's value, which can be left empty. If you
     * specify a value, it can contain up to 256 characters, which must all be
     * printable.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline EnvironmentVariable& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline EnvironmentVariable& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline EnvironmentVariable& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Whether the variable's value is returned by the
     * <a>DescribeApps</a> action. To hide an environment variable's value, set
     * <code>Secure</code> to <code>true</code>. <code>DescribeApps</code> returns
     * <code>*****FILTERED*****</code> instead of the actual value. The default value
     * for <code>Secure</code> is <code>false</code>. </p>
     */
    inline bool GetSecure() const{ return m_secure; }
    inline bool SecureHasBeenSet() const { return m_secureHasBeenSet; }
    inline void SetSecure(bool value) { m_secureHasBeenSet = true; m_secure = value; }
    inline EnvironmentVariable& WithSecure(bool value) { SetSecure(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_secure;
    bool m_secureHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
