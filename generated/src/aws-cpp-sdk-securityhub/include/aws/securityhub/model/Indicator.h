/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Contains information about the indicators observed in an Amazon GuardDuty
   * Extended Threat Detection attack sequence. Indicators include a set of signals,
   * which can be API activities or findings that GuardDuty uses to detect an attack
   * sequence finding. GuardDuty generates an attack sequence finding when multiple
   * signals align to a potentially suspicious activity. To receive GuardDuty attack
   * sequence findings in Security Hub, you must have GuardDuty and GuardDuty S3
   * Protection enabled. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Indicator">AWS
   * API Reference</a></p>
   */
  class Indicator
  {
  public:
    AWS_SECURITYHUB_API Indicator();
    AWS_SECURITYHUB_API Indicator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Indicator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the indicator that’s present in the attack sequence finding.
     * </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline Indicator& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline Indicator& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline Indicator& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Values associated with each indicator key. For example, if the indicator key
     * is <code>SUSPICIOUS_NETWORK</code>, then the value will be the name of the
     * network. If the indicator key is <code>ATTACK_TACTIC</code>, then the value will
     * be one of the MITRE tactics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline Indicator& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline Indicator& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline Indicator& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline Indicator& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline Indicator& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The title describing the indicator. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Indicator& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Indicator& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Indicator& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of indicator. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Indicator& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Indicator& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Indicator& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
