/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/IpAccessSettingsSummary.h>
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
  class ListIpAccessSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListIpAccessSettingsResult();
    AWS_WORKSPACESWEB_API ListIpAccessSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListIpAccessSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IP access settings.</p>
     */
    inline const Aws::Vector<IpAccessSettingsSummary>& GetIpAccessSettings() const{ return m_ipAccessSettings; }

    /**
     * <p>The IP access settings.</p>
     */
    inline void SetIpAccessSettings(const Aws::Vector<IpAccessSettingsSummary>& value) { m_ipAccessSettings = value; }

    /**
     * <p>The IP access settings.</p>
     */
    inline void SetIpAccessSettings(Aws::Vector<IpAccessSettingsSummary>&& value) { m_ipAccessSettings = std::move(value); }

    /**
     * <p>The IP access settings.</p>
     */
    inline ListIpAccessSettingsResult& WithIpAccessSettings(const Aws::Vector<IpAccessSettingsSummary>& value) { SetIpAccessSettings(value); return *this;}

    /**
     * <p>The IP access settings.</p>
     */
    inline ListIpAccessSettingsResult& WithIpAccessSettings(Aws::Vector<IpAccessSettingsSummary>&& value) { SetIpAccessSettings(std::move(value)); return *this;}

    /**
     * <p>The IP access settings.</p>
     */
    inline ListIpAccessSettingsResult& AddIpAccessSettings(const IpAccessSettingsSummary& value) { m_ipAccessSettings.push_back(value); return *this; }

    /**
     * <p>The IP access settings.</p>
     */
    inline ListIpAccessSettingsResult& AddIpAccessSettings(IpAccessSettingsSummary&& value) { m_ipAccessSettings.push_back(std::move(value)); return *this; }


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
    inline ListIpAccessSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListIpAccessSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListIpAccessSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIpAccessSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIpAccessSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIpAccessSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<IpAccessSettingsSummary> m_ipAccessSettings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
