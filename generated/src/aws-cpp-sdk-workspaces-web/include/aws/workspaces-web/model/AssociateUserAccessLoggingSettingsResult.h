/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{
  class AssociateUserAccessLoggingSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API AssociateUserAccessLoggingSettingsResult() = default;
    AWS_WORKSPACESWEB_API AssociateUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API AssociateUserAccessLoggingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const { return m_portalArn; }
    template<typename PortalArnT = Aws::String>
    void SetPortalArn(PortalArnT&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::forward<PortalArnT>(value); }
    template<typename PortalArnT = Aws::String>
    AssociateUserAccessLoggingSettingsResult& WithPortalArn(PortalArnT&& value) { SetPortalArn(std::forward<PortalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const { return m_userAccessLoggingSettingsArn; }
    template<typename UserAccessLoggingSettingsArnT = Aws::String>
    void SetUserAccessLoggingSettingsArn(UserAccessLoggingSettingsArnT&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::forward<UserAccessLoggingSettingsArnT>(value); }
    template<typename UserAccessLoggingSettingsArnT = Aws::String>
    AssociateUserAccessLoggingSettingsResult& WithUserAccessLoggingSettingsArn(UserAccessLoggingSettingsArnT&& value) { SetUserAccessLoggingSettingsArn(std::forward<UserAccessLoggingSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateUserAccessLoggingSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_userAccessLoggingSettingsArn;
    bool m_userAccessLoggingSettingsArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
