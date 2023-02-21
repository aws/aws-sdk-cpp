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
    AWS_TNB_API ListSolFunctionPackageInfo();
    AWS_TNB_API ListSolFunctionPackageInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolFunctionPackageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Function package ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Function package ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Function package ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Function package ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Function package ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Function package ARN.</p>
     */
    inline ListSolFunctionPackageInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Function package ARN.</p>
     */
    inline ListSolFunctionPackageInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Function package ARN.</p>
     */
    inline ListSolFunctionPackageInfo& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>ID of the function package.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>ID of the function package.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>ID of the function package.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>ID of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>ID of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>ID of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The metadata of the function package.</p>
     */
    inline const ListSolFunctionPackageMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the function package.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the function package.</p>
     */
    inline void SetMetadata(const ListSolFunctionPackageMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the function package.</p>
     */
    inline void SetMetadata(ListSolFunctionPackageMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithMetadata(const ListSolFunctionPackageMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithMetadata(ListSolFunctionPackageMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline const OnboardingState& GetOnboardingState() const{ return m_onboardingState; }

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline bool OnboardingStateHasBeenSet() const { return m_onboardingStateHasBeenSet; }

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline void SetOnboardingState(const OnboardingState& value) { m_onboardingStateHasBeenSet = true; m_onboardingState = value; }

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline void SetOnboardingState(OnboardingState&& value) { m_onboardingStateHasBeenSet = true; m_onboardingState = std::move(value); }

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithOnboardingState(const OnboardingState& value) { SetOnboardingState(value); return *this;}

    /**
     * <p>Onboarding state of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithOnboardingState(OnboardingState&& value) { SetOnboardingState(std::move(value)); return *this;}


    /**
     * <p>Operational state of the function package.</p>
     */
    inline const OperationalState& GetOperationalState() const{ return m_operationalState; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline bool OperationalStateHasBeenSet() const { return m_operationalStateHasBeenSet; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline void SetOperationalState(const OperationalState& value) { m_operationalStateHasBeenSet = true; m_operationalState = value; }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline void SetOperationalState(OperationalState&& value) { m_operationalStateHasBeenSet = true; m_operationalState = std::move(value); }

    /**
     * <p>Operational state of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithOperationalState(const OperationalState& value) { SetOperationalState(value); return *this;}

    /**
     * <p>Operational state of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithOperationalState(OperationalState&& value) { SetOperationalState(std::move(value)); return *this;}


    /**
     * <p>Usage state of the function package.</p>
     */
    inline const UsageState& GetUsageState() const{ return m_usageState; }

    /**
     * <p>Usage state of the function package.</p>
     */
    inline bool UsageStateHasBeenSet() const { return m_usageStateHasBeenSet; }

    /**
     * <p>Usage state of the function package.</p>
     */
    inline void SetUsageState(const UsageState& value) { m_usageStateHasBeenSet = true; m_usageState = value; }

    /**
     * <p>Usage state of the function package.</p>
     */
    inline void SetUsageState(UsageState&& value) { m_usageStateHasBeenSet = true; m_usageState = std::move(value); }

    /**
     * <p>Usage state of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithUsageState(const UsageState& value) { SetUsageState(value); return *this;}

    /**
     * <p>Usage state of the function package.</p>
     */
    inline ListSolFunctionPackageInfo& WithUsageState(UsageState&& value) { SetUsageState(std::move(value)); return *this;}


    /**
     * <p>The product name for the network function.</p>
     */
    inline const Aws::String& GetVnfProductName() const{ return m_vnfProductName; }

    /**
     * <p>The product name for the network function.</p>
     */
    inline bool VnfProductNameHasBeenSet() const { return m_vnfProductNameHasBeenSet; }

    /**
     * <p>The product name for the network function.</p>
     */
    inline void SetVnfProductName(const Aws::String& value) { m_vnfProductNameHasBeenSet = true; m_vnfProductName = value; }

    /**
     * <p>The product name for the network function.</p>
     */
    inline void SetVnfProductName(Aws::String&& value) { m_vnfProductNameHasBeenSet = true; m_vnfProductName = std::move(value); }

    /**
     * <p>The product name for the network function.</p>
     */
    inline void SetVnfProductName(const char* value) { m_vnfProductNameHasBeenSet = true; m_vnfProductName.assign(value); }

    /**
     * <p>The product name for the network function.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfProductName(const Aws::String& value) { SetVnfProductName(value); return *this;}

    /**
     * <p>The product name for the network function.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfProductName(Aws::String&& value) { SetVnfProductName(std::move(value)); return *this;}

    /**
     * <p>The product name for the network function.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfProductName(const char* value) { SetVnfProductName(value); return *this;}


    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline const Aws::String& GetVnfProvider() const{ return m_vnfProvider; }

    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline bool VnfProviderHasBeenSet() const { return m_vnfProviderHasBeenSet; }

    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline void SetVnfProvider(const Aws::String& value) { m_vnfProviderHasBeenSet = true; m_vnfProvider = value; }

    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline void SetVnfProvider(Aws::String&& value) { m_vnfProviderHasBeenSet = true; m_vnfProvider = std::move(value); }

    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline void SetVnfProvider(const char* value) { m_vnfProviderHasBeenSet = true; m_vnfProvider.assign(value); }

    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfProvider(const Aws::String& value) { SetVnfProvider(value); return *this;}

    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfProvider(Aws::String&& value) { SetVnfProvider(std::move(value)); return *this;}

    /**
     * <p>Provider of the function package and the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfProvider(const char* value) { SetVnfProvider(value); return *this;}


    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline const Aws::String& GetVnfdId() const{ return m_vnfdId; }

    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline bool VnfdIdHasBeenSet() const { return m_vnfdIdHasBeenSet; }

    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline void SetVnfdId(const Aws::String& value) { m_vnfdIdHasBeenSet = true; m_vnfdId = value; }

    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline void SetVnfdId(Aws::String&& value) { m_vnfdIdHasBeenSet = true; m_vnfdId = std::move(value); }

    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline void SetVnfdId(const char* value) { m_vnfdIdHasBeenSet = true; m_vnfdId.assign(value); }

    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfdId(const Aws::String& value) { SetVnfdId(value); return *this;}

    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfdId(Aws::String&& value) { SetVnfdId(std::move(value)); return *this;}

    /**
     * <p>Identifies the function package and the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfdId(const char* value) { SetVnfdId(value); return *this;}


    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline const Aws::String& GetVnfdVersion() const{ return m_vnfdVersion; }

    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline bool VnfdVersionHasBeenSet() const { return m_vnfdVersionHasBeenSet; }

    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline void SetVnfdVersion(const Aws::String& value) { m_vnfdVersionHasBeenSet = true; m_vnfdVersion = value; }

    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline void SetVnfdVersion(Aws::String&& value) { m_vnfdVersionHasBeenSet = true; m_vnfdVersion = std::move(value); }

    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline void SetVnfdVersion(const char* value) { m_vnfdVersionHasBeenSet = true; m_vnfdVersion.assign(value); }

    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfdVersion(const Aws::String& value) { SetVnfdVersion(value); return *this;}

    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfdVersion(Aws::String&& value) { SetVnfdVersion(std::move(value)); return *this;}

    /**
     * <p>Identifies the version of the function package descriptor.</p>
     */
    inline ListSolFunctionPackageInfo& WithVnfdVersion(const char* value) { SetVnfdVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ListSolFunctionPackageMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    OnboardingState m_onboardingState;
    bool m_onboardingStateHasBeenSet = false;

    OperationalState m_operationalState;
    bool m_operationalStateHasBeenSet = false;

    UsageState m_usageState;
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
