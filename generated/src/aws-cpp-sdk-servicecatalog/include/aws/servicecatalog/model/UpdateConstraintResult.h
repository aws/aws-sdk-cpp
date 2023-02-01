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
  class UpdateConstraintResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateConstraintResult();
    AWS_SERVICECATALOG_API UpdateConstraintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateConstraintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the constraint.</p>
     */
    inline const ConstraintDetail& GetConstraintDetail() const{ return m_constraintDetail; }

    /**
     * <p>Information about the constraint.</p>
     */
    inline void SetConstraintDetail(const ConstraintDetail& value) { m_constraintDetail = value; }

    /**
     * <p>Information about the constraint.</p>
     */
    inline void SetConstraintDetail(ConstraintDetail&& value) { m_constraintDetail = std::move(value); }

    /**
     * <p>Information about the constraint.</p>
     */
    inline UpdateConstraintResult& WithConstraintDetail(const ConstraintDetail& value) { SetConstraintDetail(value); return *this;}

    /**
     * <p>Information about the constraint.</p>
     */
    inline UpdateConstraintResult& WithConstraintDetail(ConstraintDetail&& value) { SetConstraintDetail(std::move(value)); return *this;}


    /**
     * <p>The constraint parameters.</p>
     */
    inline const Aws::String& GetConstraintParameters() const{ return m_constraintParameters; }

    /**
     * <p>The constraint parameters.</p>
     */
    inline void SetConstraintParameters(const Aws::String& value) { m_constraintParameters = value; }

    /**
     * <p>The constraint parameters.</p>
     */
    inline void SetConstraintParameters(Aws::String&& value) { m_constraintParameters = std::move(value); }

    /**
     * <p>The constraint parameters.</p>
     */
    inline void SetConstraintParameters(const char* value) { m_constraintParameters.assign(value); }

    /**
     * <p>The constraint parameters.</p>
     */
    inline UpdateConstraintResult& WithConstraintParameters(const Aws::String& value) { SetConstraintParameters(value); return *this;}

    /**
     * <p>The constraint parameters.</p>
     */
    inline UpdateConstraintResult& WithConstraintParameters(Aws::String&& value) { SetConstraintParameters(std::move(value)); return *this;}

    /**
     * <p>The constraint parameters.</p>
     */
    inline UpdateConstraintResult& WithConstraintParameters(const char* value) { SetConstraintParameters(value); return *this;}


    /**
     * <p>The status of the current request.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the current request.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status of the current request.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the current request.</p>
     */
    inline UpdateConstraintResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the current request.</p>
     */
    inline UpdateConstraintResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ConstraintDetail m_constraintDetail;

    Aws::String m_constraintParameters;

    Status m_status;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
