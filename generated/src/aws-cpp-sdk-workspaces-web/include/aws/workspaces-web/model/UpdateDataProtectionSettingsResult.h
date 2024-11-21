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
  class UpdateDataProtectionSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateDataProtectionSettingsResult();
    AWS_WORKSPACESWEB_API UpdateDataProtectionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateDataProtectionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data protection settings.</p>
     */
    inline const DataProtectionSettings& GetDataProtectionSettings() const{ return m_dataProtectionSettings; }
    inline void SetDataProtectionSettings(const DataProtectionSettings& value) { m_dataProtectionSettings = value; }
    inline void SetDataProtectionSettings(DataProtectionSettings&& value) { m_dataProtectionSettings = std::move(value); }
    inline UpdateDataProtectionSettingsResult& WithDataProtectionSettings(const DataProtectionSettings& value) { SetDataProtectionSettings(value); return *this;}
    inline UpdateDataProtectionSettingsResult& WithDataProtectionSettings(DataProtectionSettings&& value) { SetDataProtectionSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDataProtectionSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDataProtectionSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDataProtectionSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataProtectionSettings m_dataProtectionSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
