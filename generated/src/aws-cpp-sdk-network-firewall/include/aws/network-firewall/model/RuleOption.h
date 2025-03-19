/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Additional settings for a stateful rule. This is part of the
   * <a>StatefulRule</a> configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleOption">AWS
   * API Reference</a></p>
   */
  class RuleOption
  {
  public:
    AWS_NETWORKFIREWALL_API RuleOption() = default;
    AWS_NETWORKFIREWALL_API RuleOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The keyword for the Suricata compatible rule option. You must include a
     * <code>sid</code> (signature ID), and can optionally include other keywords. For
     * information about Suricata compatible keywords, see <a
     * href="https://suricata.readthedocs.io/en/suricata-7.0.3/rules/intro.html#rule-options">Rule
     * options</a> in the Suricata documentation.</p>
     */
    inline const Aws::String& GetKeyword() const { return m_keyword; }
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }
    template<typename KeywordT = Aws::String>
    void SetKeyword(KeywordT&& value) { m_keywordHasBeenSet = true; m_keyword = std::forward<KeywordT>(value); }
    template<typename KeywordT = Aws::String>
    RuleOption& WithKeyword(KeywordT&& value) { SetKeyword(std::forward<KeywordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings of the Suricata compatible rule option. Rule options have zero
     * or more setting values, and the number of possible and required settings depends
     * on the <code>Keyword</code>. For more information about the settings for
     * specific options, see <a
     * href="https://suricata.readthedocs.io/en/suricata-7.0.3/rules/intro.html#rule-options">Rule
     * options</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Aws::Vector<Aws::String>>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Aws::Vector<Aws::String>>
    RuleOption& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    template<typename SettingsT = Aws::String>
    RuleOption& AddSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings.emplace_back(std::forward<SettingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::Vector<Aws::String> m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
