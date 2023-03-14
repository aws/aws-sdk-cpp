/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsControlAssociationDetail.h>
#include <aws/securityhub/model/UnprocessedStandardsControlAssociation.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchGetStandardsControlAssociationsResult
  {
  public:
    AWS_SECURITYHUB_API BatchGetStandardsControlAssociationsResult();
    AWS_SECURITYHUB_API BatchGetStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchGetStandardsControlAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides the enablement status of a security control in a specified standard
     * and other details for the control in relation to the specified standard. </p>
     */
    inline const Aws::Vector<StandardsControlAssociationDetail>& GetStandardsControlAssociationDetails() const{ return m_standardsControlAssociationDetails; }

    /**
     * <p>Provides the enablement status of a security control in a specified standard
     * and other details for the control in relation to the specified standard. </p>
     */
    inline void SetStandardsControlAssociationDetails(const Aws::Vector<StandardsControlAssociationDetail>& value) { m_standardsControlAssociationDetails = value; }

    /**
     * <p>Provides the enablement status of a security control in a specified standard
     * and other details for the control in relation to the specified standard. </p>
     */
    inline void SetStandardsControlAssociationDetails(Aws::Vector<StandardsControlAssociationDetail>&& value) { m_standardsControlAssociationDetails = std::move(value); }

    /**
     * <p>Provides the enablement status of a security control in a specified standard
     * and other details for the control in relation to the specified standard. </p>
     */
    inline BatchGetStandardsControlAssociationsResult& WithStandardsControlAssociationDetails(const Aws::Vector<StandardsControlAssociationDetail>& value) { SetStandardsControlAssociationDetails(value); return *this;}

    /**
     * <p>Provides the enablement status of a security control in a specified standard
     * and other details for the control in relation to the specified standard. </p>
     */
    inline BatchGetStandardsControlAssociationsResult& WithStandardsControlAssociationDetails(Aws::Vector<StandardsControlAssociationDetail>&& value) { SetStandardsControlAssociationDetails(std::move(value)); return *this;}

    /**
     * <p>Provides the enablement status of a security control in a specified standard
     * and other details for the control in relation to the specified standard. </p>
     */
    inline BatchGetStandardsControlAssociationsResult& AddStandardsControlAssociationDetails(const StandardsControlAssociationDetail& value) { m_standardsControlAssociationDetails.push_back(value); return *this; }

    /**
     * <p>Provides the enablement status of a security control in a specified standard
     * and other details for the control in relation to the specified standard. </p>
     */
    inline BatchGetStandardsControlAssociationsResult& AddStandardsControlAssociationDetails(StandardsControlAssociationDetail&& value) { m_standardsControlAssociationDetails.push_back(std::move(value)); return *this; }


    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard cannot be returned. </p>
     */
    inline const Aws::Vector<UnprocessedStandardsControlAssociation>& GetUnprocessedAssociations() const{ return m_unprocessedAssociations; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard cannot be returned. </p>
     */
    inline void SetUnprocessedAssociations(const Aws::Vector<UnprocessedStandardsControlAssociation>& value) { m_unprocessedAssociations = value; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard cannot be returned. </p>
     */
    inline void SetUnprocessedAssociations(Aws::Vector<UnprocessedStandardsControlAssociation>&& value) { m_unprocessedAssociations = std::move(value); }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard cannot be returned. </p>
     */
    inline BatchGetStandardsControlAssociationsResult& WithUnprocessedAssociations(const Aws::Vector<UnprocessedStandardsControlAssociation>& value) { SetUnprocessedAssociations(value); return *this;}

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard cannot be returned. </p>
     */
    inline BatchGetStandardsControlAssociationsResult& WithUnprocessedAssociations(Aws::Vector<UnprocessedStandardsControlAssociation>&& value) { SetUnprocessedAssociations(std::move(value)); return *this;}

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard cannot be returned. </p>
     */
    inline BatchGetStandardsControlAssociationsResult& AddUnprocessedAssociations(const UnprocessedStandardsControlAssociation& value) { m_unprocessedAssociations.push_back(value); return *this; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard cannot be returned. </p>
     */
    inline BatchGetStandardsControlAssociationsResult& AddUnprocessedAssociations(UnprocessedStandardsControlAssociation&& value) { m_unprocessedAssociations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetStandardsControlAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetStandardsControlAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetStandardsControlAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<StandardsControlAssociationDetail> m_standardsControlAssociationDetails;

    Aws::Vector<UnprocessedStandardsControlAssociation> m_unprocessedAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
