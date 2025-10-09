/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ClientCredentialsSource
  {
    NOT_SET,
    PLAIN_CREDENTIALS
  };

namespace ClientCredentialsSourceMapper
{
AWS_QUICKSIGHT_API ClientCredentialsSource GetClientCredentialsSourceForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForClientCredentialsSource(ClientCredentialsSource value);
} // namespace ClientCredentialsSourceMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
