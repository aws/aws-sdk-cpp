﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A request to retrieve a count of all the hosted zones that are associated
   * with the current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneCountRequest">AWS
   * API Reference</a></p>
   */
  class GetHostedZoneCountRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API GetHostedZoneCountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHostedZoneCount"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace Route53
} // namespace Aws
