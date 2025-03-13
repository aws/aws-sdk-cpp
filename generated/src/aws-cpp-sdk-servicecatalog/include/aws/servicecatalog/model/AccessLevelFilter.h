/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/AccessLevelFilterKey.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The access level to use to filter results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AccessLevelFilter">AWS
   * API Reference</a></p>
   */
  class AccessLevelFilter
  {
  public:
    AWS_SERVICECATALOG_API AccessLevelFilter() = default;
    AWS_SERVICECATALOG_API AccessLevelFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API AccessLevelFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access level.</p> <ul> <li> <p> <code>Account</code> - Filter results
     * based on the account.</p> </li> <li> <p> <code>Role</code> - Filter results
     * based on the federated role of the specified user.</p> </li> <li> <p>
     * <code>User</code> - Filter results based on the specified user.</p> </li> </ul>
     */
    inline AccessLevelFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(AccessLevelFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline AccessLevelFilter& WithKey(AccessLevelFilterKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>self</code>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AccessLevelFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    AccessLevelFilterKey m_key{AccessLevelFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
