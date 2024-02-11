/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/Grant.h>
#include <aws/sso-admin/model/GrantType.h>
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
    AWS_SSOADMIN_API GrantItem();
    AWS_SSOADMIN_API GrantItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API GrantItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration structure for the selected grant.</p>
     */
    inline const Grant& GetGrant() const{ return m_grant; }

    /**
     * <p>The configuration structure for the selected grant.</p>
     */
    inline bool GrantHasBeenSet() const { return m_grantHasBeenSet; }

    /**
     * <p>The configuration structure for the selected grant.</p>
     */
    inline void SetGrant(const Grant& value) { m_grantHasBeenSet = true; m_grant = value; }

    /**
     * <p>The configuration structure for the selected grant.</p>
     */
    inline void SetGrant(Grant&& value) { m_grantHasBeenSet = true; m_grant = std::move(value); }

    /**
     * <p>The configuration structure for the selected grant.</p>
     */
    inline GrantItem& WithGrant(const Grant& value) { SetGrant(value); return *this;}

    /**
     * <p>The configuration structure for the selected grant.</p>
     */
    inline GrantItem& WithGrant(Grant&& value) { SetGrant(std::move(value)); return *this;}


    /**
     * <p>The type of the selected grant.</p>
     */
    inline const GrantType& GetGrantType() const{ return m_grantType; }

    /**
     * <p>The type of the selected grant.</p>
     */
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }

    /**
     * <p>The type of the selected grant.</p>
     */
    inline void SetGrantType(const GrantType& value) { m_grantTypeHasBeenSet = true; m_grantType = value; }

    /**
     * <p>The type of the selected grant.</p>
     */
    inline void SetGrantType(GrantType&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::move(value); }

    /**
     * <p>The type of the selected grant.</p>
     */
    inline GrantItem& WithGrantType(const GrantType& value) { SetGrantType(value); return *this;}

    /**
     * <p>The type of the selected grant.</p>
     */
    inline GrantItem& WithGrantType(GrantType&& value) { SetGrantType(std::move(value)); return *this;}

  private:

    Grant m_grant;
    bool m_grantHasBeenSet = false;

    GrantType m_grantType;
    bool m_grantTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
