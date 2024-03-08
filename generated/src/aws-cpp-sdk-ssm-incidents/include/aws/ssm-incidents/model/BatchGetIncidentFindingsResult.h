/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/BatchGetIncidentFindingsError.h>
#include <aws/ssm-incidents/model/Finding.h>
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
namespace SSMIncidents
{
namespace Model
{
  class BatchGetIncidentFindingsResult
  {
  public:
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsResult();
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of errors encountered during the operation.</p>
     */
    inline const Aws::Vector<BatchGetIncidentFindingsError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of errors encountered during the operation.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetIncidentFindingsError>& value) { m_errors = value; }

    /**
     * <p>A list of errors encountered during the operation.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetIncidentFindingsError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of errors encountered during the operation.</p>
     */
    inline BatchGetIncidentFindingsResult& WithErrors(const Aws::Vector<BatchGetIncidentFindingsError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of errors encountered during the operation.</p>
     */
    inline BatchGetIncidentFindingsResult& WithErrors(Aws::Vector<BatchGetIncidentFindingsError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of errors encountered during the operation.</p>
     */
    inline BatchGetIncidentFindingsResult& AddErrors(const BatchGetIncidentFindingsError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of errors encountered during the operation.</p>
     */
    inline BatchGetIncidentFindingsResult& AddErrors(BatchGetIncidentFindingsError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the requested findings.</p>
     */
    inline const Aws::Vector<Finding>& GetFindings() const{ return m_findings; }

    /**
     * <p>Information about the requested findings.</p>
     */
    inline void SetFindings(const Aws::Vector<Finding>& value) { m_findings = value; }

    /**
     * <p>Information about the requested findings.</p>
     */
    inline void SetFindings(Aws::Vector<Finding>&& value) { m_findings = std::move(value); }

    /**
     * <p>Information about the requested findings.</p>
     */
    inline BatchGetIncidentFindingsResult& WithFindings(const Aws::Vector<Finding>& value) { SetFindings(value); return *this;}

    /**
     * <p>Information about the requested findings.</p>
     */
    inline BatchGetIncidentFindingsResult& WithFindings(Aws::Vector<Finding>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>Information about the requested findings.</p>
     */
    inline BatchGetIncidentFindingsResult& AddFindings(const Finding& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>Information about the requested findings.</p>
     */
    inline BatchGetIncidentFindingsResult& AddFindings(Finding&& value) { m_findings.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetIncidentFindingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetIncidentFindingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetIncidentFindingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchGetIncidentFindingsError> m_errors;

    Aws::Vector<Finding> m_findings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
