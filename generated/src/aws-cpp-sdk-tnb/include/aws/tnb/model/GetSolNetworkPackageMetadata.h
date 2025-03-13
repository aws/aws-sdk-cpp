/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/tnb/model/NetworkArtifactMeta.h>
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
namespace tnb
{
namespace Model
{

  /**
   * <p>Metadata associated with a network package.</p> <p>A network package is a
   * .zip file in CSAR (Cloud Service Archive) format defines the function packages
   * you want to deploy and the Amazon Web Services infrastructure you want to deploy
   * them on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolNetworkPackageMetadata">AWS
   * API Reference</a></p>
   */
  class GetSolNetworkPackageMetadata
  {
  public:
    AWS_TNB_API GetSolNetworkPackageMetadata() = default;
    AWS_TNB_API GetSolNetworkPackageMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolNetworkPackageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date that the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetSolNetworkPackageMetadata& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    GetSolNetworkPackageMetadata& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to the onboarded network service descriptor in the network
     * package.</p>
     */
    inline const NetworkArtifactMeta& GetNsd() const { return m_nsd; }
    inline bool NsdHasBeenSet() const { return m_nsdHasBeenSet; }
    template<typename NsdT = NetworkArtifactMeta>
    void SetNsd(NsdT&& value) { m_nsdHasBeenSet = true; m_nsd = std::forward<NsdT>(value); }
    template<typename NsdT = NetworkArtifactMeta>
    GetSolNetworkPackageMetadata& WithNsd(NsdT&& value) { SetNsd(std::forward<NsdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    NetworkArtifactMeta m_nsd;
    bool m_nsdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
