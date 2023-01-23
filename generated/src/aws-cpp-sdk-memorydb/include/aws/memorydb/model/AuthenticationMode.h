/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/InputAuthenticationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Denotes the user's authentication properties, such as whether it requires a
   * password to authenticate. Used in output responses.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/AuthenticationMode">AWS
   * API Reference</a></p>
   */
  class AuthenticationMode
  {
  public:
    AWS_MEMORYDB_API AuthenticationMode();
    AWS_MEMORYDB_API AuthenticationMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API AuthenticationMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the user requires a password to authenticate. All
     * newly-created users require a password.</p>
     */
    inline const InputAuthenticationType& GetType() const{ return m_type; }

    /**
     * <p>Indicates whether the user requires a password to authenticate. All
     * newly-created users require a password.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates whether the user requires a password to authenticate. All
     * newly-created users require a password.</p>
     */
    inline void SetType(const InputAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates whether the user requires a password to authenticate. All
     * newly-created users require a password.</p>
     */
    inline void SetType(InputAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates whether the user requires a password to authenticate. All
     * newly-created users require a password.</p>
     */
    inline AuthenticationMode& WithType(const InputAuthenticationType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates whether the user requires a password to authenticate. All
     * newly-created users require a password.</p>
     */
    inline AuthenticationMode& WithType(InputAuthenticationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The password(s) used for authentication</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const{ return m_passwords; }

    /**
     * <p>The password(s) used for authentication</p>
     */
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }

    /**
     * <p>The password(s) used for authentication</p>
     */
    inline void SetPasswords(const Aws::Vector<Aws::String>& value) { m_passwordsHasBeenSet = true; m_passwords = value; }

    /**
     * <p>The password(s) used for authentication</p>
     */
    inline void SetPasswords(Aws::Vector<Aws::String>&& value) { m_passwordsHasBeenSet = true; m_passwords = std::move(value); }

    /**
     * <p>The password(s) used for authentication</p>
     */
    inline AuthenticationMode& WithPasswords(const Aws::Vector<Aws::String>& value) { SetPasswords(value); return *this;}

    /**
     * <p>The password(s) used for authentication</p>
     */
    inline AuthenticationMode& WithPasswords(Aws::Vector<Aws::String>&& value) { SetPasswords(std::move(value)); return *this;}

    /**
     * <p>The password(s) used for authentication</p>
     */
    inline AuthenticationMode& AddPasswords(const Aws::String& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }

    /**
     * <p>The password(s) used for authentication</p>
     */
    inline AuthenticationMode& AddPasswords(Aws::String&& value) { m_passwordsHasBeenSet = true; m_passwords.push_back(std::move(value)); return *this; }

    /**
     * <p>The password(s) used for authentication</p>
     */
    inline AuthenticationMode& AddPasswords(const char* value) { m_passwordsHasBeenSet = true; m_passwords.push_back(value); return *this; }

  private:

    InputAuthenticationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_passwords;
    bool m_passwordsHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
