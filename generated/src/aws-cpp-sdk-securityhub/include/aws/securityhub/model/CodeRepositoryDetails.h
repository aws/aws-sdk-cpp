/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Details about an external code repository with which you can connect your
   * Amazon Web Services resources. The connection is established through Amazon
   * Inspector. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CodeRepositoryDetails">AWS
   * API Reference</a></p>
   */
  class CodeRepositoryDetails
  {
  public:
    AWS_SECURITYHUB_API CodeRepositoryDetails() = default;
    AWS_SECURITYHUB_API CodeRepositoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CodeRepositoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of repository provider. </p>
     */
    inline const Aws::String& GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    template<typename ProviderTypeT = Aws::String>
    void SetProviderType(ProviderTypeT&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::forward<ProviderTypeT>(value); }
    template<typename ProviderTypeT = Aws::String>
    CodeRepositoryDetails& WithProviderType(ProviderTypeT&& value) { SetProviderType(std::forward<ProviderTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the project in the code repository. </p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CodeRepositoryDetails& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the code security integration associated
     * with the repository. </p>
     */
    inline const Aws::String& GetCodeSecurityIntegrationArn() const { return m_codeSecurityIntegrationArn; }
    inline bool CodeSecurityIntegrationArnHasBeenSet() const { return m_codeSecurityIntegrationArnHasBeenSet; }
    template<typename CodeSecurityIntegrationArnT = Aws::String>
    void SetCodeSecurityIntegrationArn(CodeSecurityIntegrationArnT&& value) { m_codeSecurityIntegrationArnHasBeenSet = true; m_codeSecurityIntegrationArn = std::forward<CodeSecurityIntegrationArnT>(value); }
    template<typename CodeSecurityIntegrationArnT = Aws::String>
    CodeRepositoryDetails& WithCodeSecurityIntegrationArn(CodeSecurityIntegrationArnT&& value) { SetCodeSecurityIntegrationArn(std::forward<CodeSecurityIntegrationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_codeSecurityIntegrationArn;
    bool m_codeSecurityIntegrationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
