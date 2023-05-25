/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class GetDatalakeExceptionsSubscriptionRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API GetDatalakeExceptionsSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDatalakeExceptionsSubscription"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
