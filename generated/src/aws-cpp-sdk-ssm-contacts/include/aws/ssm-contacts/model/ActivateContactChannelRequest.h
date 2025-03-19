/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class ActivateContactChannelRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ActivateContactChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ActivateContactChannel"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelId() const { return m_contactChannelId; }
    inline bool ContactChannelIdHasBeenSet() const { return m_contactChannelIdHasBeenSet; }
    template<typename ContactChannelIdT = Aws::String>
    void SetContactChannelId(ContactChannelIdT&& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = std::forward<ContactChannelIdT>(value); }
    template<typename ContactChannelIdT = Aws::String>
    ActivateContactChannelRequest& WithContactChannelId(ContactChannelIdT&& value) { SetContactChannelId(std::forward<ContactChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code sent to the contact channel when it was created in the contact.</p>
     */
    inline const Aws::String& GetActivationCode() const { return m_activationCode; }
    inline bool ActivationCodeHasBeenSet() const { return m_activationCodeHasBeenSet; }
    template<typename ActivationCodeT = Aws::String>
    void SetActivationCode(ActivationCodeT&& value) { m_activationCodeHasBeenSet = true; m_activationCode = std::forward<ActivationCodeT>(value); }
    template<typename ActivationCodeT = Aws::String>
    ActivateContactChannelRequest& WithActivationCode(ActivationCodeT&& value) { SetActivationCode(std::forward<ActivationCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactChannelId;
    bool m_contactChannelIdHasBeenSet = false;

    Aws::String m_activationCode;
    bool m_activationCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
