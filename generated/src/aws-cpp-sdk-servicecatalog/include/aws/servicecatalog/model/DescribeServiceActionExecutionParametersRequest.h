/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class DescribeServiceActionExecutionParametersRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DescribeServiceActionExecutionParametersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceActionExecutionParameters"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const { return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    template<typename ProvisionedProductIdT = Aws::String>
    void SetProvisionedProductId(ProvisionedProductIdT&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::forward<ProvisionedProductIdT>(value); }
    template<typename ProvisionedProductIdT = Aws::String>
    DescribeServiceActionExecutionParametersRequest& WithProvisionedProductId(ProvisionedProductIdT&& value) { SetProvisionedProductId(std::forward<ProvisionedProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The self-service action identifier.</p>
     */
    inline const Aws::String& GetServiceActionId() const { return m_serviceActionId; }
    inline bool ServiceActionIdHasBeenSet() const { return m_serviceActionIdHasBeenSet; }
    template<typename ServiceActionIdT = Aws::String>
    void SetServiceActionId(ServiceActionIdT&& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = std::forward<ServiceActionIdT>(value); }
    template<typename ServiceActionIdT = Aws::String>
    DescribeServiceActionExecutionParametersRequest& WithServiceActionId(ServiceActionIdT&& value) { SetServiceActionId(std::forward<ServiceActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    DescribeServiceActionExecutionParametersRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_serviceActionId;
    bool m_serviceActionIdHasBeenSet = false;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
