/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ServiceActionDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class UpdateServiceActionResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateServiceActionResult() = default;
    AWS_SERVICECATALOG_API UpdateServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Detailed information about the self-service action.</p>
     */
    inline const ServiceActionDetail& GetServiceActionDetail() const { return m_serviceActionDetail; }
    template<typename ServiceActionDetailT = ServiceActionDetail>
    void SetServiceActionDetail(ServiceActionDetailT&& value) { m_serviceActionDetailHasBeenSet = true; m_serviceActionDetail = std::forward<ServiceActionDetailT>(value); }
    template<typename ServiceActionDetailT = ServiceActionDetail>
    UpdateServiceActionResult& WithServiceActionDetail(ServiceActionDetailT&& value) { SetServiceActionDetail(std::forward<ServiceActionDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateServiceActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceActionDetail m_serviceActionDetail;
    bool m_serviceActionDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
