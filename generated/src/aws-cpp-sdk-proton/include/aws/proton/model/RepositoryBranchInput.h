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
   * <p>Detail input data for a linked repository branch.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/RepositoryBranchInput">AWS
   * API Reference</a></p>
   */
  class RepositoryBranchInput
  {
  public:
    AWS_PROTON_API RepositoryBranchInput();
    AWS_PROTON_API RepositoryBranchInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API RepositoryBranchInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RepositoryBranchInput& WithBranch(const Aws::String& value) { SetBranch(value); return *this;}
    inline RepositoryBranchInput& WithBranch(Aws::String&& value) { SetBranch(std::move(value)); return *this;}
    inline RepositoryBranchInput& WithBranch(const char* value) { SetBranch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RepositoryBranchInput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RepositoryBranchInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RepositoryBranchInput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository provider.</p>
     */
    inline const RepositoryProvider& GetProvider() const{ return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(const RepositoryProvider& value) { m_providerHasBeenSet = true; m_provider = value; }
    inline void SetProvider(RepositoryProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }
    inline RepositoryBranchInput& WithProvider(const RepositoryProvider& value) { SetProvider(value); return *this;}
    inline RepositoryBranchInput& WithProvider(RepositoryProvider&& value) { SetProvider(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RepositoryProvider m_provider;
    bool m_providerHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
