/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>

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
namespace QBusiness
{
namespace Model
{

  class ChatInitialResponse
  {
  public:
    AWS_QBUSINESS_API ChatInitialResponse();
    AWS_QBUSINESS_API ChatInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ChatInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
