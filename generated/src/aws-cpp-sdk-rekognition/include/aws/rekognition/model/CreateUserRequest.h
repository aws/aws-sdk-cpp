/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateUserRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of an existing collection to which the new UserID needs to be
     * created.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>The ID of an existing collection to which the new UserID needs to be
     * created.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>The ID of an existing collection to which the new UserID needs to be
     * created.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>The ID of an existing collection to which the new UserID needs to be
     * created.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>The ID of an existing collection to which the new UserID needs to be
     * created.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>The ID of an existing collection to which the new UserID needs to be
     * created.</p>
     */
    inline CreateUserRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>The ID of an existing collection to which the new UserID needs to be
     * created.</p>
     */
    inline CreateUserRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of an existing collection to which the new UserID needs to be
     * created.</p>
     */
    inline CreateUserRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>ID for the UserID to be created. This ID needs to be unique within the
     * collection.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>ID for the UserID to be created. This ID needs to be unique within the
     * collection.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>ID for the UserID to be created. This ID needs to be unique within the
     * collection.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>ID for the UserID to be created. This ID needs to be unique within the
     * collection.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>ID for the UserID to be created. This ID needs to be unique within the
     * collection.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>ID for the UserID to be created. This ID needs to be unique within the
     * collection.</p>
     */
    inline CreateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>ID for the UserID to be created. This ID needs to be unique within the
     * collection.</p>
     */
    inline CreateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>ID for the UserID to be created. This ID needs to be unique within the
     * collection.</p>
     */
    inline CreateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>Idempotent token used to identify the request to <code>CreateUser</code>. If
     * you use the same token with multiple <code>CreateUser</code> requests, the same
     * response is returned. Use ClientRequestToken to prevent the same request from
     * being processed more than once.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token used to identify the request to <code>CreateUser</code>. If
     * you use the same token with multiple <code>CreateUser</code> requests, the same
     * response is returned. Use ClientRequestToken to prevent the same request from
     * being processed more than once.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token used to identify the request to <code>CreateUser</code>. If
     * you use the same token with multiple <code>CreateUser</code> requests, the same
     * response is returned. Use ClientRequestToken to prevent the same request from
     * being processed more than once.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token used to identify the request to <code>CreateUser</code>. If
     * you use the same token with multiple <code>CreateUser</code> requests, the same
     * response is returned. Use ClientRequestToken to prevent the same request from
     * being processed more than once.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token used to identify the request to <code>CreateUser</code>. If
     * you use the same token with multiple <code>CreateUser</code> requests, the same
     * response is returned. Use ClientRequestToken to prevent the same request from
     * being processed more than once.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token used to identify the request to <code>CreateUser</code>. If
     * you use the same token with multiple <code>CreateUser</code> requests, the same
     * response is returned. Use ClientRequestToken to prevent the same request from
     * being processed more than once.</p>
     */
    inline CreateUserRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token used to identify the request to <code>CreateUser</code>. If
     * you use the same token with multiple <code>CreateUser</code> requests, the same
     * response is returned. Use ClientRequestToken to prevent the same request from
     * being processed more than once.</p>
     */
    inline CreateUserRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token used to identify the request to <code>CreateUser</code>. If
     * you use the same token with multiple <code>CreateUser</code> requests, the same
     * response is returned. Use ClientRequestToken to prevent the same request from
     * being processed more than once.</p>
     */
    inline CreateUserRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
