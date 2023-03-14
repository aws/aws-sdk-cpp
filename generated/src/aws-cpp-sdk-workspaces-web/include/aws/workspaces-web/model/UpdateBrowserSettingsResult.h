/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/BrowserSettings.h>
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
  class UpdateBrowserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateBrowserSettingsResult();
    AWS_WORKSPACESWEB_API UpdateBrowserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateBrowserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The browser settings.</p>
     */
    inline const BrowserSettings& GetBrowserSettings() const{ return m_browserSettings; }

    /**
     * <p>The browser settings.</p>
     */
    inline void SetBrowserSettings(const BrowserSettings& value) { m_browserSettings = value; }

    /**
     * <p>The browser settings.</p>
     */
    inline void SetBrowserSettings(BrowserSettings&& value) { m_browserSettings = std::move(value); }

    /**
     * <p>The browser settings.</p>
     */
    inline UpdateBrowserSettingsResult& WithBrowserSettings(const BrowserSettings& value) { SetBrowserSettings(value); return *this;}

    /**
     * <p>The browser settings.</p>
     */
    inline UpdateBrowserSettingsResult& WithBrowserSettings(BrowserSettings&& value) { SetBrowserSettings(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateBrowserSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateBrowserSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateBrowserSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BrowserSettings m_browserSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
