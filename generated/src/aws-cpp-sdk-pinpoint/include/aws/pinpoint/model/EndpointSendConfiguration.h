/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the content, including message variables and attributes, to use in
   * a message that's sent directly to an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointSendConfiguration">AWS
   * API Reference</a></p>
   */
  class EndpointSendConfiguration
  {
  public:
    AWS_PINPOINT_API EndpointSendConfiguration() = default;
    AWS_PINPOINT_API EndpointSendConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointSendConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body of the message. If specified, this value overrides the default
     * message body.</p>
     */
    inline const Aws::String& GetBodyOverride() const { return m_bodyOverride; }
    inline bool BodyOverrideHasBeenSet() const { return m_bodyOverrideHasBeenSet; }
    template<typename BodyOverrideT = Aws::String>
    void SetBodyOverride(BodyOverrideT&& value) { m_bodyOverrideHasBeenSet = true; m_bodyOverride = std::forward<BodyOverrideT>(value); }
    template<typename BodyOverrideT = Aws::String>
    EndpointSendConfiguration& WithBodyOverride(BodyOverrideT&& value) { SetBodyOverride(std::forward<BodyOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom attributes to attach to the message for the address.
     * Attribute names are case sensitive.</p> <p>For a push notification, this payload
     * is added to the data.pinpoint object. For an email or text message, this payload
     * is added to email/SMS delivery receipt event attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    EndpointSendConfiguration& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    EndpointSendConfiguration& AddContext(ContextKeyT&& key, ContextValueT&& value) {
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
    EndpointSendConfiguration& WithRawContent(RawContentT&& value) { SetRawContent(std::forward<RawContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the message variables to merge with the variables specified for the
     * default message (DefaultMessage.Substitutions). The variables specified in this
     * map take precedence over all other variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const { return m_substitutions; }
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetSubstitutions(SubstitutionsT&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::forward<SubstitutionsT>(value); }
    template<typename SubstitutionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    EndpointSendConfiguration& WithSubstitutions(SubstitutionsT&& value) { SetSubstitutions(std::forward<SubstitutionsT>(value)); return *this;}
    template<typename SubstitutionsKeyT = Aws::String, typename SubstitutionsValueT = Aws::Vector<Aws::String>>
    EndpointSendConfiguration& AddSubstitutions(SubstitutionsKeyT&& key, SubstitutionsValueT&& value) {
      m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::forward<SubstitutionsKeyT>(key), std::forward<SubstitutionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The title or subject line of the message. If specified, this value overrides
     * the default message title or subject line.</p>
     */
    inline const Aws::String& GetTitleOverride() const { return m_titleOverride; }
    inline bool TitleOverrideHasBeenSet() const { return m_titleOverrideHasBeenSet; }
    template<typename TitleOverrideT = Aws::String>
    void SetTitleOverride(TitleOverrideT&& value) { m_titleOverrideHasBeenSet = true; m_titleOverride = std::forward<TitleOverrideT>(value); }
    template<typename TitleOverrideT = Aws::String>
    EndpointSendConfiguration& WithTitleOverride(TitleOverrideT&& value) { SetTitleOverride(std::forward<TitleOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bodyOverride;
    bool m_bodyOverrideHasBeenSet = false;

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
