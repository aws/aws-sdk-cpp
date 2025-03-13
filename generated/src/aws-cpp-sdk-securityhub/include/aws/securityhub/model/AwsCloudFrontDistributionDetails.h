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
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDetails() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides information about the cache configuration for the distribution.</p>
     */
    inline const AwsCloudFrontDistributionCacheBehaviors& GetCacheBehaviors() const { return m_cacheBehaviors; }
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }
    template<typename CacheBehaviorsT = AwsCloudFrontDistributionCacheBehaviors>
    void SetCacheBehaviors(CacheBehaviorsT&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::forward<CacheBehaviorsT>(value); }
    template<typename CacheBehaviorsT = AwsCloudFrontDistributionCacheBehaviors>
    AwsCloudFrontDistributionDetails& WithCacheBehaviors(CacheBehaviorsT&& value) { SetCacheBehaviors(std::forward<CacheBehaviorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default cache behavior for the configuration.</p>
     */
    inline const AwsCloudFrontDistributionDefaultCacheBehavior& GetDefaultCacheBehavior() const { return m_defaultCacheBehavior; }
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }
    template<typename DefaultCacheBehaviorT = AwsCloudFrontDistributionDefaultCacheBehavior>
    void SetDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::forward<DefaultCacheBehaviorT>(value); }
    template<typename DefaultCacheBehaviorT = AwsCloudFrontDistributionDefaultCacheBehavior>
    AwsCloudFrontDistributionDetails& WithDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { SetDefaultCacheBehavior(std::forward<DefaultCacheBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that CloudFront sends in response to requests from the origin (for
     * example, index.html) when a viewer requests the root URL for the distribution
     * (http://www.example.com) instead of an object in your distribution
     * (http://www.example.com/product-description.html). </p>
     */
    inline const Aws::String& GetDefaultRootObject() const { return m_defaultRootObject; }
    inline bool DefaultRootObjectHasBeenSet() const { return m_defaultRootObjectHasBeenSet; }
    template<typename DefaultRootObjectT = Aws::String>
    void SetDefaultRootObject(DefaultRootObjectT&& value) { m_defaultRootObjectHasBeenSet = true; m_defaultRootObject = std::forward<DefaultRootObjectT>(value); }
    template<typename DefaultRootObjectT = Aws::String>
    AwsCloudFrontDistributionDetails& WithDefaultRootObject(DefaultRootObjectT&& value) { SetDefaultRootObject(std::forward<DefaultRootObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name corresponding to the distribution.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AwsCloudFrontDistributionDetails& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag is a hash of the object.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    AwsCloudFrontDistributionDetails& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when that the distribution was last modified.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::String>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::String>
    AwsCloudFrontDistributionDetails& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that controls whether access logs are written for the
     * distribution.</p>
     */
    inline const AwsCloudFrontDistributionLogging& GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    template<typename LoggingT = AwsCloudFrontDistributionLogging>
    void SetLogging(LoggingT&& value) { m_loggingHasBeenSet = true; m_logging = std::forward<LoggingT>(value); }
    template<typename LoggingT = AwsCloudFrontDistributionLogging>
    AwsCloudFrontDistributionDetails& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about origins for this
     * distribution.</p>
     */
    inline const AwsCloudFrontDistributionOrigins& GetOrigins() const { return m_origins; }
    inline bool OriginsHasBeenSet() const { return m_originsHasBeenSet; }
    template<typename OriginsT = AwsCloudFrontDistributionOrigins>
    void SetOrigins(OriginsT&& value) { m_originsHasBeenSet = true; m_origins = std::forward<OriginsT>(value); }
    template<typename OriginsT = AwsCloudFrontDistributionOrigins>
    AwsCloudFrontDistributionDetails& WithOrigins(OriginsT&& value) { SetOrigins(std::forward<OriginsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the origin groups in the distribution.</p>
     */
    inline const AwsCloudFrontDistributionOriginGroups& GetOriginGroups() const { return m_originGroups; }
    inline bool OriginGroupsHasBeenSet() const { return m_originGroupsHasBeenSet; }
    template<typename OriginGroupsT = AwsCloudFrontDistributionOriginGroups>
    void SetOriginGroups(OriginGroupsT&& value) { m_originGroupsHasBeenSet = true; m_originGroups = std::forward<OriginGroupsT>(value); }
    template<typename OriginGroupsT = AwsCloudFrontDistributionOriginGroups>
    AwsCloudFrontDistributionDetails& WithOriginGroups(OriginGroupsT&& value) { SetOriginGroups(std::forward<OriginGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the TLS/SSL configuration that the distribution
     * uses to communicate with viewers.</p>
     */
    inline const AwsCloudFrontDistributionViewerCertificate& GetViewerCertificate() const { return m_viewerCertificate; }
    inline bool ViewerCertificateHasBeenSet() const { return m_viewerCertificateHasBeenSet; }
    template<typename ViewerCertificateT = AwsCloudFrontDistributionViewerCertificate>
    void SetViewerCertificate(ViewerCertificateT&& value) { m_viewerCertificateHasBeenSet = true; m_viewerCertificate = std::forward<ViewerCertificateT>(value); }
    template<typename ViewerCertificateT = AwsCloudFrontDistributionViewerCertificate>
    AwsCloudFrontDistributionDetails& WithViewerCertificate(ViewerCertificateT&& value) { SetViewerCertificate(std::forward<ViewerCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current status of the distribution.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsCloudFrontDistributionDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that specifies the WAF web ACL, if any, to associate with
     * this distribution.</p>
     */
    inline const Aws::String& GetWebAclId() const { return m_webAclId; }
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }
    template<typename WebAclIdT = Aws::String>
    void SetWebAclId(WebAclIdT&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::forward<WebAclIdT>(value); }
    template<typename WebAclIdT = Aws::String>
    AwsCloudFrontDistributionDetails& WithWebAclId(WebAclIdT&& value) { SetWebAclId(std::forward<WebAclIdT>(value)); return *this;}
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
