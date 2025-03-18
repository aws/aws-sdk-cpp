/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ChannelType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies address-based configuration settings for a message that's sent
   * directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/AddressConfiguration">AWS
   * API Reference</a></p>
   */
  class AddressConfiguration
  {
  public:
    AWS_PINPOINT_API AddressConfiguration() = default;
    AWS_PINPOINT_API AddressConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API AddressConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message body to use instead of the default message body. This value
     * overrides the default message body.</p>
     */
    inline const Aws::String& GetBodyOverride() const { return m_bodyOverride; }
    inline bool BodyOverrideHasBeenSet() const { return m_bodyOverrideHasBeenSet; }
    template<typename BodyOverrideT = Aws::String>
    void SetBodyOverride(BodyOverrideT&& value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride = std::forward<BodyOverrideT>(value); }
    template<typename BodyOverrideT = Aws::String>
    AddressConfiguration& WithBodyOverride(BodyOverrideT&& value) { SetBodyOverride(std::forward<BodyOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel to use when sending the message.</p>
     */
    inline ChannelType GetChannelType() const { return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(ChannelType value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline AddressConfiguration& WithChannelType(ChannelType value) { SetChannelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps custom attributes to attributes for the address and is
     * attached to the message. Attribute names are case sensitive.</p> <p>For a push
     * notification, this payload is added to the data.pinpoint object. For an email or
     * text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    AddressConfiguration& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    AddressConfiguration& AddContext(ContextKeyT&& key, ContextValueT&& value) {
      m_contextHasBeenSet = true; m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides all other values for the message.</p>
     */
    inline const Aws::String& GetRawContent() const { return m_rawContent; }
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }
    template<typename RawContentT = Aws::String>
    void SetRawContent(RawContentT&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::forward<RawContentT>(value); }
    template<typename RawContentT = Aws::String>
    AddressConfiguration& WithRawContent(RawContentT&& value) { SetRawContent(std::forward<RawContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the message variables to merge with the variables specified by
     * properties of the DefaultMessage object. The variables specified in this map
     * take precedence over all other variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const { return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetSubstitutions(SubstitutionsT&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::forward<SubstitutionsT>(value); }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AddressConfiguration& WithSubstitutions(SubstitutionsT&& value) { SetSubstitutions(std::forward<SubstitutionsT>(value)); return *this;}
    template<typename SubstitutionsKeyT = Aws::String, typename SubstitutionsValueT = Aws::Vector<Aws::String>>
    AddressConfiguration& AddSubstitutions(SubstitutionsKeyT&& key, SubstitutionsValueT&& value) {
      m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::forward<SubstitutionsKeyT>(key), std::forward<SubstitutionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The message title to use instead of the default message title. This value
     * overrides the default message title.</p>
     */
    inline const Aws::String& GetTitleOverride() const { return m_titleOverride; }
    inline bool TitleOverrideHasBeenSet() const { return m_titleOverrideHasBeenSet; }
    template<typename TitleOverrideT = Aws::String>
    void SetTitleOverride(TitleOverrideT&& value) { m_titleOverrideHasBeenSet = true; m_titleOverride = std::forward<TitleOverrideT>(value); }
    template<typename TitleOverrideT = Aws::String>
    AddressConfiguration& WithTitleOverride(TitleOverrideT&& value) { SetTitleOverride(std::forward<TitleOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bodyOverride;
    bool m_bodyOverrideHasBeenSet = false;

    ChannelType m_channelType{ChannelType::NOT_SET};
    bool m_channelTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;

    Aws::String m_titleOverride;
    bool m_titleOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
