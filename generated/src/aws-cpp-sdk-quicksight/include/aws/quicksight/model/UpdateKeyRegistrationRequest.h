/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/RegisteredCustomerManagedKey.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateKeyRegistrationRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateKeyRegistrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKeyRegistration"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateKeyRegistrationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateKeyRegistrationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateKeyRegistrationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RegisteredCustomerManagedKey</code> objects to be updated to
     * the Amazon QuickSight account.</p>
     */
    inline const Aws::Vector<RegisteredCustomerManagedKey>& GetKeyRegistration() const{ return m_keyRegistration; }
    inline bool KeyRegistrationHasBeenSet() const { return m_keyRegistrationHasBeenSet; }
    inline void SetKeyRegistration(const Aws::Vector<RegisteredCustomerManagedKey>& value) { m_keyRegistrationHasBeenSet = true; m_keyRegistration = value; }
    inline void SetKeyRegistration(Aws::Vector<RegisteredCustomerManagedKey>&& value) { m_keyRegistrationHasBeenSet = true; m_keyRegistration = std::move(value); }
    inline UpdateKeyRegistrationRequest& WithKeyRegistration(const Aws::Vector<RegisteredCustomerManagedKey>& value) { SetKeyRegistration(value); return *this;}
    inline UpdateKeyRegistrationRequest& WithKeyRegistration(Aws::Vector<RegisteredCustomerManagedKey>&& value) { SetKeyRegistration(std::move(value)); return *this;}
    inline UpdateKeyRegistrationRequest& AddKeyRegistration(const RegisteredCustomerManagedKey& value) { m_keyRegistrationHasBeenSet = true; m_keyRegistration.push_back(value); return *this; }
    inline UpdateKeyRegistrationRequest& AddKeyRegistration(RegisteredCustomerManagedKey&& value) { m_keyRegistrationHasBeenSet = true; m_keyRegistration.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<RegisteredCustomerManagedKey> m_keyRegistration;
    bool m_keyRegistrationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
