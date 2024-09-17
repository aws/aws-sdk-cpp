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
    AWS_TNB_API ListSolNetworkPackageInfo();
    AWS_TNB_API ListSolNetworkPackageInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolNetworkPackageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Network package ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ListSolNetworkPackageInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListSolNetworkPackageInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListSolNetworkPackageInfo& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the individual network package.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ListSolNetworkPackageInfo& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ListSolNetworkPackageInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ListSolNetworkPackageInfo& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the network package.</p>
     */
    inline const ListSolNetworkPackageMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const ListSolNetworkPackageMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(ListSolNetworkPackageMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline ListSolNetworkPackageInfo& WithMetadata(const ListSolNetworkPackageMetadata& value) { SetMetadata(value); return *this;}
    inline ListSolNetworkPackageInfo& WithMetadata(ListSolNetworkPackageMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Designer of the onboarded network service descriptor in the network
     * package.</p>
     */
    inline const Aws::String& GetNsdDesigner() const{ return m_nsdDesigner; }
    inline bool NsdDesignerHasBeenSet() const { return m_nsdDesignerHasBeenSet; }
    inline void SetNsdDesigner(const Aws::String& value) { m_nsdDesignerHasBeenSet = true; m_nsdDesigner = value; }
    inline void SetNsdDesigner(Aws::String&& value) { m_nsdDesignerHasBeenSet = true; m_nsdDesigner = std::move(value); }
    inline void SetNsdDesigner(const char* value) { m_nsdDesignerHasBeenSet = true; m_nsdDesigner.assign(value); }
    inline ListSolNetworkPackageInfo& WithNsdDesigner(const Aws::String& value) { SetNsdDesigner(value); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdDesigner(Aws::String&& value) { SetNsdDesigner(std::move(value)); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdDesigner(const char* value) { SetNsdDesigner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network service descriptor on which the network package is
     * based.</p>
     */
    inline const Aws::String& GetNsdId() const{ return m_nsdId; }
    inline bool NsdIdHasBeenSet() const { return m_nsdIdHasBeenSet; }
    inline void SetNsdId(const Aws::String& value) { m_nsdIdHasBeenSet = true; m_nsdId = value; }
    inline void SetNsdId(Aws::String&& value) { m_nsdIdHasBeenSet = true; m_nsdId = std::move(value); }
    inline void SetNsdId(const char* value) { m_nsdIdHasBeenSet = true; m_nsdId.assign(value); }
    inline ListSolNetworkPackageInfo& WithNsdId(const Aws::String& value) { SetNsdId(value); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdId(Aws::String&& value) { SetNsdId(std::move(value)); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdId(const char* value) { SetNsdId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a network service descriptor in a version independent manner.</p>
     */
    inline const Aws::String& GetNsdInvariantId() const{ return m_nsdInvariantId; }
    inline bool NsdInvariantIdHasBeenSet() const { return m_nsdInvariantIdHasBeenSet; }
    inline void SetNsdInvariantId(const Aws::String& value) { m_nsdInvariantIdHasBeenSet = true; m_nsdInvariantId = value; }
    inline void SetNsdInvariantId(Aws::String&& value) { m_nsdInvariantIdHasBeenSet = true; m_nsdInvariantId = std::move(value); }
    inline void SetNsdInvariantId(const char* value) { m_nsdInvariantIdHasBeenSet = true; m_nsdInvariantId.assign(value); }
    inline ListSolNetworkPackageInfo& WithNsdInvariantId(const Aws::String& value) { SetNsdInvariantId(value); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdInvariantId(Aws::String&& value) { SetNsdInvariantId(std::move(value)); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdInvariantId(const char* value) { SetNsdInvariantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the onboarded network service descriptor in the network package.</p>
     */
    inline const Aws::String& GetNsdName() const{ return m_nsdName; }
    inline bool NsdNameHasBeenSet() const { return m_nsdNameHasBeenSet; }
    inline void SetNsdName(const Aws::String& value) { m_nsdNameHasBeenSet = true; m_nsdName = value; }
    inline void SetNsdName(Aws::String&& value) { m_nsdNameHasBeenSet = true; m_nsdName = std::move(value); }
    inline void SetNsdName(const char* value) { m_nsdNameHasBeenSet = true; m_nsdName.assign(value); }
    inline ListSolNetworkPackageInfo& WithNsdName(const Aws::String& value) { SetNsdName(value); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdName(Aws::String&& value) { SetNsdName(std::move(value)); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdName(const char* value) { SetNsdName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Onboarding state of the network service descriptor in the network
     * package.</p>
     */
    inline const NsdOnboardingState& GetNsdOnboardingState() const{ return m_nsdOnboardingState; }
    inline bool NsdOnboardingStateHasBeenSet() const { return m_nsdOnboardingStateHasBeenSet; }
    inline void SetNsdOnboardingState(const NsdOnboardingState& value) { m_nsdOnboardingStateHasBeenSet = true; m_nsdOnboardingState = value; }
    inline void SetNsdOnboardingState(NsdOnboardingState&& value) { m_nsdOnboardingStateHasBeenSet = true; m_nsdOnboardingState = std::move(value); }
    inline ListSolNetworkPackageInfo& WithNsdOnboardingState(const NsdOnboardingState& value) { SetNsdOnboardingState(value); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdOnboardingState(NsdOnboardingState&& value) { SetNsdOnboardingState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline const NsdOperationalState& GetNsdOperationalState() const{ return m_nsdOperationalState; }
    inline bool NsdOperationalStateHasBeenSet() const { return m_nsdOperationalStateHasBeenSet; }
    inline void SetNsdOperationalState(const NsdOperationalState& value) { m_nsdOperationalStateHasBeenSet = true; m_nsdOperationalState = value; }
    inline void SetNsdOperationalState(NsdOperationalState&& value) { m_nsdOperationalStateHasBeenSet = true; m_nsdOperationalState = std::move(value); }
    inline ListSolNetworkPackageInfo& WithNsdOperationalState(const NsdOperationalState& value) { SetNsdOperationalState(value); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdOperationalState(NsdOperationalState&& value) { SetNsdOperationalState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usage state of the network service descriptor in the network package.</p>
     */
    inline const NsdUsageState& GetNsdUsageState() const{ return m_nsdUsageState; }
    inline bool NsdUsageStateHasBeenSet() const { return m_nsdUsageStateHasBeenSet; }
    inline void SetNsdUsageState(const NsdUsageState& value) { m_nsdUsageStateHasBeenSet = true; m_nsdUsageState = value; }
    inline void SetNsdUsageState(NsdUsageState&& value) { m_nsdUsageStateHasBeenSet = true; m_nsdUsageState = std::move(value); }
    inline ListSolNetworkPackageInfo& WithNsdUsageState(const NsdUsageState& value) { SetNsdUsageState(value); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdUsageState(NsdUsageState&& value) { SetNsdUsageState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the onboarded network service descriptor in the network
     * package.</p>
     */
    inline const Aws::String& GetNsdVersion() const{ return m_nsdVersion; }
    inline bool NsdVersionHasBeenSet() const { return m_nsdVersionHasBeenSet; }
    inline void SetNsdVersion(const Aws::String& value) { m_nsdVersionHasBeenSet = true; m_nsdVersion = value; }
    inline void SetNsdVersion(Aws::String&& value) { m_nsdVersionHasBeenSet = true; m_nsdVersion = std::move(value); }
    inline void SetNsdVersion(const char* value) { m_nsdVersionHasBeenSet = true; m_nsdVersion.assign(value); }
    inline ListSolNetworkPackageInfo& WithNsdVersion(const Aws::String& value) { SetNsdVersion(value); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdVersion(Aws::String&& value) { SetNsdVersion(std::move(value)); return *this;}
    inline ListSolNetworkPackageInfo& WithNsdVersion(const char* value) { SetNsdVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the function package for the function package descriptor
     * referenced by the onboarded network package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVnfPkgIds() const{ return m_vnfPkgIds; }
    inline bool VnfPkgIdsHasBeenSet() const { return m_vnfPkgIdsHasBeenSet; }
    inline void SetVnfPkgIds(const Aws::Vector<Aws::String>& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds = value; }
    inline void SetVnfPkgIds(Aws::Vector<Aws::String>&& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds = std::move(value); }
    inline ListSolNetworkPackageInfo& WithVnfPkgIds(const Aws::Vector<Aws::String>& value) { SetVnfPkgIds(value); return *this;}
    inline ListSolNetworkPackageInfo& WithVnfPkgIds(Aws::Vector<Aws::String>&& value) { SetVnfPkgIds(std::move(value)); return *this;}
    inline ListSolNetworkPackageInfo& AddVnfPkgIds(const Aws::String& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds.push_back(value); return *this; }
    inline ListSolNetworkPackageInfo& AddVnfPkgIds(Aws::String&& value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds.push_back(std::move(value)); return *this; }
    inline ListSolNetworkPackageInfo& AddVnfPkgIds(const char* value) { m_vnfPkgIdsHasBeenSet = true; m_vnfPkgIds.push_back(value); return *this; }
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

    NsdOnboardingState m_nsdOnboardingState;
    bool m_nsdOnboardingStateHasBeenSet = false;

    NsdOperationalState m_nsdOperationalState;
    bool m_nsdOperationalStateHasBeenSet = false;

    NsdUsageState m_nsdUsageState;
    bool m_nsdUsageStateHasBeenSet = false;

    Aws::String m_nsdVersion;
    bool m_nsdVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_vnfPkgIds;
    bool m_vnfPkgIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
