/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/BrowserSettingsSummary.h>
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
  class ListBrowserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListBrowserSettingsResult();
    AWS_WORKSPACESWEB_API ListBrowserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListBrowserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The browser settings.</p>
     */
    inline const Aws::Vector<BrowserSettingsSummary>& GetBrowserSettings() const{ return m_browserSettings; }

    /**
     * <p>The browser settings.</p>
     */
    inline void SetBrowserSettings(const Aws::Vector<BrowserSettingsSummary>& value) { m_browserSettings = value; }

    /**
     * <p>The browser settings.</p>
     */
    inline void SetBrowserSettings(Aws::Vector<BrowserSettingsSummary>&& value) { m_browserSettings = std::move(value); }

    /**
     * <p>The browser settings.</p>
     */
    inline ListBrowserSettingsResult& WithBrowserSettings(const Aws::Vector<BrowserSettingsSummary>& value) { SetBrowserSettings(value); return *this;}

    /**
     * <p>The browser settings.</p>
     */
    inline ListBrowserSettingsResult& WithBrowserSettings(Aws::Vector<BrowserSettingsSummary>&& value) { SetBrowserSettings(std::move(value)); return *this;}

    /**
     * <p>The browser settings.</p>
     */
    inline ListBrowserSettingsResult& AddBrowserSettings(const BrowserSettingsSummary& value) { m_browserSettings.push_back(value); return *this; }

    /**
     * <p>The browser settings.</p>
     */
    inline ListBrowserSettingsResult& AddBrowserSettings(BrowserSettingsSummary&& value) { m_browserSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListBrowserSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListBrowserSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListBrowserSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBrowserSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBrowserSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBrowserSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BrowserSettingsSummary> m_browserSettings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
