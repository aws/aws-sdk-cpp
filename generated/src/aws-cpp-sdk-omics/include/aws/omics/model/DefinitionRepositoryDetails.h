/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SourceReference.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Contains detailed information about the source code repository that hosts the
   * workflow definition files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DefinitionRepositoryDetails">AWS
   * API Reference</a></p>
   */
  class DefinitionRepositoryDetails
  {
  public:
    AWS_OMICS_API DefinitionRepositoryDetails() = default;
    AWS_OMICS_API DefinitionRepositoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API DefinitionRepositoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection to the source code
     * repository.</p>
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    DefinitionRepositoryDetails& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full repository identifier, including the repository owner and name. For
     * example, 'repository-owner/repository-name'.</p>
     */
    inline const Aws::String& GetFullRepositoryId() const { return m_fullRepositoryId; }
    inline bool FullRepositoryIdHasBeenSet() const { return m_fullRepositoryIdHasBeenSet; }
    template<typename FullRepositoryIdT = Aws::String>
    void SetFullRepositoryId(FullRepositoryIdT&& value) { m_fullRepositoryIdHasBeenSet = true; m_fullRepositoryId = std::forward<FullRepositoryIdT>(value); }
    template<typename FullRepositoryIdT = Aws::String>
    DefinitionRepositoryDetails& WithFullRepositoryId(FullRepositoryIdT&& value) { SetFullRepositoryId(std::forward<FullRepositoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source reference for the repository, such as a branch name, tag, or
     * commit ID.</p>
     */
    inline const SourceReference& GetSourceReference() const { return m_sourceReference; }
    inline bool SourceReferenceHasBeenSet() const { return m_sourceReferenceHasBeenSet; }
    template<typename SourceReferenceT = SourceReference>
    void SetSourceReference(SourceReferenceT&& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = std::forward<SourceReferenceT>(value); }
    template<typename SourceReferenceT = SourceReference>
    DefinitionRepositoryDetails& WithSourceReference(SourceReferenceT&& value) { SetSourceReference(std::forward<SourceReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider type of the source code repository, such as Bitbucket, GitHub,
     * GitHubEnterpriseServer, GitLab, and GitLabSelfManaged.</p>
     */
    inline const Aws::String& GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    template<typename ProviderTypeT = Aws::String>
    void SetProviderType(ProviderTypeT&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::forward<ProviderTypeT>(value); }
    template<typename ProviderTypeT = Aws::String>
    DefinitionRepositoryDetails& WithProviderType(ProviderTypeT&& value) { SetProviderType(std::forward<ProviderTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint URL of the source code repository provider.</p>
     */
    inline const Aws::String& GetProviderEndpoint() const { return m_providerEndpoint; }
    inline bool ProviderEndpointHasBeenSet() const { return m_providerEndpointHasBeenSet; }
    template<typename ProviderEndpointT = Aws::String>
    void SetProviderEndpoint(ProviderEndpointT&& value) { m_providerEndpointHasBeenSet = true; m_providerEndpoint = std::forward<ProviderEndpointT>(value); }
    template<typename ProviderEndpointT = Aws::String>
    DefinitionRepositoryDetails& WithProviderEndpoint(ProviderEndpointT&& value) { SetProviderEndpoint(std::forward<ProviderEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_fullRepositoryId;
    bool m_fullRepositoryIdHasBeenSet = false;

    SourceReference m_sourceReference;
    bool m_sourceReferenceHasBeenSet = false;

    Aws::String m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_providerEndpoint;
    bool m_providerEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
