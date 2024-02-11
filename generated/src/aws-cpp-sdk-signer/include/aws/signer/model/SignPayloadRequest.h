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
    AWS_SIGNER_API SignPayloadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignPayload"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline SignPayloadRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the signing profile.</p>
     */
    inline SignPayloadRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the signing profile.</p>
     */
    inline SignPayloadRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline const Aws::String& GetProfileOwner() const{ return m_profileOwner; }

    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline bool ProfileOwnerHasBeenSet() const { return m_profileOwnerHasBeenSet; }

    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline void SetProfileOwner(const Aws::String& value) { m_profileOwnerHasBeenSet = true; m_profileOwner = value; }

    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline void SetProfileOwner(Aws::String&& value) { m_profileOwnerHasBeenSet = true; m_profileOwner = std::move(value); }

    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline void SetProfileOwner(const char* value) { m_profileOwnerHasBeenSet = true; m_profileOwner.assign(value); }

    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline SignPayloadRequest& WithProfileOwner(const Aws::String& value) { SetProfileOwner(value); return *this;}

    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline SignPayloadRequest& WithProfileOwner(Aws::String&& value) { SetProfileOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline SignPayloadRequest& WithProfileOwner(const char* value) { SetProfileOwner(value); return *this;}


    /**
     * <p>Specifies the object digest (hash) to sign.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const{ return m_payload; }

    /**
     * <p>Specifies the object digest (hash) to sign.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>Specifies the object digest (hash) to sign.</p>
     */
    inline void SetPayload(const Aws::Utils::ByteBuffer& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>Specifies the object digest (hash) to sign.</p>
     */
    inline void SetPayload(Aws::Utils::ByteBuffer&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>Specifies the object digest (hash) to sign.</p>
     */
    inline SignPayloadRequest& WithPayload(const Aws::Utils::ByteBuffer& value) { SetPayload(value); return *this;}

    /**
     * <p>Specifies the object digest (hash) to sign.</p>
     */
    inline SignPayloadRequest& WithPayload(Aws::Utils::ByteBuffer&& value) { SetPayload(std::move(value)); return *this;}


    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline const Aws::String& GetPayloadFormat() const{ return m_payloadFormat; }

    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline bool PayloadFormatHasBeenSet() const { return m_payloadFormatHasBeenSet; }

    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline void SetPayloadFormat(const Aws::String& value) { m_payloadFormatHasBeenSet = true; m_payloadFormat = value; }

    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline void SetPayloadFormat(Aws::String&& value) { m_payloadFormatHasBeenSet = true; m_payloadFormat = std::move(value); }

    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline void SetPayloadFormat(const char* value) { m_payloadFormatHasBeenSet = true; m_payloadFormat.assign(value); }

    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline SignPayloadRequest& WithPayloadFormat(const Aws::String& value) { SetPayloadFormat(value); return *this;}

    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline SignPayloadRequest& WithPayloadFormat(Aws::String&& value) { SetPayloadFormat(std::move(value)); return *this;}

    /**
     * <p>Payload content type. The single valid type is
     * <code>application/vnd.cncf.notary.payload.v1+json</code>.</p>
     */
    inline SignPayloadRequest& WithPayloadFormat(const char* value) { SetPayloadFormat(value); return *this;}

  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileOwner;
    bool m_profileOwnerHasBeenSet = false;

    Aws::Utils::ByteBuffer m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_payloadFormat;
    bool m_payloadFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
