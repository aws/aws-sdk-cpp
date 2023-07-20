/**
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
  class UpdateOutpostResolverRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateOutpostResolverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOutpostResolver"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string that identifies Resolver on an Outpost.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique string that identifies Resolver on an Outpost.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique string that identifies Resolver on an Outpost.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique string that identifies Resolver on an Outpost.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique string that identifies Resolver on an Outpost.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique string that identifies Resolver on an Outpost.</p>
     */
    inline UpdateOutpostResolverRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique string that identifies Resolver on an Outpost.</p>
     */
    inline UpdateOutpostResolverRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies Resolver on an Outpost.</p>
     */
    inline UpdateOutpostResolverRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Name of the Resolver on the Outpost.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the Resolver on the Outpost.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the Resolver on the Outpost.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the Resolver on the Outpost.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the Resolver on the Outpost.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the Resolver on the Outpost.</p>
     */
    inline UpdateOutpostResolverRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the Resolver on the Outpost.</p>
     */
    inline UpdateOutpostResolverRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the Resolver on the Outpost.</p>
     */
    inline UpdateOutpostResolverRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon EC2 instance count for a Resolver on the Outpost.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The Amazon EC2 instance count for a Resolver on the Outpost.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance count for a Resolver on the Outpost.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The Amazon EC2 instance count for a Resolver on the Outpost.</p>
     */
    inline UpdateOutpostResolverRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p> Amazon EC2 instance type. </p>
     */
    inline const Aws::String& GetPreferredInstanceType() const{ return m_preferredInstanceType; }

    /**
     * <p> Amazon EC2 instance type. </p>
     */
    inline bool PreferredInstanceTypeHasBeenSet() const { return m_preferredInstanceTypeHasBeenSet; }

    /**
     * <p> Amazon EC2 instance type. </p>
     */
    inline void SetPreferredInstanceType(const Aws::String& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = value; }

    /**
     * <p> Amazon EC2 instance type. </p>
     */
    inline void SetPreferredInstanceType(Aws::String&& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = std::move(value); }

    /**
     * <p> Amazon EC2 instance type. </p>
     */
    inline void SetPreferredInstanceType(const char* value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType.assign(value); }

    /**
     * <p> Amazon EC2 instance type. </p>
     */
    inline UpdateOutpostResolverRequest& WithPreferredInstanceType(const Aws::String& value) { SetPreferredInstanceType(value); return *this;}

    /**
     * <p> Amazon EC2 instance type. </p>
     */
    inline UpdateOutpostResolverRequest& WithPreferredInstanceType(Aws::String&& value) { SetPreferredInstanceType(std::move(value)); return *this;}

    /**
     * <p> Amazon EC2 instance type. </p>
     */
    inline UpdateOutpostResolverRequest& WithPreferredInstanceType(const char* value) { SetPreferredInstanceType(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_preferredInstanceType;
    bool m_preferredInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
