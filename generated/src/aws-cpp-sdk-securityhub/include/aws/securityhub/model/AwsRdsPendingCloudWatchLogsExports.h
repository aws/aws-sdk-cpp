/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Identifies the log types to enable and disable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsPendingCloudWatchLogsExports">AWS
   * API Reference</a></p>
   */
  class AwsRdsPendingCloudWatchLogsExports
  {
  public:
    AWS_SECURITYHUB_API AwsRdsPendingCloudWatchLogsExports() = default;
    AWS_SECURITYHUB_API AwsRdsPendingCloudWatchLogsExports(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsPendingCloudWatchLogsExports& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of log types that are being enabled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypesToEnable() const { return m_logTypesToEnable; }
    inline bool LogTypesToEnableHasBeenSet() const { return m_logTypesToEnableHasBeenSet; }
    template<typename LogTypesToEnableT = Aws::Vector<Aws::String>>
    void SetLogTypesToEnable(LogTypesToEnableT&& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable = std::forward<LogTypesToEnableT>(value); }
    template<typename LogTypesToEnableT = Aws::Vector<Aws::String>>
    AwsRdsPendingCloudWatchLogsExports& WithLogTypesToEnable(LogTypesToEnableT&& value) { SetLogTypesToEnable(std::forward<LogTypesToEnableT>(value)); return *this;}
    template<typename LogTypesToEnableT = Aws::String>
    AwsRdsPendingCloudWatchLogsExports& AddLogTypesToEnable(LogTypesToEnableT&& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable.emplace_back(std::forward<LogTypesToEnableT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of log types that are being disabled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypesToDisable() const { return m_logTypesToDisable; }
    inline bool LogTypesToDisableHasBeenSet() const { return m_logTypesToDisableHasBeenSet; }
    template<typename LogTypesToDisableT = Aws::Vector<Aws::String>>
    void SetLogTypesToDisable(LogTypesToDisableT&& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable = std::forward<LogTypesToDisableT>(value); }
    template<typename LogTypesToDisableT = Aws::Vector<Aws::String>>
    AwsRdsPendingCloudWatchLogsExports& WithLogTypesToDisable(LogTypesToDisableT&& value) { SetLogTypesToDisable(std::forward<LogTypesToDisableT>(value)); return *this;}
    template<typename LogTypesToDisableT = Aws::String>
    AwsRdsPendingCloudWatchLogsExports& AddLogTypesToDisable(LogTypesToDisableT&& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable.emplace_back(std::forward<LogTypesToDisableT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_logTypesToEnable;
    bool m_logTypesToEnableHasBeenSet = false;

    Aws::Vector<Aws::String> m_logTypesToDisable;
    bool m_logTypesToDisableHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
