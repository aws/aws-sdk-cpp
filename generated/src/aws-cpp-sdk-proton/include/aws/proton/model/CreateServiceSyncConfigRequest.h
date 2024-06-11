/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryProvider.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class CreateServiceSyncConfigRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateServiceSyncConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceSyncConfig"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }
    inline CreateServiceSyncConfigRequest& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}
    inline CreateServiceSyncConfigRequest& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}
    inline CreateServiceSyncConfigRequest& WithBranch(const char* value) { SetBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline CreateServiceSyncConfigRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline CreateServiceSyncConfigRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline CreateServiceSyncConfigRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}
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
    inline CreateServiceSyncConfigRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline CreateServiceSyncConfigRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline CreateServiceSyncConfigRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider type for your repository.</p>
     */
    inline const RepositoryProvider& GetRepositoryProvider() const{ return m_repositoryProvider; }
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }
    inline void SetRepositoryProvider(const RepositoryProvider& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }
    inline void SetRepositoryProvider(RepositoryProvider&& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = std::move(value); }
    inline CreateServiceSyncConfigRequest& WithRepositoryProvider(const RepositoryProvider& value) { SetRepositoryProvider(value); return *this;}
    inline CreateServiceSyncConfigRequest& WithRepositoryProvider(RepositoryProvider&& value) { SetRepositoryProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline CreateServiceSyncConfigRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline CreateServiceSyncConfigRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline CreateServiceSyncConfigRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryProvider m_repositoryProvider;
    bool m_repositoryProviderHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
