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
   * <p>Information about the lifecycle policy for the repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcrRepositoryLifecyclePolicyDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcrRepositoryLifecyclePolicyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcrRepositoryLifecyclePolicyDetails() = default;
    AWS_SECURITYHUB_API AwsEcrRepositoryLifecyclePolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcrRepositoryLifecyclePolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the lifecycle policy.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const { return m_lifecyclePolicyText; }
    inline bool LifecyclePolicyTextHasBeenSet() const { return m_lifecyclePolicyTextHasBeenSet; }
    template<typename LifecyclePolicyTextT = Aws::String>
    void SetLifecyclePolicyText(LifecyclePolicyTextT&& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = std::forward<LifecyclePolicyTextT>(value); }
    template<typename LifecyclePolicyTextT = Aws::String>
    AwsEcrRepositoryLifecyclePolicyDetails& WithLifecyclePolicyText(LifecyclePolicyTextT&& value) { SetLifecyclePolicyText(std::forward<LifecyclePolicyTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account identifier that is associated with the
     * registry that contains the repository.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    AwsEcrRepositoryLifecyclePolicyDetails& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecyclePolicyText;
    bool m_lifecyclePolicyTextHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
