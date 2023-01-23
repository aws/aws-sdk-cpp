/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/NetworkSettings.h>
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
  class UpdateNetworkSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateNetworkSettingsResult();
    AWS_WORKSPACESWEB_API UpdateNetworkSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateNetworkSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The network settings.</p>
     */
    inline const NetworkSettings& GetNetworkSettings() const{ return m_networkSettings; }

    /**
     * <p>The network settings.</p>
     */
    inline void SetNetworkSettings(const NetworkSettings& value) { m_networkSettings = value; }

    /**
     * <p>The network settings.</p>
     */
    inline void SetNetworkSettings(NetworkSettings&& value) { m_networkSettings = std::move(value); }

    /**
     * <p>The network settings.</p>
     */
    inline UpdateNetworkSettingsResult& WithNetworkSettings(const NetworkSettings& value) { SetNetworkSettings(value); return *this;}

    /**
     * <p>The network settings.</p>
     */
    inline UpdateNetworkSettingsResult& WithNetworkSettings(NetworkSettings&& value) { SetNetworkSettings(std::move(value)); return *this;}

  private:

    NetworkSettings m_networkSettings;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
