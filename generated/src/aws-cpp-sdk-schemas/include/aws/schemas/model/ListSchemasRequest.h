/**
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
  class ListSchemasRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API ListSchemasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSchemas"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;

    AWS_SCHEMAS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline int GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline ListSchemasRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListSchemasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListSchemasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListSchemasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListSchemasRequest& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline ListSchemasRequest& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline ListSchemasRequest& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>Specifying this limits the results to only those schema names that start with
     * the specified prefix.</p>
     */
    inline const Aws::String& GetSchemaNamePrefix() const{ return m_schemaNamePrefix; }

    /**
     * <p>Specifying this limits the results to only those schema names that start with
     * the specified prefix.</p>
     */
    inline bool SchemaNamePrefixHasBeenSet() const { return m_schemaNamePrefixHasBeenSet; }

    /**
     * <p>Specifying this limits the results to only those schema names that start with
     * the specified prefix.</p>
     */
    inline void SetSchemaNamePrefix(const Aws::String& value) { m_schemaNamePrefixHasBeenSet = true; m_schemaNamePrefix = value; }

    /**
     * <p>Specifying this limits the results to only those schema names that start with
     * the specified prefix.</p>
     */
    inline void SetSchemaNamePrefix(Aws::String&& value) { m_schemaNamePrefixHasBeenSet = true; m_schemaNamePrefix = std::move(value); }

    /**
     * <p>Specifying this limits the results to only those schema names that start with
     * the specified prefix.</p>
     */
    inline void SetSchemaNamePrefix(const char* value) { m_schemaNamePrefixHasBeenSet = true; m_schemaNamePrefix.assign(value); }

    /**
     * <p>Specifying this limits the results to only those schema names that start with
     * the specified prefix.</p>
     */
    inline ListSchemasRequest& WithSchemaNamePrefix(const Aws::String& value) { SetSchemaNamePrefix(value); return *this;}

    /**
     * <p>Specifying this limits the results to only those schema names that start with
     * the specified prefix.</p>
     */
    inline ListSchemasRequest& WithSchemaNamePrefix(Aws::String&& value) { SetSchemaNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Specifying this limits the results to only those schema names that start with
     * the specified prefix.</p>
     */
    inline ListSchemasRequest& WithSchemaNamePrefix(const char* value) { SetSchemaNamePrefix(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_schemaNamePrefix;
    bool m_schemaNamePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
