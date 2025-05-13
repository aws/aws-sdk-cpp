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
    AWS_MARKETPLACECATALOG_API StartChangeSetRequest() = default;

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
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    StartChangeSetRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of <code>change</code> object.</p>
     */
    inline const Aws::Vector<Change>& GetChangeSet() const { return m_changeSet; }
    inline bool ChangeSetHasBeenSet() const { return m_changeSetHasBeenSet; }
    template<typename ChangeSetT = Aws::Vector<Change>>
    void SetChangeSet(ChangeSetT&& value) { m_changeSetHasBeenSet = true; m_changeSet = std::forward<ChangeSetT>(value); }
    template<typename ChangeSetT = Aws::Vector<Change>>
    StartChangeSetRequest& WithChangeSet(ChangeSetT&& value) { SetChangeSet(std::forward<ChangeSetT>(value)); return *this;}
    template<typename ChangeSetT = Change>
    StartChangeSetRequest& AddChangeSet(ChangeSetT&& value) { m_changeSetHasBeenSet = true; m_changeSet.emplace_back(std::forward<ChangeSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional case sensitive string of up to 100 ASCII characters. The change set
     * name can be used to filter the list of change sets. </p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    StartChangeSetRequest& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token to identify the request to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartChangeSetRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects specifying each key name and value for the
     * <code>ChangeSetTags</code> property.</p>
     */
    inline const Aws::Vector<Tag>& GetChangeSetTags() const { return m_changeSetTags; }
    inline bool ChangeSetTagsHasBeenSet() const { return m_changeSetTagsHasBeenSet; }
    template<typename ChangeSetTagsT = Aws::Vector<Tag>>
    void SetChangeSetTags(ChangeSetTagsT&& value) { m_changeSetTagsHasBeenSet = true; m_changeSetTags = std::forward<ChangeSetTagsT>(value); }
    template<typename ChangeSetTagsT = Aws::Vector<Tag>>
    StartChangeSetRequest& WithChangeSetTags(ChangeSetTagsT&& value) { SetChangeSetTags(std::forward<ChangeSetTagsT>(value)); return *this;}
    template<typename ChangeSetTagsT = Tag>
    StartChangeSetRequest& AddChangeSetTags(ChangeSetTagsT&& value) { m_changeSetTagsHasBeenSet = true; m_changeSetTags.emplace_back(std::forward<ChangeSetTagsT>(value)); return *this; }
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
    inline Intent GetIntent() const { return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    inline void SetIntent(Intent value) { m_intentHasBeenSet = true; m_intent = value; }
    inline StartChangeSetRequest& WithIntent(Intent value) { SetIntent(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Change> m_changeSet;
    bool m_changeSetHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Vector<Tag> m_changeSetTags;
    bool m_changeSetTagsHasBeenSet = false;

    Intent m_intent{Intent::NOT_SET};
    bool m_intentHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
