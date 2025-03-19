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
    AWS_PROTON_API Revision() = default;
    AWS_PROTON_API Revision(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Revision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository branch.</p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    Revision& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository directory changed by a commit and push that activated the sync
     * attempt.</p>
     */
    inline const Aws::String& GetDirectory() const { return m_directory; }
    inline bool DirectoryHasBeenSet() const { return m_directoryHasBeenSet; }
    template<typename DirectoryT = Aws::String>
    void SetDirectory(DirectoryT&& value) { m_directoryHasBeenSet = true; m_directory = std::forward<DirectoryT>(value); }
    template<typename DirectoryT = Aws::String>
    Revision& WithDirectory(DirectoryT&& value) { SetDirectory(std::forward<DirectoryT>(value)); return *this;}
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
    Revision& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository provider.</p>
     */
    inline RepositoryProvider GetRepositoryProvider() const { return m_repositoryProvider; }
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }
    inline void SetRepositoryProvider(RepositoryProvider value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }
    inline Revision& WithRepositoryProvider(RepositoryProvider value) { SetRepositoryProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure hash algorithm (SHA) hash for the revision.</p>
     */
    inline const Aws::String& GetSha() const { return m_sha; }
    inline bool ShaHasBeenSet() const { return m_shaHasBeenSet; }
    template<typename ShaT = Aws::String>
    void SetSha(ShaT&& value) { m_shaHasBeenSet = true; m_sha = std::forward<ShaT>(value); }
    template<typename ShaT = Aws::String>
    Revision& WithSha(ShaT&& value) { SetSha(std::forward<ShaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_directory;
    bool m_directoryHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryProvider m_repositoryProvider{RepositoryProvider::NOT_SET};
    bool m_repositoryProviderHasBeenSet = false;

    Aws::String m_sha;
    bool m_shaHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
