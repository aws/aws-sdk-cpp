﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/model/HomeRegionControl.h>
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
namespace MigrationHubConfig
{
namespace Model
{
  class CreateHomeRegionControlResult
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult();
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This object is the <code>HomeRegionControl</code> object that's returned by a
     * successful call to <code>CreateHomeRegionControl</code>.</p>
     */
    inline const HomeRegionControl& GetHomeRegionControl() const{ return m_homeRegionControl; }
    inline void SetHomeRegionControl(const HomeRegionControl& value) { m_homeRegionControl = value; }
    inline void SetHomeRegionControl(HomeRegionControl&& value) { m_homeRegionControl = std::move(value); }
    inline CreateHomeRegionControlResult& WithHomeRegionControl(const HomeRegionControl& value) { SetHomeRegionControl(value); return *this;}
    inline CreateHomeRegionControlResult& WithHomeRegionControl(HomeRegionControl&& value) { SetHomeRegionControl(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateHomeRegionControlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateHomeRegionControlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateHomeRegionControlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    HomeRegionControl m_homeRegionControl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
