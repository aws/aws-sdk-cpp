/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/tnb/model/InstantiateMetadata.h>
#include <aws/tnb/model/ModifyVnfInfoMetadata.h>
#include <aws/tnb/model/UpdateNsMetadata.h>
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
   * <p>Metadata related to a network operation occurrence.</p> <p>A network
   * operation is any operation that is done to your network, such as network
   * instance instantiation or termination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolNetworkOperationMetadata">AWS
   * API Reference</a></p>
   */
  class GetSolNetworkOperationMetadata
  {
  public:
    AWS_TNB_API GetSolNetworkOperationMetadata();
    AWS_TNB_API GetSolNetworkOperationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolNetworkOperationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date that the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline GetSolNetworkOperationMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetSolNetworkOperationMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to the network operation occurrence for network
     * instantiation. This is populated only if the lcmOperationType is
     * <code>INSTANTIATE</code>.</p>
     */
    inline const InstantiateMetadata& GetInstantiateMetadata() const{ return m_instantiateMetadata; }
    inline bool InstantiateMetadataHasBeenSet() const { return m_instantiateMetadataHasBeenSet; }
    inline void SetInstantiateMetadata(const InstantiateMetadata& value) { m_instantiateMetadataHasBeenSet = true; m_instantiateMetadata = value; }
    inline void SetInstantiateMetadata(InstantiateMetadata&& value) { m_instantiateMetadataHasBeenSet = true; m_instantiateMetadata = std::move(value); }
    inline GetSolNetworkOperationMetadata& WithInstantiateMetadata(const InstantiateMetadata& value) { SetInstantiateMetadata(value); return *this;}
    inline GetSolNetworkOperationMetadata& WithInstantiateMetadata(InstantiateMetadata&& value) { SetInstantiateMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline GetSolNetworkOperationMetadata& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline GetSolNetworkOperationMetadata& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to the network operation occurrence for network function
     * updates in a network instance. This is populated only if the lcmOperationType is
     * <code>UPDATE</code> and the updateType is
     * <code>MODIFY_VNF_INFORMATION</code>.</p>
     */
    inline const ModifyVnfInfoMetadata& GetModifyVnfInfoMetadata() const{ return m_modifyVnfInfoMetadata; }
    inline bool ModifyVnfInfoMetadataHasBeenSet() const { return m_modifyVnfInfoMetadataHasBeenSet; }
    inline void SetModifyVnfInfoMetadata(const ModifyVnfInfoMetadata& value) { m_modifyVnfInfoMetadataHasBeenSet = true; m_modifyVnfInfoMetadata = value; }
    inline void SetModifyVnfInfoMetadata(ModifyVnfInfoMetadata&& value) { m_modifyVnfInfoMetadataHasBeenSet = true; m_modifyVnfInfoMetadata = std::move(value); }
    inline GetSolNetworkOperationMetadata& WithModifyVnfInfoMetadata(const ModifyVnfInfoMetadata& value) { SetModifyVnfInfoMetadata(value); return *this;}
    inline GetSolNetworkOperationMetadata& WithModifyVnfInfoMetadata(ModifyVnfInfoMetadata&& value) { SetModifyVnfInfoMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to the network operation occurrence for network instance
     * updates. This is populated only if the lcmOperationType is <code>UPDATE</code>
     * and the updateType is <code>UPDATE_NS</code>.</p>
     */
    inline const UpdateNsMetadata& GetUpdateNsMetadata() const{ return m_updateNsMetadata; }
    inline bool UpdateNsMetadataHasBeenSet() const { return m_updateNsMetadataHasBeenSet; }
    inline void SetUpdateNsMetadata(const UpdateNsMetadata& value) { m_updateNsMetadataHasBeenSet = true; m_updateNsMetadata = value; }
    inline void SetUpdateNsMetadata(UpdateNsMetadata&& value) { m_updateNsMetadataHasBeenSet = true; m_updateNsMetadata = std::move(value); }
    inline GetSolNetworkOperationMetadata& WithUpdateNsMetadata(const UpdateNsMetadata& value) { SetUpdateNsMetadata(value); return *this;}
    inline GetSolNetworkOperationMetadata& WithUpdateNsMetadata(UpdateNsMetadata&& value) { SetUpdateNsMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    InstantiateMetadata m_instantiateMetadata;
    bool m_instantiateMetadataHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    ModifyVnfInfoMetadata m_modifyVnfInfoMetadata;
    bool m_modifyVnfInfoMetadataHasBeenSet = false;

    UpdateNsMetadata m_updateNsMetadata;
    bool m_updateNsMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
