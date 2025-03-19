/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/DataProtectionSettings.h>
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
  class GetDataProtectionSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API GetDataProtectionSettingsResult() = default;
    AWS_WORKSPACESWEB_API GetDataProtectionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetDataProtectionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data protection settings.</p>
     */
    inline const DataProtectionSettings& GetDataProtectionSettings() const { return m_dataProtectionSettings; }
    template<typename DataProtectionSettingsT = DataProtectionSettings>
    void SetDataProtectionSettings(DataProtectionSettingsT&& value) { m_dataProtectionSettingsHasBeenSet = true; m_dataProtectionSettings = std::forward<DataProtectionSettingsT>(value); }
    template<typename DataProtectionSettingsT = DataProtectionSettings>
    GetDataProtectionSettingsResult& WithDataProtectionSettings(DataProtectionSettingsT&& value) { SetDataProtectionSettings(std::forward<DataProtectionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataProtectionSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataProtectionSettings m_dataProtectionSettings;
    bool m_dataProtectionSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
