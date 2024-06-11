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
  class AssociateBrowserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API AssociateBrowserSettingsResult();
    AWS_WORKSPACESWEB_API AssociateBrowserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API AssociateBrowserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArn = value; }
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArn = std::move(value); }
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArn.assign(value); }
    inline AssociateBrowserSettingsResult& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}
    inline AssociateBrowserSettingsResult& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}
    inline AssociateBrowserSettingsResult& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }
    inline AssociateBrowserSettingsResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}
    inline AssociateBrowserSettingsResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}
    inline AssociateBrowserSettingsResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateBrowserSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateBrowserSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateBrowserSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_browserSettingsArn;

    Aws::String m_portalArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
