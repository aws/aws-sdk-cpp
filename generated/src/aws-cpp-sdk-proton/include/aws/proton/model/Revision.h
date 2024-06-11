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
   * <p>Revision detail data for a commit and push that activates a sync
   * attempt</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/Revision">AWS API
   * Reference</a></p>
   */
  class Revision
  {
  public:
    AWS_PROTON_API Revision();
    AWS_PROTON_API Revision(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Revision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository branch.</p>
     */
    inline const Aws::String& GetBranch() const{ return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    inline void SetBranch(const Aws::String& value) { m_branchHasBeenSet = true; m_branch = value; }
    inline void SetBranch(Aws::String&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }
    inline void SetBranch(const char* value) { m_branchHasBeenSet = true; m_branch.assign(value); }
    inline Revision& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}
    inline Revision& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}
    inline Revision& WithBranch(const char* value) { SetBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository directory changed by a commit and push that activated the sync
     * attempt.</p>
     */
    inline const Aws::String& GetDirectory() const{ return m_directory; }
    inline bool DirectoryHasBeenSet() const { return m_directoryHasBeenSet; }
    inline void SetDirectory(const Aws::String& value) { m_directoryHasBeenSet = true; m_directory = value; }
    inline void SetDirectory(Aws::String&& value) { m_directoryHasBeenSet = true; m_directory = std::move(value); }
    inline void SetDirectory(const char* value) { m_directoryHasBeenSet = true; m_directory.assign(value); }
    inline Revision& WithDirectory(const Aws::String& value) { SetDirectory(value); return *this;}
    inline Revision& WithDirectory(Aws::String&& value) { SetDirectory(std::move(value)); return *this;}
    inline Revision& WithDirectory(const char* value) { SetDirectory(value); return *this;}
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
    inline Revision& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline Revision& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline Revision& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository provider.</p>
     */
    inline const RepositoryProvider& GetRepositoryProvider() const{ return m_repositoryProvider; }
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }
    inline void SetRepositoryProvider(const RepositoryProvider& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }
    inline void SetRepositoryProvider(RepositoryProvider&& value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = std::move(value); }
    inline Revision& WithRepositoryProvider(const RepositoryProvider& value) { SetRepositoryProvider(value); return *this;}
    inline Revision& WithRepositoryProvider(RepositoryProvider&& value) { SetRepositoryProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure hash algorithm (SHA) hash for the revision.</p>
     */
    inline const Aws::String& GetSha() const{ return m_sha; }
    inline bool ShaHasBeenSet() const { return m_shaHasBeenSet; }
    inline void SetSha(const Aws::String& value) { m_shaHasBeenSet = true; m_sha = value; }
    inline void SetSha(Aws::String&& value) { m_shaHasBeenSet = true; m_sha = std::move(value); }
    inline void SetSha(const char* value) { m_shaHasBeenSet = true; m_sha.assign(value); }
    inline Revision& WithSha(const Aws::String& value) { SetSha(value); return *this;}
    inline Revision& WithSha(Aws::String&& value) { SetSha(std::move(value)); return *this;}
    inline Revision& WithSha(const char* value) { SetSha(value); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_directory;
    bool m_directoryHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryProvider m_repositoryProvider;
    bool m_repositoryProviderHasBeenSet = false;

    Aws::String m_sha;
    bool m_shaHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
