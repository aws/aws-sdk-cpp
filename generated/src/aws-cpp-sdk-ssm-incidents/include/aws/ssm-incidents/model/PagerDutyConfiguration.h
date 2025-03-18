/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/PagerDutyIncidentConfiguration.h>
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
   * <p>Details about the PagerDuty configuration for a response plan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/PagerDutyConfiguration">AWS
   * API Reference</a></p>
   */
  class PagerDutyConfiguration
  {
  public:
    AWS_SSMINCIDENTS_API PagerDutyConfiguration() = default;
    AWS_SSMINCIDENTS_API PagerDutyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API PagerDutyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PagerDutyConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the PagerDuty service associated with the configuration.</p>
     */
    inline const PagerDutyIncidentConfiguration& GetPagerDutyIncidentConfiguration() const { return m_pagerDutyIncidentConfiguration; }
    inline bool PagerDutyIncidentConfigurationHasBeenSet() const { return m_pagerDutyIncidentConfigurationHasBeenSet; }
    template<typename PagerDutyIncidentConfigurationT = PagerDutyIncidentConfiguration>
    void SetPagerDutyIncidentConfiguration(PagerDutyIncidentConfigurationT&& value) { m_pagerDutyIncidentConfigurationHasBeenSet = true; m_pagerDutyIncidentConfiguration = std::forward<PagerDutyIncidentConfigurationT>(value); }
    template<typename PagerDutyIncidentConfigurationT = PagerDutyIncidentConfiguration>
    PagerDutyConfiguration& WithPagerDutyIncidentConfiguration(PagerDutyIncidentConfigurationT&& value) { SetPagerDutyIncidentConfiguration(std::forward<PagerDutyIncidentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    PagerDutyConfiguration& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PagerDutyIncidentConfiguration m_pagerDutyIncidentConfiguration;
    bool m_pagerDutyIncidentConfigurationHasBeenSet = false;

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
