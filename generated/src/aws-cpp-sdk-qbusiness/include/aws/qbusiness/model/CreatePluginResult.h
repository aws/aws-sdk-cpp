﻿/**
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
    AWS_QBUSINESS_API CreatePluginResult();
    AWS_QBUSINESS_API CreatePluginResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreatePluginResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the plugin created.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }
    inline void SetPluginId(const Aws::String& value) { m_pluginId = value; }
    inline void SetPluginId(Aws::String&& value) { m_pluginId = std::move(value); }
    inline void SetPluginId(const char* value) { m_pluginId.assign(value); }
    inline CreatePluginResult& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}
    inline CreatePluginResult& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}
    inline CreatePluginResult& WithPluginId(const char* value) { SetPluginId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a plugin.</p>
     */
    inline const Aws::String& GetPluginArn() const{ return m_pluginArn; }
    inline void SetPluginArn(const Aws::String& value) { m_pluginArn = value; }
    inline void SetPluginArn(Aws::String&& value) { m_pluginArn = std::move(value); }
    inline void SetPluginArn(const char* value) { m_pluginArn.assign(value); }
    inline CreatePluginResult& WithPluginArn(const Aws::String& value) { SetPluginArn(value); return *this;}
    inline CreatePluginResult& WithPluginArn(Aws::String&& value) { SetPluginArn(std::move(value)); return *this;}
    inline CreatePluginResult& WithPluginArn(const char* value) { SetPluginArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of a plugin. A plugin is modified asynchronously.</p>
     */
    inline const PluginBuildStatus& GetBuildStatus() const{ return m_buildStatus; }
    inline void SetBuildStatus(const PluginBuildStatus& value) { m_buildStatus = value; }
    inline void SetBuildStatus(PluginBuildStatus&& value) { m_buildStatus = std::move(value); }
    inline CreatePluginResult& WithBuildStatus(const PluginBuildStatus& value) { SetBuildStatus(value); return *this;}
    inline CreatePluginResult& WithBuildStatus(PluginBuildStatus&& value) { SetBuildStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePluginResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePluginResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePluginResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pluginId;

    Aws::String m_pluginArn;

    PluginBuildStatus m_buildStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
