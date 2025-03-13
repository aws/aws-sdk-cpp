/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <aws/opsworkscm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class CreateServerRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API CreateServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServer"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Associate a public IP address with a server that you are launching. Valid
     * values are <code>true</code> or <code>false</code>. The default value is
     * <code>true</code>. </p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline CreateServerRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional public endpoint of a server, such as
     * <code>https://aws.my-company.com</code>. To access the server, create a CNAME
     * DNS record in your preferred DNS service that points the custom domain to the
     * endpoint that is generated when the server is created (the value of the
     * CreateServer Endpoint attribute). You cannot access the server by using the
     * generated <code>Endpoint</code> value if the server is using a custom domain. If
     * you specify a custom domain, you must also specify values for
     * <code>CustomCertificate</code> and <code>CustomPrivateKey</code>.</p>
     */
    inline const Aws::String& GetCustomDomain() const { return m_customDomain; }
    inline bool CustomDomainHasBeenSet() const { return m_customDomainHasBeenSet; }
    template<typename CustomDomainT = Aws::String>
    void SetCustomDomain(CustomDomainT&& value) { m_customDomainHasBeenSet = true; m_customDomain = std::forward<CustomDomainT>(value); }
    template<typename CustomDomainT = Aws::String>
    CreateServerRequest& WithCustomDomain(CustomDomainT&& value) { SetCustomDomain(std::forward<CustomDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A PEM-formatted HTTPS certificate. The value can be be a single, self-signed
     * certificate, or a certificate chain. If you specify a custom certificate, you
     * must also specify values for <code>CustomDomain</code> and
     * <code>CustomPrivateKey</code>. The following are requirements for the
     * <code>CustomCertificate</code> value:</p> <ul> <li> <p>You can provide either a
     * self-signed, custom certificate, or the full certificate chain.</p> </li> <li>
     * <p>The certificate must be a valid X509 certificate, or a certificate chain in
     * PEM format.</p> </li> <li> <p>The certificate must be valid at the time of
     * upload. A certificate can't be used before its validity period begins (the
     * certificate's <code>NotBefore</code> date), or after it expires (the
     * certificate's <code>NotAfter</code> date).</p> </li> <li> <p>The certificate’s
     * common name or subject alternative names (SANs), if present, must match the
     * value of <code>CustomDomain</code>.</p> </li> <li> <p>The certificate must match
     * the value of <code>CustomPrivateKey</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetCustomCertificate() const { return m_customCertificate; }
    inline bool CustomCertificateHasBeenSet() const { return m_customCertificateHasBeenSet; }
    template<typename CustomCertificateT = Aws::String>
    void SetCustomCertificate(CustomCertificateT&& value) { m_customCertificateHasBeenSet = true; m_customCertificate = std::forward<CustomCertificateT>(value); }
    template<typename CustomCertificateT = Aws::String>
    CreateServerRequest& WithCustomCertificate(CustomCertificateT&& value) { SetCustomCertificate(std::forward<CustomCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A private key in PEM format for connecting to the server by using HTTPS. The
     * private key must not be encrypted; it cannot be protected by a password or
     * passphrase. If you specify a custom private key, you must also specify values
     * for <code>CustomDomain</code> and <code>CustomCertificate</code>.</p>
     */
    inline const Aws::String& GetCustomPrivateKey() const { return m_customPrivateKey; }
    inline bool CustomPrivateKeyHasBeenSet() const { return m_customPrivateKeyHasBeenSet; }
    template<typename CustomPrivateKeyT = Aws::String>
    void SetCustomPrivateKey(CustomPrivateKeyT&& value) { m_customPrivateKeyHasBeenSet = true; m_customPrivateKey = std::forward<CustomPrivateKeyT>(value); }
    template<typename CustomPrivateKeyT = Aws::String>
    CreateServerRequest& WithCustomPrivateKey(CustomPrivateKeyT&& value) { SetCustomPrivateKey(std::forward<CustomPrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enable or disable scheduled backups. Valid values are <code>true</code> or
     * <code>false</code>. The default value is <code>true</code>. </p>
     */
    inline bool GetDisableAutomatedBackup() const { return m_disableAutomatedBackup; }
    inline bool DisableAutomatedBackupHasBeenSet() const { return m_disableAutomatedBackupHasBeenSet; }
    inline void SetDisableAutomatedBackup(bool value) { m_disableAutomatedBackupHasBeenSet = true; m_disableAutomatedBackup = value; }
    inline CreateServerRequest& WithDisableAutomatedBackup(bool value) { SetDisableAutomatedBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration management engine to use. Valid values include
     * <code>ChefAutomate</code> and <code>Puppet</code>. </p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateServerRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The engine model of the server. Valid values in this release include
     * <code>Monolithic</code> for Puppet and <code>Single</code> for Chef. </p>
     */
    inline const Aws::String& GetEngineModel() const { return m_engineModel; }
    inline bool EngineModelHasBeenSet() const { return m_engineModelHasBeenSet; }
    template<typename EngineModelT = Aws::String>
    void SetEngineModel(EngineModelT&& value) { m_engineModelHasBeenSet = true; m_engineModel = std::forward<EngineModelT>(value); }
    template<typename EngineModelT = Aws::String>
    CreateServerRequest& WithEngineModel(EngineModelT&& value) { SetEngineModel(std::forward<EngineModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The major release version of the engine that you want to use. For a Chef
     * server, the valid value for EngineVersion is currently <code>2</code>. For a
     * Puppet server, valid values are <code>2019</code> or <code>2017</code>. </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateServerRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional engine attributes on a specified server. </p> <p class="title">
     * <b>Attributes accepted in a Chef createServer request:</b> </p> <ul> <li> <p>
     * <code>CHEF_AUTOMATE_PIVOTAL_KEY</code>: A base64-encoded RSA public key. The
     * corresponding private key is required to access the Chef API. When no
     * CHEF_AUTOMATE_PIVOTAL_KEY is set, a private key is generated and returned in the
     * response. </p> </li> <li> <p> <code>CHEF_AUTOMATE_ADMIN_PASSWORD</code>: The
     * password for the administrative user in the Chef Automate web-based dashboard.
     * The password length is a minimum of eight characters, and a maximum of 32. The
     * password can contain letters, numbers, and special characters (!/@#$%^&amp;+=_).
     * The password must contain at least one lower case letter, one upper case letter,
     * one number, and one special character. When no CHEF_AUTOMATE_ADMIN_PASSWORD is
     * set, one is generated and returned in the response.</p> </li> </ul> <p
     * class="title"> <b>Attributes accepted in a Puppet createServer request:</b> </p>
     * <ul> <li> <p> <code>PUPPET_ADMIN_PASSWORD</code>: To work with the Puppet
     * Enterprise console, a password must use ASCII characters.</p> </li> <li> <p>
     * <code>PUPPET_R10K_REMOTE</code>: The r10k remote is the URL of your control
     * repository (for example, ssh://git@your.git-repo.com:user/control-repo.git).
     * Specifying an r10k remote opens TCP port 8170.</p> </li> <li> <p>
     * <code>PUPPET_R10K_PRIVATE_KEY</code>: If you are using a private Git repository,
     * add PUPPET_R10K_PRIVATE_KEY to specify a PEM-encoded private SSH key.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const { return m_engineAttributes; }
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }
    template<typename EngineAttributesT = Aws::Vector<EngineAttribute>>
    void SetEngineAttributes(EngineAttributesT&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::forward<EngineAttributesT>(value); }
    template<typename EngineAttributesT = Aws::Vector<EngineAttribute>>
    CreateServerRequest& WithEngineAttributes(EngineAttributesT&& value) { SetEngineAttributes(std::forward<EngineAttributesT>(value)); return *this;}
    template<typename EngineAttributesT = EngineAttribute>
    CreateServerRequest& AddEngineAttributes(EngineAttributesT&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.emplace_back(std::forward<EngineAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The number of automated backups that you want to keep. Whenever a new backup
     * is created, AWS OpsWorks CM deletes the oldest backups if this number is
     * exceeded. The default value is <code>1</code>. </p>
     */
    inline int GetBackupRetentionCount() const { return m_backupRetentionCount; }
    inline bool BackupRetentionCountHasBeenSet() const { return m_backupRetentionCountHasBeenSet; }
    inline void SetBackupRetentionCount(int value) { m_backupRetentionCountHasBeenSet = true; m_backupRetentionCount = value; }
    inline CreateServerRequest& WithBackupRetentionCount(int value) { SetBackupRetentionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the server. The server name must be unique within your AWS
     * account, within each region. Server names must start with a letter; then
     * letters, numbers, or hyphens (-) are allowed, up to a maximum of 40 characters.
     * </p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    CreateServerRequest& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the instance profile that your Amazon EC2 instances use. Although
     * the AWS OpsWorks console typically creates the instance profile for you, if you
     * are using API commands instead, run the service-role-creation.yaml AWS
     * CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the instance profile
     * you need. </p>
     */
    inline const Aws::String& GetInstanceProfileArn() const { return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    template<typename InstanceProfileArnT = Aws::String>
    void SetInstanceProfileArn(InstanceProfileArnT&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::forward<InstanceProfileArnT>(value); }
    template<typename InstanceProfileArnT = Aws::String>
    CreateServerRequest& WithInstanceProfileArn(InstanceProfileArnT&& value) { SetInstanceProfileArn(std::forward<InstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon EC2 instance type to use. For example, <code>m5.large</code>.
     * </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CreateServerRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon EC2 key pair to set for the instance. This parameter is optional;
     * if desired, you may specify this parameter to connect to your instances by using
     * SSH. </p>
     */
    inline const Aws::String& GetKeyPair() const { return m_keyPair; }
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }
    template<typename KeyPairT = Aws::String>
    void SetKeyPair(KeyPairT&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::forward<KeyPairT>(value); }
    template<typename KeyPairT = Aws::String>
    CreateServerRequest& WithKeyPair(KeyPairT&& value) { SetKeyPair(std::forward<KeyPairT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time for a one-hour period each week during which AWS OpsWorks CM
     * performs maintenance on the instance. Valid values must be specified in the
     * following format: <code>DDD:HH:MM</code>. <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random one-hour period on Tuesday, Wednesday, or Friday. See
     * <code>TimeWindowDefinition</code> for more information. </p> <p> <b>Example:</b>
     * <code>Mon:08:00</code>, which represents a start time of every Monday at 08:00
     * UTC. (8:00 a.m.) </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    CreateServerRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time for a one-hour period during which AWS OpsWorks CM backs up
     * application-level data on your server if automated backups are enabled. Valid
     * values must be specified in one of the following formats: </p> <ul> <li> <p>
     * <code>HH:MM</code> for daily backups</p> </li> <li> <p> <code>DDD:HH:MM</code>
     * for weekly backups</p> </li> </ul> <p> <code>MM</code> must be specified as
     * <code>00</code>. The specified time is in coordinated universal time (UTC). The
     * default value is a random, daily start time.</p> <p> <b>Example:</b>
     * <code>08:00</code>, which represents a daily start time of 08:00 UTC.</p> <p>
     * <b>Example:</b> <code>Mon:08:00</code>, which represents a start time of every
     * Monday at 08:00 UTC. (8:00 a.m.)</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    CreateServerRequest& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of security group IDs to attach to the Amazon EC2 instance. If you
     * add this parameter, the specified security groups must be within the VPC that is
     * specified by <code>SubnetIds</code>. </p> <p> If you do not specify this
     * parameter, AWS OpsWorks CM creates one new security group that uses TCP ports 22
     * and 443, open to 0.0.0.0/0 (everyone). </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateServerRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateServerRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The service role that the AWS OpsWorks CM service backend uses to work with
     * your account. Although the AWS OpsWorks management console typically creates the
     * service role for you, if you are using the AWS CLI or API commands, run the
     * service-role-creation.yaml AWS CloudFormation template, located at
     * https://s3.amazonaws.com/opsworks-cm-us-east-1-prod-default-assets/misc/opsworks-cm-roles.yaml.
     * This template creates a CloudFormation stack that includes the service role and
     * instance profile that you need. </p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    CreateServerRequest& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IDs of subnets in which to launch the server EC2 instance. </p> <p>
     * Amazon EC2-Classic customers: This field is required. All servers must run
     * within a VPC. The VPC must have "Auto Assign Public IP" enabled. </p> <p>
     * EC2-VPC customers: This field is optional. If you do not specify subnet IDs,
     * your EC2 instances are created in a default subnet that is selected by Amazon
     * EC2. If you specify subnet IDs, the VPC must have "Auto Assign Public IP"
     * enabled. </p> <p>For more information about supported Amazon EC2 platforms, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateServerRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateServerRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values to attach to an AWS OpsWorks for
     * Chef Automate or AWS OpsWorks for Puppet Enterprise server.</p> <ul> <li> <p>The
     * key cannot be empty.</p> </li> <li> <p>The key can be a maximum of 127
     * characters, and can contain only Unicode letters, numbers, or separators, or the
     * following special characters: <code>+ - = . _ : / @</code> </p> </li> <li>
     * <p>The value can be a maximum 255 characters, and contain only Unicode letters,
     * numbers, or separators, or the following special characters: <code>+ - = . _ : /
     * @</code> </p> </li> <li> <p>Leading and trailing white spaces are trimmed from
     * both the key and value.</p> </li> <li> <p>A maximum of 50 user-applied tags is
     * allowed for any AWS OpsWorks-CM server.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If you specify this field, AWS OpsWorks CM creates the server by using the
     * backup represented by BackupId. </p>
     */
    inline const Aws::String& GetBackupId() const { return m_backupId; }
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
    template<typename BackupIdT = Aws::String>
    void SetBackupId(BackupIdT&& value) { m_backupIdHasBeenSet = true; m_backupId = std::forward<BackupIdT>(value); }
    template<typename BackupIdT = Aws::String>
    CreateServerRequest& WithBackupId(BackupIdT&& value) { SetBackupId(std::forward<BackupIdT>(value)); return *this;}
    ///@}
  private:

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    Aws::String m_customDomain;
    bool m_customDomainHasBeenSet = false;

    Aws::String m_customCertificate;
    bool m_customCertificateHasBeenSet = false;

    Aws::String m_customPrivateKey;
    bool m_customPrivateKeyHasBeenSet = false;

    bool m_disableAutomatedBackup{false};
    bool m_disableAutomatedBackupHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineModel;
    bool m_engineModelHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet = false;

    int m_backupRetentionCount{0};
    bool m_backupRetentionCountHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
