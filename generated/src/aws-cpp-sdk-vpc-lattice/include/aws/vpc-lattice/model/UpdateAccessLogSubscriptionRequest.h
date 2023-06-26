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
  class UpdateAccessLogSubscriptionRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API UpdateAccessLogSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessLogSubscription"; }

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
    inline UpdateAccessLogSubscriptionRequest& WithAccessLogSubscriptionIdentifier(const Aws::String& value) { SetAccessLogSubscriptionIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline UpdateAccessLogSubscriptionRequest& WithAccessLogSubscriptionIdentifier(Aws::String&& value) { SetAccessLogSubscriptionIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the access log subscription.</p>
     */
    inline UpdateAccessLogSubscriptionRequest& WithAccessLogSubscriptionIdentifier(const char* value) { SetAccessLogSubscriptionIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline UpdateAccessLogSubscriptionRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline UpdateAccessLogSubscriptionRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the access log destination.</p>
     */
    inline UpdateAccessLogSubscriptionRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

  private:

    Aws::String m_accessLogSubscriptionIdentifier;
    bool m_accessLogSubscriptionIdentifierHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
