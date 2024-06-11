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
    AWS_SIGNER_API GetSigningPlatformResult();
    AWS_SIGNER_API GetSigningPlatformResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API GetSigningPlatformResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }
    inline void SetPlatformId(const Aws::String& value) { m_platformId = value; }
    inline void SetPlatformId(Aws::String&& value) { m_platformId = std::move(value); }
    inline void SetPlatformId(const char* value) { m_platformId.assign(value); }
    inline GetSigningPlatformResult& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}
    inline GetSigningPlatformResult& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}
    inline GetSigningPlatformResult& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetSigningPlatformResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetSigningPlatformResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetSigningPlatformResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline const Aws::String& GetPartner() const{ return m_partner; }
    inline void SetPartner(const Aws::String& value) { m_partner = value; }
    inline void SetPartner(Aws::String&& value) { m_partner = std::move(value); }
    inline void SetPartner(const char* value) { m_partner.assign(value); }
    inline GetSigningPlatformResult& WithPartner(const Aws::String& value) { SetPartner(value); return *this;}
    inline GetSigningPlatformResult& WithPartner(Aws::String&& value) { SetPartner(std::move(value)); return *this;}
    inline GetSigningPlatformResult& WithPartner(const char* value) { SetPartner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline void SetTarget(const Aws::String& value) { m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_target.assign(value); }
    inline GetSigningPlatformResult& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline GetSigningPlatformResult& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline GetSigningPlatformResult& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category type of the target signing platform.</p>
     */
    inline const Category& GetCategory() const{ return m_category; }
    inline void SetCategory(const Category& value) { m_category = value; }
    inline void SetCategory(Category&& value) { m_category = std::move(value); }
    inline GetSigningPlatformResult& WithCategory(const Category& value) { SetCategory(value); return *this;}
    inline GetSigningPlatformResult& WithCategory(Category&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configurations applied to the target platform at signing.</p>
     */
    inline const SigningConfiguration& GetSigningConfiguration() const{ return m_signingConfiguration; }
    inline void SetSigningConfiguration(const SigningConfiguration& value) { m_signingConfiguration = value; }
    inline void SetSigningConfiguration(SigningConfiguration&& value) { m_signingConfiguration = std::move(value); }
    inline GetSigningPlatformResult& WithSigningConfiguration(const SigningConfiguration& value) { SetSigningConfiguration(value); return *this;}
    inline GetSigningPlatformResult& WithSigningConfiguration(SigningConfiguration&& value) { SetSigningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the target platform's signing image.</p>
     */
    inline const SigningImageFormat& GetSigningImageFormat() const{ return m_signingImageFormat; }
    inline void SetSigningImageFormat(const SigningImageFormat& value) { m_signingImageFormat = value; }
    inline void SetSigningImageFormat(SigningImageFormat&& value) { m_signingImageFormat = std::move(value); }
    inline GetSigningPlatformResult& WithSigningImageFormat(const SigningImageFormat& value) { SetSigningImageFormat(value); return *this;}
    inline GetSigningPlatformResult& WithSigningImageFormat(SigningImageFormat&& value) { SetSigningImageFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size (in MB) of the payload that can be signed by the target
     * platform.</p>
     */
    inline int GetMaxSizeInMB() const{ return m_maxSizeInMB; }
    inline void SetMaxSizeInMB(int value) { m_maxSizeInMB = value; }
    inline GetSigningPlatformResult& WithMaxSizeInMB(int value) { SetMaxSizeInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether signatures generated for the signing platform can
     * be revoked.</p>
     */
    inline bool GetRevocationSupported() const{ return m_revocationSupported; }
    inline void SetRevocationSupported(bool value) { m_revocationSupported = value; }
    inline GetSigningPlatformResult& WithRevocationSupported(bool value) { SetRevocationSupported(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSigningPlatformResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSigningPlatformResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSigningPlatformResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_platformId;

    Aws::String m_displayName;

    Aws::String m_partner;

    Aws::String m_target;

    Category m_category;

    SigningConfiguration m_signingConfiguration;

    SigningImageFormat m_signingImageFormat;

    int m_maxSizeInMB;

    bool m_revocationSupported;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
