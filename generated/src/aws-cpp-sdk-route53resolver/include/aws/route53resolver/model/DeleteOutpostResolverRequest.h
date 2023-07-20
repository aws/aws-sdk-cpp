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
  class DeleteOutpostResolverRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API DeleteOutpostResolverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOutpostResolver"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string that identifies the Resolver on the Outpost.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique string that identifies the Resolver on the Outpost.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique string that identifies the Resolver on the Outpost.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique string that identifies the Resolver on the Outpost.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique string that identifies the Resolver on the Outpost.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique string that identifies the Resolver on the Outpost.</p>
     */
    inline DeleteOutpostResolverRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique string that identifies the Resolver on the Outpost.</p>
     */
    inline DeleteOutpostResolverRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the Resolver on the Outpost.</p>
     */
    inline DeleteOutpostResolverRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
