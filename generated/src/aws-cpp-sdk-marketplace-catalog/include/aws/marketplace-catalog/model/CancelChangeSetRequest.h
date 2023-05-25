/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   */
  class CancelChangeSetRequest : public MarketplaceCatalogRequest
  {
  public:
    AWS_MARKETPLACECATALOG_API CancelChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelChangeSet"; }

    AWS_MARKETPLACECATALOG_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACECATALOG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code>.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code>.</p>
     */
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code>.</p>
     */
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code>.</p>
     */
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code>.</p>
     */
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code>.</p>
     */
    inline CancelChangeSetRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code>.</p>
     */
    inline CancelChangeSetRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code>.</p>
     */
    inline CancelChangeSetRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}


    /**
     * <p>Required. The unique identifier of the <code>StartChangeSet</code> request
     * that you want to cancel.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }

    /**
     * <p>Required. The unique identifier of the <code>StartChangeSet</code> request
     * that you want to cancel.</p>
     */
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }

    /**
     * <p>Required. The unique identifier of the <code>StartChangeSet</code> request
     * that you want to cancel.</p>
     */
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }

    /**
     * <p>Required. The unique identifier of the <code>StartChangeSet</code> request
     * that you want to cancel.</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::move(value); }

    /**
     * <p>Required. The unique identifier of the <code>StartChangeSet</code> request
     * that you want to cancel.</p>
     */
    inline void SetChangeSetId(const char* value) { m_changeSetIdHasBeenSet = true; m_changeSetId.assign(value); }

    /**
     * <p>Required. The unique identifier of the <code>StartChangeSet</code> request
     * that you want to cancel.</p>
     */
    inline CancelChangeSetRequest& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}

    /**
     * <p>Required. The unique identifier of the <code>StartChangeSet</code> request
     * that you want to cancel.</p>
     */
    inline CancelChangeSetRequest& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique identifier of the <code>StartChangeSet</code> request
     * that you want to cancel.</p>
     */
    inline CancelChangeSetRequest& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}

  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
