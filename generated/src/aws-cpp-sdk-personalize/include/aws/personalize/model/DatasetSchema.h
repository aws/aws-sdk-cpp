/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/personalize/model/Domain.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the schema for a dataset. For more information on schemas, see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSchema.html">CreateSchema</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DatasetSchema">AWS
   * API Reference</a></p>
   */
  class DatasetSchema
  {
  public:
    AWS_PERSONALIZE_API DatasetSchema();
    AWS_PERSONALIZE_API DatasetSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DatasetSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schema.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline DatasetSchema& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline DatasetSchema& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline DatasetSchema& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline DatasetSchema& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline DatasetSchema& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline DatasetSchema& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The schema.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The schema.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The schema.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The schema.</p>
     */
    inline DatasetSchema& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema.</p>
     */
    inline DatasetSchema& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema.</p>
     */
    inline DatasetSchema& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The date and time (in Unix time) that the schema was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time (in Unix time) that the schema was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the schema was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the schema was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the schema was created.</p>
     */
    inline DatasetSchema& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the schema was created.</p>
     */
    inline DatasetSchema& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix time) that the schema was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix time) that the schema was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the schema was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the schema was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the schema was last updated.</p>
     */
    inline DatasetSchema& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the schema was last updated.</p>
     */
    inline DatasetSchema& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The domain of a schema that you created for a dataset in a Domain dataset
     * group.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain of a schema that you created for a dataset in a Domain dataset
     * group.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain of a schema that you created for a dataset in a Domain dataset
     * group.</p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain of a schema that you created for a dataset in a Domain dataset
     * group.</p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain of a schema that you created for a dataset in a Domain dataset
     * group.</p>
     */
    inline DatasetSchema& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain of a schema that you created for a dataset in a Domain dataset
     * group.</p>
     */
    inline DatasetSchema& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Domain m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
