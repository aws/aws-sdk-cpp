/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceTemplateVersion.h>
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
namespace Proton
{
namespace Model
{
  class CreateServiceTemplateVersionResult
  {
  public:
    AWS_PROTON_API CreateServiceTemplateVersionResult() = default;
    AWS_PROTON_API CreateServiceTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CreateServiceTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The service template version summary of detail data that's returned by
     * Proton.</p>
     */
    inline const ServiceTemplateVersion& GetServiceTemplateVersion() const { return m_serviceTemplateVersion; }
    template<typename ServiceTemplateVersionT = ServiceTemplateVersion>
    void SetServiceTemplateVersion(ServiceTemplateVersionT&& value) { m_serviceTemplateVersionHasBeenSet = true; m_serviceTemplateVersion = std::forward<ServiceTemplateVersionT>(value); }
    template<typename ServiceTemplateVersionT = ServiceTemplateVersion>
    CreateServiceTemplateVersionResult& WithServiceTemplateVersion(ServiceTemplateVersionT&& value) { SetServiceTemplateVersion(std::forward<ServiceTemplateVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateServiceTemplateVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceTemplateVersion m_serviceTemplateVersion;
    bool m_serviceTemplateVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
