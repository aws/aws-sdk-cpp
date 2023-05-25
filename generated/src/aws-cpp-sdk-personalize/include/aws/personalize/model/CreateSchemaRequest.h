/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/Domain.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateSchemaRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSchema"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the schema.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the schema.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the schema.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the schema.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the schema.</p>
     */
    inline CreateSchemaRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the schema.</p>
     */
    inline CreateSchemaRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the schema.</p>
     */
    inline CreateSchemaRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A schema in Avro JSON format.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>A schema in Avro JSON format.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>A schema in Avro JSON format.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>A schema in Avro JSON format.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>A schema in Avro JSON format.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>A schema in Avro JSON format.</p>
     */
    inline CreateSchemaRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>A schema in Avro JSON format.</p>
     */
    inline CreateSchemaRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>A schema in Avro JSON format.</p>
     */
    inline CreateSchemaRequest& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The domain for the schema. If you are creating a schema for a dataset in a
     * Domain dataset group, specify the domain you chose when you created the Domain
     * dataset group.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain for the schema. If you are creating a schema for a dataset in a
     * Domain dataset group, specify the domain you chose when you created the Domain
     * dataset group.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain for the schema. If you are creating a schema for a dataset in a
     * Domain dataset group, specify the domain you chose when you created the Domain
     * dataset group.</p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain for the schema. If you are creating a schema for a dataset in a
     * Domain dataset group, specify the domain you chose when you created the Domain
     * dataset group.</p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain for the schema. If you are creating a schema for a dataset in a
     * Domain dataset group, specify the domain you chose when you created the Domain
     * dataset group.</p>
     */
    inline CreateSchemaRequest& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain for the schema. If you are creating a schema for a dataset in a
     * Domain dataset group, specify the domain you chose when you created the Domain
     * dataset group.</p>
     */
    inline CreateSchemaRequest& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Domain m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
