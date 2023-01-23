/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult();
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline const Aws::Vector<FailedServiceActionAssociation>& GetFailedServiceActionAssociations() const{ return m_failedServiceActionAssociations; }

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline void SetFailedServiceActionAssociations(const Aws::Vector<FailedServiceActionAssociation>& value) { m_failedServiceActionAssociations = value; }

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline void SetFailedServiceActionAssociations(Aws::Vector<FailedServiceActionAssociation>&& value) { m_failedServiceActionAssociations = std::move(value); }

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& WithFailedServiceActionAssociations(const Aws::Vector<FailedServiceActionAssociation>& value) { SetFailedServiceActionAssociations(value); return *this;}

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& WithFailedServiceActionAssociations(Aws::Vector<FailedServiceActionAssociation>&& value) { SetFailedServiceActionAssociations(std::move(value)); return *this;}

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& AddFailedServiceActionAssociations(const FailedServiceActionAssociation& value) { m_failedServiceActionAssociations.push_back(value); return *this; }

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactResult& AddFailedServiceActionAssociations(FailedServiceActionAssociation&& value) { m_failedServiceActionAssociations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedServiceActionAssociation> m_failedServiceActionAssociations;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
