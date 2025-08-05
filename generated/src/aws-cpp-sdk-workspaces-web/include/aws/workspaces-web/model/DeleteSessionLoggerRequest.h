/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class DeleteSessionLoggerRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API DeleteSessionLoggerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSessionLogger"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the session logger.</p>
     */
    inline const Aws::String& GetSessionLoggerArn() const { return m_sessionLoggerArn; }
    inline bool SessionLoggerArnHasBeenSet() const { return m_sessionLoggerArnHasBeenSet; }
    template<typename SessionLoggerArnT = Aws::String>
    void SetSessionLoggerArn(SessionLoggerArnT&& value) { m_sessionLoggerArnHasBeenSet = true; m_sessionLoggerArn = std::forward<SessionLoggerArnT>(value); }
    template<typename SessionLoggerArnT = Aws::String>
    DeleteSessionLoggerRequest& WithSessionLoggerArn(SessionLoggerArnT&& value) { SetSessionLoggerArn(std::forward<SessionLoggerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionLoggerArn;
    bool m_sessionLoggerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
