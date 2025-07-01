/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class ResponseConfigurationType
  {
    NOT_SET,
    ALL
  };

namespace ResponseConfigurationTypeMapper
{
AWS_QBUSINESS_API ResponseConfigurationType GetResponseConfigurationTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForResponseConfigurationType(ResponseConfigurationType value);
} // namespace ResponseConfigurationTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
