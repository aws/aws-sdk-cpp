/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/AccessStatus.h>
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
  class GetAWSOrganizationsAccessStatusResult
  {
  public:
    AWS_SERVICECATALOG_API GetAWSOrganizationsAccessStatusResult() = default;
    AWS_SERVICECATALOG_API GetAWSOrganizationsAccessStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API GetAWSOrganizationsAccessStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the portfolio share feature.</p>
     */
    inline AccessStatus GetAccessStatus() const { return m_accessStatus; }
    inline void SetAccessStatus(AccessStatus value) { m_accessStatusHasBeenSet = true; m_accessStatus = value; }
    inline GetAWSOrganizationsAccessStatusResult& WithAccessStatus(AccessStatus value) { SetAccessStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAWSOrganizationsAccessStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccessStatus m_accessStatus{AccessStatus::NOT_SET};
    bool m_accessStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
