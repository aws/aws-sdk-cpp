/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkPackageMetadata.h>
#include <aws/tnb/model/NsdOnboardingState.h>
#include <aws/tnb/model/NsdOperationalState.h>
#include <aws/tnb/model/NsdUsageState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Details of a network package.</p> <p>A network package is a .zip file in CSAR
   * (Cloud Service Archive) format defines the function packages you want to deploy
   * and the Amazon Web Services infrastructure you want to deploy them
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkPackageInfo">AWS
   * API Reference</a></p>
   */
  class ListSolNetworkPackageInfo
  {
  public:
    AWS_TNB_API ListSolNetworkPackageInfo() = default;
    AWS_TNB_API ListSolNetworkPackageInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolNetworkPackageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListSolNetworkPackageInfo& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the individual network package.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ListSolNetworkPackageInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the network package.</p>
     */
    inline const ListSolNetworkPackageMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = ListSolNetworkPackageMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ListSolNetworkPackageMetadata>
    ListSolNetworkPackageInfo& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Designer of the onboarded network service descriptor in the network
     * package.</p>
     */
    inline const Aws::String& GetNsdDesigner() const { return m_nsdDesigner; }
    inline bool NsdDesignerHasBeenSet() const { return m_nsdDesignerHasBeenSet; }
    template<typename NsdDesignerT = Aws::String>
    void SetNsdDesigner(NsdDesignerT&& value) { m_nsdDesignerHasBeenSet = true; m_nsdDesigner = std::forward<NsdDesignerT>(value); }
    template<typename NsdDesignerT = Aws::String>
    ListSolNetworkPackageInfo& WithNsdDesigner(NsdDesignerT&& value) { SetNsdDesigner(std::forward<NsdDesignerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network service descriptor on which the network package is
     * based.</p>
     */
    inline const Aws::String& GetNsdId() const { return m_nsdId; }
    inline bool NsdIdHasBeenSet() const { return m_nsdIdHasBeenSet; }
    template<typename NsdIdT = Aws::String>
    void SetNsdId(NsdIdT&& value) { m_nsdIdHasBeenSet = true; m_nsdId = std::forward<NsdIdT>(value); }
    template<typename NsdIdT = Aws::String>
    ListSolNetworkPackageInfo& WithNsdId(NsdIdT&& value) { SetNsdId(std::forward<NsdIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a network service descriptor in a version independent manner.</p>
     */
    inline const Aws::String& GetNsdInvariantId() const { return m_nsdInvariantId; }
    inline bool NsdInvariantIdHasBeenSet() const { return m_nsdInvariantIdHasBeenSet; }
    template<typename NsdInvariantIdT = Aws::String>
    void SetNsdInvariantId(NsdInvariantIdT&& value) { m_nsdInvariantIdHasBeenSet = true; m_nsdInvariantId = std::forward<NsdInvariantIdT>(value); }
    template<typename NsdInvariantIdT = Aws::String>
    ListSolNetworkPackageInfo& WithNsdInvariantId(NsdInvariantIdT&& value) { SetNsdInvariantId(std::forward<NsdInvariantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the onboarded network service descriptor in the network package.</p>
     */
    inline const Aws::String& GetNsdName() const { return m_nsdName; }
    inline bool NsdNameHasBeenSet() const { return m_nsdNameHasBeenSet; }
    template<typename NsdNameT = Aws::String>
    void SetNsdName(NsdNameT&& value) { m_nsdNameHasBeenSet = true; m_nsdName = std::forward<NsdNameT>(value); }
    template<typename NsdNameT = Aws::String>
    ListSolNetworkPackageInfo& WithNsdName(NsdNameT&& value) { SetNsdName(std::forward<NsdNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Onboarding state of the network service descriptor in the network
     * package.</p>
     */
    inline NsdOnboardingState GetNsdOnboardingState() const { return m_nsdOnboardingState; }
    inline bool NsdOnboardingStateHasBeenSet() const { return m_nsdOnboardingStateHasBeenSet; }
    inline void SetNsdOnboardingState(NsdOnboardingState value) { m_nsdOnboardingStateHasBeenSet = true; m_nsdOnboardingState = value; }
    inline ListSolNetworkPackageInfo& WithNsdOnboardingState(NsdOnboardingState value) { SetNsdOnboardingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline NsdOperationalState GetNsdOperationalState() const { return m_nsdOperationalState; }
    inline bool NsdOperationalStateHasBeenSet() const { return m_nsdOperationalStateHasBeenSet; }
    inline void SetNsdOperationalState(NsdOperationalState value) { m_nsdOperationalStateHasBeenSet = true; m_nsdOperationalState = value; }
    inline ListSolNetworkPackageInfo& WithNsdOperationalState(NsdOperationalState value) { SetNsdOperationalState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usage state of the network service descriptor in the network package.</p>
     */
    inline NsdUsageState GetNsdUsageState() const { return m_nsdUsageState; }
    inline bool NsdUsageStateHasBeenSet() const { return m_nsdUsageStateHasBeenSet; }
    inline void SetNsdUsageState(NsdUsageState value) { m_nsdUsageStateHasBeenSet = true; m_nsdUsageState = value; }
    inline ListSolNetworkPackageInfo& WithNsdUsageState(NsdUsageState value) { SetNsdUsageState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the onboarded network service descriptor in the network
     * package.</p>
     */
    inline const Aws::String& GetNsdVersion() const { return m_nsdVersion; }
    inline bool NsdVersionHasBeenSet() const { return m_nsdVersionHasBeenSet; }
    template<typename NsdVersionT = Aws::String>
    void SetNsdVersion(NsdVersionT&& value) { m_nsdVersionHasBeenSet = true; m_nsdVersion = std::forward<NsdVersionT>(value); }
    template<typename NsdVersionT = Aws::String>
    ListSolNetworkPackageInfo& WithNsdVersion(NsdVersionT&& value) { SetNsdVersion(std::forward<NsdVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVnfPkgIds() const { return m_vnfPkgIds; }
    inline bool VnfPkgIdsHasBeenSet() const { return m_vnfPkgIdsHasBeenSet; }
    template<typename VnfPkgIdsT = Aws::Vector<Aws::String>>
    void SetVnfPkgIds(VnfPkgIdsT&& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds = std::forward<VnfPkgIdsT>(value); }
    template<typename VnfPkgIdsT = Aws::Vector<Aws::String>>
    ListSolNetworkPackageInfo& WithVnfPkgIds(VnfPkgIdsT&& value) { SetVnfPkgIds(std::forward<VnfPkgIdsT>(value)); return *this;}
    template<typename VnfPkgIdsT = Aws::String>
    ListSolNetworkPackageInfo& AddVnfPkgIds(VnfPkgIdsT&& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds.emplace_back(std::forward<VnfPkgIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ListSolNetworkPackageMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsdDesigner;
    bool m_nsdDesignerHasBeenSet = false;

    Aws::String m_nsdId;
    bool m_nsdIdHasBeenSet = false;

    Aws::String m_nsdInvariantId;
    bool m_nsdInvariantIdHasBeenSet = false;

    Aws::String m_nsdName;
    bool m_nsdNameHasBeenSet = false;

    NsdOnboardingState m_nsdOnboardingState{NsdOnboardingState::NOT_SET};
    bool m_nsdOnboardingStateHasBeenSet = false;

    NsdOperationalState m_nsdOperationalState{NsdOperationalState::NOT_SET};
    bool m_nsdOperationalStateHasBeenSet = false;

    NsdUsageState m_nsdUsageState{NsdUsageState::NOT_SET};
    bool m_nsdUsageStateHasBeenSet = false;

    Aws::String m_nsdVersion;
    bool m_nsdVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_vnfPkgIds;
    bool m_vnfPkgIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
