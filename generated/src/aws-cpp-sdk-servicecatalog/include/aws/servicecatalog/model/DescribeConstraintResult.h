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
  class DescribeConstraintResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeConstraintResult();
    AWS_SERVICECATALOG_API DescribeConstraintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeConstraintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the constraint.</p>
     */
    inline const ConstraintDetail& GetConstraintDetail() const{ return m_constraintDetail; }
    inline void SetConstraintDetail(const ConstraintDetail& value) { m_constraintDetail = value; }
    inline void SetConstraintDetail(ConstraintDetail&& value) { m_constraintDetail = std::move(value); }
    inline DescribeConstraintResult& WithConstraintDetail(const ConstraintDetail& value) { SetConstraintDetail(value); return *this;}
    inline DescribeConstraintResult& WithConstraintDetail(ConstraintDetail&& value) { SetConstraintDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constraint parameters.</p>
     */
    inline const Aws::String& GetConstraintParameters() const{ return m_constraintParameters; }
    inline void SetConstraintParameters(const Aws::String& value) { m_constraintParameters = value; }
    inline void SetConstraintParameters(Aws::String&& value) { m_constraintParameters = std::move(value); }
    inline void SetConstraintParameters(const char* value) { m_constraintParameters.assign(value); }
    inline DescribeConstraintResult& WithConstraintParameters(const Aws::String& value) { SetConstraintParameters(value); return *this;}
    inline DescribeConstraintResult& WithConstraintParameters(Aws::String&& value) { SetConstraintParameters(std::move(value)); return *this;}
    inline DescribeConstraintResult& WithConstraintParameters(const char* value) { SetConstraintParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the current request.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline DescribeConstraintResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline DescribeConstraintResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConstraintResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConstraintResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConstraintResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ConstraintDetail m_constraintDetail;

    Aws::String m_constraintParameters;

    Status m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
