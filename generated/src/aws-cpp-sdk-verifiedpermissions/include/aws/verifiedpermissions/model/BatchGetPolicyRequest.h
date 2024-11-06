/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/BatchGetPolicyInputItem.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class BatchGetPolicyRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetPolicy"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of up to 100 policies you want information about.</p>
     */
    inline const Aws::Vector<BatchGetPolicyInputItem>& GetRequests() const{ return m_requests; }
    inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }
    inline void SetRequests(const Aws::Vector<BatchGetPolicyInputItem>& value) { m_requestsHasBeenSet = true; m_requests = value; }
    inline void SetRequests(Aws::Vector<BatchGetPolicyInputItem>&& value) { m_requestsHasBeenSet = true; m_requests = std::move(value); }
    inline BatchGetPolicyRequest& WithRequests(const Aws::Vector<BatchGetPolicyInputItem>& value) { SetRequests(value); return *this;}
    inline BatchGetPolicyRequest& WithRequests(Aws::Vector<BatchGetPolicyInputItem>&& value) { SetRequests(std::move(value)); return *this;}
    inline BatchGetPolicyRequest& AddRequests(const BatchGetPolicyInputItem& value) { m_requestsHasBeenSet = true; m_requests.push_back(value); return *this; }
    inline BatchGetPolicyRequest& AddRequests(BatchGetPolicyInputItem&& value) { m_requestsHasBeenSet = true; m_requests.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BatchGetPolicyInputItem> m_requests;
    bool m_requestsHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
