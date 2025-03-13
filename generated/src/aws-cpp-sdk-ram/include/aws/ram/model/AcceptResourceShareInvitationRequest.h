/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class AcceptResourceShareInvitationRequest : public RAMRequest
  {
  public:
    AWS_RAM_API AcceptResourceShareInvitationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptResourceShareInvitation"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the invitation that you want to accept.</p>
     */
    inline const Aws::String& GetResourceShareInvitationArn() const { return m_resourceShareInvitationArn; }
    inline bool ResourceShareInvitationArnHasBeenSet() const { return m_resourceShareInvitationArnHasBeenSet; }
    template<typename ResourceShareInvitationArnT = Aws::String>
    void SetResourceShareInvitationArn(ResourceShareInvitationArnT&& value) { m_resourceShareInvitationArnHasBeenSet = true; m_resourceShareInvitationArn = std::forward<ResourceShareInvitationArnT>(value); }
    template<typename ResourceShareInvitationArnT = Aws::String>
    AcceptResourceShareInvitationRequest& WithResourceShareInvitationArn(ResourceShareInvitationArnT&& value) { SetResourceShareInvitationArn(std::forward<ResourceShareInvitationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AcceptResourceShareInvitationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceShareInvitationArn;
    bool m_resourceShareInvitationArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
