/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/Intent.h>
#include <aws/marketplace-catalog/model/Change.h>
#include <aws/marketplace-catalog/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   */
  class StartChangeSetRequest : public MarketplaceCatalogRequest
  {
  public:
    AWS_MARKETPLACECATALOG_API StartChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartChangeSet"; }

    AWS_MARKETPLACECATALOG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline StartChangeSetRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline StartChangeSetRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline StartChangeSetRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of <code>change</code> object.</p>
     */
    inline const Aws::Vector<Change>& GetChangeSet() const{ return m_changeSet; }
    inline bool ChangeSetHasBeenSet() const { return m_changeSetHasBeenSet; }
    inline void SetChangeSet(const Aws::Vector<Change>& value) { m_changeSetHasBeenSet = true; m_changeSet = value; }
    inline void SetChangeSet(Aws::Vector<Change>&& value) { m_changeSetHasBeenSet = true; m_changeSet = std::move(value); }
    inline StartChangeSetRequest& WithChangeSet(const Aws::Vector<Change>& value) { SetChangeSet(value); return *this;}
    inline StartChangeSetRequest& WithChangeSet(Aws::Vector<Change>&& value) { SetChangeSet(std::move(value)); return *this;}
    inline StartChangeSetRequest& AddChangeSet(const Change& value) { m_changeSetHasBeenSet = true; m_changeSet.push_back(value); return *this; }
    inline StartChangeSetRequest& AddChangeSet(Change&& value) { m_changeSetHasBeenSet = true; m_changeSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional case sensitive string of up to 100 ASCII characters. The change set
     * name can be used to filter the list of change sets. </p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::move(value); }
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }
    inline StartChangeSetRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}
    inline StartChangeSetRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}
    inline StartChangeSetRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token to identify the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline StartChangeSetRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartChangeSetRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartChangeSetRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects specifying each key name and value for the
     * <code>ChangeSetTags</code> property.</p>
     */
    inline const Aws::Vector<Tag>& GetChangeSetTags() const{ return m_changeSetTags; }
    inline bool ChangeSetTagsHasBeenSet() const { return m_changeSetTagsHasBeenSet; }
    inline void SetChangeSetTags(const Aws::Vector<Tag>& value) { m_changeSetTagsHasBeenSet = true; m_changeSetTags = value; }
    inline void SetChangeSetTags(Aws::Vector<Tag>&& value) { m_changeSetTagsHasBeenSet = true; m_changeSetTags = std::move(value); }
    inline StartChangeSetRequest& WithChangeSetTags(const Aws::Vector<Tag>& value) { SetChangeSetTags(value); return *this;}
    inline StartChangeSetRequest& WithChangeSetTags(Aws::Vector<Tag>&& value) { SetChangeSetTags(std::move(value)); return *this;}
    inline StartChangeSetRequest& AddChangeSetTags(const Tag& value) { m_changeSetTagsHasBeenSet = true; m_changeSetTags.push_back(value); return *this; }
    inline StartChangeSetRequest& AddChangeSetTags(Tag&& value) { m_changeSetTagsHasBeenSet = true; m_changeSetTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The intent related to the request. The default is <code>APPLY</code>. To test
     * your request before applying changes to your entities, use
     * <code>VALIDATE</code>. This feature is currently available for adding versions
     * to single-AMI products. For more information, see <a
     * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/ami-products.html#ami-add-version">Add
     * a new version</a>.</p>
     */
    inline const Intent& GetIntent() const{ return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    inline void SetIntent(const Intent& value) { m_intentHasBeenSet = true; m_intent = value; }
    inline void SetIntent(Intent&& value) { m_intentHasBeenSet = true; m_intent = std::move(value); }
    inline StartChangeSetRequest& WithIntent(const Intent& value) { SetIntent(value); return *this;}
    inline StartChangeSetRequest& WithIntent(Intent&& value) { SetIntent(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Change> m_changeSet;
    bool m_changeSetHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_changeSetTags;
    bool m_changeSetTagsHasBeenSet = false;

    Intent m_intent;
    bool m_intentHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
