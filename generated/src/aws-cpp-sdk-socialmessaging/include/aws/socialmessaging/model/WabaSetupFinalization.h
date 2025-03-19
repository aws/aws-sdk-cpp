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
    AWS_SOCIALMESSAGING_API WabaSetupFinalization() = default;
    AWS_SOCIALMESSAGING_API WabaSetupFinalization(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API WabaSetupFinalization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the linked WhatsApp Business Account, formatted as
     * <code>waba-01234567890123456789012345678901</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WabaSetupFinalization& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event destinations for the linked WhatsApp Business Account.</p>
     */
    inline const Aws::Vector<WhatsAppBusinessAccountEventDestination>& GetEventDestinations() const { return m_eventDestinations; }
    inline bool EventDestinationsHasBeenSet() const { return m_eventDestinationsHasBeenSet; }
    template<typename EventDestinationsT = Aws::Vector<WhatsAppBusinessAccountEventDestination>>
    void SetEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations = std::forward<EventDestinationsT>(value); }
    template<typename EventDestinationsT = Aws::Vector<WhatsAppBusinessAccountEventDestination>>
    WabaSetupFinalization& WithEventDestinations(EventDestinationsT&& value) { SetEventDestinations(std::forward<EventDestinationsT>(value)); return *this;}
    template<typename EventDestinationsT = WhatsAppBusinessAccountEventDestination>
    WabaSetupFinalization& AddEventDestinations(EventDestinationsT&& value) { m_eventDestinationsHasBeenSet = true; m_eventDestinations.emplace_back(std::forward<EventDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key and value pair tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    WabaSetupFinalization& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    WabaSetupFinalization& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
