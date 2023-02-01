/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryProvider.h>
#include <aws/proton/model/SyncType.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class ListRepositorySyncDefinitionsRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListRepositorySyncDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositorySyncDefinitions"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The repository name.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository name.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The repository name.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The repository name.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The repository name.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The repository name.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The repository provider.</p>
     */
    inline const RepositoryProvider& GetRepositoryProvider() const{ return m_repositoryProvider; }

    /**
     * <p>The repository provider.</p>
     */
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }

    /**
     * <p>The repository provider.</p>
     */
    inline void SetRepositoryProvider(const RepositoryProvider& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }

    /**
     * <p>The repository provider.</p>
     */
    inline void SetRepositoryProvider(RepositoryProvider&& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = std::move(value); }

    /**
     * <p>The repository provider.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryProvider(const RepositoryProvider& value) { SetRepositoryProvider(value); return *this;}

    /**
     * <p>The repository provider.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryProvider(RepositoryProvider&& value) { SetRepositoryProvider(std::move(value)); return *this;}


    /**
     * <p>The sync type. The only supported value is <code>TEMPLATE_SYNC</code>.</p>
     */
    inline const SyncType& GetSyncType() const{ return m_syncType; }

    /**
     * <p>The sync type. The only supported value is <code>TEMPLATE_SYNC</code>.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>The sync type. The only supported value is <code>TEMPLATE_SYNC</code>.</p>
     */
    inline void SetSyncType(const SyncType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>The sync type. The only supported value is <code>TEMPLATE_SYNC</code>.</p>
     */
    inline void SetSyncType(SyncType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>The sync type. The only supported value is <code>TEMPLATE_SYNC</code>.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithSyncType(const SyncType& value) { SetSyncType(value); return *this;}

    /**
     * <p>The sync type. The only supported value is <code>TEMPLATE_SYNC</code>.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithSyncType(SyncType&& value) { SetSyncType(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryProvider m_repositoryProvider;
    bool m_repositoryProviderHasBeenSet = false;

    SyncType m_syncType;
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
