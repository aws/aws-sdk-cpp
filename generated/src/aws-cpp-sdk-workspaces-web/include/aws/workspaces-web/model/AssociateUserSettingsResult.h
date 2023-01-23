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
  class AssociateUserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API AssociateUserSettingsResult();
    AWS_WORKSPACESWEB_API AssociateUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API AssociateUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline AssociateUserSettingsResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateUserSettingsResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateUserSettingsResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    /**
     * <p>The ARN of the user settings.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const{ return m_userSettingsArn; }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(const Aws::String& value) { m_userSettingsArn = value; }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(Aws::String&& value) { m_userSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline void SetUserSettingsArn(const char* value) { m_userSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline AssociateUserSettingsResult& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline AssociateUserSettingsResult& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user settings.</p>
     */
    inline AssociateUserSettingsResult& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}

  private:

    Aws::String m_portalArn;

    Aws::String m_userSettingsArn;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
