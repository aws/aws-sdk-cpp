/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryProvider.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Detailed data of the service sync configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServiceSyncConfig">AWS
   * API Reference</a></p>
   */
  class ServiceSyncConfig
  {
  public:
    AWS_PROTON_API ServiceSyncConfig();
    AWS_PROTON_API ServiceSyncConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServiceSyncConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the code repository branch that holds the service code Proton
     * will sync with.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }

    /**
     * <p>The name of the code repository branch that holds the service code Proton
     * will sync with.</p>
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>The name of the code repository branch that holds the service code Proton
     * will sync with.</p>
     */
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>The name of the code repository branch that holds the service code Proton
     * will sync with.</p>
     */
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>The name of the code repository branch that holds the service code Proton
     * will sync with.</p>
     */
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }

    /**
     * <p>The name of the code repository branch that holds the service code Proton
     * will sync with.</p>
     */
    inline ServiceSyncConfig& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}

    /**
     * <p>The name of the code repository branch that holds the service code Proton
     * will sync with.</p>
     */
    inline ServiceSyncConfig& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}

    /**
     * <p>The name of the code repository branch that holds the service code Proton
     * will sync with.</p>
     */
    inline ServiceSyncConfig& WithBranch(const char* value) { SetBranch(value); return *this;}


    /**
     * <p>The file path to the service sync configuration file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The file path to the service sync configuration file.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The file path to the service sync configuration file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The file path to the service sync configuration file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The file path to the service sync configuration file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The file path to the service sync configuration file.</p>
     */
    inline ServiceSyncConfig& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The file path to the service sync configuration file.</p>
     */
    inline ServiceSyncConfig& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The file path to the service sync configuration file.</p>
     */
    inline ServiceSyncConfig& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The name of the code repository that holds the service code Proton will sync
     * with.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the code repository that holds the service code Proton will sync
     * with.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the code repository that holds the service code Proton will sync
     * with.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the code repository that holds the service code Proton will sync
     * with.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the code repository that holds the service code Proton will sync
     * with.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the code repository that holds the service code Proton will sync
     * with.</p>
     */
    inline ServiceSyncConfig& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the code repository that holds the service code Proton will sync
     * with.</p>
     */
    inline ServiceSyncConfig& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the code repository that holds the service code Proton will sync
     * with.</p>
     */
    inline ServiceSyncConfig& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the repository provider that holds the repository Proton will
     * sync with.</p>
     */
    inline const RepositoryProvider& GetRepositoryProvider() const{ return m_repositoryProvider; }

    /**
     * <p>The name of the repository provider that holds the repository Proton will
     * sync with.</p>
     */
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }

    /**
     * <p>The name of the repository provider that holds the repository Proton will
     * sync with.</p>
     */
    inline void SetRepositoryProvider(const RepositoryProvider& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }

    /**
     * <p>The name of the repository provider that holds the repository Proton will
     * sync with.</p>
     */
    inline void SetRepositoryProvider(RepositoryProvider&& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = std::move(value); }

    /**
     * <p>The name of the repository provider that holds the repository Proton will
     * sync with.</p>
     */
    inline ServiceSyncConfig& WithRepositoryProvider(const RepositoryProvider& value) { SetRepositoryProvider(value); return *this;}

    /**
     * <p>The name of the repository provider that holds the repository Proton will
     * sync with.</p>
     */
    inline ServiceSyncConfig& WithRepositoryProvider(RepositoryProvider&& value) { SetRepositoryProvider(std::move(value)); return *this;}


    /**
     * <p>The name of the service that the service instance is added to.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that the service instance is added to.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service that the service instance is added to.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service that the service instance is added to.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that the service instance is added to.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service that the service instance is added to.</p>
     */
    inline ServiceSyncConfig& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that the service instance is added to.</p>
     */
    inline ServiceSyncConfig& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that the service instance is added to.</p>
     */
    inline ServiceSyncConfig& WithServiceName(const char* value) { SetServiceName(value); return *this;}

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
