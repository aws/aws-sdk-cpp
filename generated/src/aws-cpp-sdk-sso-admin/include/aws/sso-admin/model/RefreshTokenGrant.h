/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>

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
   * <p>A structure that defines configuration settings for an application that
   * supports the OAuth 2.0 Refresh Token Grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/RefreshTokenGrant">AWS
   * API Reference</a></p>
   */
  class RefreshTokenGrant
  {
  public:
    AWS_SSOADMIN_API RefreshTokenGrant();
    AWS_SSOADMIN_API RefreshTokenGrant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API RefreshTokenGrant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
