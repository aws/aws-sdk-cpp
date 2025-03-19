/**
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
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult() = default;
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBCONFIG_API CreateHomeRegionControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This object is the <code>HomeRegionControl</code> object that's returned by a
     * successful call to <code>CreateHomeRegionControl</code>.</p>
     */
    inline const HomeRegionControl& GetHomeRegionControl() const { return m_homeRegionControl; }
    template<typename HomeRegionControlT = HomeRegionControl>
    void SetHomeRegionControl(HomeRegionControlT&& value) { m_homeRegionControlHasBeenSet = true; m_homeRegionControl = std::forward<HomeRegionControlT>(value); }
    template<typename HomeRegionControlT = HomeRegionControl>
    CreateHomeRegionControlResult& WithHomeRegionControl(HomeRegionControlT&& value) { SetHomeRegionControl(std::forward<HomeRegionControlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateHomeRegionControlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HomeRegionControl m_homeRegionControl;
    bool m_homeRegionControlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
