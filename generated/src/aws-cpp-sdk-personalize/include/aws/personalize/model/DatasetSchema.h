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


    ///@{
    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DatasetSchema& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DatasetSchema& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DatasetSchema& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }
    inline DatasetSchema& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline DatasetSchema& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline DatasetSchema& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline DatasetSchema& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline DatasetSchema& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline DatasetSchema& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the schema was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline DatasetSchema& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DatasetSchema& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the schema was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline DatasetSchema& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DatasetSchema& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain of a schema that you created for a dataset in a Domain dataset
     * group.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline DatasetSchema& WithDomain(const Domain& value) { SetDomain(value); return *this;}
    inline DatasetSchema& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}
    ///@}
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
