﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class GetResolverRuleRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResolverRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Resolver rule that you want to get information about.</p>
     */
    inline const Aws::String& GetResolverRuleId() const { return m_resolverRuleId; }
    inline bool ResolverRuleIdHasBeenSet() const { return m_resolverRuleIdHasBeenSet; }
    template<typename ResolverRuleIdT = Aws::String>
    void SetResolverRuleId(ResolverRuleIdT&& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = std::forward<ResolverRuleIdT>(value); }
    template<typename ResolverRuleIdT = Aws::String>
    GetResolverRuleRequest& WithResolverRuleId(ResolverRuleIdT&& value) { SetResolverRuleId(std::forward<ResolverRuleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resolverRuleId;
    bool m_resolverRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
