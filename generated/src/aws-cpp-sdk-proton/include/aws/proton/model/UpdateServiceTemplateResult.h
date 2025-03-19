/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceTemplate.h>
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
  class UpdateServiceTemplateResult
  {
  public:
    AWS_PROTON_API UpdateServiceTemplateResult() = default;
    AWS_PROTON_API UpdateServiceTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateServiceTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The service template detail data that's returned by Proton.</p>
     */
    inline const ServiceTemplate& GetServiceTemplate() const { return m_serviceTemplate; }
    template<typename ServiceTemplateT = ServiceTemplate>
    void SetServiceTemplate(ServiceTemplateT&& value) { m_serviceTemplateHasBeenSet = true; m_serviceTemplate = std::forward<ServiceTemplateT>(value); }
    template<typename ServiceTemplateT = ServiceTemplate>
    UpdateServiceTemplateResult& WithServiceTemplate(ServiceTemplateT&& value) { SetServiceTemplate(std::forward<ServiceTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateServiceTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceTemplate m_serviceTemplate;
    bool m_serviceTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
