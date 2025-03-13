/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/ReconnectEnum.h>
#include <aws/workspaces/model/LogUploadEnum.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes an Amazon WorkSpaces client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ClientProperties">AWS
   * API Reference</a></p>
   */
  class ClientProperties
  {
  public:
    AWS_WORKSPACES_API ClientProperties() = default;
    AWS_WORKSPACES_API ClientProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ClientProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether users can cache their credentials on the Amazon WorkSpaces
     * client. When enabled, users can choose to reconnect to their WorkSpaces without
     * re-entering their credentials. </p>
     */
    inline ReconnectEnum GetReconnectEnabled() const { return m_reconnectEnabled; }
    inline bool ReconnectEnabledHasBeenSet() const { return m_reconnectEnabledHasBeenSet; }
    inline void SetReconnectEnabled(ReconnectEnum value) { m_reconnectEnabledHasBeenSet = true; m_reconnectEnabled = value; }
    inline ClientProperties& WithReconnectEnabled(ReconnectEnum value) { SetReconnectEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether users can upload diagnostic log files of Amazon WorkSpaces
     * client directly to WorkSpaces to troubleshoot issues when using the WorkSpaces
     * client. When enabled, the log files will be sent to WorkSpaces automatically and
     * will be applied to all users in the specified directory.</p>
     */
    inline LogUploadEnum GetLogUploadEnabled() const { return m_logUploadEnabled; }
    inline bool LogUploadEnabledHasBeenSet() const { return m_logUploadEnabledHasBeenSet; }
    inline void SetLogUploadEnabled(LogUploadEnum value) { m_logUploadEnabledHasBeenSet = true; m_logUploadEnabled = value; }
    inline ClientProperties& WithLogUploadEnabled(LogUploadEnum value) { SetLogUploadEnabled(value); return *this;}
    ///@}
  private:

    ReconnectEnum m_reconnectEnabled{ReconnectEnum::NOT_SET};
    bool m_reconnectEnabledHasBeenSet = false;

    LogUploadEnum m_logUploadEnabled{LogUploadEnum::NOT_SET};
    bool m_logUploadEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
