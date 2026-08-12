/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The template configuration for a knowledge base. This object contains
 * connector-specific configuration that defines how data is crawled and
 * indexed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KbTemplateConfiguration">AWS
 * API Reference</a></p>
 */
class KbTemplateConfiguration {
 public:
  AWS_QUICKSIGHT_API KbTemplateConfiguration() = default;
  AWS_QUICKSIGHT_API KbTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KbTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connector configuration for the knowledge base data source. The structure
   * depends on the connector type of the data source referenced by
   * <code>DataSourceArn</code>.</p> <p>The template must be a JSON object. The
   * required fields vary by connector type:</p> <ul> <li> <p> <b>Amazon S3</b>
   * (<code>S3V2</code>) – Requires <code>connectionConfiguration</code> with
   * <code>bucketName</code>. Supports <code>filterConfiguration</code> for inclusion
   * and exclusion prefixes and patterns. Supports
   * <code>accessControlConfiguration</code> and
   * <code>deletionProtectionConfiguration</code>.</p> </li> <li> <p> <b>Google
   * Drive</b> (<code>GOOGLEDRIVEV3</code>) – Requires
   * <code>connectionConfiguration</code> with <code>authType</code> set to
   * <code>SERVICE_ACCOUNT</code>. Supports <code>dataEntityConfiguration</code> with
   * <code>crawlMyDrive</code>, <code>crawlSharedWithMe</code>, and
   * <code>crawlSharedDrives</code>.</p> </li> <li> <p> <b>OneDrive</b>
   * (<code>ONEDRIVEV3</code>) – Requires <code>authType</code> at the template root
   * level set to <code>TWO_LEGGED_OAUTH</code>. Requires
   * <code>connectionConfiguration</code> with <code>tenantId</code> in UUID format.
   * Supports <code>dataEntityConfiguration</code> with
   * <code>crawlPersonalDrives</code> and <code>crawlSharedWithMe</code>.</p> </li>
   * <li> <p> <b>SharePoint</b> (<code>SHAREPOINTV3</code>) – Requires
   * <code>connectionConfiguration</code> with <code>tenantId</code> in UUID format.
   * Supports <code>dataEntityConfiguration</code> with <code>siteUrls</code>,
   * <code>crawlFiles</code>, and <code>crawlPages</code>.</p> </li> <li> <p> <b>Web
   * Crawler</b> (<code>WEBCRAWLERV3</code>) – Requires
   * <code>connectionConfiguration</code> with <code>seedUrls</code> or
   * <code>siteMapUrls</code> (mutually exclusive) and <code>authType</code>.
   * Supports <code>crawlConfiguration</code> for crawl depth, rate limits, and
   * scope. Supports <code>filterConfiguration</code> for file size limits and URL
   * patterns. Valid values for <code>authType</code>: <code>NO_AUTH</code>,
   * <code>BASIC_AUTH</code>, <code>FORM</code>, <code>SAML</code>.</p> </li> </ul>
   * <p>The optional <code>deletionProtectionConfiguration</code> object is supported
   * by all connector types. It contains <code>enableDeletionProtection</code> and
   * <code>deletionProtectionThreshold</code>.</p>
   */
  inline Aws::Utils::DocumentView GetTemplate() const { return m_template; }
  inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
  template <typename TemplateT = Aws::Utils::Document>
  void SetTemplate(TemplateT&& value) {
    m_templateHasBeenSet = true;
    m_template = std::forward<TemplateT>(value);
  }
  template <typename TemplateT = Aws::Utils::Document>
  KbTemplateConfiguration& WithTemplate(TemplateT&& value) {
    SetTemplate(std::forward<TemplateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Document m_template;
  bool m_templateHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
