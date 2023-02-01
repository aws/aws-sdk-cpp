/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class ExecuteProvisionedProductServiceActionRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ExecuteProvisionedProductServiceActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteProvisionedProductServiceAction"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::move(value); }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}


    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline const Aws::String& GetServiceActionId() const{ return m_serviceActionId; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline bool ServiceActionIdHasBeenSet() const { return m_serviceActionIdHasBeenSet; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetServiceActionId(const Aws::String& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = value; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetServiceActionId(Aws::String&& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = std::move(value); }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetServiceActionId(const char* value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId.assign(value); }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithServiceActionId(const Aws::String& value) { SetServiceActionId(value); return *this;}

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithServiceActionId(Aws::String&& value) { SetServiceActionId(std::move(value)); return *this;}

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithServiceActionId(const char* value) { SetServiceActionId(value); return *this;}


    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline const Aws::String& GetExecuteToken() const{ return m_executeToken; }

    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline bool ExecuteTokenHasBeenSet() const { return m_executeTokenHasBeenSet; }

    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline void SetExecuteToken(const Aws::String& value) { m_executeTokenHasBeenSet = true; m_executeToken = value; }

    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline void SetExecuteToken(Aws::String&& value) { m_executeTokenHasBeenSet = true; m_executeToken = std::move(value); }

    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline void SetExecuteToken(const char* value) { m_executeTokenHasBeenSet = true; m_executeToken.assign(value); }

    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithExecuteToken(const Aws::String& value) { SetExecuteToken(value); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithExecuteToken(Aws::String&& value) { SetExecuteToken(std::move(value)); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithExecuteToken(const char* value) { SetExecuteToken(value); return *this;}


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
    inline ExecuteProvisionedProductServiceActionRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline ExecuteProvisionedProductServiceActionRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_serviceActionId;
    bool m_serviceActionIdHasBeenSet = false;

    Aws::String m_executeToken;
    bool m_executeTokenHasBeenSet = false;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
