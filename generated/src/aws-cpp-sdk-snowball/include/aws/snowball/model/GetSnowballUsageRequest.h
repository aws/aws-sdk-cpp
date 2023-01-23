/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class GetSnowballUsageRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API GetSnowballUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSnowballUsage"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
