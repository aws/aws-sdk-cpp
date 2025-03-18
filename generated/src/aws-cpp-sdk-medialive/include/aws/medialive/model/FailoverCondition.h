/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FailoverConditionSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Failover Condition settings. There can be multiple failover conditions inside
   * AutomaticInputFailoverSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FailoverCondition">AWS
   * API Reference</a></p>
   */
  class FailoverCondition
  {
  public:
    AWS_MEDIALIVE_API FailoverCondition() = default;
    AWS_MEDIALIVE_API FailoverCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FailoverCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Failover condition type-specific settings.
     */
    inline const FailoverConditionSettings& GetFailoverConditionSettings() const { return m_failoverConditionSettings; }
    inline bool FailoverConditionSettingsHasBeenSet() const { return m_failoverConditionSettingsHasBeenSet; }
    template<typename FailoverConditionSettingsT = FailoverConditionSettings>
    void SetFailoverConditionSettings(FailoverConditionSettingsT&& value) { m_failoverConditionSettingsHasBeenSet = true; m_failoverConditionSettings = std::forward<FailoverConditionSettingsT>(value); }
    template<typename FailoverConditionSettingsT = FailoverConditionSettings>
    FailoverCondition& WithFailoverConditionSettings(FailoverConditionSettingsT&& value) { SetFailoverConditionSettings(std::forward<FailoverConditionSettingsT>(value)); return *this;}
    ///@}
  private:

    FailoverConditionSettings m_failoverConditionSettings;
    bool m_failoverConditionSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
