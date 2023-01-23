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
    AWS_SSMINCIDENTS_API PagerDutyConfiguration();
    AWS_SSMINCIDENTS_API PagerDutyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API PagerDutyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline PagerDutyConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline PagerDutyConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the PagerDuty configuration.</p>
     */
    inline PagerDutyConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Details about the PagerDuty service associated with the configuration.</p>
     */
    inline const PagerDutyIncidentConfiguration& GetPagerDutyIncidentConfiguration() const{ return m_pagerDutyIncidentConfiguration; }

    /**
     * <p>Details about the PagerDuty service associated with the configuration.</p>
     */
    inline bool PagerDutyIncidentConfigurationHasBeenSet() const { return m_pagerDutyIncidentConfigurationHasBeenSet; }

    /**
     * <p>Details about the PagerDuty service associated with the configuration.</p>
     */
    inline void SetPagerDutyIncidentConfiguration(const PagerDutyIncidentConfiguration& value) { m_pagerDutyIncidentConfigurationHasBeenSet = true; m_pagerDutyIncidentConfiguration = value; }

    /**
     * <p>Details about the PagerDuty service associated with the configuration.</p>
     */
    inline void SetPagerDutyIncidentConfiguration(PagerDutyIncidentConfiguration&& value) { m_pagerDutyIncidentConfigurationHasBeenSet = true; m_pagerDutyIncidentConfiguration = std::move(value); }

    /**
     * <p>Details about the PagerDuty service associated with the configuration.</p>
     */
    inline PagerDutyConfiguration& WithPagerDutyIncidentConfiguration(const PagerDutyIncidentConfiguration& value) { SetPagerDutyIncidentConfiguration(value); return *this;}

    /**
     * <p>Details about the PagerDuty service associated with the configuration.</p>
     */
    inline PagerDutyConfiguration& WithPagerDutyIncidentConfiguration(PagerDutyIncidentConfiguration&& value) { SetPagerDutyIncidentConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline PagerDutyConfiguration& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline PagerDutyConfiguration& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Secrets Manager secret that stores your
     * PagerDuty key, either a General Access REST API Key or User Token REST API Key,
     * and other user credentials.</p>
     */
    inline PagerDutyConfiguration& WithSecretId(const char* value) { SetSecretId(value); return *this;}

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
