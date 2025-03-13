/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/PagerDutyConfiguration.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Information about third-party services integrated into a response
   * plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/Integration">AWS
   * API Reference</a></p>
   */
  class Integration
  {
  public:
    AWS_SSMINCIDENTS_API Integration() = default;
    AWS_SSMINCIDENTS_API Integration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Integration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the PagerDuty service where the response plan creates an
     * incident.</p>
     */
    inline const PagerDutyConfiguration& GetPagerDutyConfiguration() const { return m_pagerDutyConfiguration; }
    inline bool PagerDutyConfigurationHasBeenSet() const { return m_pagerDutyConfigurationHasBeenSet; }
    template<typename PagerDutyConfigurationT = PagerDutyConfiguration>
    void SetPagerDutyConfiguration(PagerDutyConfigurationT&& value) { m_pagerDutyConfigurationHasBeenSet = true; m_pagerDutyConfiguration = std::forward<PagerDutyConfigurationT>(value); }
    template<typename PagerDutyConfigurationT = PagerDutyConfiguration>
    Integration& WithPagerDutyConfiguration(PagerDutyConfigurationT&& value) { SetPagerDutyConfiguration(std::forward<PagerDutyConfigurationT>(value)); return *this;}
    ///@}
  private:

    PagerDutyConfiguration m_pagerDutyConfiguration;
    bool m_pagerDutyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
