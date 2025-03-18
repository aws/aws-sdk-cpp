/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolFunctionPackageMetadata.h>
#include <aws/tnb/model/OnboardingState.h>
#include <aws/tnb/model/OperationalState.h>
#include <aws/tnb/model/UsageState.h>
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
   * <p>Information about a function package.</p> <p>A function package is a .zip
   * file in CSAR (Cloud Service Archive) format that contains a network function (an
   * ETSI standard telecommunication application) and function package descriptor
   * that uses the TOSCA standard to describe how the network functions should run on
   * your network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolFunctionPackageInfo">AWS
   * API Reference</a></p>
   */
  class ListSolFunctionPackageInfo
  {
  public:
    AWS_TNB_API ListSolFunctionPackageInfo() = default;
    AWS_TNB_API ListSolFunctionPackageInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolFunctionPackageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Function package ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListSolFunctionPackageInfo& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the function package.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ListSolFunctionPackageInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the function package.</p>
     */
    inline const ListSolFunctionPackageMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = ListSolFunctionPackageMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ListSolFunctionPackageMetadata>
    ListSolFunctionPackageInfo& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline OnboardingState GetOnboardingState() const { return m_onboardingState; }
    inline bool OnboardingStateHasBeenSet() const { return m_onboardingStateHasBeenSet; }
    inline void SetOnboardingState(OnboardingState value) { m_onboardingStateHasBeenSet = true; m_onboardingState = value; }
    inline ListSolFunctionPackageInfo& WithOnboardingState(OnboardingState value) { SetOnboardingState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operational state of the function package.</p>
     */
    inline OperationalState GetOperationalState() const { return m_operationalState; }
    inline bool OperationalStateHasBeenSet() const { return m_operationalStateHasBeenSet; }
    inline void SetOperationalState(OperationalState value) { m_operationalStateHasBeenSet = true; m_operationalState = value; }
    inline ListSolFunctionPackageInfo& WithOperationalState(OperationalState value) { SetOperationalState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usage state of the function package.</p>
     */
    inline UsageState GetUsageState() const { return m_usageState; }
    inline bool UsageStateHasBeenSet() const { return m_usageStateHasBeenSet; }
    inline void SetUsageState(UsageState value) { m_usageStateHasBeenSet = true; m_usageState = value; }
    inline ListSolFunctionPackageInfo& WithUsageState(UsageState value) { SetUsageState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product name for the network function.</p>
     */
    inline const Aws::String& GetVnfProductName() const { return m_vnfProductName; }
    inline bool VnfProductNameHasBeenSet() const { return m_vnfProductNameHasBeenSet; }
    template<typename VnfProductNameT = Aws::String>
    void SetVnfProductName(VnfProductNameT&& value) { m_vnfProductNameHasBeenSet = true; m_vnfProductName = std::forward<VnfProductNameT>(value); }
    template<typename VnfProductNameT = Aws::String>
    ListSolFunctionPackageInfo& WithVnfProductName(VnfProductNameT&& value) { SetVnfProductName(std::forward<VnfProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline const Aws::String& GetVnfProvider() const { return m_vnfProvider; }
    inline bool VnfProviderHasBeenSet() const { return m_vnfProviderHasBeenSet; }
    template<typename VnfProviderT = Aws::String>
    void SetVnfProvider(VnfProviderT&& value) { m_vnfProviderHasBeenSet = true; m_vnfProvider = std::forward<VnfProviderT>(value); }
    template<typename VnfProviderT = Aws::String>
    ListSolFunctionPackageInfo& WithVnfProvider(VnfProviderT&& value) { SetVnfProvider(std::forward<VnfProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline const Aws::String& GetVnfdId() const { return m_vnfdId; }
    inline bool VnfdIdHasBeenSet() const { return m_vnfdIdHasBeenSet; }
    template<typename VnfdIdT = Aws::String>
    void SetVnfdId(VnfdIdT&& value) { m_vnfdIdHasBeenSet = true; m_vnfdId = std::forward<VnfdIdT>(value); }
    template<typename VnfdIdT = Aws::String>
    ListSolFunctionPackageInfo& WithVnfdId(VnfdIdT&& value) { SetVnfdId(std::forward<VnfdIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline const Aws::String& GetVnfdVersion() const { return m_vnfdVersion; }
    inline bool VnfdVersionHasBeenSet() const { return m_vnfdVersionHasBeenSet; }
    template<typename VnfdVersionT = Aws::String>
    void SetVnfdVersion(VnfdVersionT&& value) { m_vnfdVersionHasBeenSet = true; m_vnfdVersion = std::forward<VnfdVersionT>(value); }
    template<typename VnfdVersionT = Aws::String>
    ListSolFunctionPackageInfo& WithVnfdVersion(VnfdVersionT&& value) { SetVnfdVersion(std::forward<VnfdVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ListSolFunctionPackageMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    OnboardingState m_onboardingState{OnboardingState::NOT_SET};
    bool m_onboardingStateHasBeenSet = false;

    OperationalState m_operationalState{OperationalState::NOT_SET};
    bool m_operationalStateHasBeenSet = false;

    UsageState m_usageState{UsageState::NOT_SET};
    bool m_usageStateHasBeenSet = false;

    Aws::String m_vnfProductName;
    bool m_vnfProductNameHasBeenSet = false;

    Aws::String m_vnfProvider;
    bool m_vnfProviderHasBeenSet = false;

    Aws::String m_vnfdId;
    bool m_vnfdIdHasBeenSet = false;

    Aws::String m_vnfdVersion;
    bool m_vnfdVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
