/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>A structure that defines characteristics of an identity source that you can
   * use to filter.</p> <p>This data type is a request parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_ListIdentityStores.html">ListIdentityStores</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/IdentitySourceFilter">AWS
   * API Reference</a></p>
   */
  class IdentitySourceFilter
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceFilter();
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API IdentitySourceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Cedar entity type of the principals returned by the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline const Aws::String& GetPrincipalEntityType() const{ return m_principalEntityType; }

    /**
     * <p>The Cedar entity type of the principals returned by the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline bool PrincipalEntityTypeHasBeenSet() const { return m_principalEntityTypeHasBeenSet; }

    /**
     * <p>The Cedar entity type of the principals returned by the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline void SetPrincipalEntityType(const Aws::String& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = value; }

    /**
     * <p>The Cedar entity type of the principals returned by the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline void SetPrincipalEntityType(Aws::String&& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = std::move(value); }

    /**
     * <p>The Cedar entity type of the principals returned by the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline void SetPrincipalEntityType(const char* value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType.assign(value); }

    /**
     * <p>The Cedar entity type of the principals returned by the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline IdentitySourceFilter& WithPrincipalEntityType(const Aws::String& value) { SetPrincipalEntityType(value); return *this;}

    /**
     * <p>The Cedar entity type of the principals returned by the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline IdentitySourceFilter& WithPrincipalEntityType(Aws::String&& value) { SetPrincipalEntityType(std::move(value)); return *this;}

    /**
     * <p>The Cedar entity type of the principals returned by the identity provider
     * (IdP) associated with this identity source.</p>
     */
    inline IdentitySourceFilter& WithPrincipalEntityType(const char* value) { SetPrincipalEntityType(value); return *this;}

  private:

    Aws::String m_principalEntityType;
    bool m_principalEntityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
