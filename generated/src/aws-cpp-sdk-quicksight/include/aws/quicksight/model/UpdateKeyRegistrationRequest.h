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
    AWS_QUICKSIGHT_API UpdateKeyRegistrationRequest() = default;

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
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateKeyRegistrationRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RegisteredCustomerManagedKey</code> objects to be updated to
     * the QuickSight account.</p>
     */
    inline const Aws::Vector<RegisteredCustomerManagedKey>& GetKeyRegistration() const { return m_keyRegistration; }
    inline bool KeyRegistrationHasBeenSet() const { return m_keyRegistrationHasBeenSet; }
    template<typename KeyRegistrationT = Aws::Vector<RegisteredCustomerManagedKey>>
    void SetKeyRegistration(KeyRegistrationT&& value) { m_keyRegistrationHasBeenSet = true; m_keyRegistration = std::forward<KeyRegistrationT>(value); }
    template<typename KeyRegistrationT = Aws::Vector<RegisteredCustomerManagedKey>>
    UpdateKeyRegistrationRequest& WithKeyRegistration(KeyRegistrationT&& value) { SetKeyRegistration(std::forward<KeyRegistrationT>(value)); return *this;}
    template<typename KeyRegistrationT = RegisteredCustomerManagedKey>
    UpdateKeyRegistrationRequest& AddKeyRegistration(KeyRegistrationT&& value) { m_keyRegistrationHasBeenSet = true; m_keyRegistration.emplace_back(std::forward<KeyRegistrationT>(value)); return *this; }
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
