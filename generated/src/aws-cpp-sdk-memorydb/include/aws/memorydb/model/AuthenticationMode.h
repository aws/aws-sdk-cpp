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
    AWS_MEMORYDB_API AuthenticationMode() = default;
    AWS_MEMORYDB_API AuthenticationMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API AuthenticationMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the user requires a password to authenticate. All
     * newly-created users require a password.</p>
     */
    inline InputAuthenticationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InputAuthenticationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AuthenticationMode& WithType(InputAuthenticationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password(s) used for authentication</p>
     */
    inline const Aws::Vector<Aws::String>& GetPasswords() const { return m_passwords; }
    inline bool PasswordsHasBeenSet() const { return m_passwordsHasBeenSet; }
    template<typename PasswordsT = Aws::Vector<Aws::String>>
    void SetPasswords(PasswordsT&& value) { m_passwordsHasBeenSet = true; m_passwords = std::forward<PasswordsT>(value); }
    template<typename PasswordsT = Aws::Vector<Aws::String>>
    AuthenticationMode& WithPasswords(PasswordsT&& value) { SetPasswords(std::forward<PasswordsT>(value)); return *this;}
    template<typename PasswordsT = Aws::String>
    AuthenticationMode& AddPasswords(PasswordsT&& value) { m_passwordsHasBeenSet = true; m_passwords.emplace_back(std::forward<PasswordsT>(value)); return *this; }
    ///@}
  private:

    InputAuthenticationType m_type{InputAuthenticationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_passwords;
    bool m_passwordsHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
