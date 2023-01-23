/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   */
  class DeleteCidrCollectionRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API DeleteCidrCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCidrCollection"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>The UUID of the collection to delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The UUID of the collection to delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The UUID of the collection to delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The UUID of the collection to delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The UUID of the collection to delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The UUID of the collection to delete.</p>
     */
    inline DeleteCidrCollectionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The UUID of the collection to delete.</p>
     */
    inline DeleteCidrCollectionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The UUID of the collection to delete.</p>
     */
    inline DeleteCidrCollectionRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
