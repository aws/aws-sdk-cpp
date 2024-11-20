/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
  class CreateDataProtectionSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API CreateDataProtectionSettingsResult();
    AWS_WORKSPACESWEB_API CreateDataProtectionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API CreateDataProtectionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the data protection settings resource.</p>
     */
    inline const Aws::String& GetDataProtectionSettingsArn() const{ return m_dataProtectionSettingsArn; }
    inline void SetDataProtectionSettingsArn(const Aws::String& value) { m_dataProtectionSettingsArn = value; }
    inline void SetDataProtectionSettingsArn(Aws::String&& value) { m_dataProtectionSettingsArn = std::move(value); }
    inline void SetDataProtectionSettingsArn(const char* value) { m_dataProtectionSettingsArn.assign(value); }
    inline CreateDataProtectionSettingsResult& WithDataProtectionSettingsArn(const Aws::String& value) { SetDataProtectionSettingsArn(value); return *this;}
    inline CreateDataProtectionSettingsResult& WithDataProtectionSettingsArn(Aws::String&& value) { SetDataProtectionSettingsArn(std::move(value)); return *this;}
    inline CreateDataProtectionSettingsResult& WithDataProtectionSettingsArn(const char* value) { SetDataProtectionSettingsArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDataProtectionSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDataProtectionSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDataProtectionSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataProtectionSettingsArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
