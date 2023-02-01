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
    AWS_SERVICECATALOG_API GetProvisionedProductOutputsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProvisionedProductOutputs"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline GetProvisionedProductOutputsRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline GetProvisionedProductOutputsRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline GetProvisionedProductOutputsRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::move(value); }

    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }

    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioned product that you want the outputs from.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}


    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }

    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }

    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioned product that you want the outputs from.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}


    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputKeys() const{ return m_outputKeys; }

    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline bool OutputKeysHasBeenSet() const { return m_outputKeysHasBeenSet; }

    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline void SetOutputKeys(const Aws::Vector<Aws::String>& value) { m_outputKeysHasBeenSet = true; m_outputKeys = value; }

    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline void SetOutputKeys(Aws::Vector<Aws::String>&& value) { m_outputKeysHasBeenSet = true; m_outputKeys = std::move(value); }

    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithOutputKeys(const Aws::Vector<Aws::String>& value) { SetOutputKeys(value); return *this;}

    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithOutputKeys(Aws::Vector<Aws::String>&& value) { SetOutputKeys(std::move(value)); return *this;}

    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline GetProvisionedProductOutputsRequest& AddOutputKeys(const Aws::String& value) { m_outputKeysHasBeenSet = true; m_outputKeys.push_back(value); return *this; }

    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline GetProvisionedProductOutputsRequest& AddOutputKeys(Aws::String&& value) { m_outputKeysHasBeenSet = true; m_outputKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of keys that the API should return with their values. If none are
     * provided, the API will return all outputs of the provisioned product.</p>
     */
    inline GetProvisionedProductOutputsRequest& AddOutputKeys(const char* value) { m_outputKeysHasBeenSet = true; m_outputKeys.push_back(value); return *this; }


    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline GetProvisionedProductOutputsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_outputKeys;
    bool m_outputKeysHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
