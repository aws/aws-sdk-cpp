/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/DataProtectionSettingsSummary.h>
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
  class ListDataProtectionSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListDataProtectionSettingsResult() = default;
    AWS_WORKSPACESWEB_API ListDataProtectionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListDataProtectionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data protection settings.</p>
     */
    inline const Aws::Vector<DataProtectionSettingsSummary>& GetDataProtectionSettings() const { return m_dataProtectionSettings; }
    template<typename DataProtectionSettingsT = Aws::Vector<DataProtectionSettingsSummary>>
    void SetDataProtectionSettings(DataProtectionSettingsT&& value) { m_dataProtectionSettingsHasBeenSet = true; m_dataProtectionSettings = std::forward<DataProtectionSettingsT>(value); }
    template<typename DataProtectionSettingsT = Aws::Vector<DataProtectionSettingsSummary>>
    ListDataProtectionSettingsResult& WithDataProtectionSettings(DataProtectionSettingsT&& value) { SetDataProtectionSettings(std::forward<DataProtectionSettingsT>(value)); return *this;}
    template<typename DataProtectionSettingsT = DataProtectionSettingsSummary>
    ListDataProtectionSettingsResult& AddDataProtectionSettings(DataProtectionSettingsT&& value) { m_dataProtectionSettingsHasBeenSet = true; m_dataProtectionSettings.emplace_back(std::forward<DataProtectionSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataProtectionSettingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataProtectionSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataProtectionSettingsSummary> m_dataProtectionSettings;
    bool m_dataProtectionSettingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
