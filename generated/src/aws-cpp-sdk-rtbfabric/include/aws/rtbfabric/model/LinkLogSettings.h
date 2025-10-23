/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkApplicationLogConfiguration.h>
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
namespace RTBFabric
{
namespace Model
{

  /**
   * <p>Describes the settings for a link log.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/LinkLogSettings">AWS
   * API Reference</a></p>
   */
  class LinkLogSettings
  {
  public:
    AWS_RTBFABRIC_API LinkLogSettings() = default;
    AWS_RTBFABRIC_API LinkLogSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API LinkLogSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the configuration of a link application log.</p>
     */
    inline const LinkApplicationLogConfiguration& GetApplicationLogs() const { return m_applicationLogs; }
    inline bool ApplicationLogsHasBeenSet() const { return m_applicationLogsHasBeenSet; }
    template<typename ApplicationLogsT = LinkApplicationLogConfiguration>
    void SetApplicationLogs(ApplicationLogsT&& value) { m_applicationLogsHasBeenSet = true; m_applicationLogs = std::forward<ApplicationLogsT>(value); }
    template<typename ApplicationLogsT = LinkApplicationLogConfiguration>
    LinkLogSettings& WithApplicationLogs(ApplicationLogsT&& value) { SetApplicationLogs(std::forward<ApplicationLogsT>(value)); return *this;}
    ///@}
  private:

    LinkApplicationLogConfiguration m_applicationLogs;
    bool m_applicationLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
