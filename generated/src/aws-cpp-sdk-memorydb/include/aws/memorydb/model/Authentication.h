/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/AuthenticationType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Authentication">AWS
   * API Reference</a></p>
   */
  class Authentication
  {
  public:
    AWS_MEMORYDB_API Authentication() = default;
    AWS_MEMORYDB_API Authentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Authentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the user requires a password to authenticate.</p>
     */
    inline AuthenticationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AuthenticationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Authentication& WithType(AuthenticationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of passwords belonging to the user. The maximum is two.</p>
     */
    inline int GetPasswordCount() const { return m_passwordCount; }
    inline bool PasswordCountHasBeenSet() const { return m_passwordCountHasBeenSet; }
    inline void SetPasswordCount(int value) { m_passwordCountHasBeenSet = true; m_passwordCount = value; }
    inline Authentication& WithPasswordCount(int value) { SetPasswordCount(value); return *this;}
    ///@}
  private:

    AuthenticationType m_type{AuthenticationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_passwordCount{0};
    bool m_passwordCountHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
