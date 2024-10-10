/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/model/WhatsAppBusinessAccountEventDestination.h>
#include <utility>

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

  /**
   */
  class PutWhatsAppBusinessAccountEventDestinationsRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API PutWhatsAppBusinessAccountEventDestinationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutWhatsAppBusinessAccountEventDestinations"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of your WhatsApp Business Account. WABA identifiers are
     * formatted as <code>waba-01234567890123456789012345678901</code>. Use <a
     * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_ListLinkedWhatsAppBusinessAccounts.html">ListLinkedWhatsAppBusinessAccounts</a>
     * to list all WABAs and their details.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PutWhatsAppBusinessAccountEventDestinationsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PutWhatsAppBusinessAccountEventDestinationsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PutWhatsAppBusinessAccountEventDestinationsRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>WhatsAppBusinessAccountEventDestination</code> event
     * destinations.</p>
     */
    inline const Aws::Vector<WhatsAppBusinessAccountEventDestination>& GetEventDestinations() const{ return m_eventDestinations; }
    inline bool EventDestinationsHasBeenSet() const { return m_eventDestinationsHasBeenSet; }
    inline void SetEventDestinations(const Aws::Vector<WhatsAppBusinessAccountEventDestination>& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = value; }
    inline void SetEventDestinations(Aws::Vector<WhatsAppBusinessAccountEventDestination>&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::move(value); }
    inline PutWhatsAppBusinessAccountEventDestinationsRequest& WithEventDestinations(const Aws::Vector<WhatsAppBusinessAccountEventDestination>& value) { SetEventDestinations(value); return *this;}
    inline PutWhatsAppBusinessAccountEventDestinationsRequest& WithEventDestinations(Aws::Vector<WhatsAppBusinessAccountEventDestination>&& value) { SetEventDestinations(std::move(value)); return *this;}
    inline PutWhatsAppBusinessAccountEventDestinationsRequest& AddEventDestinations(const WhatsAppBusinessAccountEventDestination& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.push_back(value); return *this; }
    inline PutWhatsAppBusinessAccountEventDestinationsRequest& AddEventDestinations(WhatsAppBusinessAccountEventDestination&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<WhatsAppBusinessAccountEventDestination> m_eventDestinations;
    bool m_eventDestinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
