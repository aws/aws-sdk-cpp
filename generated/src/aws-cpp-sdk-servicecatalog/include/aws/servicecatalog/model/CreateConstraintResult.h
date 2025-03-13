/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ConstraintDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/Status.h>
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
  class CreateConstraintResult
  {
  public:
    AWS_SERVICECATALOG_API CreateConstraintResult() = default;
    AWS_SERVICECATALOG_API CreateConstraintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CreateConstraintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the constraint.</p>
     */
    inline const ConstraintDetail& GetConstraintDetail() const { return m_constraintDetail; }
    template<typename ConstraintDetailT = ConstraintDetail>
    void SetConstraintDetail(ConstraintDetailT&& value) { m_constraintDetailHasBeenSet = true; m_constraintDetail = std::forward<ConstraintDetailT>(value); }
    template<typename ConstraintDetailT = ConstraintDetail>
    CreateConstraintResult& WithConstraintDetail(ConstraintDetailT&& value) { SetConstraintDetail(std::forward<ConstraintDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constraint parameters.</p>
     */
    inline const Aws::String& GetConstraintParameters() const { return m_constraintParameters; }
    template<typename ConstraintParametersT = Aws::String>
    void SetConstraintParameters(ConstraintParametersT&& value) { m_constraintParametersHasBeenSet = true; m_constraintParameters = std::forward<ConstraintParametersT>(value); }
    template<typename ConstraintParametersT = Aws::String>
    CreateConstraintResult& WithConstraintParameters(ConstraintParametersT&& value) { SetConstraintParameters(std::forward<ConstraintParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the current request.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateConstraintResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConstraintResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConstraintDetail m_constraintDetail;
    bool m_constraintDetailHasBeenSet = false;

    Aws::String m_constraintParameters;
    bool m_constraintParametersHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
