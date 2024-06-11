﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class CreateCustomMetadataRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API CreateCustomMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomMetadata"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }
    inline CreateCustomMetadataRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline CreateCustomMetadataRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline CreateCustomMetadataRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline CreateCustomMetadataRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline CreateCustomMetadataRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline CreateCustomMetadataRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version, if the custom metadata is being added to a document
     * version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline CreateCustomMetadataRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline CreateCustomMetadataRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline CreateCustomMetadataRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom metadata in the form of name-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomMetadata() const{ return m_customMetadata; }
    inline bool CustomMetadataHasBeenSet() const { return m_customMetadataHasBeenSet; }
    inline void SetCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_customMetadataHasBeenSet = true; m_customMetadata = value; }
    inline void SetCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_customMetadataHasBeenSet = true; m_customMetadata = std::move(value); }
    inline CreateCustomMetadataRequest& WithCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomMetadata(value); return *this;}
    inline CreateCustomMetadataRequest& WithCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomMetadata(std::move(value)); return *this;}
    inline CreateCustomMetadataRequest& AddCustomMetadata(const Aws::String& key, const Aws::String& value) { m_customMetadataHasBeenSet = true; m_customMetadata.emplace(key, value); return *this; }
    inline CreateCustomMetadataRequest& AddCustomMetadata(Aws::String&& key, const Aws::String& value) { m_customMetadataHasBeenSet = true; m_customMetadata.emplace(std::move(key), value); return *this; }
    inline CreateCustomMetadataRequest& AddCustomMetadata(const Aws::String& key, Aws::String&& value) { m_customMetadataHasBeenSet = true; m_customMetadata.emplace(key, std::move(value)); return *this; }
    inline CreateCustomMetadataRequest& AddCustomMetadata(Aws::String&& key, Aws::String&& value) { m_customMetadataHasBeenSet = true; m_customMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateCustomMetadataRequest& AddCustomMetadata(const char* key, Aws::String&& value) { m_customMetadataHasBeenSet = true; m_customMetadata.emplace(key, std::move(value)); return *this; }
    inline CreateCustomMetadataRequest& AddCustomMetadata(Aws::String&& key, const char* value) { m_customMetadataHasBeenSet = true; m_customMetadata.emplace(std::move(key), value); return *this; }
    inline CreateCustomMetadataRequest& AddCustomMetadata(const char* key, const char* value) { m_customMetadataHasBeenSet = true; m_customMetadata.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customMetadata;
    bool m_customMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
