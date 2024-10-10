/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/model/WhatsAppBusinessAccountEventDestination.h>
#include <aws/socialmessaging/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>The registration details for a linked WhatsApp Business
   * Account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WabaSetupFinalization">AWS
   * API Reference</a></p>
   */
  class WabaSetupFinalization
  {
  public:
    AWS_SOCIALMESSAGING_API WabaSetupFinalization();
    AWS_SOCIALMESSAGING_API WabaSetupFinalization(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API WabaSetupFinalization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the linked WhatsApp Business Account, formatted as
     * <code>waba-01234567890123456789012345678901</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WabaSetupFinalization& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WabaSetupFinalization& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WabaSetupFinalization& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event destinations for the linked WhatsApp Business Account.</p>
     */
    inline const Aws::Vector<WhatsAppBusinessAccountEventDestination>& GetEventDestinations() const{ return m_eventDestinations; }
    inline bool EventDestinationsHasBeenSet() const { return m_eventDestinationsHasBeenSet; }
    inline void SetEventDestinations(const Aws::Vector<WhatsAppBusinessAccountEventDestination>& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = value; }
    inline void SetEventDestinations(Aws::Vector<WhatsAppBusinessAccountEventDestination>&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::move(value); }
    inline WabaSetupFinalization& WithEventDestinations(const Aws::Vector<WhatsAppBusinessAccountEventDestination>& value) { SetEventDestinations(value); return *this;}
    inline WabaSetupFinalization& WithEventDestinations(Aws::Vector<WhatsAppBusinessAccountEventDestination>&& value) { SetEventDestinations(std::move(value)); return *this;}
    inline WabaSetupFinalization& AddEventDestinations(const WhatsAppBusinessAccountEventDestination& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.push_back(value); return *this; }
    inline WabaSetupFinalization& AddEventDestinations(WhatsAppBusinessAccountEventDestination&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key and value pair tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline WabaSetupFinalization& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline WabaSetupFinalization& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline WabaSetupFinalization& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline WabaSetupFinalization& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<WhatsAppBusinessAccountEventDestination> m_eventDestinations;
    bool m_eventDestinationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
