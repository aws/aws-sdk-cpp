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
    AWS_SECURITYHUB_API BatchGetStandardsControlAssociationsResult() = default;
    AWS_SECURITYHUB_API BatchGetStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchGetStandardsControlAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides the enablement status of a security control in a specified standard
     * and other details for the control in relation to the specified standard. </p>
     */
    inline const Aws::Vector<StandardsControlAssociationDetail>& GetStandardsControlAssociationDetails() const { return m_standardsControlAssociationDetails; }
    template<typename StandardsControlAssociationDetailsT = Aws::Vector<StandardsControlAssociationDetail>>
    void SetStandardsControlAssociationDetails(StandardsControlAssociationDetailsT&& value) { m_standardsControlAssociationDetailsHasBeenSet = true; m_standardsControlAssociationDetails = std::forward<StandardsControlAssociationDetailsT>(value); }
    template<typename StandardsControlAssociationDetailsT = Aws::Vector<StandardsControlAssociationDetail>>
    BatchGetStandardsControlAssociationsResult& WithStandardsControlAssociationDetails(StandardsControlAssociationDetailsT&& value) { SetStandardsControlAssociationDetails(std::forward<StandardsControlAssociationDetailsT>(value)); return *this;}
    template<typename StandardsControlAssociationDetailsT = StandardsControlAssociationDetail>
    BatchGetStandardsControlAssociationsResult& AddStandardsControlAssociationDetails(StandardsControlAssociationDetailsT&& value) { m_standardsControlAssociationDetailsHasBeenSet = true; m_standardsControlAssociationDetails.emplace_back(std::forward<StandardsControlAssociationDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) whose enablement
     * status in a specified standard cannot be returned. </p>
     */
    inline const Aws::Vector<UnprocessedStandardsControlAssociation>& GetUnprocessedAssociations() const { return m_unprocessedAssociations; }
    template<typename UnprocessedAssociationsT = Aws::Vector<UnprocessedStandardsControlAssociation>>
    void SetUnprocessedAssociations(UnprocessedAssociationsT&& value) { m_unprocessedAssociationsHasBeenSet = true; m_unprocessedAssociations = std::forward<UnprocessedAssociationsT>(value); }
    template<typename UnprocessedAssociationsT = Aws::Vector<UnprocessedStandardsControlAssociation>>
    BatchGetStandardsControlAssociationsResult& WithUnprocessedAssociations(UnprocessedAssociationsT&& value) { SetUnprocessedAssociations(std::forward<UnprocessedAssociationsT>(value)); return *this;}
    template<typename UnprocessedAssociationsT = UnprocessedStandardsControlAssociation>
    BatchGetStandardsControlAssociationsResult& AddUnprocessedAssociations(UnprocessedAssociationsT&& value) { m_unprocessedAssociationsHasBeenSet = true; m_unprocessedAssociations.emplace_back(std::forward<UnprocessedAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetStandardsControlAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StandardsControlAssociationDetail> m_standardsControlAssociationDetails;
    bool m_standardsControlAssociationDetailsHasBeenSet = false;

    Aws::Vector<UnprocessedStandardsControlAssociation> m_unprocessedAssociations;
    bool m_unprocessedAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
