/**
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
  class DescribeCreateAccountStatusRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DescribeCreateAccountStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCreateAccountStatus"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline const Aws::String& GetCreateAccountRequestId() const { return m_createAccountRequestId; }
    inline bool CreateAccountRequestIdHasBeenSet() const { return m_createAccountRequestIdHasBeenSet; }
    template<typename CreateAccountRequestIdT = Aws::String>
    void SetCreateAccountRequestId(CreateAccountRequestIdT&& value) { m_createAccountRequestIdHasBeenSet = true; m_createAccountRequestId = std::forward<CreateAccountRequestIdT>(value); }
    template<typename CreateAccountRequestIdT = Aws::String>
    DescribeCreateAccountStatusRequest& WithCreateAccountRequestId(CreateAccountRequestIdT&& value) { SetCreateAccountRequestId(std::forward<CreateAccountRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_createAccountRequestId;
    bool m_createAccountRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
