/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class JwksRetrievalOption
  {
    NOT_SET,
    OPEN_ID_DISCOVERY
  };

namespace JwksRetrievalOptionMapper
{
AWS_SSOADMIN_API JwksRetrievalOption GetJwksRetrievalOptionForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForJwksRetrievalOption(JwksRetrievalOption value);
} // namespace JwksRetrievalOptionMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
