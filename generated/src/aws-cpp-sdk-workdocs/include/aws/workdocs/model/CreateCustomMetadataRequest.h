/**
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
    AWS_WORKDOCS_API CreateCustomMetadataRequest() = default;

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
    inline const Aws::String& GetAuthenticationToken() const { return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    template<typename AuthenticationTokenT = Aws::String>
    void SetAuthenticationToken(AuthenticationTokenT&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::forward<AuthenticationTokenT>(value); }
    template<typename AuthenticationTokenT = Aws::String>
    CreateCustomMetadataRequest& WithAuthenticationToken(AuthenticationTokenT&& value) { SetAuthenticationToken(std::forward<AuthenticationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    CreateCustomMetadataRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version, if the custom metadata is being added to a document
     * version.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    CreateCustomMetadataRequest& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom metadata in the form of name-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomMetadata() const { return m_customMetadata; }
    inline bool CustomMetadataHasBeenSet() const { return m_customMetadataHasBeenSet; }
    template<typename CustomMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomMetadata(CustomMetadataT&& value) { m_customMetadataHasBeenSet = true; m_customMetadata = std::forward<CustomMetadataT>(value); }
    template<typename CustomMetadataT = Aws::Map<Aws::String, Aws::String>>
    CreateCustomMetadataRequest& WithCustomMetadata(CustomMetadataT&& value) { SetCustomMetadata(std::forward<CustomMetadataT>(value)); return *this;}
    template<typename CustomMetadataKeyT = Aws::String, typename CustomMetadataValueT = Aws::String>
    CreateCustomMetadataRequest& AddCustomMetadata(CustomMetadataKeyT&& key, CustomMetadataValueT&& value) {
      m_customMetadataHasBeenSet = true; m_customMetadata.emplace(std::forward<CustomMetadataKeyT>(key), std::forward<CustomMetadataValueT>(value)); return *this;
    }
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
