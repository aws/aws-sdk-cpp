/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/GetSolInstantiatedVnfInfo.h>
#include <aws/tnb/model/VnfInstantiationState.h>
#include <aws/tnb/model/ListSolFunctionInstanceMetadata.h>
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
   * <p>Lists information about a network function instance.</p> <p>A network
   * function instance is a function in a function package .</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolFunctionInstanceInfo">AWS
   * API Reference</a></p>
   */
  class ListSolFunctionInstanceInfo
  {
  public:
    AWS_TNB_API ListSolFunctionInstanceInfo() = default;
    AWS_TNB_API ListSolFunctionInstanceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolFunctionInstanceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Network function instance ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListSolFunctionInstanceInfo& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function instance ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ListSolFunctionInstanceInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const GetSolInstantiatedVnfInfo& GetInstantiatedVnfInfo() const { return m_instantiatedVnfInfo; }
    inline bool InstantiatedVnfInfoHasBeenSet() const { return m_instantiatedVnfInfoHasBeenSet; }
    template<typename InstantiatedVnfInfoT = GetSolInstantiatedVnfInfo>
    void SetInstantiatedVnfInfo(InstantiatedVnfInfoT&& value) { m_instantiatedVnfInfoHasBeenSet = true; m_instantiatedVnfInfo = std::forward<InstantiatedVnfInfoT>(value); }
    template<typename InstantiatedVnfInfoT = GetSolInstantiatedVnfInfo>
    ListSolFunctionInstanceInfo& WithInstantiatedVnfInfo(InstantiatedVnfInfoT&& value) { SetInstantiatedVnfInfo(std::forward<InstantiatedVnfInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function instance instantiation state.</p>
     */
    inline VnfInstantiationState GetInstantiationState() const { return m_instantiationState; }
    inline bool InstantiationStateHasBeenSet() const { return m_instantiationStateHasBeenSet; }
    inline void SetInstantiationState(VnfInstantiationState value) { m_instantiationStateHasBeenSet = true; m_instantiationState = value; }
    inline ListSolFunctionInstanceInfo& WithInstantiationState(VnfInstantiationState value) { SetInstantiationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function instance metadata.</p>
     */
    inline const ListSolFunctionInstanceMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = ListSolFunctionInstanceMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ListSolFunctionInstanceMetadata>
    ListSolFunctionInstanceInfo& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network instance ID.</p>
     */
    inline const Aws::String& GetNsInstanceId() const { return m_nsInstanceId; }
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }
    template<typename NsInstanceIdT = Aws::String>
    void SetNsInstanceId(NsInstanceIdT&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::forward<NsInstanceIdT>(value); }
    template<typename NsInstanceIdT = Aws::String>
    ListSolFunctionInstanceInfo& WithNsInstanceId(NsInstanceIdT&& value) { SetNsInstanceId(std::forward<NsInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetVnfPkgId() const { return m_vnfPkgId; }
    inline bool VnfPkgIdHasBeenSet() const { return m_vnfPkgIdHasBeenSet; }
    template<typename VnfPkgIdT = Aws::String>
    void SetVnfPkgId(VnfPkgIdT&& value) { m_vnfPkgIdHasBeenSet = true; m_vnfPkgId = std::forward<VnfPkgIdT>(value); }
    template<typename VnfPkgIdT = Aws::String>
    ListSolFunctionInstanceInfo& WithVnfPkgId(VnfPkgIdT&& value) { SetVnfPkgId(std::forward<VnfPkgIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package name.</p>
     */
    inline const Aws::String& GetVnfPkgName() const { return m_vnfPkgName; }
    inline bool VnfPkgNameHasBeenSet() const { return m_vnfPkgNameHasBeenSet; }
    template<typename VnfPkgNameT = Aws::String>
    void SetVnfPkgName(VnfPkgNameT&& value) { m_vnfPkgNameHasBeenSet = true; m_vnfPkgName = std::forward<VnfPkgNameT>(value); }
    template<typename VnfPkgNameT = Aws::String>
    ListSolFunctionInstanceInfo& WithVnfPkgName(VnfPkgNameT&& value) { SetVnfPkgName(std::forward<VnfPkgNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    GetSolInstantiatedVnfInfo m_instantiatedVnfInfo;
    bool m_instantiatedVnfInfoHasBeenSet = false;

    VnfInstantiationState m_instantiationState{VnfInstantiationState::NOT_SET};
    bool m_instantiationStateHasBeenSet = false;

    ListSolFunctionInstanceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    Aws::String m_vnfPkgId;
    bool m_vnfPkgIdHasBeenSet = false;

    Aws::String m_vnfPkgName;
    bool m_vnfPkgNameHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
