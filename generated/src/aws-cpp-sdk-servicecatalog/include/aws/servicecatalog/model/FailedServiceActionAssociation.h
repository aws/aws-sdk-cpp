/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ServiceActionAssociationErrorCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An object containing information about the error, along with identifying
   * information about the self-service action and its associations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/FailedServiceActionAssociation">AWS
   * API Reference</a></p>
   */
  class FailedServiceActionAssociation
  {
  public:
    AWS_SERVICECATALOG_API FailedServiceActionAssociation() = default;
    AWS_SERVICECATALOG_API FailedServiceActionAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API FailedServiceActionAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline const Aws::String& GetServiceActionId() const { return m_serviceActionId; }
    inline bool ServiceActionIdHasBeenSet() const { return m_serviceActionIdHasBeenSet; }
    template<typename ServiceActionIdT = Aws::String>
    void SetServiceActionId(ServiceActionIdT&& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = std::forward<ServiceActionIdT>(value); }
    template<typename ServiceActionIdT = Aws::String>
    FailedServiceActionAssociation& WithServiceActionId(ServiceActionIdT&& value) { SetServiceActionId(std::forward<ServiceActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    FailedServiceActionAssociation& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    FailedServiceActionAssociation& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code. Valid values are listed below.</p>
     */
    inline ServiceActionAssociationErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(ServiceActionAssociationErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline FailedServiceActionAssociation& WithErrorCode(ServiceActionAssociationErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text description of the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    FailedServiceActionAssociation& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceActionId;
    bool m_serviceActionIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    ServiceActionAssociationErrorCode m_errorCode{ServiceActionAssociationErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
