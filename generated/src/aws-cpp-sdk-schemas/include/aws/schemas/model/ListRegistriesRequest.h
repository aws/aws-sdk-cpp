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
  class ListRegistriesRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API ListRegistriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRegistries"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;

    AWS_SCHEMAS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline int GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline ListRegistriesRequest& WithLimit(int value) { SetLimit(value); return *this;}


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
    inline ListRegistriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListRegistriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline ListRegistriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifying this limits the results to only those registry names that start
     * with the specified prefix.</p>
     */
    inline const Aws::String& GetRegistryNamePrefix() const{ return m_registryNamePrefix; }

    /**
     * <p>Specifying this limits the results to only those registry names that start
     * with the specified prefix.</p>
     */
    inline bool RegistryNamePrefixHasBeenSet() const { return m_registryNamePrefixHasBeenSet; }

    /**
     * <p>Specifying this limits the results to only those registry names that start
     * with the specified prefix.</p>
     */
    inline void SetRegistryNamePrefix(const Aws::String& value) { m_registryNamePrefixHasBeenSet = true; m_registryNamePrefix = value; }

    /**
     * <p>Specifying this limits the results to only those registry names that start
     * with the specified prefix.</p>
     */
    inline void SetRegistryNamePrefix(Aws::String&& value) { m_registryNamePrefixHasBeenSet = true; m_registryNamePrefix = std::move(value); }

    /**
     * <p>Specifying this limits the results to only those registry names that start
     * with the specified prefix.</p>
     */
    inline void SetRegistryNamePrefix(const char* value) { m_registryNamePrefixHasBeenSet = true; m_registryNamePrefix.assign(value); }

    /**
     * <p>Specifying this limits the results to only those registry names that start
     * with the specified prefix.</p>
     */
    inline ListRegistriesRequest& WithRegistryNamePrefix(const Aws::String& value) { SetRegistryNamePrefix(value); return *this;}

    /**
     * <p>Specifying this limits the results to only those registry names that start
     * with the specified prefix.</p>
     */
    inline ListRegistriesRequest& WithRegistryNamePrefix(Aws::String&& value) { SetRegistryNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Specifying this limits the results to only those registry names that start
     * with the specified prefix.</p>
     */
    inline ListRegistriesRequest& WithRegistryNamePrefix(const char* value) { SetRegistryNamePrefix(value); return *this;}


    /**
     * <p>Can be set to Local or AWS to limit responses to your custom registries, or
     * the ones provided by AWS.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }

    /**
     * <p>Can be set to Local or AWS to limit responses to your custom registries, or
     * the ones provided by AWS.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Can be set to Local or AWS to limit responses to your custom registries, or
     * the ones provided by AWS.</p>
     */
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Can be set to Local or AWS to limit responses to your custom registries, or
     * the ones provided by AWS.</p>
     */
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Can be set to Local or AWS to limit responses to your custom registries, or
     * the ones provided by AWS.</p>
     */
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }

    /**
     * <p>Can be set to Local or AWS to limit responses to your custom registries, or
     * the ones provided by AWS.</p>
     */
    inline ListRegistriesRequest& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>Can be set to Local or AWS to limit responses to your custom registries, or
     * the ones provided by AWS.</p>
     */
    inline ListRegistriesRequest& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>Can be set to Local or AWS to limit responses to your custom registries, or
     * the ones provided by AWS.</p>
     */
    inline ListRegistriesRequest& WithScope(const char* value) { SetScope(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_registryNamePrefix;
    bool m_registryNamePrefixHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
