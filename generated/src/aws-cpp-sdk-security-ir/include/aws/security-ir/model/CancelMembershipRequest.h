/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class CancelMembershipRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API CancelMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelMembership"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element used in combination with CancelMembershipRequest to identify
     * the membership ID to cancel. </p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline CancelMembershipRequest& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline CancelMembershipRequest& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline CancelMembershipRequest& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
