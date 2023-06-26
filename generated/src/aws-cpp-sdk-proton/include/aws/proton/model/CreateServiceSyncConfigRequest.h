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


    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline CreateServiceSyncConfigRequest& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline CreateServiceSyncConfigRequest& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>The repository branch for your Proton Ops file.</p>
     */
    inline CreateServiceSyncConfigRequest& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline CreateServiceSyncConfigRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline CreateServiceSyncConfigRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The path to the Proton Ops file.</p>
     */
    inline CreateServiceSyncConfigRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}


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
    inline CreateServiceSyncConfigRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name.</p>
     */
    inline CreateServiceSyncConfigRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name.</p>
     */
    inline CreateServiceSyncConfigRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The provider type for your repository.</p>
     */
    inline const RepositoryProvider& GetRepositoryProvider() const{ return m_repositoryProvider; }

    /**
     * <p>The provider type for your repository.</p>
     */
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }

    /**
     * <p>The provider type for your repository.</p>
     */
    inline void SetRepositoryProvider(const RepositoryProvider& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }

    /**
     * <p>The provider type for your repository.</p>
     */
    inline void SetRepositoryProvider(RepositoryProvider&& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = std::move(value); }

    /**
     * <p>The provider type for your repository.</p>
     */
    inline CreateServiceSyncConfigRequest& WithRepositoryProvider(const RepositoryProvider& value) { SetRepositoryProvider(value); return *this;}

    /**
     * <p>The provider type for your repository.</p>
     */
    inline CreateServiceSyncConfigRequest& WithRepositoryProvider(RepositoryProvider&& value) { SetRepositoryProvider(std::move(value)); return *this;}


    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline CreateServiceSyncConfigRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline CreateServiceSyncConfigRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service the Proton Ops file is for.</p>
     */
    inline CreateServiceSyncConfigRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

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
