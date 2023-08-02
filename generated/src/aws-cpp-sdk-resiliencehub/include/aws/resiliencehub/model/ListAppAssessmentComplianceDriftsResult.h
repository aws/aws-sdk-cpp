/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ComplianceDrift.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppAssessmentComplianceDriftsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppAssessmentComplianceDriftsResult();
    AWS_RESILIENCEHUB_API ListAppAssessmentComplianceDriftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppAssessmentComplianceDriftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates compliance drifts (recovery time objective (RTO) and recovery point
     * objective (RPO)) detected for an assessed entity.</p>
     */
    inline const Aws::Vector<ComplianceDrift>& GetComplianceDrifts() const{ return m_complianceDrifts; }

    /**
     * <p>Indicates compliance drifts (recovery time objective (RTO) and recovery point
     * objective (RPO)) detected for an assessed entity.</p>
     */
    inline void SetComplianceDrifts(const Aws::Vector<ComplianceDrift>& value) { m_complianceDrifts = value; }

    /**
     * <p>Indicates compliance drifts (recovery time objective (RTO) and recovery point
     * objective (RPO)) detected for an assessed entity.</p>
     */
    inline void SetComplianceDrifts(Aws::Vector<ComplianceDrift>&& value) { m_complianceDrifts = std::move(value); }

    /**
     * <p>Indicates compliance drifts (recovery time objective (RTO) and recovery point
     * objective (RPO)) detected for an assessed entity.</p>
     */
    inline ListAppAssessmentComplianceDriftsResult& WithComplianceDrifts(const Aws::Vector<ComplianceDrift>& value) { SetComplianceDrifts(value); return *this;}

    /**
     * <p>Indicates compliance drifts (recovery time objective (RTO) and recovery point
     * objective (RPO)) detected for an assessed entity.</p>
     */
    inline ListAppAssessmentComplianceDriftsResult& WithComplianceDrifts(Aws::Vector<ComplianceDrift>&& value) { SetComplianceDrifts(std::move(value)); return *this;}

    /**
     * <p>Indicates compliance drifts (recovery time objective (RTO) and recovery point
     * objective (RPO)) detected for an assessed entity.</p>
     */
    inline ListAppAssessmentComplianceDriftsResult& AddComplianceDrifts(const ComplianceDrift& value) { m_complianceDrifts.push_back(value); return *this; }

    /**
     * <p>Indicates compliance drifts (recovery time objective (RTO) and recovery point
     * objective (RPO)) detected for an assessed entity.</p>
     */
    inline ListAppAssessmentComplianceDriftsResult& AddComplianceDrifts(ComplianceDrift&& value) { m_complianceDrifts.push_back(std::move(value)); return *this; }


    /**
     * <p>Token number of the next application to be checked for compliance and
     * regulatory requirements from the list of applications.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token number of the next application to be checked for compliance and
     * regulatory requirements from the list of applications.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token number of the next application to be checked for compliance and
     * regulatory requirements from the list of applications.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token number of the next application to be checked for compliance and
     * regulatory requirements from the list of applications.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token number of the next application to be checked for compliance and
     * regulatory requirements from the list of applications.</p>
     */
    inline ListAppAssessmentComplianceDriftsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token number of the next application to be checked for compliance and
     * regulatory requirements from the list of applications.</p>
     */
    inline ListAppAssessmentComplianceDriftsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token number of the next application to be checked for compliance and
     * regulatory requirements from the list of applications.</p>
     */
    inline ListAppAssessmentComplianceDriftsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAppAssessmentComplianceDriftsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAppAssessmentComplianceDriftsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAppAssessmentComplianceDriftsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ComplianceDrift> m_complianceDrifts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
