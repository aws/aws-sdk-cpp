/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchOrchestratorFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeAvailablePatchesRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeAvailablePatchesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAvailablePatches"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p> <p>
     * <b>Windows Server</b> </p> <p>Supported keys for Windows Server managed node
     * patches include the following:</p> <ul> <li> <p> <b> <code>PATCH_SET</code> </b>
     * </p> <p>Sample values: <code>OS</code> | <code>APPLICATION</code> </p> </li>
     * <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample values:
     * <code>WindowsServer2012</code> | <code>Office 2010</code> |
     * <code>MicrosoftDefenderAntivirus</code> </p> </li> <li> <p> <b>
     * <code>PRODUCT_FAMILY</code> </b> </p> <p>Sample values: <code>Windows</code> |
     * <code>Office</code> </p> </li> <li> <p> <b> <code>MSRC_SEVERITY</code> </b> </p>
     * <p>Sample values: <code>ServicePacks</code> | <code>Important</code> |
     * <code>Moderate</code> </p> </li> <li> <p> <b> <code>CLASSIFICATION</code> </b>
     * </p> <p>Sample values: <code>ServicePacks</code> | <code>SecurityUpdates</code>
     * | <code>DefinitionUpdates</code> </p> </li> <li> <p> <b> <code>PATCH_ID</code>
     * </b> </p> <p>Sample values: <code>KB123456</code> | <code>KB4516046</code> </p>
     * </li> </ul> <p> <b>Linux</b> </p>  <p>When specifying filters for
     * Linux patches, you must specify a key-pair for <code>PRODUCT</code>. For
     * example, using the Command Line Interface (CLI), the following command
     * fails:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=CVE_ID,Values=CVE-2018-3615</code> </p> <p>However, the following command
     * succeeds:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=PRODUCT,Values=AmazonLinux2018.03 Key=CVE_ID,Values=CVE-2018-3615</code>
     * </p>  <p>Supported keys for Linux managed node patches include the
     * following:</p> <ul> <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample
     * values: <code>AmazonLinux2018.03</code> | <code>AmazonLinux2.0</code> </p> </li>
     * <li> <p> <b> <code>NAME</code> </b> </p> <p>Sample values:
     * <code>kernel-headers</code> | <code>samba-python</code> | <code>php</code> </p>
     * </li> <li> <p> <b> <code>SEVERITY</code> </b> </p> <p>Sample values:
     * <code>Critical</code> | <code>Important</code> | <code>Medium</code> |
     * <code>Low</code> </p> </li> <li> <p> <b> <code>EPOCH</code> </b> </p> <p>Sample
     * values: <code>0</code> | <code>1</code> </p> </li> <li> <p> <b>
     * <code>VERSION</code> </b> </p> <p>Sample values: <code>78.6.1</code> |
     * <code>4.10.16</code> </p> </li> <li> <p> <b> <code>RELEASE</code> </b> </p>
     * <p>Sample values: <code>9.56.amzn1</code> | <code>1.amzn2</code> </p> </li> <li>
     * <p> <b> <code>ARCH</code> </b> </p> <p>Sample values: <code>i686</code> |
     * <code>x86_64</code> </p> </li> <li> <p> <b> <code>REPOSITORY</code> </b> </p>
     * <p>Sample values: <code>Core</code> | <code>Updates</code> </p> </li> <li> <p>
     * <b> <code>ADVISORY_ID</code> </b> </p> <p>Sample values:
     * <code>ALAS-2018-1058</code> | <code>ALAS2-2021-1594</code> </p> </li> <li> <p>
     * <b> <code>CVE_ID</code> </b> </p> <p>Sample values: <code>CVE-2018-3615</code> |
     * <code>CVE-2020-1472</code> </p> </li> <li> <p> <b> <code>BUGZILLA_ID</code> </b>
     * </p> <p>Sample values: <code>1463241</code> </p> </li> </ul>
     */
    inline const Aws::Vector<PatchOrchestratorFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p> <p>
     * <b>Windows Server</b> </p> <p>Supported keys for Windows Server managed node
     * patches include the following:</p> <ul> <li> <p> <b> <code>PATCH_SET</code> </b>
     * </p> <p>Sample values: <code>OS</code> | <code>APPLICATION</code> </p> </li>
     * <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample values:
     * <code>WindowsServer2012</code> | <code>Office 2010</code> |
     * <code>MicrosoftDefenderAntivirus</code> </p> </li> <li> <p> <b>
     * <code>PRODUCT_FAMILY</code> </b> </p> <p>Sample values: <code>Windows</code> |
     * <code>Office</code> </p> </li> <li> <p> <b> <code>MSRC_SEVERITY</code> </b> </p>
     * <p>Sample values: <code>ServicePacks</code> | <code>Important</code> |
     * <code>Moderate</code> </p> </li> <li> <p> <b> <code>CLASSIFICATION</code> </b>
     * </p> <p>Sample values: <code>ServicePacks</code> | <code>SecurityUpdates</code>
     * | <code>DefinitionUpdates</code> </p> </li> <li> <p> <b> <code>PATCH_ID</code>
     * </b> </p> <p>Sample values: <code>KB123456</code> | <code>KB4516046</code> </p>
     * </li> </ul> <p> <b>Linux</b> </p>  <p>When specifying filters for
     * Linux patches, you must specify a key-pair for <code>PRODUCT</code>. For
     * example, using the Command Line Interface (CLI), the following command
     * fails:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=CVE_ID,Values=CVE-2018-3615</code> </p> <p>However, the following command
     * succeeds:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=PRODUCT,Values=AmazonLinux2018.03 Key=CVE_ID,Values=CVE-2018-3615</code>
     * </p>  <p>Supported keys for Linux managed node patches include the
     * following:</p> <ul> <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample
     * values: <code>AmazonLinux2018.03</code> | <code>AmazonLinux2.0</code> </p> </li>
     * <li> <p> <b> <code>NAME</code> </b> </p> <p>Sample values:
     * <code>kernel-headers</code> | <code>samba-python</code> | <code>php</code> </p>
     * </li> <li> <p> <b> <code>SEVERITY</code> </b> </p> <p>Sample values:
     * <code>Critical</code> | <code>Important</code> | <code>Medium</code> |
     * <code>Low</code> </p> </li> <li> <p> <b> <code>EPOCH</code> </b> </p> <p>Sample
     * values: <code>0</code> | <code>1</code> </p> </li> <li> <p> <b>
     * <code>VERSION</code> </b> </p> <p>Sample values: <code>78.6.1</code> |
     * <code>4.10.16</code> </p> </li> <li> <p> <b> <code>RELEASE</code> </b> </p>
     * <p>Sample values: <code>9.56.amzn1</code> | <code>1.amzn2</code> </p> </li> <li>
     * <p> <b> <code>ARCH</code> </b> </p> <p>Sample values: <code>i686</code> |
     * <code>x86_64</code> </p> </li> <li> <p> <b> <code>REPOSITORY</code> </b> </p>
     * <p>Sample values: <code>Core</code> | <code>Updates</code> </p> </li> <li> <p>
     * <b> <code>ADVISORY_ID</code> </b> </p> <p>Sample values:
     * <code>ALAS-2018-1058</code> | <code>ALAS2-2021-1594</code> </p> </li> <li> <p>
     * <b> <code>CVE_ID</code> </b> </p> <p>Sample values: <code>CVE-2018-3615</code> |
     * <code>CVE-2020-1472</code> </p> </li> <li> <p> <b> <code>BUGZILLA_ID</code> </b>
     * </p> <p>Sample values: <code>1463241</code> </p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p> <p>
     * <b>Windows Server</b> </p> <p>Supported keys for Windows Server managed node
     * patches include the following:</p> <ul> <li> <p> <b> <code>PATCH_SET</code> </b>
     * </p> <p>Sample values: <code>OS</code> | <code>APPLICATION</code> </p> </li>
     * <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample values:
     * <code>WindowsServer2012</code> | <code>Office 2010</code> |
     * <code>MicrosoftDefenderAntivirus</code> </p> </li> <li> <p> <b>
     * <code>PRODUCT_FAMILY</code> </b> </p> <p>Sample values: <code>Windows</code> |
     * <code>Office</code> </p> </li> <li> <p> <b> <code>MSRC_SEVERITY</code> </b> </p>
     * <p>Sample values: <code>ServicePacks</code> | <code>Important</code> |
     * <code>Moderate</code> </p> </li> <li> <p> <b> <code>CLASSIFICATION</code> </b>
     * </p> <p>Sample values: <code>ServicePacks</code> | <code>SecurityUpdates</code>
     * | <code>DefinitionUpdates</code> </p> </li> <li> <p> <b> <code>PATCH_ID</code>
     * </b> </p> <p>Sample values: <code>KB123456</code> | <code>KB4516046</code> </p>
     * </li> </ul> <p> <b>Linux</b> </p>  <p>When specifying filters for
     * Linux patches, you must specify a key-pair for <code>PRODUCT</code>. For
     * example, using the Command Line Interface (CLI), the following command
     * fails:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=CVE_ID,Values=CVE-2018-3615</code> </p> <p>However, the following command
     * succeeds:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=PRODUCT,Values=AmazonLinux2018.03 Key=CVE_ID,Values=CVE-2018-3615</code>
     * </p>  <p>Supported keys for Linux managed node patches include the
     * following:</p> <ul> <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample
     * values: <code>AmazonLinux2018.03</code> | <code>AmazonLinux2.0</code> </p> </li>
     * <li> <p> <b> <code>NAME</code> </b> </p> <p>Sample values:
     * <code>kernel-headers</code> | <code>samba-python</code> | <code>php</code> </p>
     * </li> <li> <p> <b> <code>SEVERITY</code> </b> </p> <p>Sample values:
     * <code>Critical</code> | <code>Important</code> | <code>Medium</code> |
     * <code>Low</code> </p> </li> <li> <p> <b> <code>EPOCH</code> </b> </p> <p>Sample
     * values: <code>0</code> | <code>1</code> </p> </li> <li> <p> <b>
     * <code>VERSION</code> </b> </p> <p>Sample values: <code>78.6.1</code> |
     * <code>4.10.16</code> </p> </li> <li> <p> <b> <code>RELEASE</code> </b> </p>
     * <p>Sample values: <code>9.56.amzn1</code> | <code>1.amzn2</code> </p> </li> <li>
     * <p> <b> <code>ARCH</code> </b> </p> <p>Sample values: <code>i686</code> |
     * <code>x86_64</code> </p> </li> <li> <p> <b> <code>REPOSITORY</code> </b> </p>
     * <p>Sample values: <code>Core</code> | <code>Updates</code> </p> </li> <li> <p>
     * <b> <code>ADVISORY_ID</code> </b> </p> <p>Sample values:
     * <code>ALAS-2018-1058</code> | <code>ALAS2-2021-1594</code> </p> </li> <li> <p>
     * <b> <code>CVE_ID</code> </b> </p> <p>Sample values: <code>CVE-2018-3615</code> |
     * <code>CVE-2020-1472</code> </p> </li> <li> <p> <b> <code>BUGZILLA_ID</code> </b>
     * </p> <p>Sample values: <code>1463241</code> </p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p> <p>
     * <b>Windows Server</b> </p> <p>Supported keys for Windows Server managed node
     * patches include the following:</p> <ul> <li> <p> <b> <code>PATCH_SET</code> </b>
     * </p> <p>Sample values: <code>OS</code> | <code>APPLICATION</code> </p> </li>
     * <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample values:
     * <code>WindowsServer2012</code> | <code>Office 2010</code> |
     * <code>MicrosoftDefenderAntivirus</code> </p> </li> <li> <p> <b>
     * <code>PRODUCT_FAMILY</code> </b> </p> <p>Sample values: <code>Windows</code> |
     * <code>Office</code> </p> </li> <li> <p> <b> <code>MSRC_SEVERITY</code> </b> </p>
     * <p>Sample values: <code>ServicePacks</code> | <code>Important</code> |
     * <code>Moderate</code> </p> </li> <li> <p> <b> <code>CLASSIFICATION</code> </b>
     * </p> <p>Sample values: <code>ServicePacks</code> | <code>SecurityUpdates</code>
     * | <code>DefinitionUpdates</code> </p> </li> <li> <p> <b> <code>PATCH_ID</code>
     * </b> </p> <p>Sample values: <code>KB123456</code> | <code>KB4516046</code> </p>
     * </li> </ul> <p> <b>Linux</b> </p>  <p>When specifying filters for
     * Linux patches, you must specify a key-pair for <code>PRODUCT</code>. For
     * example, using the Command Line Interface (CLI), the following command
     * fails:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=CVE_ID,Values=CVE-2018-3615</code> </p> <p>However, the following command
     * succeeds:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=PRODUCT,Values=AmazonLinux2018.03 Key=CVE_ID,Values=CVE-2018-3615</code>
     * </p>  <p>Supported keys for Linux managed node patches include the
     * following:</p> <ul> <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample
     * values: <code>AmazonLinux2018.03</code> | <code>AmazonLinux2.0</code> </p> </li>
     * <li> <p> <b> <code>NAME</code> </b> </p> <p>Sample values:
     * <code>kernel-headers</code> | <code>samba-python</code> | <code>php</code> </p>
     * </li> <li> <p> <b> <code>SEVERITY</code> </b> </p> <p>Sample values:
     * <code>Critical</code> | <code>Important</code> | <code>Medium</code> |
     * <code>Low</code> </p> </li> <li> <p> <b> <code>EPOCH</code> </b> </p> <p>Sample
     * values: <code>0</code> | <code>1</code> </p> </li> <li> <p> <b>
     * <code>VERSION</code> </b> </p> <p>Sample values: <code>78.6.1</code> |
     * <code>4.10.16</code> </p> </li> <li> <p> <b> <code>RELEASE</code> </b> </p>
     * <p>Sample values: <code>9.56.amzn1</code> | <code>1.amzn2</code> </p> </li> <li>
     * <p> <b> <code>ARCH</code> </b> </p> <p>Sample values: <code>i686</code> |
     * <code>x86_64</code> </p> </li> <li> <p> <b> <code>REPOSITORY</code> </b> </p>
     * <p>Sample values: <code>Core</code> | <code>Updates</code> </p> </li> <li> <p>
     * <b> <code>ADVISORY_ID</code> </b> </p> <p>Sample values:
     * <code>ALAS-2018-1058</code> | <code>ALAS2-2021-1594</code> </p> </li> <li> <p>
     * <b> <code>CVE_ID</code> </b> </p> <p>Sample values: <code>CVE-2018-3615</code> |
     * <code>CVE-2020-1472</code> </p> </li> <li> <p> <b> <code>BUGZILLA_ID</code> </b>
     * </p> <p>Sample values: <code>1463241</code> </p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p> <p>
     * <b>Windows Server</b> </p> <p>Supported keys for Windows Server managed node
     * patches include the following:</p> <ul> <li> <p> <b> <code>PATCH_SET</code> </b>
     * </p> <p>Sample values: <code>OS</code> | <code>APPLICATION</code> </p> </li>
     * <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample values:
     * <code>WindowsServer2012</code> | <code>Office 2010</code> |
     * <code>MicrosoftDefenderAntivirus</code> </p> </li> <li> <p> <b>
     * <code>PRODUCT_FAMILY</code> </b> </p> <p>Sample values: <code>Windows</code> |
     * <code>Office</code> </p> </li> <li> <p> <b> <code>MSRC_SEVERITY</code> </b> </p>
     * <p>Sample values: <code>ServicePacks</code> | <code>Important</code> |
     * <code>Moderate</code> </p> </li> <li> <p> <b> <code>CLASSIFICATION</code> </b>
     * </p> <p>Sample values: <code>ServicePacks</code> | <code>SecurityUpdates</code>
     * | <code>DefinitionUpdates</code> </p> </li> <li> <p> <b> <code>PATCH_ID</code>
     * </b> </p> <p>Sample values: <code>KB123456</code> | <code>KB4516046</code> </p>
     * </li> </ul> <p> <b>Linux</b> </p>  <p>When specifying filters for
     * Linux patches, you must specify a key-pair for <code>PRODUCT</code>. For
     * example, using the Command Line Interface (CLI), the following command
     * fails:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=CVE_ID,Values=CVE-2018-3615</code> </p> <p>However, the following command
     * succeeds:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=PRODUCT,Values=AmazonLinux2018.03 Key=CVE_ID,Values=CVE-2018-3615</code>
     * </p>  <p>Supported keys for Linux managed node patches include the
     * following:</p> <ul> <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample
     * values: <code>AmazonLinux2018.03</code> | <code>AmazonLinux2.0</code> </p> </li>
     * <li> <p> <b> <code>NAME</code> </b> </p> <p>Sample values:
     * <code>kernel-headers</code> | <code>samba-python</code> | <code>php</code> </p>
     * </li> <li> <p> <b> <code>SEVERITY</code> </b> </p> <p>Sample values:
     * <code>Critical</code> | <code>Important</code> | <code>Medium</code> |
     * <code>Low</code> </p> </li> <li> <p> <b> <code>EPOCH</code> </b> </p> <p>Sample
     * values: <code>0</code> | <code>1</code> </p> </li> <li> <p> <b>
     * <code>VERSION</code> </b> </p> <p>Sample values: <code>78.6.1</code> |
     * <code>4.10.16</code> </p> </li> <li> <p> <b> <code>RELEASE</code> </b> </p>
     * <p>Sample values: <code>9.56.amzn1</code> | <code>1.amzn2</code> </p> </li> <li>
     * <p> <b> <code>ARCH</code> </b> </p> <p>Sample values: <code>i686</code> |
     * <code>x86_64</code> </p> </li> <li> <p> <b> <code>REPOSITORY</code> </b> </p>
     * <p>Sample values: <code>Core</code> | <code>Updates</code> </p> </li> <li> <p>
     * <b> <code>ADVISORY_ID</code> </b> </p> <p>Sample values:
     * <code>ALAS-2018-1058</code> | <code>ALAS2-2021-1594</code> </p> </li> <li> <p>
     * <b> <code>CVE_ID</code> </b> </p> <p>Sample values: <code>CVE-2018-3615</code> |
     * <code>CVE-2020-1472</code> </p> </li> <li> <p> <b> <code>BUGZILLA_ID</code> </b>
     * </p> <p>Sample values: <code>1463241</code> </p> </li> </ul>
     */
    inline DescribeAvailablePatchesRequest& WithFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p> <p>
     * <b>Windows Server</b> </p> <p>Supported keys for Windows Server managed node
     * patches include the following:</p> <ul> <li> <p> <b> <code>PATCH_SET</code> </b>
     * </p> <p>Sample values: <code>OS</code> | <code>APPLICATION</code> </p> </li>
     * <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample values:
     * <code>WindowsServer2012</code> | <code>Office 2010</code> |
     * <code>MicrosoftDefenderAntivirus</code> </p> </li> <li> <p> <b>
     * <code>PRODUCT_FAMILY</code> </b> </p> <p>Sample values: <code>Windows</code> |
     * <code>Office</code> </p> </li> <li> <p> <b> <code>MSRC_SEVERITY</code> </b> </p>
     * <p>Sample values: <code>ServicePacks</code> | <code>Important</code> |
     * <code>Moderate</code> </p> </li> <li> <p> <b> <code>CLASSIFICATION</code> </b>
     * </p> <p>Sample values: <code>ServicePacks</code> | <code>SecurityUpdates</code>
     * | <code>DefinitionUpdates</code> </p> </li> <li> <p> <b> <code>PATCH_ID</code>
     * </b> </p> <p>Sample values: <code>KB123456</code> | <code>KB4516046</code> </p>
     * </li> </ul> <p> <b>Linux</b> </p>  <p>When specifying filters for
     * Linux patches, you must specify a key-pair for <code>PRODUCT</code>. For
     * example, using the Command Line Interface (CLI), the following command
     * fails:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=CVE_ID,Values=CVE-2018-3615</code> </p> <p>However, the following command
     * succeeds:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=PRODUCT,Values=AmazonLinux2018.03 Key=CVE_ID,Values=CVE-2018-3615</code>
     * </p>  <p>Supported keys for Linux managed node patches include the
     * following:</p> <ul> <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample
     * values: <code>AmazonLinux2018.03</code> | <code>AmazonLinux2.0</code> </p> </li>
     * <li> <p> <b> <code>NAME</code> </b> </p> <p>Sample values:
     * <code>kernel-headers</code> | <code>samba-python</code> | <code>php</code> </p>
     * </li> <li> <p> <b> <code>SEVERITY</code> </b> </p> <p>Sample values:
     * <code>Critical</code> | <code>Important</code> | <code>Medium</code> |
     * <code>Low</code> </p> </li> <li> <p> <b> <code>EPOCH</code> </b> </p> <p>Sample
     * values: <code>0</code> | <code>1</code> </p> </li> <li> <p> <b>
     * <code>VERSION</code> </b> </p> <p>Sample values: <code>78.6.1</code> |
     * <code>4.10.16</code> </p> </li> <li> <p> <b> <code>RELEASE</code> </b> </p>
     * <p>Sample values: <code>9.56.amzn1</code> | <code>1.amzn2</code> </p> </li> <li>
     * <p> <b> <code>ARCH</code> </b> </p> <p>Sample values: <code>i686</code> |
     * <code>x86_64</code> </p> </li> <li> <p> <b> <code>REPOSITORY</code> </b> </p>
     * <p>Sample values: <code>Core</code> | <code>Updates</code> </p> </li> <li> <p>
     * <b> <code>ADVISORY_ID</code> </b> </p> <p>Sample values:
     * <code>ALAS-2018-1058</code> | <code>ALAS2-2021-1594</code> </p> </li> <li> <p>
     * <b> <code>CVE_ID</code> </b> </p> <p>Sample values: <code>CVE-2018-3615</code> |
     * <code>CVE-2020-1472</code> </p> </li> <li> <p> <b> <code>BUGZILLA_ID</code> </b>
     * </p> <p>Sample values: <code>1463241</code> </p> </li> </ul>
     */
    inline DescribeAvailablePatchesRequest& WithFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p> <p>
     * <b>Windows Server</b> </p> <p>Supported keys for Windows Server managed node
     * patches include the following:</p> <ul> <li> <p> <b> <code>PATCH_SET</code> </b>
     * </p> <p>Sample values: <code>OS</code> | <code>APPLICATION</code> </p> </li>
     * <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample values:
     * <code>WindowsServer2012</code> | <code>Office 2010</code> |
     * <code>MicrosoftDefenderAntivirus</code> </p> </li> <li> <p> <b>
     * <code>PRODUCT_FAMILY</code> </b> </p> <p>Sample values: <code>Windows</code> |
     * <code>Office</code> </p> </li> <li> <p> <b> <code>MSRC_SEVERITY</code> </b> </p>
     * <p>Sample values: <code>ServicePacks</code> | <code>Important</code> |
     * <code>Moderate</code> </p> </li> <li> <p> <b> <code>CLASSIFICATION</code> </b>
     * </p> <p>Sample values: <code>ServicePacks</code> | <code>SecurityUpdates</code>
     * | <code>DefinitionUpdates</code> </p> </li> <li> <p> <b> <code>PATCH_ID</code>
     * </b> </p> <p>Sample values: <code>KB123456</code> | <code>KB4516046</code> </p>
     * </li> </ul> <p> <b>Linux</b> </p>  <p>When specifying filters for
     * Linux patches, you must specify a key-pair for <code>PRODUCT</code>. For
     * example, using the Command Line Interface (CLI), the following command
     * fails:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=CVE_ID,Values=CVE-2018-3615</code> </p> <p>However, the following command
     * succeeds:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=PRODUCT,Values=AmazonLinux2018.03 Key=CVE_ID,Values=CVE-2018-3615</code>
     * </p>  <p>Supported keys for Linux managed node patches include the
     * following:</p> <ul> <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample
     * values: <code>AmazonLinux2018.03</code> | <code>AmazonLinux2.0</code> </p> </li>
     * <li> <p> <b> <code>NAME</code> </b> </p> <p>Sample values:
     * <code>kernel-headers</code> | <code>samba-python</code> | <code>php</code> </p>
     * </li> <li> <p> <b> <code>SEVERITY</code> </b> </p> <p>Sample values:
     * <code>Critical</code> | <code>Important</code> | <code>Medium</code> |
     * <code>Low</code> </p> </li> <li> <p> <b> <code>EPOCH</code> </b> </p> <p>Sample
     * values: <code>0</code> | <code>1</code> </p> </li> <li> <p> <b>
     * <code>VERSION</code> </b> </p> <p>Sample values: <code>78.6.1</code> |
     * <code>4.10.16</code> </p> </li> <li> <p> <b> <code>RELEASE</code> </b> </p>
     * <p>Sample values: <code>9.56.amzn1</code> | <code>1.amzn2</code> </p> </li> <li>
     * <p> <b> <code>ARCH</code> </b> </p> <p>Sample values: <code>i686</code> |
     * <code>x86_64</code> </p> </li> <li> <p> <b> <code>REPOSITORY</code> </b> </p>
     * <p>Sample values: <code>Core</code> | <code>Updates</code> </p> </li> <li> <p>
     * <b> <code>ADVISORY_ID</code> </b> </p> <p>Sample values:
     * <code>ALAS-2018-1058</code> | <code>ALAS2-2021-1594</code> </p> </li> <li> <p>
     * <b> <code>CVE_ID</code> </b> </p> <p>Sample values: <code>CVE-2018-3615</code> |
     * <code>CVE-2020-1472</code> </p> </li> <li> <p> <b> <code>BUGZILLA_ID</code> </b>
     * </p> <p>Sample values: <code>1463241</code> </p> </li> </ul>
     */
    inline DescribeAvailablePatchesRequest& AddFilters(const PatchOrchestratorFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p> <p>
     * <b>Windows Server</b> </p> <p>Supported keys for Windows Server managed node
     * patches include the following:</p> <ul> <li> <p> <b> <code>PATCH_SET</code> </b>
     * </p> <p>Sample values: <code>OS</code> | <code>APPLICATION</code> </p> </li>
     * <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample values:
     * <code>WindowsServer2012</code> | <code>Office 2010</code> |
     * <code>MicrosoftDefenderAntivirus</code> </p> </li> <li> <p> <b>
     * <code>PRODUCT_FAMILY</code> </b> </p> <p>Sample values: <code>Windows</code> |
     * <code>Office</code> </p> </li> <li> <p> <b> <code>MSRC_SEVERITY</code> </b> </p>
     * <p>Sample values: <code>ServicePacks</code> | <code>Important</code> |
     * <code>Moderate</code> </p> </li> <li> <p> <b> <code>CLASSIFICATION</code> </b>
     * </p> <p>Sample values: <code>ServicePacks</code> | <code>SecurityUpdates</code>
     * | <code>DefinitionUpdates</code> </p> </li> <li> <p> <b> <code>PATCH_ID</code>
     * </b> </p> <p>Sample values: <code>KB123456</code> | <code>KB4516046</code> </p>
     * </li> </ul> <p> <b>Linux</b> </p>  <p>When specifying filters for
     * Linux patches, you must specify a key-pair for <code>PRODUCT</code>. For
     * example, using the Command Line Interface (CLI), the following command
     * fails:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=CVE_ID,Values=CVE-2018-3615</code> </p> <p>However, the following command
     * succeeds:</p> <p> <code>aws ssm describe-available-patches --filters
     * Key=PRODUCT,Values=AmazonLinux2018.03 Key=CVE_ID,Values=CVE-2018-3615</code>
     * </p>  <p>Supported keys for Linux managed node patches include the
     * following:</p> <ul> <li> <p> <b> <code>PRODUCT</code> </b> </p> <p>Sample
     * values: <code>AmazonLinux2018.03</code> | <code>AmazonLinux2.0</code> </p> </li>
     * <li> <p> <b> <code>NAME</code> </b> </p> <p>Sample values:
     * <code>kernel-headers</code> | <code>samba-python</code> | <code>php</code> </p>
     * </li> <li> <p> <b> <code>SEVERITY</code> </b> </p> <p>Sample values:
     * <code>Critical</code> | <code>Important</code> | <code>Medium</code> |
     * <code>Low</code> </p> </li> <li> <p> <b> <code>EPOCH</code> </b> </p> <p>Sample
     * values: <code>0</code> | <code>1</code> </p> </li> <li> <p> <b>
     * <code>VERSION</code> </b> </p> <p>Sample values: <code>78.6.1</code> |
     * <code>4.10.16</code> </p> </li> <li> <p> <b> <code>RELEASE</code> </b> </p>
     * <p>Sample values: <code>9.56.amzn1</code> | <code>1.amzn2</code> </p> </li> <li>
     * <p> <b> <code>ARCH</code> </b> </p> <p>Sample values: <code>i686</code> |
     * <code>x86_64</code> </p> </li> <li> <p> <b> <code>REPOSITORY</code> </b> </p>
     * <p>Sample values: <code>Core</code> | <code>Updates</code> </p> </li> <li> <p>
     * <b> <code>ADVISORY_ID</code> </b> </p> <p>Sample values:
     * <code>ALAS-2018-1058</code> | <code>ALAS2-2021-1594</code> </p> </li> <li> <p>
     * <b> <code>CVE_ID</code> </b> </p> <p>Sample values: <code>CVE-2018-3615</code> |
     * <code>CVE-2020-1472</code> </p> </li> <li> <p> <b> <code>BUGZILLA_ID</code> </b>
     * </p> <p>Sample values: <code>1463241</code> </p> </li> </ul>
     */
    inline DescribeAvailablePatchesRequest& AddFilters(PatchOrchestratorFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline DescribeAvailablePatchesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAvailablePatchesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAvailablePatchesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAvailablePatchesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PatchOrchestratorFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
