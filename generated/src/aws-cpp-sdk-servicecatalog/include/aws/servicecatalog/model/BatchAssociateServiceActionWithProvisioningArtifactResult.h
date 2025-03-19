/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/FailedServiceActionAssociation.h>
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
  class BatchAssociateServiceActionWithProvisioningArtifactResult
  {
  public:
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult() = default;
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline const Aws::Vector<FailedServiceActionAssociation>& GetFailedServiceActionAssociations() const { return m_failedServiceActionAssociations; }
    template<typename FailedServiceActionAssociationsT = Aws::Vector<FailedServiceActionAssociation>>
    void SetFailedServiceActionAssociations(FailedServiceActionAssociationsT&& value) { m_failedServiceActionAssociationsHasBeenSet = true; m_failedServiceActionAssociations = std::forward<FailedServiceActionAssociationsT>(value); }
    template<typename FailedServiceActionAssociationsT = Aws::Vector<FailedServiceActionAssociation>>
    BatchAssociateServiceActionWithProvisioningArtifactResult& WithFailedServiceActionAssociations(FailedServiceActionAssociationsT&& value) { SetFailedServiceActionAssociations(std::forward<FailedServiceActionAssociationsT>(value)); return *this;}
    template<typename FailedServiceActionAssociationsT = FailedServiceActionAssociation>
    BatchAssociateServiceActionWithProvisioningArtifactResult& AddFailedServiceActionAssociations(FailedServiceActionAssociationsT&& value) { m_failedServiceActionAssociationsHasBeenSet = true; m_failedServiceActionAssociations.emplace_back(std::forward<FailedServiceActionAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAssociateServiceActionWithProvisioningArtifactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedServiceActionAssociation> m_failedServiceActionAssociations;
    bool m_failedServiceActionAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
