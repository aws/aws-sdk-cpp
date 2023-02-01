/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/PublicDnsNamespaceProperties.h>
#include <aws/servicediscovery/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class CreatePublicDnsNamespaceRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API CreatePublicDnsNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePublicDnsNamespace"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you want to assign to this namespace.</p>  <p>Do not
     * include sensitive information in the name. The name is publicly available using
     * DNS queries.</p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want to assign to this namespace.</p>  <p>Do not
     * include sensitive information in the name. The name is publicly available using
     * DNS queries.</p> 
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you want to assign to this namespace.</p>  <p>Do not
     * include sensitive information in the name. The name is publicly available using
     * DNS queries.</p> 
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want to assign to this namespace.</p>  <p>Do not
     * include sensitive information in the name. The name is publicly available using
     * DNS queries.</p> 
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want to assign to this namespace.</p>  <p>Do not
     * include sensitive information in the name. The name is publicly available using
     * DNS queries.</p> 
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want to assign to this namespace.</p>  <p>Do not
     * include sensitive information in the name. The name is publicly available using
     * DNS queries.</p> 
     */
    inline CreatePublicDnsNamespaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want to assign to this namespace.</p>  <p>Do not
     * include sensitive information in the name. The name is publicly available using
     * DNS queries.</p> 
     */
    inline CreatePublicDnsNamespaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to assign to this namespace.</p>  <p>Do not
     * include sensitive information in the name. The name is publicly available using
     * DNS queries.</p> 
     */
    inline CreatePublicDnsNamespaceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePublicDnsNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePublicDnsNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePublicDnsNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePublicDnsNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePublicDnsNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePublicDnsNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePublicDnsNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreatePublicDnsNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string (for example, a date/timestamp).</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A description for the namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreatePublicDnsNamespaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreatePublicDnsNamespaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Properties for the public DNS namespace.</p>
     */
    inline const PublicDnsNamespaceProperties& GetProperties() const{ return m_properties; }

    /**
     * <p>Properties for the public DNS namespace.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>Properties for the public DNS namespace.</p>
     */
    inline void SetProperties(const PublicDnsNamespaceProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>Properties for the public DNS namespace.</p>
     */
    inline void SetProperties(PublicDnsNamespaceProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>Properties for the public DNS namespace.</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithProperties(const PublicDnsNamespaceProperties& value) { SetProperties(value); return *this;}

    /**
     * <p>Properties for the public DNS namespace.</p>
     */
    inline CreatePublicDnsNamespaceRequest& WithProperties(PublicDnsNamespaceProperties&& value) { SetProperties(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    PublicDnsNamespaceProperties m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
