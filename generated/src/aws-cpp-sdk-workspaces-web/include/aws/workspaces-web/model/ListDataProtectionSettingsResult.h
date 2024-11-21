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
    AWS_WORKSPACESWEB_API ListDataProtectionSettingsResult();
    AWS_WORKSPACESWEB_API ListDataProtectionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListDataProtectionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data protection settings.</p>
     */
    inline const Aws::Vector<DataProtectionSettingsSummary>& GetDataProtectionSettings() const{ return m_dataProtectionSettings; }
    inline void SetDataProtectionSettings(const Aws::Vector<DataProtectionSettingsSummary>& value) { m_dataProtectionSettings = value; }
    inline void SetDataProtectionSettings(Aws::Vector<DataProtectionSettingsSummary>&& value) { m_dataProtectionSettings = std::move(value); }
    inline ListDataProtectionSettingsResult& WithDataProtectionSettings(const Aws::Vector<DataProtectionSettingsSummary>& value) { SetDataProtectionSettings(value); return *this;}
    inline ListDataProtectionSettingsResult& WithDataProtectionSettings(Aws::Vector<DataProtectionSettingsSummary>&& value) { SetDataProtectionSettings(std::move(value)); return *this;}
    inline ListDataProtectionSettingsResult& AddDataProtectionSettings(const DataProtectionSettingsSummary& value) { m_dataProtectionSettings.push_back(value); return *this; }
    inline ListDataProtectionSettingsResult& AddDataProtectionSettings(DataProtectionSettingsSummary&& value) { m_dataProtectionSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataProtectionSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataProtectionSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataProtectionSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataProtectionSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataProtectionSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataProtectionSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataProtectionSettingsSummary> m_dataProtectionSettings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
