/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ApplicationSettingsResource.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetApplicationSettingsResult
  {
  public:
    AWS_PINPOINT_API GetApplicationSettingsResult() = default;
    AWS_PINPOINT_API GetApplicationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetApplicationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApplicationSettingsResource& GetApplicationSettingsResource() const { return m_applicationSettingsResource; }
    template<typename ApplicationSettingsResourceT = ApplicationSettingsResource>
    void SetApplicationSettingsResource(ApplicationSettingsResourceT&& value) { m_applicationSettingsResourceHasBeenSet = true; m_applicationSettingsResource = std::forward<ApplicationSettingsResourceT>(value); }
    template<typename ApplicationSettingsResourceT = ApplicationSettingsResource>
    GetApplicationSettingsResult& WithApplicationSettingsResource(ApplicationSettingsResourceT&& value) { SetApplicationSettingsResource(std::forward<ApplicationSettingsResourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationSettingsResource m_applicationSettingsResource;
    bool m_applicationSettingsResourceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
