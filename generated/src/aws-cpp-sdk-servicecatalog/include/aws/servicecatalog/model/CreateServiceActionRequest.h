/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ServiceActionDefinitionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ServiceActionDefinitionKey.h>
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
  class CreateServiceActionRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API CreateServiceActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceAction"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The self-service action name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateServiceActionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateServiceActionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateServiceActionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service action definition type. For example,
     * <code>SSM_AUTOMATION</code>.</p>
     */
    inline const ServiceActionDefinitionType& GetDefinitionType() const{ return m_definitionType; }
    inline bool DefinitionTypeHasBeenSet() const { return m_definitionTypeHasBeenSet; }
    inline void SetDefinitionType(const ServiceActionDefinitionType& value) { m_definitionTypeHasBeenSet = true; m_definitionType = value; }
    inline void SetDefinitionType(ServiceActionDefinitionType&& value) { m_definitionTypeHasBeenSet = true; m_definitionType = std::move(value); }
    inline CreateServiceActionRequest& WithDefinitionType(const ServiceActionDefinitionType& value) { SetDefinitionType(value); return *this;}
    inline CreateServiceActionRequest& WithDefinitionType(ServiceActionDefinitionType&& value) { SetDefinitionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the Amazon Web Services Systems Manager
     * document (SSM document). For example, <code>AWS-RestartEC2Instance</code>.</p>
     * <p>If you are using a shared SSM document, you must provide the ARN instead of
     * the name.</p> </dd> <dt>Version</dt> <dd> <p>The Amazon Web Services Systems
     * Manager automation document version. For example, <code>"Version": "1"</code>
     * </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN) of the
     * role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code> or
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TEXT_VALUE\"}]</code>.</p> </dd>
     * </dl>
     */
    inline const Aws::Map<ServiceActionDefinitionKey, Aws::String>& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const Aws::Map<ServiceActionDefinitionKey, Aws::String>& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(Aws::Map<ServiceActionDefinitionKey, Aws::String>&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline CreateServiceActionRequest& WithDefinition(const Aws::Map<ServiceActionDefinitionKey, Aws::String>& value) { SetDefinition(value); return *this;}
    inline CreateServiceActionRequest& WithDefinition(Aws::Map<ServiceActionDefinitionKey, Aws::String>&& value) { SetDefinition(std::move(value)); return *this;}
    inline CreateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.emplace(key, value); return *this; }
    inline CreateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), value); return *this; }
    inline CreateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.emplace(key, std::move(value)); return *this; }
    inline CreateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, const char* value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), value); return *this; }
    inline CreateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, const char* value) { m_definitionHasBeenSet = true; m_definition.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The self-service action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateServiceActionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateServiceActionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateServiceActionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }
    inline CreateServiceActionRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline CreateServiceActionRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline CreateServiceActionRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline CreateServiceActionRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline CreateServiceActionRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline CreateServiceActionRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServiceActionDefinitionType m_definitionType;
    bool m_definitionTypeHasBeenSet = false;

    Aws::Map<ServiceActionDefinitionKey, Aws::String> m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
