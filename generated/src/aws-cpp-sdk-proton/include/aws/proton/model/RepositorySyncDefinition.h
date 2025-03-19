/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A repository sync definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/RepositorySyncDefinition">AWS
   * API Reference</a></p>
   */
  class RepositorySyncDefinition
  {
  public:
    AWS_PROTON_API RepositorySyncDefinition() = default;
    AWS_PROTON_API RepositorySyncDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API RepositorySyncDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    RepositorySyncDefinition& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory in the repository.</p>
     */
    inline const Aws::String& GetDirectory() const { return m_directory; }
    inline bool DirectoryHasBeenSet() const { return m_directoryHasBeenSet; }
    template<typename DirectoryT = Aws::String>
    void SetDirectory(DirectoryT&& value) { m_directoryHasBeenSet = true; m_directory = std::forward<DirectoryT>(value); }
    template<typename DirectoryT = Aws::String>
    RepositorySyncDefinition& WithDirectory(DirectoryT&& value) { SetDirectory(std::forward<DirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that is synced from.</p>
     */
    inline const Aws::String& GetParent() const { return m_parent; }
    inline bool ParentHasBeenSet() const { return m_parentHasBeenSet; }
    template<typename ParentT = Aws::String>
    void SetParent(ParentT&& value) { m_parentHasBeenSet = true; m_parent = std::forward<ParentT>(value); }
    template<typename ParentT = Aws::String>
    RepositorySyncDefinition& WithParent(ParentT&& value) { SetParent(std::forward<ParentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that is synced to.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    RepositorySyncDefinition& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_directory;
    bool m_directoryHasBeenSet = false;

    Aws::String m_parent;
    bool m_parentHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
