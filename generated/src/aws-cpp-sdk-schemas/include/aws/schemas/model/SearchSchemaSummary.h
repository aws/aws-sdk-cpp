/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/model/SearchSchemaVersionSummary.h>
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
namespace Schemas
{
namespace Model
{

  class SearchSchemaSummary
  {
  public:
    AWS_SCHEMAS_API SearchSchemaSummary() = default;
    AWS_SCHEMAS_API SearchSchemaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API SearchSchemaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const { return m_registryName; }
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }
    template<typename RegistryNameT = Aws::String>
    void SetRegistryName(RegistryNameT&& value) { m_registryNameHasBeenSet = true; m_registryName = std::forward<RegistryNameT>(value); }
    template<typename RegistryNameT = Aws::String>
    SearchSchemaSummary& WithRegistryName(RegistryNameT&& value) { SetRegistryName(std::forward<RegistryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    SearchSchemaSummary& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    SearchSchemaSummary& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of schema version summaries.</p>
     */
    inline const Aws::Vector<SearchSchemaVersionSummary>& GetSchemaVersions() const { return m_schemaVersions; }
    inline bool SchemaVersionsHasBeenSet() const { return m_schemaVersionsHasBeenSet; }
    template<typename SchemaVersionsT = Aws::Vector<SearchSchemaVersionSummary>>
    void SetSchemaVersions(SchemaVersionsT&& value) { m_schemaVersionsHasBeenSet = true; m_schemaVersions = std::forward<SchemaVersionsT>(value); }
    template<typename SchemaVersionsT = Aws::Vector<SearchSchemaVersionSummary>>
    SearchSchemaSummary& WithSchemaVersions(SchemaVersionsT&& value) { SetSchemaVersions(std::forward<SchemaVersionsT>(value)); return *this;}
    template<typename SchemaVersionsT = SearchSchemaVersionSummary>
    SearchSchemaSummary& AddSchemaVersions(SchemaVersionsT&& value) { m_schemaVersionsHasBeenSet = true; m_schemaVersions.emplace_back(std::forward<SchemaVersionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::Vector<SearchSchemaVersionSummary> m_schemaVersions;
    bool m_schemaVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
