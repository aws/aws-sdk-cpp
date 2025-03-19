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
    AWS_TNB_API GetSolNetworkOperationMetadata() = default;
    AWS_TNB_API GetSolNetworkOperationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolNetworkOperationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    GetSolNetworkOperationMetadata& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to the network operation occurrence for network
     * instantiation. This is populated only if the lcmOperationType is
     * <code>INSTANTIATE</code>.</p>
     */
    inline const InstantiateMetadata& GetInstantiateMetadata() const { return m_instantiateMetadata; }
    inline bool InstantiateMetadataHasBeenSet() const { return m_instantiateMetadataHasBeenSet; }
    template<typename InstantiateMetadataT = InstantiateMetadata>
    void SetInstantiateMetadata(InstantiateMetadataT&& value) { m_instantiateMetadataHasBeenSet = true; m_instantiateMetadata = std::forward<InstantiateMetadataT>(value); }
    template<typename InstantiateMetadataT = InstantiateMetadata>
    GetSolNetworkOperationMetadata& WithInstantiateMetadata(InstantiateMetadataT&& value) { SetInstantiateMetadata(std::forward<InstantiateMetadataT>(value)); return *this;}
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
    GetSolNetworkOperationMetadata& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to the network operation occurrence for network function
     * updates in a network instance. This is populated only if the lcmOperationType is
     * <code>UPDATE</code> and the updateType is
     * <code>MODIFY_VNF_INFORMATION</code>.</p>
     */
    inline const ModifyVnfInfoMetadata& GetModifyVnfInfoMetadata() const { return m_modifyVnfInfoMetadata; }
    inline bool ModifyVnfInfoMetadataHasBeenSet() const { return m_modifyVnfInfoMetadataHasBeenSet; }
    template<typename ModifyVnfInfoMetadataT = ModifyVnfInfoMetadata>
    void SetModifyVnfInfoMetadata(ModifyVnfInfoMetadataT&& value) { m_modifyVnfInfoMetadataHasBeenSet = true; m_modifyVnfInfoMetadata = std::forward<ModifyVnfInfoMetadataT>(value); }
    template<typename ModifyVnfInfoMetadataT = ModifyVnfInfoMetadata>
    GetSolNetworkOperationMetadata& WithModifyVnfInfoMetadata(ModifyVnfInfoMetadataT&& value) { SetModifyVnfInfoMetadata(std::forward<ModifyVnfInfoMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata related to the network operation occurrence for network instance
     * updates. This is populated only if the lcmOperationType is <code>UPDATE</code>
     * and the updateType is <code>UPDATE_NS</code>.</p>
     */
    inline const UpdateNsMetadata& GetUpdateNsMetadata() const { return m_updateNsMetadata; }
    inline bool UpdateNsMetadataHasBeenSet() const { return m_updateNsMetadataHasBeenSet; }
    template<typename UpdateNsMetadataT = UpdateNsMetadata>
    void SetUpdateNsMetadata(UpdateNsMetadataT&& value) { m_updateNsMetadataHasBeenSet = true; m_updateNsMetadata = std::forward<UpdateNsMetadataT>(value); }
    template<typename UpdateNsMetadataT = UpdateNsMetadata>
    GetSolNetworkOperationMetadata& WithUpdateNsMetadata(UpdateNsMetadataT&& value) { SetUpdateNsMetadata(std::forward<UpdateNsMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    InstantiateMetadata m_instantiateMetadata;
    bool m_instantiateMetadataHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    ModifyVnfInfoMetadata m_modifyVnfInfoMetadata;
    bool m_modifyVnfInfoMetadataHasBeenSet = false;

    UpdateNsMetadata m_updateNsMetadata;
    bool m_updateNsMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
