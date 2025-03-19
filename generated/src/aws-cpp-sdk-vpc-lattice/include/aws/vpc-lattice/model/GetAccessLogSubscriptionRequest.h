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
  class GetAccessLogSubscriptionRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API GetAccessLogSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessLogSubscription"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the access log subscription.</p>
     */
    inline const Aws::String& GetAccessLogSubscriptionIdentifier() const { return m_accessLogSubscriptionIdentifier; }
    inline bool AccessLogSubscriptionIdentifierHasBeenSet() const { return m_accessLogSubscriptionIdentifierHasBeenSet; }
    template<typename AccessLogSubscriptionIdentifierT = Aws::String>
    void SetAccessLogSubscriptionIdentifier(AccessLogSubscriptionIdentifierT&& value) { m_accessLogSubscriptionIdentifierHasBeenSet = true; m_accessLogSubscriptionIdentifier = std::forward<AccessLogSubscriptionIdentifierT>(value); }
    template<typename AccessLogSubscriptionIdentifierT = Aws::String>
    GetAccessLogSubscriptionRequest& WithAccessLogSubscriptionIdentifier(AccessLogSubscriptionIdentifierT&& value) { SetAccessLogSubscriptionIdentifier(std::forward<AccessLogSubscriptionIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessLogSubscriptionIdentifier;
    bool m_accessLogSubscriptionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
