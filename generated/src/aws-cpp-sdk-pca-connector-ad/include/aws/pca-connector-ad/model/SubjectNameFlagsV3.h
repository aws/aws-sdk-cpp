/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>

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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Information to include in the subject name and alternate subject name of the
   * certificate. The subject name can be common name, directory path, DNS as common
   * name, or left blank. You can optionally include email to the subject name for
   * user templates. If you leave the subject name blank then you must set a subject
   * alternate name. The subject alternate name (SAN) can include globally unique
   * identifier (GUID), DNS, domain DNS, email, service principal name (SPN), and
   * user principal name (UPN). You can leave the SAN blank. If you leave the SAN
   * blank, then you must set a subject name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/SubjectNameFlagsV3">AWS
   * API Reference</a></p>
   */
  class SubjectNameFlagsV3
  {
  public:
    AWS_PCACONNECTORAD_API SubjectNameFlagsV3();
    AWS_PCACONNECTORAD_API SubjectNameFlagsV3(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API SubjectNameFlagsV3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Include the common name in the subject name. </p>
     */
    inline bool GetRequireCommonName() const{ return m_requireCommonName; }

    /**
     * <p>Include the common name in the subject name. </p>
     */
    inline bool RequireCommonNameHasBeenSet() const { return m_requireCommonNameHasBeenSet; }

    /**
     * <p>Include the common name in the subject name. </p>
     */
    inline void SetRequireCommonName(bool value) { m_requireCommonNameHasBeenSet = true; m_requireCommonName = value; }

    /**
     * <p>Include the common name in the subject name. </p>
     */
    inline SubjectNameFlagsV3& WithRequireCommonName(bool value) { SetRequireCommonName(value); return *this;}


    /**
     * <p>Include the directory path in the subject name.</p>
     */
    inline bool GetRequireDirectoryPath() const{ return m_requireDirectoryPath; }

    /**
     * <p>Include the directory path in the subject name.</p>
     */
    inline bool RequireDirectoryPathHasBeenSet() const { return m_requireDirectoryPathHasBeenSet; }

    /**
     * <p>Include the directory path in the subject name.</p>
     */
    inline void SetRequireDirectoryPath(bool value) { m_requireDirectoryPathHasBeenSet = true; m_requireDirectoryPath = value; }

    /**
     * <p>Include the directory path in the subject name.</p>
     */
    inline SubjectNameFlagsV3& WithRequireDirectoryPath(bool value) { SetRequireDirectoryPath(value); return *this;}


    /**
     * <p>Include the DNS as common name in the subject name.</p>
     */
    inline bool GetRequireDnsAsCn() const{ return m_requireDnsAsCn; }

    /**
     * <p>Include the DNS as common name in the subject name.</p>
     */
    inline bool RequireDnsAsCnHasBeenSet() const { return m_requireDnsAsCnHasBeenSet; }

    /**
     * <p>Include the DNS as common name in the subject name.</p>
     */
    inline void SetRequireDnsAsCn(bool value) { m_requireDnsAsCnHasBeenSet = true; m_requireDnsAsCn = value; }

    /**
     * <p>Include the DNS as common name in the subject name.</p>
     */
    inline SubjectNameFlagsV3& WithRequireDnsAsCn(bool value) { SetRequireDnsAsCn(value); return *this;}


    /**
     * <p>Include the subject's email in the subject name.</p>
     */
    inline bool GetRequireEmail() const{ return m_requireEmail; }

    /**
     * <p>Include the subject's email in the subject name.</p>
     */
    inline bool RequireEmailHasBeenSet() const { return m_requireEmailHasBeenSet; }

    /**
     * <p>Include the subject's email in the subject name.</p>
     */
    inline void SetRequireEmail(bool value) { m_requireEmailHasBeenSet = true; m_requireEmail = value; }

    /**
     * <p>Include the subject's email in the subject name.</p>
     */
    inline SubjectNameFlagsV3& WithRequireEmail(bool value) { SetRequireEmail(value); return *this;}


    /**
     * <p>Include the globally unique identifier (GUID) in the subject alternate
     * name.</p>
     */
    inline bool GetSanRequireDirectoryGuid() const{ return m_sanRequireDirectoryGuid; }

    /**
     * <p>Include the globally unique identifier (GUID) in the subject alternate
     * name.</p>
     */
    inline bool SanRequireDirectoryGuidHasBeenSet() const { return m_sanRequireDirectoryGuidHasBeenSet; }

    /**
     * <p>Include the globally unique identifier (GUID) in the subject alternate
     * name.</p>
     */
    inline void SetSanRequireDirectoryGuid(bool value) { m_sanRequireDirectoryGuidHasBeenSet = true; m_sanRequireDirectoryGuid = value; }

    /**
     * <p>Include the globally unique identifier (GUID) in the subject alternate
     * name.</p>
     */
    inline SubjectNameFlagsV3& WithSanRequireDirectoryGuid(bool value) { SetSanRequireDirectoryGuid(value); return *this;}


    /**
     * <p>Include the DNS in the subject alternate name.</p>
     */
    inline bool GetSanRequireDns() const{ return m_sanRequireDns; }

    /**
     * <p>Include the DNS in the subject alternate name.</p>
     */
    inline bool SanRequireDnsHasBeenSet() const { return m_sanRequireDnsHasBeenSet; }

    /**
     * <p>Include the DNS in the subject alternate name.</p>
     */
    inline void SetSanRequireDns(bool value) { m_sanRequireDnsHasBeenSet = true; m_sanRequireDns = value; }

    /**
     * <p>Include the DNS in the subject alternate name.</p>
     */
    inline SubjectNameFlagsV3& WithSanRequireDns(bool value) { SetSanRequireDns(value); return *this;}


    /**
     * <p>Include the domain DNS in the subject alternate name.</p>
     */
    inline bool GetSanRequireDomainDns() const{ return m_sanRequireDomainDns; }

    /**
     * <p>Include the domain DNS in the subject alternate name.</p>
     */
    inline bool SanRequireDomainDnsHasBeenSet() const { return m_sanRequireDomainDnsHasBeenSet; }

    /**
     * <p>Include the domain DNS in the subject alternate name.</p>
     */
    inline void SetSanRequireDomainDns(bool value) { m_sanRequireDomainDnsHasBeenSet = true; m_sanRequireDomainDns = value; }

    /**
     * <p>Include the domain DNS in the subject alternate name.</p>
     */
    inline SubjectNameFlagsV3& WithSanRequireDomainDns(bool value) { SetSanRequireDomainDns(value); return *this;}


    /**
     * <p>Include the subject's email in the subject alternate name.</p>
     */
    inline bool GetSanRequireEmail() const{ return m_sanRequireEmail; }

    /**
     * <p>Include the subject's email in the subject alternate name.</p>
     */
    inline bool SanRequireEmailHasBeenSet() const { return m_sanRequireEmailHasBeenSet; }

    /**
     * <p>Include the subject's email in the subject alternate name.</p>
     */
    inline void SetSanRequireEmail(bool value) { m_sanRequireEmailHasBeenSet = true; m_sanRequireEmail = value; }

    /**
     * <p>Include the subject's email in the subject alternate name.</p>
     */
    inline SubjectNameFlagsV3& WithSanRequireEmail(bool value) { SetSanRequireEmail(value); return *this;}


    /**
     * <p>Include the service principal name (SPN) in the subject alternate name.</p>
     */
    inline bool GetSanRequireSpn() const{ return m_sanRequireSpn; }

    /**
     * <p>Include the service principal name (SPN) in the subject alternate name.</p>
     */
    inline bool SanRequireSpnHasBeenSet() const { return m_sanRequireSpnHasBeenSet; }

    /**
     * <p>Include the service principal name (SPN) in the subject alternate name.</p>
     */
    inline void SetSanRequireSpn(bool value) { m_sanRequireSpnHasBeenSet = true; m_sanRequireSpn = value; }

    /**
     * <p>Include the service principal name (SPN) in the subject alternate name.</p>
     */
    inline SubjectNameFlagsV3& WithSanRequireSpn(bool value) { SetSanRequireSpn(value); return *this;}


    /**
     * <p>Include the user principal name (UPN) in the subject alternate name.</p>
     */
    inline bool GetSanRequireUpn() const{ return m_sanRequireUpn; }

    /**
     * <p>Include the user principal name (UPN) in the subject alternate name.</p>
     */
    inline bool SanRequireUpnHasBeenSet() const { return m_sanRequireUpnHasBeenSet; }

    /**
     * <p>Include the user principal name (UPN) in the subject alternate name.</p>
     */
    inline void SetSanRequireUpn(bool value) { m_sanRequireUpnHasBeenSet = true; m_sanRequireUpn = value; }

    /**
     * <p>Include the user principal name (UPN) in the subject alternate name.</p>
     */
    inline SubjectNameFlagsV3& WithSanRequireUpn(bool value) { SetSanRequireUpn(value); return *this;}

  private:

    bool m_requireCommonName;
    bool m_requireCommonNameHasBeenSet = false;

    bool m_requireDirectoryPath;
    bool m_requireDirectoryPathHasBeenSet = false;

    bool m_requireDnsAsCn;
    bool m_requireDnsAsCnHasBeenSet = false;

    bool m_requireEmail;
    bool m_requireEmailHasBeenSet = false;

    bool m_sanRequireDirectoryGuid;
    bool m_sanRequireDirectoryGuidHasBeenSet = false;

    bool m_sanRequireDns;
    bool m_sanRequireDnsHasBeenSet = false;

    bool m_sanRequireDomainDns;
    bool m_sanRequireDomainDnsHasBeenSet = false;

    bool m_sanRequireEmail;
    bool m_sanRequireEmailHasBeenSet = false;

    bool m_sanRequireSpn;
    bool m_sanRequireSpnHasBeenSet = false;

    bool m_sanRequireUpn;
    bool m_sanRequireUpnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
