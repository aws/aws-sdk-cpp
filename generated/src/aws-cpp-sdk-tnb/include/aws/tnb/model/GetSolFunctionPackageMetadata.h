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
    AWS_TNB_API GetSolFunctionPackageMetadata();
    AWS_TNB_API GetSolFunctionPackageMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolFunctionPackageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date that the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date that the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date that the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date that the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date that the resource was created.</p>
     */
    inline GetSolFunctionPackageMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date that the resource was created.</p>
     */
    inline GetSolFunctionPackageMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline GetSolFunctionPackageMetadata& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline GetSolFunctionPackageMetadata& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>Metadata related to the function package descriptor of the function
     * package.</p>
     */
    inline const FunctionArtifactMeta& GetVnfd() const{ return m_vnfd; }

    /**
     * <p>Metadata related to the function package descriptor of the function
     * package.</p>
     */
    inline bool VnfdHasBeenSet() const { return m_vnfdHasBeenSet; }

    /**
     * <p>Metadata related to the function package descriptor of the function
     * package.</p>
     */
    inline void SetVnfd(const FunctionArtifactMeta& value) { m_vnfdHasBeenSet = true; m_vnfd = value; }

    /**
     * <p>Metadata related to the function package descriptor of the function
     * package.</p>
     */
    inline void SetVnfd(FunctionArtifactMeta&& value) { m_vnfdHasBeenSet = true; m_vnfd = std::move(value); }

    /**
     * <p>Metadata related to the function package descriptor of the function
     * package.</p>
     */
    inline GetSolFunctionPackageMetadata& WithVnfd(const FunctionArtifactMeta& value) { SetVnfd(value); return *this;}

    /**
     * <p>Metadata related to the function package descriptor of the function
     * package.</p>
     */
    inline GetSolFunctionPackageMetadata& WithVnfd(FunctionArtifactMeta&& value) { SetVnfd(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    FunctionArtifactMeta m_vnfd;
    bool m_vnfdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
