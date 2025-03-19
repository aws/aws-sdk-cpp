/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class SignPayloadRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API SignPayloadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignPayload"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    SignPayloadRequest& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline const Aws::String& GetProfileOwner() const { return m_profileOwner; }
    inline bool ProfileOwnerHasBeenSet() const { return m_profileOwnerHasBeenSet; }
    template<typename ProfileOwnerT = Aws::String>
    void SetProfileOwner(ProfileOwnerT&& value) { m_profileOwnerHasBeenSet = true; m_profileOwner = std::forward<ProfileOwnerT>(value); }
    template<typename ProfileOwnerT = Aws::String>
    SignPayloadRequest& WithProfileOwner(ProfileOwnerT&& value) { SetProfileOwner(std::forward<ProfileOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the object digest (hash) to sign.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::Utils::ByteBuffer>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::Utils::ByteBuffer>
    SignPayloadRequest& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline const Aws::String& GetPayloadFormat() const { return m_payloadFormat; }
    inline bool PayloadFormatHasBeenSet() const { return m_payloadFormatHasBeenSet; }
    template<typename PayloadFormatT = Aws::String>
    void SetPayloadFormat(PayloadFormatT&& value) { m_payloadFormatHasBeenSet = true; m_payloadFormat = std::forward<PayloadFormatT>(value); }
    template<typename PayloadFormatT = Aws::String>
    SignPayloadRequest& WithPayloadFormat(PayloadFormatT&& value) { SetPayloadFormat(std::forward<PayloadFormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileOwner;
    bool m_profileOwnerHasBeenSet = false;

    Aws::Utils::ByteBuffer m_payload{};
    bool m_payloadHasBeenSet = false;

    Aws::String m_payloadFormat;
    bool m_payloadFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
