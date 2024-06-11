﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class DescribePolicyRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DescribePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePolicy"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier (ID) of the policy that you want details about. You can
     * get the ID from the <a>ListPolicies</a> or <a>ListPoliciesForTarget</a>
     * operations.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for a policy ID string requires "p-" followed by from 8 to 128
     * lowercase or uppercase letters, digits, or the underscore character (_).</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline DescribePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline DescribePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline DescribePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
