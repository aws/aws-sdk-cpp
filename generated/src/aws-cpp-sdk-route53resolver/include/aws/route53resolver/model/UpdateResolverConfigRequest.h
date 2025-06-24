/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/AutodefinedReverseFlag.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateResolverConfigRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateResolverConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolverConfig"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud VPC or a Route 53 Profile that
     * you're configuring Resolver for.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    UpdateResolverConfigRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the Resolver will create autodefined rules for
     * reverse DNS lookups. This is enabled by default. Disabling this option will also
     * affect EC2-Classic instances using ClassicLink. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a>
     * in the <i>Amazon EC2 guide</i>.</p>  <p>We are retiring EC2-Classic
     * on August 15, 2022. We recommend that you migrate from EC2-Classic to a VPC. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
     * from EC2-Classic to a VPC</a> in the <i>Amazon EC2 guide</i> and the blog <a
     * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic
     * Networking is Retiring – Here’s How to Prepare</a>.</p>  
     * <p>It can take some time for the status change to be completed.</p>  <p/>
     */
    inline AutodefinedReverseFlag GetAutodefinedReverseFlag() const { return m_autodefinedReverseFlag; }
    inline bool AutodefinedReverseFlagHasBeenSet() const { return m_autodefinedReverseFlagHasBeenSet; }
    inline void SetAutodefinedReverseFlag(AutodefinedReverseFlag value) { m_autodefinedReverseFlagHasBeenSet = true; m_autodefinedReverseFlag = value; }
    inline UpdateResolverConfigRequest& WithAutodefinedReverseFlag(AutodefinedReverseFlag value) { SetAutodefinedReverseFlag(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    AutodefinedReverseFlag m_autodefinedReverseFlag{AutodefinedReverseFlag::NOT_SET};
    bool m_autodefinedReverseFlagHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
