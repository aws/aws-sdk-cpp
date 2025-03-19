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
    AWS_PROTON_API ListRepositorySyncDefinitionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositorySyncDefinitions"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the list of repository sync
     * definitions previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositorySyncDefinitionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    ListRepositorySyncDefinitionsRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository provider.</p>
     */
    inline RepositoryProvider GetRepositoryProvider() const { return m_repositoryProvider; }
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }
    inline void SetRepositoryProvider(RepositoryProvider value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryProvider(RepositoryProvider value) { SetRepositoryProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync type. The only supported value is <code>TEMPLATE_SYNC</code>.</p>
     */
    inline SyncType GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(SyncType value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline ListRepositorySyncDefinitionsRequest& WithSyncType(SyncType value) { SetSyncType(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryProvider m_repositoryProvider{RepositoryProvider::NOT_SET};
    bool m_repositoryProviderHasBeenSet = false;

    SyncType m_syncType{SyncType::NOT_SET};
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
