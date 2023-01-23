/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/NetworkSettingsSummary.h>
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
  class ListNetworkSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListNetworkSettingsResult();
    AWS_WORKSPACESWEB_API ListNetworkSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListNetworkSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The network settings.</p>
     */
    inline const Aws::Vector<NetworkSettingsSummary>& GetNetworkSettings() const{ return m_networkSettings; }

    /**
     * <p>The network settings.</p>
     */
    inline void SetNetworkSettings(const Aws::Vector<NetworkSettingsSummary>& value) { m_networkSettings = value; }

    /**
     * <p>The network settings.</p>
     */
    inline void SetNetworkSettings(Aws::Vector<NetworkSettingsSummary>&& value) { m_networkSettings = std::move(value); }

    /**
     * <p>The network settings.</p>
     */
    inline ListNetworkSettingsResult& WithNetworkSettings(const Aws::Vector<NetworkSettingsSummary>& value) { SetNetworkSettings(value); return *this;}

    /**
     * <p>The network settings.</p>
     */
    inline ListNetworkSettingsResult& WithNetworkSettings(Aws::Vector<NetworkSettingsSummary>&& value) { SetNetworkSettings(std::move(value)); return *this;}

    /**
     * <p>The network settings.</p>
     */
    inline ListNetworkSettingsResult& AddNetworkSettings(const NetworkSettingsSummary& value) { m_networkSettings.push_back(value); return *this; }

    /**
     * <p>The network settings.</p>
     */
    inline ListNetworkSettingsResult& AddNetworkSettings(NetworkSettingsSummary&& value) { m_networkSettings.push_back(std::move(value)); return *this; }


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
    inline ListNetworkSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListNetworkSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline ListNetworkSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<NetworkSettingsSummary> m_networkSettings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
