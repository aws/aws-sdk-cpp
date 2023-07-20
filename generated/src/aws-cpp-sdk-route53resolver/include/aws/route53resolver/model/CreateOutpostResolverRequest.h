/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class CreateOutpostResolverRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateOutpostResolverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOutpostResolver"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice. </p> <p>
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice. </p> <p>
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice. </p> <p>
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice. </p> <p>
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice. </p> <p>
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice. </p> <p>
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline CreateOutpostResolverRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice. </p> <p>
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline CreateOutpostResolverRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice. </p> <p>
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline CreateOutpostResolverRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateOutpostResolverRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateOutpostResolverRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateOutpostResolverRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Number of Amazon EC2 instances for the Resolver on Outpost. The default and
     * minimal value is 4.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>Number of Amazon EC2 instances for the Resolver on Outpost. The default and
     * minimal value is 4.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>Number of Amazon EC2 instances for the Resolver on Outpost. The default and
     * minimal value is 4.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>Number of Amazon EC2 instances for the Resolver on Outpost. The default and
     * minimal value is 4.</p>
     */
    inline CreateOutpostResolverRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p> The Amazon EC2 instance type. If you specify this, you must also specify a
     * value for the <code>OutpostArn</code>. </p>
     */
    inline const Aws::String& GetPreferredInstanceType() const{ return m_preferredInstanceType; }

    /**
     * <p> The Amazon EC2 instance type. If you specify this, you must also specify a
     * value for the <code>OutpostArn</code>. </p>
     */
    inline bool PreferredInstanceTypeHasBeenSet() const { return m_preferredInstanceTypeHasBeenSet; }

    /**
     * <p> The Amazon EC2 instance type. If you specify this, you must also specify a
     * value for the <code>OutpostArn</code>. </p>
     */
    inline void SetPreferredInstanceType(const Aws::String& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = value; }

    /**
     * <p> The Amazon EC2 instance type. If you specify this, you must also specify a
     * value for the <code>OutpostArn</code>. </p>
     */
    inline void SetPreferredInstanceType(Aws::String&& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = std::move(value); }

    /**
     * <p> The Amazon EC2 instance type. If you specify this, you must also specify a
     * value for the <code>OutpostArn</code>. </p>
     */
    inline void SetPreferredInstanceType(const char* value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType.assign(value); }

    /**
     * <p> The Amazon EC2 instance type. If you specify this, you must also specify a
     * value for the <code>OutpostArn</code>. </p>
     */
    inline CreateOutpostResolverRequest& WithPreferredInstanceType(const Aws::String& value) { SetPreferredInstanceType(value); return *this;}

    /**
     * <p> The Amazon EC2 instance type. If you specify this, you must also specify a
     * value for the <code>OutpostArn</code>. </p>
     */
    inline CreateOutpostResolverRequest& WithPreferredInstanceType(Aws::String&& value) { SetPreferredInstanceType(std::move(value)); return *this;}

    /**
     * <p> The Amazon EC2 instance type. If you specify this, you must also specify a
     * value for the <code>OutpostArn</code>. </p>
     */
    inline CreateOutpostResolverRequest& WithPreferredInstanceType(const char* value) { SetPreferredInstanceType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>.</p>
     */
    inline CreateOutpostResolverRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>.</p>
     */
    inline CreateOutpostResolverRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>.</p>
     */
    inline CreateOutpostResolverRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p> A string that helps identify the Route 53 Resolvers on Outpost. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> A string that helps identify the Route 53 Resolvers on Outpost. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A string that helps identify the Route 53 Resolvers on Outpost. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A string that helps identify the Route 53 Resolvers on Outpost. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A string that helps identify the Route 53 Resolvers on Outpost. </p>
     */
    inline CreateOutpostResolverRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> A string that helps identify the Route 53 Resolvers on Outpost. </p>
     */
    inline CreateOutpostResolverRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A string that helps identify the Route 53 Resolvers on Outpost. </p>
     */
    inline CreateOutpostResolverRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> A string that helps identify the Route 53 Resolvers on Outpost. </p>
     */
    inline CreateOutpostResolverRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_preferredInstanceType;
    bool m_preferredInstanceTypeHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
