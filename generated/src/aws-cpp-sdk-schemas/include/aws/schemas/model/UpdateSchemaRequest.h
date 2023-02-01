/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/Type.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   */
  class UpdateSchemaRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API UpdateSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSchema"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the client token.</p>
     */
    inline const Aws::String& GetClientTokenId() const{ return m_clientTokenId; }

    /**
     * <p>The ID of the client token.</p>
     */
    inline bool ClientTokenIdHasBeenSet() const { return m_clientTokenIdHasBeenSet; }

    /**
     * <p>The ID of the client token.</p>
     */
    inline void SetClientTokenId(const Aws::String& value) { m_clientTokenIdHasBeenSet = true; m_clientTokenId = value; }

    /**
     * <p>The ID of the client token.</p>
     */
    inline void SetClientTokenId(Aws::String&& value) { m_clientTokenIdHasBeenSet = true; m_clientTokenId = std::move(value); }

    /**
     * <p>The ID of the client token.</p>
     */
    inline void SetClientTokenId(const char* value) { m_clientTokenIdHasBeenSet = true; m_clientTokenId.assign(value); }

    /**
     * <p>The ID of the client token.</p>
     */
    inline UpdateSchemaRequest& WithClientTokenId(const Aws::String& value) { SetClientTokenId(value); return *this;}

    /**
     * <p>The ID of the client token.</p>
     */
    inline UpdateSchemaRequest& WithClientTokenId(Aws::String&& value) { SetClientTokenId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client token.</p>
     */
    inline UpdateSchemaRequest& WithClientTokenId(const char* value) { SetClientTokenId(value); return *this;}


    /**
     * <p>The source of the schema definition.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline UpdateSchemaRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The source of the schema definition.</p>
     */
    inline UpdateSchemaRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The source of the schema definition.</p>
     */
    inline UpdateSchemaRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the schema.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the schema.</p>
     */
    inline UpdateSchemaRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the schema.</p>
     */
    inline UpdateSchemaRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the schema.</p>
     */
    inline UpdateSchemaRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>The name of the registry.</p>
     */
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    /**
     * <p>The name of the registry.</p>
     */
    inline UpdateSchemaRequest& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline UpdateSchemaRequest& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline UpdateSchemaRequest& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline UpdateSchemaRequest& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline UpdateSchemaRequest& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline UpdateSchemaRequest& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The schema type for the events schema.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The schema type for the events schema.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The schema type for the events schema.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The schema type for the events schema.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The schema type for the events schema.</p>
     */
    inline UpdateSchemaRequest& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The schema type for the events schema.</p>
     */
    inline UpdateSchemaRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_clientTokenId;
    bool m_clientTokenIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
