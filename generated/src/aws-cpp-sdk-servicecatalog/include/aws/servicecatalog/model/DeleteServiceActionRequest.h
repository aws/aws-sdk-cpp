/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class DeleteServiceActionRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DeleteServiceActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServiceAction"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline DeleteServiceActionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline DeleteServiceActionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline DeleteServiceActionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline DeleteServiceActionRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline DeleteServiceActionRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline DeleteServiceActionRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests from the same Amazon Web Services account use the same idempotency
     * token, the same response is returned for each repeated request. </p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests from the same Amazon Web Services account use the same idempotency
     * token, the same response is returned for each repeated request. </p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests from the same Amazon Web Services account use the same idempotency
     * token, the same response is returned for each repeated request. </p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests from the same Amazon Web Services account use the same idempotency
     * token, the same response is returned for each repeated request. </p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests from the same Amazon Web Services account use the same idempotency
     * token, the same response is returned for each repeated request. </p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests from the same Amazon Web Services account use the same idempotency
     * token, the same response is returned for each repeated request. </p>
     */
    inline DeleteServiceActionRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests from the same Amazon Web Services account use the same idempotency
     * token, the same response is returned for each repeated request. </p>
     */
    inline DeleteServiceActionRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests from the same Amazon Web Services account use the same idempotency
     * token, the same response is returned for each repeated request. </p>
     */
    inline DeleteServiceActionRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
