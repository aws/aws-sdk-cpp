/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>If you are using the ECR pull through cache feature, the registry mapping
   * maps between the ECR repository and the upstream registry where container images
   * are pulled and synchronized.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RegistryMapping">AWS
   * API Reference</a></p>
   */
  class RegistryMapping
  {
  public:
    AWS_OMICS_API RegistryMapping() = default;
    AWS_OMICS_API RegistryMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API RegistryMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the upstream registry.</p>
     */
    inline const Aws::String& GetUpstreamRegistryUrl() const { return m_upstreamRegistryUrl; }
    inline bool UpstreamRegistryUrlHasBeenSet() const { return m_upstreamRegistryUrlHasBeenSet; }
    template<typename UpstreamRegistryUrlT = Aws::String>
    void SetUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { m_upstreamRegistryUrlHasBeenSet = true; m_upstreamRegistryUrl = std::forward<UpstreamRegistryUrlT>(value); }
    template<typename UpstreamRegistryUrlT = Aws::String>
    RegistryMapping& WithUpstreamRegistryUrl(UpstreamRegistryUrlT&& value) { SetUpstreamRegistryUrl(std::forward<UpstreamRegistryUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository prefix to use in the ECR private repository.</p>
     */
    inline const Aws::String& GetEcrRepositoryPrefix() const { return m_ecrRepositoryPrefix; }
    inline bool EcrRepositoryPrefixHasBeenSet() const { return m_ecrRepositoryPrefixHasBeenSet; }
    template<typename EcrRepositoryPrefixT = Aws::String>
    void SetEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { m_ecrRepositoryPrefixHasBeenSet = true; m_ecrRepositoryPrefix = std::forward<EcrRepositoryPrefixT>(value); }
    template<typename EcrRepositoryPrefixT = Aws::String>
    RegistryMapping& WithEcrRepositoryPrefix(EcrRepositoryPrefixT&& value) { SetEcrRepositoryPrefix(std::forward<EcrRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository prefix of the corresponding repository in the upstream
     * registry.</p>
     */
    inline const Aws::String& GetUpstreamRepositoryPrefix() const { return m_upstreamRepositoryPrefix; }
    inline bool UpstreamRepositoryPrefixHasBeenSet() const { return m_upstreamRepositoryPrefixHasBeenSet; }
    template<typename UpstreamRepositoryPrefixT = Aws::String>
    void SetUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { m_upstreamRepositoryPrefixHasBeenSet = true; m_upstreamRepositoryPrefix = std::forward<UpstreamRepositoryPrefixT>(value); }
    template<typename UpstreamRepositoryPrefixT = Aws::String>
    RegistryMapping& WithUpstreamRepositoryPrefix(UpstreamRepositoryPrefixT&& value) { SetUpstreamRepositoryPrefix(std::forward<UpstreamRepositoryPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account ID of the account that owns the upstream container image.</p>
     */
    inline const Aws::String& GetEcrAccountId() const { return m_ecrAccountId; }
    inline bool EcrAccountIdHasBeenSet() const { return m_ecrAccountIdHasBeenSet; }
    template<typename EcrAccountIdT = Aws::String>
    void SetEcrAccountId(EcrAccountIdT&& value) { m_ecrAccountIdHasBeenSet = true; m_ecrAccountId = std::forward<EcrAccountIdT>(value); }
    template<typename EcrAccountIdT = Aws::String>
    RegistryMapping& WithEcrAccountId(EcrAccountIdT&& value) { SetEcrAccountId(std::forward<EcrAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_upstreamRegistryUrl;
    bool m_upstreamRegistryUrlHasBeenSet = false;

    Aws::String m_ecrRepositoryPrefix;
    bool m_ecrRepositoryPrefixHasBeenSet = false;

    Aws::String m_upstreamRepositoryPrefix;
    bool m_upstreamRepositoryPrefixHasBeenSet = false;

    Aws::String m_ecrAccountId;
    bool m_ecrAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
