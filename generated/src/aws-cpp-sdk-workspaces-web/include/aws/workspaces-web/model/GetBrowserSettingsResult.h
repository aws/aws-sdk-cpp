/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/BrowserSettings.h>
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
  class GetBrowserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API GetBrowserSettingsResult();
    AWS_WORKSPACESWEB_API GetBrowserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetBrowserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetBrowserSettingsResult& WithBrowserSettings(const BrowserSettings& value) { SetBrowserSettings(value); return *this;}

    /**
     * <p>The browser settings.</p>
     */
    inline GetBrowserSettingsResult& WithBrowserSettings(BrowserSettings&& value) { SetBrowserSettings(std::move(value)); return *this;}

  private:

    BrowserSettings m_browserSettings;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
