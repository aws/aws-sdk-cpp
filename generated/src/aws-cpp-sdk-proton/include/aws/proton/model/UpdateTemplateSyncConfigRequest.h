/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryProvider.h>
#include <aws/proton/model/TemplateType.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateTemplateSyncConfigRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateTemplateSyncConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplateSyncConfig"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The repository branch for your template.</p>
     */
    inline const Aws::String& GetBranch() const { return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    template<typename BranchT = Aws::String>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Aws::String>
    UpdateTemplateSyncConfigRequest& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name (for example, <code>myrepos/myrepo</code>).</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    UpdateTemplateSyncConfigRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository provider.</p>
     */
    inline RepositoryProvider GetRepositoryProvider() const { return m_repositoryProvider; }
    inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }
    inline void SetRepositoryProvider(RepositoryProvider value) { m_repositoryProviderHasBeenSet = true; m_repositoryProvider = value; }
    inline UpdateTemplateSyncConfigRequest& WithRepositoryProvider(RepositoryProvider value) { SetRepositoryProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdirectory path to your template bundle version. When included, limits
     * the template bundle search to this repository directory.</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    UpdateTemplateSyncConfigRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The synced template name.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateTemplateSyncConfigRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The synced template type.</p>
     */
    inline TemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(TemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline UpdateTemplateSyncConfigRequest& WithTemplateType(TemplateType value) { SetTemplateType(value); return *this;}
    ///@}
  private:

    Aws::String m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryProvider m_repositoryProvider{RepositoryProvider::NOT_SET};
    bool m_repositoryProviderHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType{TemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
