/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/CopyProductStatus.h>
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
  class DescribeCopyProductStatusResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeCopyProductStatusResult() = default;
    AWS_SERVICECATALOG_API DescribeCopyProductStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeCopyProductStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the copy product operation.</p>
     */
    inline CopyProductStatus GetCopyProductStatus() const { return m_copyProductStatus; }
    inline void SetCopyProductStatus(CopyProductStatus value) { m_copyProductStatusHasBeenSet = true; m_copyProductStatus = value; }
    inline DescribeCopyProductStatusResult& WithCopyProductStatus(CopyProductStatus value) { SetCopyProductStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the copied product.</p>
     */
    inline const Aws::String& GetTargetProductId() const { return m_targetProductId; }
    template<typename TargetProductIdT = Aws::String>
    void SetTargetProductId(TargetProductIdT&& value) { m_targetProductIdHasBeenSet = true; m_targetProductId = std::forward<TargetProductIdT>(value); }
    template<typename TargetProductIdT = Aws::String>
    DescribeCopyProductStatusResult& WithTargetProductId(TargetProductIdT&& value) { SetTargetProductId(std::forward<TargetProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusDetail() const { return m_statusDetail; }
    template<typename StatusDetailT = Aws::String>
    void SetStatusDetail(StatusDetailT&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::forward<StatusDetailT>(value); }
    template<typename StatusDetailT = Aws::String>
    DescribeCopyProductStatusResult& WithStatusDetail(StatusDetailT&& value) { SetStatusDetail(std::forward<StatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCopyProductStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CopyProductStatus m_copyProductStatus{CopyProductStatus::NOT_SET};
    bool m_copyProductStatusHasBeenSet = false;

    Aws::String m_targetProductId;
    bool m_targetProductIdHasBeenSet = false;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
