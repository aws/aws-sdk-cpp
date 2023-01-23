/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class UpdateTrustStoreRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API UpdateTrustStoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrustStore"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of CA certificates to add to the trust store.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetCertificatesToAdd() const{ return m_certificatesToAdd; }

    /**
     * <p>A list of CA certificates to add to the trust store.</p>
     */
    inline bool CertificatesToAddHasBeenSet() const { return m_certificatesToAddHasBeenSet; }

    /**
     * <p>A list of CA certificates to add to the trust store.</p>
     */
    inline void SetCertificatesToAdd(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_certificatesToAddHasBeenSet = true; m_certificatesToAdd = value; }

    /**
     * <p>A list of CA certificates to add to the trust store.</p>
     */
    inline void SetCertificatesToAdd(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_certificatesToAddHasBeenSet = true; m_certificatesToAdd = std::move(value); }

    /**
     * <p>A list of CA certificates to add to the trust store.</p>
     */
    inline UpdateTrustStoreRequest& WithCertificatesToAdd(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetCertificatesToAdd(value); return *this;}

    /**
     * <p>A list of CA certificates to add to the trust store.</p>
     */
    inline UpdateTrustStoreRequest& WithCertificatesToAdd(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetCertificatesToAdd(std::move(value)); return *this;}

    /**
     * <p>A list of CA certificates to add to the trust store.</p>
     */
    inline UpdateTrustStoreRequest& AddCertificatesToAdd(const Aws::Utils::ByteBuffer& value) { m_certificatesToAddHasBeenSet = true; m_certificatesToAdd.push_back(value); return *this; }

    /**
     * <p>A list of CA certificates to add to the trust store.</p>
     */
    inline UpdateTrustStoreRequest& AddCertificatesToAdd(Aws::Utils::ByteBuffer&& value) { m_certificatesToAddHasBeenSet = true; m_certificatesToAdd.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificatesToDelete() const{ return m_certificatesToDelete; }

    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline bool CertificatesToDeleteHasBeenSet() const { return m_certificatesToDeleteHasBeenSet; }

    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline void SetCertificatesToDelete(const Aws::Vector<Aws::String>& value) { m_certificatesToDeleteHasBeenSet = true; m_certificatesToDelete = value; }

    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline void SetCertificatesToDelete(Aws::Vector<Aws::String>&& value) { m_certificatesToDeleteHasBeenSet = true; m_certificatesToDelete = std::move(value); }

    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline UpdateTrustStoreRequest& WithCertificatesToDelete(const Aws::Vector<Aws::String>& value) { SetCertificatesToDelete(value); return *this;}

    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline UpdateTrustStoreRequest& WithCertificatesToDelete(Aws::Vector<Aws::String>&& value) { SetCertificatesToDelete(std::move(value)); return *this;}

    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline UpdateTrustStoreRequest& AddCertificatesToDelete(const Aws::String& value) { m_certificatesToDeleteHasBeenSet = true; m_certificatesToDelete.push_back(value); return *this; }

    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline UpdateTrustStoreRequest& AddCertificatesToDelete(Aws::String&& value) { m_certificatesToDeleteHasBeenSet = true; m_certificatesToDelete.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of CA certificates to delete from a trust store.</p>
     */
    inline UpdateTrustStoreRequest& AddCertificatesToDelete(const char* value) { m_certificatesToDeleteHasBeenSet = true; m_certificatesToDelete.push_back(value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateTrustStoreRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateTrustStoreRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateTrustStoreRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline UpdateTrustStoreRequest& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline UpdateTrustStoreRequest& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline UpdateTrustStoreRequest& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}

  private:

    Aws::Vector<Aws::Utils::ByteBuffer> m_certificatesToAdd;
    bool m_certificatesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_certificatesToDelete;
    bool m_certificatesToDeleteHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
