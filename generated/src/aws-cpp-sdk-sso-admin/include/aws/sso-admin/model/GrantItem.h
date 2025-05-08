/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/GrantType.h>
#include <aws/sso-admin/model/Grant.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that defines a single grant and its configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GrantItem">AWS
   * API Reference</a></p>
   */
  class GrantItem
  {
  public:
    AWS_SSOADMIN_API GrantItem() = default;
    AWS_SSOADMIN_API GrantItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API GrantItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the selected grant.</p>
     */
    inline GrantType GetGrantType() const { return m_grantType; }
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
    inline void SetGrantType(GrantType value) { m_grantTypeHasBeenSet = true; m_grantType = value; }
    inline GrantItem& WithGrantType(GrantType value) { SetGrantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration structure for the selected grant.</p>
     */
    inline const Grant& GetGrant() const { return m_grant; }
    inline bool GrantHasBeenSet() const { return m_grantHasBeenSet; }
    template<typename GrantT = Grant>
    void SetGrant(GrantT&& value) { m_grantHasBeenSet = true; m_grant = std::forward<GrantT>(value); }
    template<typename GrantT = Grant>
    GrantItem& WithGrant(GrantT&& value) { SetGrant(std::forward<GrantT>(value)); return *this;}
    ///@}
  private:

    GrantType m_grantType{GrantType::NOT_SET};
    bool m_grantTypeHasBeenSet = false;

    Grant m_grant;
    bool m_grantHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
