/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/RecordDetail.h>
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
  class ExecuteProvisionedProductPlanResult
  {
  public:
    AWS_SERVICECATALOG_API ExecuteProvisionedProductPlanResult() = default;
    AWS_SERVICECATALOG_API ExecuteProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ExecuteProvisionedProductPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the result of provisioning the product.</p>
     */
    inline const RecordDetail& GetRecordDetail() const { return m_recordDetail; }
    template<typename RecordDetailT = RecordDetail>
    void SetRecordDetail(RecordDetailT&& value) { m_recordDetailHasBeenSet = true; m_recordDetail = std::forward<RecordDetailT>(value); }
    template<typename RecordDetailT = RecordDetail>
    ExecuteProvisionedProductPlanResult& WithRecordDetail(RecordDetailT&& value) { SetRecordDetail(std::forward<RecordDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExecuteProvisionedProductPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecordDetail m_recordDetail;
    bool m_recordDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
