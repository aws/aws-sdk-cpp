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
    AWS_NETWORKFIREWALL_API RuleOption();
    AWS_NETWORKFIREWALL_API RuleOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The keyword for the Suricata compatible rule option. You must include a
     * <code>sid</code> (signature ID), and can optionally include other keywords. For
     * information about Suricata compatible keywords, see <a
     * href="https://suricata.readthedocs.io/en/suricata-6.0.9/rules/intro.html#rule-options">Rule
     * options</a> in the Suricata documentation.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }
    inline RuleOption& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}
    inline RuleOption& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}
    inline RuleOption& WithKeyword(const char* value) { SetKeyword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings of the Suricata compatible rule option. Rule options have zero
     * or more setting values, and the number of possible and required settings depends
     * on the <code>Keyword</code>. For more information about the settings for
     * specific options, see <a
     * href="https://suricata.readthedocs.io/en/suricata-6.0.9/rules/intro.html#rule-options">Rule
     * options</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const Aws::Vector<Aws::String>& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(Aws::Vector<Aws::String>&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline RuleOption& WithSettings(const Aws::Vector<Aws::String>& value) { SetSettings(value); return *this;}
    inline RuleOption& WithSettings(Aws::Vector<Aws::String>&& value) { SetSettings(std::move(value)); return *this;}
    inline RuleOption& AddSettings(const Aws::String& value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }
    inline RuleOption& AddSettings(Aws::String&& value) { m_settingsHasBeenSet = true; m_settings.push_back(std::move(value)); return *this; }
    inline RuleOption& AddSettings(const char* value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }
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
