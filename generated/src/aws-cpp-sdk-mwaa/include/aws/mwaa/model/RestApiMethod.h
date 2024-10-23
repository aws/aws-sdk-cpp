/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MWAA
{
namespace Model
{
  enum class RestApiMethod
  {
    NOT_SET,
    GET_,
    PUT,
    POST,
    PATCH,
    DELETE_
  };

namespace RestApiMethodMapper
{
AWS_MWAA_API RestApiMethod GetRestApiMethodForName(const Aws::String& name);

AWS_MWAA_API Aws::String GetNameForRestApiMethod(RestApiMethod value);
} // namespace RestApiMethodMapper
} // namespace Model
} // namespace MWAA
} // namespace Aws
