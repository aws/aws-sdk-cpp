/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/Category.h>
#include <aws/signer/model/SigningConfiguration.h>
#include <aws/signer/model/SigningImageFormat.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace signer
{
namespace Model
{
  class GetSigningPlatformResult
  {
  public:
    AWS_SIGNER_API GetSigningPlatformResult() = default;
    AWS_SIGNER_API GetSigningPlatformResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API GetSigningPlatformResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    GetSigningPlatformResult& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetSigningPlatformResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline const Aws::String& GetPartner() const { return m_partner; }
    template<typename PartnerT = Aws::String>
    void SetPartner(PartnerT&& value) { m_partnerHasBeenSet = true; m_partner = std::forward<PartnerT>(value); }
    template<typename PartnerT = Aws::String>
    GetSigningPlatformResult& WithPartner(PartnerT&& value) { SetPartner(std::forward<PartnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    GetSigningPlatformResult& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category type of the target signing platform.</p>
     */
    inline Category GetCategory() const { return m_category; }
    inline void SetCategory(Category value) { m_categoryHasBeenSet = true; m_category = value; }
    inline GetSigningPlatformResult& WithCategory(Category value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configurations applied to the target platform at signing.</p>
     */
    inline const SigningConfiguration& GetSigningConfiguration() const { return m_signingConfiguration; }
    template<typename SigningConfigurationT = SigningConfiguration>
    void SetSigningConfiguration(SigningConfigurationT&& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = std::forward<SigningConfigurationT>(value); }
    template<typename SigningConfigurationT = SigningConfiguration>
    GetSigningPlatformResult& WithSigningConfiguration(SigningConfigurationT&& value) { SetSigningConfiguration(std::forward<SigningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the target platform's signing image.</p>
     */
    inline const SigningImageFormat& GetSigningImageFormat() const { return m_signingImageFormat; }
    template<typename SigningImageFormatT = SigningImageFormat>
    void SetSigningImageFormat(SigningImageFormatT&& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = std::forward<SigningImageFormatT>(value); }
    template<typename SigningImageFormatT = SigningImageFormat>
    GetSigningPlatformResult& WithSigningImageFormat(SigningImageFormatT&& value) { SetSigningImageFormat(std::forward<SigningImageFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size (in MB) of the payload that can be signed by the target
     * platform.</p>
     */
    inline int GetMaxSizeInMB() const { return m_maxSizeInMB; }
    inline void SetMaxSizeInMB(int value) { m_maxSizeInMBHasBeenSet = true; m_maxSizeInMB = value; }
    inline GetSigningPlatformResult& WithMaxSizeInMB(int value) { SetMaxSizeInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether signatures generated for the signing platform can
     * be revoked.</p>
     */
    inline bool GetRevocationSupported() const { return m_revocationSupported; }
    inline void SetRevocationSupported(bool value) { m_revocationSupportedHasBeenSet = true; m_revocationSupported = value; }
    inline GetSigningPlatformResult& WithRevocationSupported(bool value) { SetRevocationSupported(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSigningPlatformResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_partner;
    bool m_partnerHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Category m_category{Category::NOT_SET};
    bool m_categoryHasBeenSet = false;

    SigningConfiguration m_signingConfiguration;
    bool m_signingConfigurationHasBeenSet = false;

    SigningImageFormat m_signingImageFormat;
    bool m_signingImageFormatHasBeenSet = false;

    int m_maxSizeInMB{0};
    bool m_maxSizeInMBHasBeenSet = false;

    bool m_revocationSupported{false};
    bool m_revocationSupportedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
