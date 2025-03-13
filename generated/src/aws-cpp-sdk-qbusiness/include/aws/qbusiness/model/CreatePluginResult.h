/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/PluginBuildStatus.h>
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
namespace QBusiness
{
namespace Model
{
  class CreatePluginResult
  {
  public:
    AWS_QBUSINESS_API CreatePluginResult() = default;
    AWS_QBUSINESS_API CreatePluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreatePluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the plugin created.</p>
     */
    inline const Aws::String& GetPluginId() const { return m_pluginId; }
    template<typename PluginIdT = Aws::String>
    void SetPluginId(PluginIdT&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::forward<PluginIdT>(value); }
    template<typename PluginIdT = Aws::String>
    CreatePluginResult& WithPluginId(PluginIdT&& value) { SetPluginId(std::forward<PluginIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a plugin.</p>
     */
    inline const Aws::String& GetPluginArn() const { return m_pluginArn; }
    template<typename PluginArnT = Aws::String>
    void SetPluginArn(PluginArnT&& value) { m_pluginArnHasBeenSet = true; m_pluginArn = std::forward<PluginArnT>(value); }
    template<typename PluginArnT = Aws::String>
    CreatePluginResult& WithPluginArn(PluginArnT&& value) { SetPluginArn(std::forward<PluginArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of a plugin. A plugin is modified asynchronously.</p>
     */
    inline PluginBuildStatus GetBuildStatus() const { return m_buildStatus; }
    inline void SetBuildStatus(PluginBuildStatus value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }
    inline CreatePluginResult& WithBuildStatus(PluginBuildStatus value) { SetBuildStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePluginResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_pluginArn;
    bool m_pluginArnHasBeenSet = false;

    PluginBuildStatus m_buildStatus{PluginBuildStatus::NOT_SET};
    bool m_buildStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
