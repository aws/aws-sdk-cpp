﻿/**
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
    AWS_PINPOINT_API AddressConfiguration();
    AWS_PINPOINT_API AddressConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API AddressConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message body to use instead of the default message body. This value
     * overrides the default message body.</p>
     */
    inline const Aws::String& GetBodyOverride() const{ return m_bodyOverride; }
    inline bool BodyOverrideHasBeenSet() const { return m_bodyOverrideHasBeenSet; }
    inline void SetBodyOverride(const Aws::String& value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride = value; }
    inline void SetBodyOverride(Aws::String&& value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride = std::move(value); }
    inline void SetBodyOverride(const char* value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride.assign(value); }
    inline AddressConfiguration& WithBodyOverride(const Aws::String& value) { SetBodyOverride(value); return *this;}
    inline AddressConfiguration& WithBodyOverride(Aws::String&& value) { SetBodyOverride(std::move(value)); return *this;}
    inline AddressConfiguration& WithBodyOverride(const char* value) { SetBodyOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel to use when sending the message.</p>
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }
    inline AddressConfiguration& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}
    inline AddressConfiguration& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps custom attributes to attributes for the address and is
     * attached to the message. Attribute names are case sensitive.</p> <p>For a push
     * notification, this payload is added to the data.pinpoint object. For an email or
     * text message, this payload is added to email/SMS delivery receipt event
     * attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline AddressConfiguration& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}
    inline AddressConfiguration& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}
    inline AddressConfiguration& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    inline AddressConfiguration& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline AddressConfiguration& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline AddressConfiguration& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }
    inline AddressConfiguration& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline AddressConfiguration& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline AddressConfiguration& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The raw, JSON-formatted string to use as the payload for the message. If
     * specified, this value overrides all other values for the message.</p>
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }
    inline AddressConfiguration& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}
    inline AddressConfiguration& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}
    inline AddressConfiguration& WithRawContent(const char* value) { SetRawContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the message variables to merge with the variables specified by
     * properties of the DefaultMessage object. The variables specified in this map
     * take precedence over all other variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }
    inline AddressConfiguration& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}
    inline AddressConfiguration& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}
    inline AddressConfiguration& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }
    inline AddressConfiguration& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }
    inline AddressConfiguration& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }
    inline AddressConfiguration& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }
    inline AddressConfiguration& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }
    inline AddressConfiguration& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message title to use instead of the default message title. This value
     * overrides the default message title.</p>
     */
    inline const Aws::String& GetTitleOverride() const{ return m_titleOverride; }
    inline bool TitleOverrideHasBeenSet() const { return m_titleOverrideHasBeenSet; }
    inline void SetTitleOverride(const Aws::String& value) { m_titleOverrideHasBeenSet = true; m_titleOverride = value; }
    inline void SetTitleOverride(Aws::String&& value) { m_titleOverrideHasBeenSet = true; m_titleOverride = std::move(value); }
    inline void SetTitleOverride(const char* value) { m_titleOverrideHasBeenSet = true; m_titleOverride.assign(value); }
    inline AddressConfiguration& WithTitleOverride(const Aws::String& value) { SetTitleOverride(value); return *this;}
    inline AddressConfiguration& WithTitleOverride(Aws::String&& value) { SetTitleOverride(std::move(value)); return *this;}
    inline AddressConfiguration& WithTitleOverride(const char* value) { SetTitleOverride(value); return *this;}
    ///@}
  private:

    Aws::String m_bodyOverride;
    bool m_bodyOverrideHasBeenSet = false;

    ChannelType m_channelType;
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
