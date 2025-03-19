/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/SnsConfiguration.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Notification configuration for a scheduled query. A notification is sent by
   * Timestream when a scheduled query is created, its state is updated or when it is
   * deleted. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_TIMESTREAMQUERY_API NotificationConfiguration() = default;
    AWS_TIMESTREAMQUERY_API NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the Amazon Simple Notification Service (SNS) configuration.
     * This field is visible only when SNS Topic is provided when updating the account
     * settings. </p>
     */
    inline const SnsConfiguration& GetSnsConfiguration() const { return m_snsConfiguration; }
    inline bool SnsConfigurationHasBeenSet() const { return m_snsConfigurationHasBeenSet; }
    template<typename SnsConfigurationT = SnsConfiguration>
    void SetSnsConfiguration(SnsConfigurationT&& value) { m_snsConfigurationHasBeenSet = true; m_snsConfiguration = std::forward<SnsConfigurationT>(value); }
    template<typename SnsConfigurationT = SnsConfiguration>
    NotificationConfiguration& WithSnsConfiguration(SnsConfigurationT&& value) { SetSnsConfiguration(std::forward<SnsConfigurationT>(value)); return *this;}
    ///@}
  private:

    SnsConfiguration m_snsConfiguration;
    bool m_snsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
