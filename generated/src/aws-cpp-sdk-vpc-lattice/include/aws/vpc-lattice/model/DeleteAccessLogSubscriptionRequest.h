/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class DeleteAccessLogSubscriptionRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeleteAccessLogSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessLogSubscription"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline const Aws::String& GetAccessLogSubscriptionIdentifier() const{ return m_accessLogSubscriptionIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline bool AccessLogSubscriptionIdentifierHasBeenSet() const { return m_accessLogSubscriptionIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline void SetAccessLogSubscriptionIdentifier(const Aws::String& value) { m_accessLogSubscriptionIdentifierHasBeenSet = true; m_accessLogSubscriptionIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline void SetAccessLogSubscriptionIdentifier(Aws::String&& value) { m_accessLogSubscriptionIdentifierHasBeenSet = true; m_accessLogSubscriptionIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline void SetAccessLogSubscriptionIdentifier(const char* value) { m_accessLogSubscriptionIdentifierHasBeenSet = true; m_accessLogSubscriptionIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline DeleteAccessLogSubscriptionRequest& WithAccessLogSubscriptionIdentifier(const Aws::String& value) { SetAccessLogSubscriptionIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline DeleteAccessLogSubscriptionRequest& WithAccessLogSubscriptionIdentifier(Aws::String&& value) { SetAccessLogSubscriptionIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline DeleteAccessLogSubscriptionRequest& WithAccessLogSubscriptionIdentifier(const char* value) { SetAccessLogSubscriptionIdentifier(value); return *this;}

  private:

    Aws::String m_accessLogSubscriptionIdentifier;
    bool m_accessLogSubscriptionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
