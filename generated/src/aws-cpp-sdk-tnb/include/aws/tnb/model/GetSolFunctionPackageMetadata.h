/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/tnb/model/FunctionArtifactMeta.h>
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
   * <p>Metadata related to the function package.</p> <p>A function package is a .zip
   * file in CSAR (Cloud Service Archive) format that contains a network function (an
   * ETSI standard telecommunication application) and function package descriptor
   * that uses the TOSCA standard to describe how the network functions should run on
   * your network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolFunctionPackageMetadata">AWS
   * API Reference</a></p>
   */
  class GetSolFunctionPackageMetadata
  {
  public:
    AWS_TNB_API GetSolFunctionPackageMetadata() = default;
    AWS_TNB_API GetSolFunctionPackageMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolFunctionPackageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    GetSolFunctionPackageMetadata& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    GetSolFunctionPackageMetadata& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to the function package descriptor of the function
     * package.</p>
     */
    inline const FunctionArtifactMeta& GetVnfd() const { return m_vnfd; }
    inline bool VnfdHasBeenSet() const { return m_vnfdHasBeenSet; }
    template<typename VnfdT = FunctionArtifactMeta>
    void SetVnfd(VnfdT&& value) { m_vnfdHasBeenSet = true; m_vnfd = std::forward<VnfdT>(value); }
    template<typename VnfdT = FunctionArtifactMeta>
    GetSolFunctionPackageMetadata& WithVnfd(VnfdT&& value) { SetVnfd(std::forward<VnfdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    FunctionArtifactMeta m_vnfd;
    bool m_vnfdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
