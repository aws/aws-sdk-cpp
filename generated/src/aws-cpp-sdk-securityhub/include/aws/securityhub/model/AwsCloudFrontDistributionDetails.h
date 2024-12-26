/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionCacheBehaviors.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionDefaultCacheBehavior.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionLogging.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOrigins.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginGroups.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionViewerCertificate.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A CloudFront distribution configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionDetails">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDetails();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides information about the cache configuration for the distribution.</p>
     */
    inline const AwsCloudFrontDistributionCacheBehaviors& GetCacheBehaviors() const{ return m_cacheBehaviors; }
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }
    inline void SetCacheBehaviors(const AwsCloudFrontDistributionCacheBehaviors& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = value; }
    inline void SetCacheBehaviors(AwsCloudFrontDistributionCacheBehaviors&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::move(value); }
    inline AwsCloudFrontDistributionDetails& WithCacheBehaviors(const AwsCloudFrontDistributionCacheBehaviors& value) { SetCacheBehaviors(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithCacheBehaviors(AwsCloudFrontDistributionCacheBehaviors&& value) { SetCacheBehaviors(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default cache behavior for the configuration.</p>
     */
    inline const AwsCloudFrontDistributionDefaultCacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }
    inline void SetDefaultCacheBehavior(const AwsCloudFrontDistributionDefaultCacheBehavior& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }
    inline void SetDefaultCacheBehavior(AwsCloudFrontDistributionDefaultCacheBehavior&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::move(value); }
    inline AwsCloudFrontDistributionDetails& WithDefaultCacheBehavior(const AwsCloudFrontDistributionDefaultCacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithDefaultCacheBehavior(AwsCloudFrontDistributionDefaultCacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that CloudFront sends in response to requests from the origin (for
     * example, index.html) when a viewer requests the root URL for the distribution
     * (http://www.example.com) instead of an object in your distribution
     * (http://www.example.com/product-description.html). </p>
     */
    inline const Aws::String& GetDefaultRootObject() const{ return m_defaultRootObject; }
    inline bool DefaultRootObjectHasBeenSet() const { return m_defaultRootObjectHasBeenSet; }
    inline void SetDefaultRootObject(const Aws::String& value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject = value; }
    inline void SetDefaultRootObject(Aws::String&& value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject = std::move(value); }
    inline void SetDefaultRootObject(const char* value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject.assign(value); }
    inline AwsCloudFrontDistributionDetails& WithDefaultRootObject(const Aws::String& value) { SetDefaultRootObject(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithDefaultRootObject(Aws::String&& value) { SetDefaultRootObject(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionDetails& WithDefaultRootObject(const char* value) { SetDefaultRootObject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline AwsCloudFrontDistributionDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline AwsCloudFrontDistributionDetails& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionDetails& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when that the distribution was last modified.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::String& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::String&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline void SetLastModifiedTime(const char* value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime.assign(value); }
    inline AwsCloudFrontDistributionDetails& WithLastModifiedTime(const Aws::String& value) { SetLastModifiedTime(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithLastModifiedTime(Aws::String&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionDetails& WithLastModifiedTime(const char* value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p>
     */
    inline const AwsCloudFrontDistributionLogging& GetLogging() const{ return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    inline void SetLogging(const AwsCloudFrontDistributionLogging& value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline void SetLogging(AwsCloudFrontDistributionLogging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }
    inline AwsCloudFrontDistributionDetails& WithLogging(const AwsCloudFrontDistributionLogging& value) { SetLogging(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithLogging(AwsCloudFrontDistributionLogging&& value) { SetLogging(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline const AwsCloudFrontDistributionOrigins& GetOrigins() const{ return m_origins; }
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
    inline void SetOrigins(const AwsCloudFrontDistributionOrigins& value) { m_originsHasBeenSet = true; m_origins = value; }
    inline void SetOrigins(AwsCloudFrontDistributionOrigins&& value) { m_originsHasBeenSet = true; m_origins = std::move(value); }
    inline AwsCloudFrontDistributionDetails& WithOrigins(const AwsCloudFrontDistributionOrigins& value) { SetOrigins(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithOrigins(AwsCloudFrontDistributionOrigins&& value) { SetOrigins(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the origin groups in the distribution.</p>
     */
    inline const AwsCloudFrontDistributionOriginGroups& GetOriginGroups() const{ return m_originGroups; }
    inline bool OriginGroupsHasBeenSet() const { return m_originGroupsHasBeenSet; }
    inline void SetOriginGroups(const AwsCloudFrontDistributionOriginGroups& value) { m_originGroupsHasBeenSet = true; m_originGroups = value; }
    inline void SetOriginGroups(AwsCloudFrontDistributionOriginGroups&& value) { m_originGroupsHasBeenSet = true; m_originGroups = std::move(value); }
    inline AwsCloudFrontDistributionDetails& WithOriginGroups(const AwsCloudFrontDistributionOriginGroups& value) { SetOriginGroups(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithOriginGroups(AwsCloudFrontDistributionOriginGroups&& value) { SetOriginGroups(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the TLS/SSL configuration that the distribution
     * uses to communicate with viewers.</p>
     */
    inline const AwsCloudFrontDistributionViewerCertificate& GetViewerCertificate() const{ return m_viewerCertificate; }
    inline bool ViewerCertificateHasBeenSet() const { return m_viewerCertificateHasBeenSet; }
    inline void SetViewerCertificate(const AwsCloudFrontDistributionViewerCertificate& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = value; }
    inline void SetViewerCertificate(AwsCloudFrontDistributionViewerCertificate&& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = std::move(value); }
    inline AwsCloudFrontDistributionDetails& WithViewerCertificate(const AwsCloudFrontDistributionViewerCertificate& value) { SetViewerCertificate(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithViewerCertificate(AwsCloudFrontDistributionViewerCertificate&& value) { SetViewerCertificate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsCloudFrontDistributionDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution.</p>
     */
    inline const Aws::String& GetWebAclId() const{ return m_webAclId; }
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }
    inline void SetWebAclId(const Aws::String& value) { m_webAclIdHasBeenSet = true; m_webAclId = value; }
    inline void SetWebAclId(Aws::String&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::move(value); }
    inline void SetWebAclId(const char* value) { m_webAclIdHasBeenSet = true; m_webAclId.assign(value); }
    inline AwsCloudFrontDistributionDetails& WithWebAclId(const Aws::String& value) { SetWebAclId(value); return *this;}
    inline AwsCloudFrontDistributionDetails& WithWebAclId(Aws::String&& value) { SetWebAclId(std::move(value)); return *this;}
    inline AwsCloudFrontDistributionDetails& WithWebAclId(const char* value) { SetWebAclId(value); return *this;}
    ///@}
  private:

    AwsCloudFrontDistributionCacheBehaviors m_cacheBehaviors;
    bool m_cacheBehaviorsHasBeenSet = false;

    AwsCloudFrontDistributionDefaultCacheBehavior m_defaultCacheBehavior;
    bool m_defaultCacheBehaviorHasBeenSet = false;

    Aws::String m_defaultRootObject;
    bool m_defaultRootObjectHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    AwsCloudFrontDistributionLogging m_logging;
    bool m_loggingHasBeenSet = false;

    AwsCloudFrontDistributionOrigins m_origins;
    bool m_originsHasBeenSet = false;

    AwsCloudFrontDistributionOriginGroups m_originGroups;
    bool m_originGroupsHasBeenSet = false;

    AwsCloudFrontDistributionViewerCertificate m_viewerCertificate;
    bool m_viewerCertificateHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_webAclId;
    bool m_webAclIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
