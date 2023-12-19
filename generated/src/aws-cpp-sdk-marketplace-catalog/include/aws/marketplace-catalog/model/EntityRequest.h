/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>An object that contains entity ID and the catalog in which the entity is
   * present.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/EntityRequest">AWS
   * API Reference</a></p>
   */
  class EntityRequest
  {
  public:
    AWS_MARKETPLACECATALOG_API EntityRequest();
    AWS_MARKETPLACECATALOG_API EntityRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API EntityRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the catalog the entity is present in. The only value at this time
     * is <code>AWSMarketplace</code>.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }

    /**
     * <p>The name of the catalog the entity is present in. The only value at this time
     * is <code>AWSMarketplace</code>.</p>
     */
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }

    /**
     * <p>The name of the catalog the entity is present in. The only value at this time
     * is <code>AWSMarketplace</code>.</p>
     */
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }

    /**
     * <p>The name of the catalog the entity is present in. The only value at this time
     * is <code>AWSMarketplace</code>.</p>
     */
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }

    /**
     * <p>The name of the catalog the entity is present in. The only value at this time
     * is <code>AWSMarketplace</code>.</p>
     */
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }

    /**
     * <p>The name of the catalog the entity is present in. The only value at this time
     * is <code>AWSMarketplace</code>.</p>
     */
    inline EntityRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}

    /**
     * <p>The name of the catalog the entity is present in. The only value at this time
     * is <code>AWSMarketplace</code>.</p>
     */
    inline EntityRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog the entity is present in. The only value at this time
     * is <code>AWSMarketplace</code>.</p>
     */
    inline EntityRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}


    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline EntityRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline EntityRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline EntityRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}

  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
