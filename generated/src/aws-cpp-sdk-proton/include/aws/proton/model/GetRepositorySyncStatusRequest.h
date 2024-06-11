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
  class GetRepositorySyncStatusRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API GetRepositorySyncStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRepositorySyncStatus"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The repository branch.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }
    inline GetRepositorySyncStatusRequest& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}
    inline GetRepositorySyncStatusRequest& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}
    inline GetRepositorySyncStatusRequest& WithBranch(const char* value) { SetBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline GetRepositorySyncStatusRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline GetRepositorySyncStatusRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline GetRepositorySyncStatusRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository provider.</p>
     */
    inline const RepositoryProvider& GetRepositoryProvider() const{ return m_repositoryProvider; }
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }
    inline void SetRepositoryProvider(const RepositoryProvider& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }
    inline void SetRepositoryProvider(RepositoryProvider&& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = std::move(value); }
    inline GetRepositorySyncStatusRequest& WithRepositoryProvider(const RepositoryProvider& value) { SetRepositoryProvider(value); return *this;}
    inline GetRepositorySyncStatusRequest& WithRepositoryProvider(RepositoryProvider&& value) { SetRepositoryProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository sync type.</p>
     */
    inline const SyncType& GetSyncType() const{ return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(const SyncType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline void SetSyncType(SyncType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }
    inline GetRepositorySyncStatusRequest& WithSyncType(const SyncType& value) { SetSyncType(value); return *this;}
    inline GetRepositorySyncStatusRequest& WithSyncType(SyncType&& value) { SetSyncType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

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
