/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/GuidanceFormat.h>
#include <aws/securityhub/model/RemediationFilters.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class GetRemediationsV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API GetRemediationsV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRemediationsV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier (ID) of an existing remediation target to return.
   * Returns the single matching target. You can't use <code>TargetUid</code>
   * together with <code>MetadataUid</code> or <code>Filters</code>.</p>
   */
  inline const Aws::String& GetTargetUid() const { return m_targetUid; }
  inline bool TargetUidHasBeenSet() const { return m_targetUidHasBeenSet; }
  template <typename TargetUidT = Aws::String>
  void SetTargetUid(TargetUidT&& value) {
    m_targetUidHasBeenSet = true;
    m_targetUid = std::forward<TargetUidT>(value);
  }
  template <typename TargetUidT = Aws::String>
  GetRemediationsV2Request& WithTargetUid(TargetUidT&& value) {
    SetTargetUid(std::forward<TargetUidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier (ID) of the Security Hub exposure finding, found under
   * the <code>metadata.uid</code> field of the finding. Returns the remediation
   * targets associated with that finding. You can't use <code>MetadataUid</code>
   * together with <code>TargetUid</code> or <code>Filters</code>.</p>
   */
  inline const Aws::String& GetMetadataUid() const { return m_metadataUid; }
  inline bool MetadataUidHasBeenSet() const { return m_metadataUidHasBeenSet; }
  template <typename MetadataUidT = Aws::String>
  void SetMetadataUid(MetadataUidT&& value) {
    m_metadataUidHasBeenSet = true;
    m_metadataUid = std::forward<MetadataUidT>(value);
  }
  template <typename MetadataUidT = Aws::String>
  GetRemediationsV2Request& WithMetadataUid(MetadataUidT&& value) {
    SetMetadataUid(std::forward<MetadataUidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters remediation targets based on a set of criteria. You can't use
   * <code>Filters</code> together with <code>TargetUid</code> or
   * <code>MetadataUid</code>.</p>
   */
  inline const RemediationFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = RemediationFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = RemediationFilters>
  GetRemediationsV2Request& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to show remediation target guidance.</p>
   */
  inline bool GetShowGuidance() const { return m_showGuidance; }
  inline bool ShowGuidanceHasBeenSet() const { return m_showGuidanceHasBeenSet; }
  inline void SetShowGuidance(bool value) {
    m_showGuidanceHasBeenSet = true;
    m_showGuidance = value;
  }
  inline GetRemediationsV2Request& WithShowGuidance(bool value) {
    SetShowGuidance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the remediation guidance examples to return. Valid values are
   * <code>All</code>, <code>AwsCli</code>, <code>Cli</code>, <code>Python</code>,
   * <code>Terraform</code>, <code>Cdk</code>, <code>CloudFormation</code>,
   * <code>IaC</code>, and <code>Template</code>. If you don't specify a value, all
   * formats are returned. Applies only when <code>ShowGuidance</code> is
   * <code>true</code>.</p>
   */
  inline GuidanceFormat GetGuidanceFormat() const { return m_guidanceFormat; }
  inline bool GuidanceFormatHasBeenSet() const { return m_guidanceFormatHasBeenSet; }
  inline void SetGuidanceFormat(GuidanceFormat value) {
    m_guidanceFormatHasBeenSet = true;
    m_guidanceFormat = value;
  }
  inline GetRemediationsV2Request& WithGuidanceFormat(GuidanceFormat value) {
    SetGuidanceFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return. Valid range is 1-100. If you don't
   * specify a value, the operation returns up to 25 results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetRemediationsV2Request& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token used to paginate the remediations target list returned. On your
   * first call to <code>GetRemediationsV2</code>, omit this parameter or set it to
   * <code>NULL</code>. For subsequent calls, use the <code>NextToken</code> value
   * returned in the previous response to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetRemediationsV2Request& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetUid;

  Aws::String m_metadataUid;

  RemediationFilters m_filters;

  bool m_showGuidance{false};

  GuidanceFormat m_guidanceFormat{GuidanceFormat::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_targetUidHasBeenSet = false;
  bool m_metadataUidHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_showGuidanceHasBeenSet = false;
  bool m_guidanceFormatHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
