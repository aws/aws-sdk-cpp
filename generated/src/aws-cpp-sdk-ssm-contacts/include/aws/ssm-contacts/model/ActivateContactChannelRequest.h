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
    AWS_SSMCONTACTS_API ActivateContactChannelRequest();

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
    inline const Aws::String& GetContactChannelId() const{ return m_contactChannelId; }
    inline bool ContactChannelIdHasBeenSet() const { return m_contactChannelIdHasBeenSet; }
    inline void SetContactChannelId(const Aws::String& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = value; }
    inline void SetContactChannelId(Aws::String&& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = std::move(value); }
    inline void SetContactChannelId(const char* value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId.assign(value); }
    inline ActivateContactChannelRequest& WithContactChannelId(const Aws::String& value) { SetContactChannelId(value); return *this;}
    inline ActivateContactChannelRequest& WithContactChannelId(Aws::String&& value) { SetContactChannelId(std::move(value)); return *this;}
    inline ActivateContactChannelRequest& WithContactChannelId(const char* value) { SetContactChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code sent to the contact channel when it was created in the contact.</p>
     */
    inline const Aws::String& GetActivationCode() const{ return m_activationCode; }
    inline bool ActivationCodeHasBeenSet() const { return m_activationCodeHasBeenSet; }
    inline void SetActivationCode(const Aws::String& value) { m_activationCodeHasBeenSet = true; m_activationCode = value; }
    inline void SetActivationCode(Aws::String&& value) { m_activationCodeHasBeenSet = true; m_activationCode = std::move(value); }
    inline void SetActivationCode(const char* value) { m_activationCodeHasBeenSet = true; m_activationCode.assign(value); }
    inline ActivateContactChannelRequest& WithActivationCode(const Aws::String& value) { SetActivationCode(value); return *this;}
    inline ActivateContactChannelRequest& WithActivationCode(Aws::String&& value) { SetActivationCode(std::move(value)); return *this;}
    inline ActivateContactChannelRequest& WithActivationCode(const char* value) { SetActivationCode(value); return *this;}
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
