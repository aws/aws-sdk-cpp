/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class GetProvisionedProductOutputsRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API GetProvisionedProductOutputsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProvisionedProductOutputs"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    GetProvisionedProductOutputsRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const { return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    template<typename ProvisionedProductIdT = Aws::String>
    void SetProvisionedProductId(ProvisionedProductIdT&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::forward<ProvisionedProductIdT>(value); }
    template<typename ProvisionedProductIdT = Aws::String>
    GetProvisionedProductOutputsRequest& WithProvisionedProductId(ProvisionedProductIdT&& value) { SetProvisionedProductId(std::forward<ProvisionedProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const { return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    template<typename ProvisionedProductNameT = Aws::String>
    void SetProvisionedProductName(ProvisionedProductNameT&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::forward<ProvisionedProductNameT>(value); }
    template<typename ProvisionedProductNameT = Aws::String>
    GetProvisionedProductOutputsRequest& WithProvisionedProductName(ProvisionedProductNameT&& value) { SetProvisionedProductName(std::forward<ProvisionedProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputKeys() const { return m_outputKeys; }
    inline bool OutputKeysHasBeenSet() const { return m_outputKeysHasBeenSet; }
    template<typename OutputKeysT = Aws::Vector<Aws::String>>
    void SetOutputKeys(OutputKeysT&& value) { m_outputKeysHasBeenSet = true; m_outputKeys = std::forward<OutputKeysT>(value); }
    template<typename OutputKeysT = Aws::Vector<Aws::String>>
    GetProvisionedProductOutputsRequest& WithOutputKeys(OutputKeysT&& value) { SetOutputKeys(std::forward<OutputKeysT>(value)); return *this;}
    template<typename OutputKeysT = Aws::String>
    GetProvisionedProductOutputsRequest& AddOutputKeys(OutputKeysT&& value) { m_outputKeysHasBeenSet = true; m_outputKeys.emplace_back(std::forward<OutputKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline GetProvisionedProductOutputsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    GetProvisionedProductOutputsRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_outputKeys;
    bool m_outputKeysHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
