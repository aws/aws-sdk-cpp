﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Schemas
{
namespace Model
{

  /**
   */
  class DescribeSchemaRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API DescribeSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSchema"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;

    AWS_SCHEMAS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }
    inline DescribeSchemaRequest& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}
    inline DescribeSchemaRequest& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}
    inline DescribeSchemaRequest& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }
    inline DescribeSchemaRequest& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline DescribeSchemaRequest& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline DescribeSchemaRequest& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifying this limits the results to only this schema version.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }
    inline DescribeSchemaRequest& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline DescribeSchemaRequest& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline DescribeSchemaRequest& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
