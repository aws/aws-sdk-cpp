/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/HttpsNotificationConfiguration.h>
#include <aws/securitylake/model/SqsNotificationConfiguration.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Specify the configurations you want to use for subscriber notification to
   * notify the subscriber when new data is written to the data lake for sources that
   * the subscriber consumes in Security Lake. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_SECURITYLAKE_API NotificationConfiguration() = default;
    AWS_SECURITYLAKE_API NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configurations used for HTTPS subscriber notification.</p>
     */
    inline const HttpsNotificationConfiguration& GetHttpsNotificationConfiguration() const { return m_httpsNotificationConfiguration; }
    inline bool HttpsNotificationConfigurationHasBeenSet() const { return m_httpsNotificationConfigurationHasBeenSet; }
    template<typename HttpsNotificationConfigurationT = HttpsNotificationConfiguration>
    void SetHttpsNotificationConfiguration(HttpsNotificationConfigurationT&& value) { m_httpsNotificationConfigurationHasBeenSet = true; m_httpsNotificationConfiguration = std::forward<HttpsNotificationConfigurationT>(value); }
    template<typename HttpsNotificationConfigurationT = HttpsNotificationConfiguration>
    NotificationConfiguration& WithHttpsNotificationConfiguration(HttpsNotificationConfigurationT&& value) { SetHttpsNotificationConfiguration(std::forward<HttpsNotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations for SQS subscriber notification.</p>
     */
    inline const SqsNotificationConfiguration& GetSqsNotificationConfiguration() const { return m_sqsNotificationConfiguration; }
    inline bool SqsNotificationConfigurationHasBeenSet() const { return m_sqsNotificationConfigurationHasBeenSet; }
    template<typename SqsNotificationConfigurationT = SqsNotificationConfiguration>
    void SetSqsNotificationConfiguration(SqsNotificationConfigurationT&& value) { m_sqsNotificationConfigurationHasBeenSet = true; m_sqsNotificationConfiguration = std::forward<SqsNotificationConfigurationT>(value); }
    template<typename SqsNotificationConfigurationT = SqsNotificationConfiguration>
    NotificationConfiguration& WithSqsNotificationConfiguration(SqsNotificationConfigurationT&& value) { SetSqsNotificationConfiguration(std::forward<SqsNotificationConfigurationT>(value)); return *this;}
    ///@}
  private:

    HttpsNotificationConfiguration m_httpsNotificationConfiguration;
    bool m_httpsNotificationConfigurationHasBeenSet = false;

    SqsNotificationConfiguration m_sqsNotificationConfiguration;
    bool m_sqsNotificationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
