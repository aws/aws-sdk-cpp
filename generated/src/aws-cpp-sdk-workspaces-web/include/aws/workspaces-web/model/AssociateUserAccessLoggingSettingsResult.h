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
    AWS_WORKSPACESWEB_API AssociateUserAccessLoggingSettingsResult();
    AWS_WORKSPACESWEB_API AssociateUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API AssociateUserAccessLoggingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateUserAccessLoggingSettingsResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateUserAccessLoggingSettingsResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateUserAccessLoggingSettingsResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const{ return m_userAccessLoggingSettingsArn; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const Aws::String& value) { m_userAccessLoggingSettingsArn = value; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(Aws::String&& value) { m_userAccessLoggingSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const char* value) { m_userAccessLoggingSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline AssociateUserAccessLoggingSettingsResult& WithUserAccessLoggingSettingsArn(const Aws::String& value) { SetUserAccessLoggingSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline AssociateUserAccessLoggingSettingsResult& WithUserAccessLoggingSettingsArn(Aws::String&& value) { SetUserAccessLoggingSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline AssociateUserAccessLoggingSettingsResult& WithUserAccessLoggingSettingsArn(const char* value) { SetUserAccessLoggingSettingsArn(value); return *this;}

  private:

    Aws::String m_portalArn;

    Aws::String m_userAccessLoggingSettingsArn;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
