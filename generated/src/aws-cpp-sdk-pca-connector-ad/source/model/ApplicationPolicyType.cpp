/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ApplicationPolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace ApplicationPolicyTypeMapper
      {

        static constexpr uint32_t ALL_APPLICATION_POLICIES_HASH = ConstExprHashingUtils::HashString("ALL_APPLICATION_POLICIES");
        static constexpr uint32_t ANY_PURPOSE_HASH = ConstExprHashingUtils::HashString("ANY_PURPOSE");
        static constexpr uint32_t ATTESTATION_IDENTITY_KEY_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("ATTESTATION_IDENTITY_KEY_CERTIFICATE");
        static constexpr uint32_t CERTIFICATE_REQUEST_AGENT_HASH = ConstExprHashingUtils::HashString("CERTIFICATE_REQUEST_AGENT");
        static constexpr uint32_t CLIENT_AUTHENTICATION_HASH = ConstExprHashingUtils::HashString("CLIENT_AUTHENTICATION");
        static constexpr uint32_t CODE_SIGNING_HASH = ConstExprHashingUtils::HashString("CODE_SIGNING");
        static constexpr uint32_t CTL_USAGE_HASH = ConstExprHashingUtils::HashString("CTL_USAGE");
        static constexpr uint32_t DIGITAL_RIGHTS_HASH = ConstExprHashingUtils::HashString("DIGITAL_RIGHTS");
        static constexpr uint32_t DIRECTORY_SERVICE_EMAIL_REPLICATION_HASH = ConstExprHashingUtils::HashString("DIRECTORY_SERVICE_EMAIL_REPLICATION");
        static constexpr uint32_t DISALLOWED_LIST_HASH = ConstExprHashingUtils::HashString("DISALLOWED_LIST");
        static constexpr uint32_t DNS_SERVER_TRUST_HASH = ConstExprHashingUtils::HashString("DNS_SERVER_TRUST");
        static constexpr uint32_t DOCUMENT_ENCRYPTION_HASH = ConstExprHashingUtils::HashString("DOCUMENT_ENCRYPTION");
        static constexpr uint32_t DOCUMENT_SIGNING_HASH = ConstExprHashingUtils::HashString("DOCUMENT_SIGNING");
        static constexpr uint32_t DYNAMIC_CODE_GENERATOR_HASH = ConstExprHashingUtils::HashString("DYNAMIC_CODE_GENERATOR");
        static constexpr uint32_t EARLY_LAUNCH_ANTIMALWARE_DRIVER_HASH = ConstExprHashingUtils::HashString("EARLY_LAUNCH_ANTIMALWARE_DRIVER");
        static constexpr uint32_t EMBEDDED_WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH = ConstExprHashingUtils::HashString("EMBEDDED_WINDOWS_SYSTEM_COMPONENT_VERIFICATION");
        static constexpr uint32_t ENCLAVE_HASH = ConstExprHashingUtils::HashString("ENCLAVE");
        static constexpr uint32_t ENCRYPTING_FILE_SYSTEM_HASH = ConstExprHashingUtils::HashString("ENCRYPTING_FILE_SYSTEM");
        static constexpr uint32_t ENDORSEMENT_KEY_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("ENDORSEMENT_KEY_CERTIFICATE");
        static constexpr uint32_t FILE_RECOVERY_HASH = ConstExprHashingUtils::HashString("FILE_RECOVERY");
        static constexpr uint32_t HAL_EXTENSION_HASH = ConstExprHashingUtils::HashString("HAL_EXTENSION");
        static constexpr uint32_t IP_SECURITY_END_SYSTEM_HASH = ConstExprHashingUtils::HashString("IP_SECURITY_END_SYSTEM");
        static constexpr uint32_t IP_SECURITY_IKE_INTERMEDIATE_HASH = ConstExprHashingUtils::HashString("IP_SECURITY_IKE_INTERMEDIATE");
        static constexpr uint32_t IP_SECURITY_TUNNEL_TERMINATION_HASH = ConstExprHashingUtils::HashString("IP_SECURITY_TUNNEL_TERMINATION");
        static constexpr uint32_t IP_SECURITY_USER_HASH = ConstExprHashingUtils::HashString("IP_SECURITY_USER");
        static constexpr uint32_t ISOLATED_USER_MODE_HASH = ConstExprHashingUtils::HashString("ISOLATED_USER_MODE");
        static constexpr uint32_t KDC_AUTHENTICATION_HASH = ConstExprHashingUtils::HashString("KDC_AUTHENTICATION");
        static constexpr uint32_t KERNEL_MODE_CODE_SIGNING_HASH = ConstExprHashingUtils::HashString("KERNEL_MODE_CODE_SIGNING");
        static constexpr uint32_t KEY_PACK_LICENSES_HASH = ConstExprHashingUtils::HashString("KEY_PACK_LICENSES");
        static constexpr uint32_t KEY_RECOVERY_HASH = ConstExprHashingUtils::HashString("KEY_RECOVERY");
        static constexpr uint32_t KEY_RECOVERY_AGENT_HASH = ConstExprHashingUtils::HashString("KEY_RECOVERY_AGENT");
        static constexpr uint32_t LICENSE_SERVER_VERIFICATION_HASH = ConstExprHashingUtils::HashString("LICENSE_SERVER_VERIFICATION");
        static constexpr uint32_t LIFETIME_SIGNING_HASH = ConstExprHashingUtils::HashString("LIFETIME_SIGNING");
        static constexpr uint32_t MICROSOFT_PUBLISHER_HASH = ConstExprHashingUtils::HashString("MICROSOFT_PUBLISHER");
        static constexpr uint32_t MICROSOFT_TIME_STAMPING_HASH = ConstExprHashingUtils::HashString("MICROSOFT_TIME_STAMPING");
        static constexpr uint32_t MICROSOFT_TRUST_LIST_SIGNING_HASH = ConstExprHashingUtils::HashString("MICROSOFT_TRUST_LIST_SIGNING");
        static constexpr uint32_t OCSP_SIGNING_HASH = ConstExprHashingUtils::HashString("OCSP_SIGNING");
        static constexpr uint32_t OEM_WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH = ConstExprHashingUtils::HashString("OEM_WINDOWS_SYSTEM_COMPONENT_VERIFICATION");
        static constexpr uint32_t PLATFORM_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("PLATFORM_CERTIFICATE");
        static constexpr uint32_t PREVIEW_BUILD_SIGNING_HASH = ConstExprHashingUtils::HashString("PREVIEW_BUILD_SIGNING");
        static constexpr uint32_t PRIVATE_KEY_ARCHIVAL_HASH = ConstExprHashingUtils::HashString("PRIVATE_KEY_ARCHIVAL");
        static constexpr uint32_t PROTECTED_PROCESS_LIGHT_VERIFICATION_HASH = ConstExprHashingUtils::HashString("PROTECTED_PROCESS_LIGHT_VERIFICATION");
        static constexpr uint32_t PROTECTED_PROCESS_VERIFICATION_HASH = ConstExprHashingUtils::HashString("PROTECTED_PROCESS_VERIFICATION");
        static constexpr uint32_t QUALIFIED_SUBORDINATION_HASH = ConstExprHashingUtils::HashString("QUALIFIED_SUBORDINATION");
        static constexpr uint32_t REVOKED_LIST_SIGNER_HASH = ConstExprHashingUtils::HashString("REVOKED_LIST_SIGNER");
        static constexpr uint32_t ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION_HASH = ConstExprHashingUtils::HashString("ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION");
        static constexpr uint32_t ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION_HASH = ConstExprHashingUtils::HashString("ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION");
        static constexpr uint32_t ROOT_PROGRAM_NO_OSCP_FAILOVER_TO_CRL_HASH = ConstExprHashingUtils::HashString("ROOT_PROGRAM_NO_OSCP_FAILOVER_TO_CRL");
        static constexpr uint32_t ROOT_LIST_SIGNER_HASH = ConstExprHashingUtils::HashString("ROOT_LIST_SIGNER");
        static constexpr uint32_t SECURE_EMAIL_HASH = ConstExprHashingUtils::HashString("SECURE_EMAIL");
        static constexpr uint32_t SERVER_AUTHENTICATION_HASH = ConstExprHashingUtils::HashString("SERVER_AUTHENTICATION");
        static constexpr uint32_t SMART_CARD_LOGIN_HASH = ConstExprHashingUtils::HashString("SMART_CARD_LOGIN");
        static constexpr uint32_t SPC_ENCRYPTED_DIGEST_RETRY_COUNT_HASH = ConstExprHashingUtils::HashString("SPC_ENCRYPTED_DIGEST_RETRY_COUNT");
        static constexpr uint32_t SPC_RELAXED_PE_MARKER_CHECK_HASH = ConstExprHashingUtils::HashString("SPC_RELAXED_PE_MARKER_CHECK");
        static constexpr uint32_t TIME_STAMPING_HASH = ConstExprHashingUtils::HashString("TIME_STAMPING");
        static constexpr uint32_t WINDOWS_HARDWARE_DRIVER_ATTESTED_VERIFICATION_HASH = ConstExprHashingUtils::HashString("WINDOWS_HARDWARE_DRIVER_ATTESTED_VERIFICATION");
        static constexpr uint32_t WINDOWS_HARDWARE_DRIVER_EXTENDED_VERIFICATION_HASH = ConstExprHashingUtils::HashString("WINDOWS_HARDWARE_DRIVER_EXTENDED_VERIFICATION");
        static constexpr uint32_t WINDOWS_HARDWARE_DRIVER_VERIFICATION_HASH = ConstExprHashingUtils::HashString("WINDOWS_HARDWARE_DRIVER_VERIFICATION");
        static constexpr uint32_t WINDOWS_HELLO_RECOVERY_KEY_ENCRYPTION_HASH = ConstExprHashingUtils::HashString("WINDOWS_HELLO_RECOVERY_KEY_ENCRYPTION");
        static constexpr uint32_t WINDOWS_KITS_COMPONENT_HASH = ConstExprHashingUtils::HashString("WINDOWS_KITS_COMPONENT");
        static constexpr uint32_t WINDOWS_RT_VERIFICATION_HASH = ConstExprHashingUtils::HashString("WINDOWS_RT_VERIFICATION");
        static constexpr uint32_t WINDOWS_SOFTWARE_EXTENSION_VERIFICATION_HASH = ConstExprHashingUtils::HashString("WINDOWS_SOFTWARE_EXTENSION_VERIFICATION");
        static constexpr uint32_t WINDOWS_STORE_HASH = ConstExprHashingUtils::HashString("WINDOWS_STORE");
        static constexpr uint32_t WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH = ConstExprHashingUtils::HashString("WINDOWS_SYSTEM_COMPONENT_VERIFICATION");
        static constexpr uint32_t WINDOWS_TCB_COMPONENT_HASH = ConstExprHashingUtils::HashString("WINDOWS_TCB_COMPONENT");
        static constexpr uint32_t WINDOWS_THIRD_PARTY_APPLICATION_COMPONENT_HASH = ConstExprHashingUtils::HashString("WINDOWS_THIRD_PARTY_APPLICATION_COMPONENT");
        static constexpr uint32_t WINDOWS_UPDATE_HASH = ConstExprHashingUtils::HashString("WINDOWS_UPDATE");


        ApplicationPolicyType GetApplicationPolicyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_APPLICATION_POLICIES_HASH)
          {
            return ApplicationPolicyType::ALL_APPLICATION_POLICIES;
          }
          else if (hashCode == ANY_PURPOSE_HASH)
          {
            return ApplicationPolicyType::ANY_PURPOSE;
          }
          else if (hashCode == ATTESTATION_IDENTITY_KEY_CERTIFICATE_HASH)
          {
            return ApplicationPolicyType::ATTESTATION_IDENTITY_KEY_CERTIFICATE;
          }
          else if (hashCode == CERTIFICATE_REQUEST_AGENT_HASH)
          {
            return ApplicationPolicyType::CERTIFICATE_REQUEST_AGENT;
          }
          else if (hashCode == CLIENT_AUTHENTICATION_HASH)
          {
            return ApplicationPolicyType::CLIENT_AUTHENTICATION;
          }
          else if (hashCode == CODE_SIGNING_HASH)
          {
            return ApplicationPolicyType::CODE_SIGNING;
          }
          else if (hashCode == CTL_USAGE_HASH)
          {
            return ApplicationPolicyType::CTL_USAGE;
          }
          else if (hashCode == DIGITAL_RIGHTS_HASH)
          {
            return ApplicationPolicyType::DIGITAL_RIGHTS;
          }
          else if (hashCode == DIRECTORY_SERVICE_EMAIL_REPLICATION_HASH)
          {
            return ApplicationPolicyType::DIRECTORY_SERVICE_EMAIL_REPLICATION;
          }
          else if (hashCode == DISALLOWED_LIST_HASH)
          {
            return ApplicationPolicyType::DISALLOWED_LIST;
          }
          else if (hashCode == DNS_SERVER_TRUST_HASH)
          {
            return ApplicationPolicyType::DNS_SERVER_TRUST;
          }
          else if (hashCode == DOCUMENT_ENCRYPTION_HASH)
          {
            return ApplicationPolicyType::DOCUMENT_ENCRYPTION;
          }
          else if (hashCode == DOCUMENT_SIGNING_HASH)
          {
            return ApplicationPolicyType::DOCUMENT_SIGNING;
          }
          else if (hashCode == DYNAMIC_CODE_GENERATOR_HASH)
          {
            return ApplicationPolicyType::DYNAMIC_CODE_GENERATOR;
          }
          else if (hashCode == EARLY_LAUNCH_ANTIMALWARE_DRIVER_HASH)
          {
            return ApplicationPolicyType::EARLY_LAUNCH_ANTIMALWARE_DRIVER;
          }
          else if (hashCode == EMBEDDED_WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::EMBEDDED_WINDOWS_SYSTEM_COMPONENT_VERIFICATION;
          }
          else if (hashCode == ENCLAVE_HASH)
          {
            return ApplicationPolicyType::ENCLAVE;
          }
          else if (hashCode == ENCRYPTING_FILE_SYSTEM_HASH)
          {
            return ApplicationPolicyType::ENCRYPTING_FILE_SYSTEM;
          }
          else if (hashCode == ENDORSEMENT_KEY_CERTIFICATE_HASH)
          {
            return ApplicationPolicyType::ENDORSEMENT_KEY_CERTIFICATE;
          }
          else if (hashCode == FILE_RECOVERY_HASH)
          {
            return ApplicationPolicyType::FILE_RECOVERY;
          }
          else if (hashCode == HAL_EXTENSION_HASH)
          {
            return ApplicationPolicyType::HAL_EXTENSION;
          }
          else if (hashCode == IP_SECURITY_END_SYSTEM_HASH)
          {
            return ApplicationPolicyType::IP_SECURITY_END_SYSTEM;
          }
          else if (hashCode == IP_SECURITY_IKE_INTERMEDIATE_HASH)
          {
            return ApplicationPolicyType::IP_SECURITY_IKE_INTERMEDIATE;
          }
          else if (hashCode == IP_SECURITY_TUNNEL_TERMINATION_HASH)
          {
            return ApplicationPolicyType::IP_SECURITY_TUNNEL_TERMINATION;
          }
          else if (hashCode == IP_SECURITY_USER_HASH)
          {
            return ApplicationPolicyType::IP_SECURITY_USER;
          }
          else if (hashCode == ISOLATED_USER_MODE_HASH)
          {
            return ApplicationPolicyType::ISOLATED_USER_MODE;
          }
          else if (hashCode == KDC_AUTHENTICATION_HASH)
          {
            return ApplicationPolicyType::KDC_AUTHENTICATION;
          }
          else if (hashCode == KERNEL_MODE_CODE_SIGNING_HASH)
          {
            return ApplicationPolicyType::KERNEL_MODE_CODE_SIGNING;
          }
          else if (hashCode == KEY_PACK_LICENSES_HASH)
          {
            return ApplicationPolicyType::KEY_PACK_LICENSES;
          }
          else if (hashCode == KEY_RECOVERY_HASH)
          {
            return ApplicationPolicyType::KEY_RECOVERY;
          }
          else if (hashCode == KEY_RECOVERY_AGENT_HASH)
          {
            return ApplicationPolicyType::KEY_RECOVERY_AGENT;
          }
          else if (hashCode == LICENSE_SERVER_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::LICENSE_SERVER_VERIFICATION;
          }
          else if (hashCode == LIFETIME_SIGNING_HASH)
          {
            return ApplicationPolicyType::LIFETIME_SIGNING;
          }
          else if (hashCode == MICROSOFT_PUBLISHER_HASH)
          {
            return ApplicationPolicyType::MICROSOFT_PUBLISHER;
          }
          else if (hashCode == MICROSOFT_TIME_STAMPING_HASH)
          {
            return ApplicationPolicyType::MICROSOFT_TIME_STAMPING;
          }
          else if (hashCode == MICROSOFT_TRUST_LIST_SIGNING_HASH)
          {
            return ApplicationPolicyType::MICROSOFT_TRUST_LIST_SIGNING;
          }
          else if (hashCode == OCSP_SIGNING_HASH)
          {
            return ApplicationPolicyType::OCSP_SIGNING;
          }
          else if (hashCode == OEM_WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::OEM_WINDOWS_SYSTEM_COMPONENT_VERIFICATION;
          }
          else if (hashCode == PLATFORM_CERTIFICATE_HASH)
          {
            return ApplicationPolicyType::PLATFORM_CERTIFICATE;
          }
          else if (hashCode == PREVIEW_BUILD_SIGNING_HASH)
          {
            return ApplicationPolicyType::PREVIEW_BUILD_SIGNING;
          }
          else if (hashCode == PRIVATE_KEY_ARCHIVAL_HASH)
          {
            return ApplicationPolicyType::PRIVATE_KEY_ARCHIVAL;
          }
          else if (hashCode == PROTECTED_PROCESS_LIGHT_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::PROTECTED_PROCESS_LIGHT_VERIFICATION;
          }
          else if (hashCode == PROTECTED_PROCESS_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::PROTECTED_PROCESS_VERIFICATION;
          }
          else if (hashCode == QUALIFIED_SUBORDINATION_HASH)
          {
            return ApplicationPolicyType::QUALIFIED_SUBORDINATION;
          }
          else if (hashCode == REVOKED_LIST_SIGNER_HASH)
          {
            return ApplicationPolicyType::REVOKED_LIST_SIGNER;
          }
          else if (hashCode == ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION_HASH)
          {
            return ApplicationPolicyType::ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION;
          }
          else if (hashCode == ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION_HASH)
          {
            return ApplicationPolicyType::ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION;
          }
          else if (hashCode == ROOT_PROGRAM_NO_OSCP_FAILOVER_TO_CRL_HASH)
          {
            return ApplicationPolicyType::ROOT_PROGRAM_NO_OSCP_FAILOVER_TO_CRL;
          }
          else if (hashCode == ROOT_LIST_SIGNER_HASH)
          {
            return ApplicationPolicyType::ROOT_LIST_SIGNER;
          }
          else if (hashCode == SECURE_EMAIL_HASH)
          {
            return ApplicationPolicyType::SECURE_EMAIL;
          }
          else if (hashCode == SERVER_AUTHENTICATION_HASH)
          {
            return ApplicationPolicyType::SERVER_AUTHENTICATION;
          }
          else if (hashCode == SMART_CARD_LOGIN_HASH)
          {
            return ApplicationPolicyType::SMART_CARD_LOGIN;
          }
          else if (hashCode == SPC_ENCRYPTED_DIGEST_RETRY_COUNT_HASH)
          {
            return ApplicationPolicyType::SPC_ENCRYPTED_DIGEST_RETRY_COUNT;
          }
          else if (hashCode == SPC_RELAXED_PE_MARKER_CHECK_HASH)
          {
            return ApplicationPolicyType::SPC_RELAXED_PE_MARKER_CHECK;
          }
          else if (hashCode == TIME_STAMPING_HASH)
          {
            return ApplicationPolicyType::TIME_STAMPING;
          }
          else if (hashCode == WINDOWS_HARDWARE_DRIVER_ATTESTED_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::WINDOWS_HARDWARE_DRIVER_ATTESTED_VERIFICATION;
          }
          else if (hashCode == WINDOWS_HARDWARE_DRIVER_EXTENDED_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::WINDOWS_HARDWARE_DRIVER_EXTENDED_VERIFICATION;
          }
          else if (hashCode == WINDOWS_HARDWARE_DRIVER_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::WINDOWS_HARDWARE_DRIVER_VERIFICATION;
          }
          else if (hashCode == WINDOWS_HELLO_RECOVERY_KEY_ENCRYPTION_HASH)
          {
            return ApplicationPolicyType::WINDOWS_HELLO_RECOVERY_KEY_ENCRYPTION;
          }
          else if (hashCode == WINDOWS_KITS_COMPONENT_HASH)
          {
            return ApplicationPolicyType::WINDOWS_KITS_COMPONENT;
          }
          else if (hashCode == WINDOWS_RT_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::WINDOWS_RT_VERIFICATION;
          }
          else if (hashCode == WINDOWS_SOFTWARE_EXTENSION_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::WINDOWS_SOFTWARE_EXTENSION_VERIFICATION;
          }
          else if (hashCode == WINDOWS_STORE_HASH)
          {
            return ApplicationPolicyType::WINDOWS_STORE;
          }
          else if (hashCode == WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH)
          {
            return ApplicationPolicyType::WINDOWS_SYSTEM_COMPONENT_VERIFICATION;
          }
          else if (hashCode == WINDOWS_TCB_COMPONENT_HASH)
          {
            return ApplicationPolicyType::WINDOWS_TCB_COMPONENT;
          }
          else if (hashCode == WINDOWS_THIRD_PARTY_APPLICATION_COMPONENT_HASH)
          {
            return ApplicationPolicyType::WINDOWS_THIRD_PARTY_APPLICATION_COMPONENT;
          }
          else if (hashCode == WINDOWS_UPDATE_HASH)
          {
            return ApplicationPolicyType::WINDOWS_UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationPolicyType>(hashCode);
          }

          return ApplicationPolicyType::NOT_SET;
        }

        Aws::String GetNameForApplicationPolicyType(ApplicationPolicyType enumValue)
        {
          switch(enumValue)
          {
          case ApplicationPolicyType::NOT_SET:
            return {};
          case ApplicationPolicyType::ALL_APPLICATION_POLICIES:
            return "ALL_APPLICATION_POLICIES";
          case ApplicationPolicyType::ANY_PURPOSE:
            return "ANY_PURPOSE";
          case ApplicationPolicyType::ATTESTATION_IDENTITY_KEY_CERTIFICATE:
            return "ATTESTATION_IDENTITY_KEY_CERTIFICATE";
          case ApplicationPolicyType::CERTIFICATE_REQUEST_AGENT:
            return "CERTIFICATE_REQUEST_AGENT";
          case ApplicationPolicyType::CLIENT_AUTHENTICATION:
            return "CLIENT_AUTHENTICATION";
          case ApplicationPolicyType::CODE_SIGNING:
            return "CODE_SIGNING";
          case ApplicationPolicyType::CTL_USAGE:
            return "CTL_USAGE";
          case ApplicationPolicyType::DIGITAL_RIGHTS:
            return "DIGITAL_RIGHTS";
          case ApplicationPolicyType::DIRECTORY_SERVICE_EMAIL_REPLICATION:
            return "DIRECTORY_SERVICE_EMAIL_REPLICATION";
          case ApplicationPolicyType::DISALLOWED_LIST:
            return "DISALLOWED_LIST";
          case ApplicationPolicyType::DNS_SERVER_TRUST:
            return "DNS_SERVER_TRUST";
          case ApplicationPolicyType::DOCUMENT_ENCRYPTION:
            return "DOCUMENT_ENCRYPTION";
          case ApplicationPolicyType::DOCUMENT_SIGNING:
            return "DOCUMENT_SIGNING";
          case ApplicationPolicyType::DYNAMIC_CODE_GENERATOR:
            return "DYNAMIC_CODE_GENERATOR";
          case ApplicationPolicyType::EARLY_LAUNCH_ANTIMALWARE_DRIVER:
            return "EARLY_LAUNCH_ANTIMALWARE_DRIVER";
          case ApplicationPolicyType::EMBEDDED_WINDOWS_SYSTEM_COMPONENT_VERIFICATION:
            return "EMBEDDED_WINDOWS_SYSTEM_COMPONENT_VERIFICATION";
          case ApplicationPolicyType::ENCLAVE:
            return "ENCLAVE";
          case ApplicationPolicyType::ENCRYPTING_FILE_SYSTEM:
            return "ENCRYPTING_FILE_SYSTEM";
          case ApplicationPolicyType::ENDORSEMENT_KEY_CERTIFICATE:
            return "ENDORSEMENT_KEY_CERTIFICATE";
          case ApplicationPolicyType::FILE_RECOVERY:
            return "FILE_RECOVERY";
          case ApplicationPolicyType::HAL_EXTENSION:
            return "HAL_EXTENSION";
          case ApplicationPolicyType::IP_SECURITY_END_SYSTEM:
            return "IP_SECURITY_END_SYSTEM";
          case ApplicationPolicyType::IP_SECURITY_IKE_INTERMEDIATE:
            return "IP_SECURITY_IKE_INTERMEDIATE";
          case ApplicationPolicyType::IP_SECURITY_TUNNEL_TERMINATION:
            return "IP_SECURITY_TUNNEL_TERMINATION";
          case ApplicationPolicyType::IP_SECURITY_USER:
            return "IP_SECURITY_USER";
          case ApplicationPolicyType::ISOLATED_USER_MODE:
            return "ISOLATED_USER_MODE";
          case ApplicationPolicyType::KDC_AUTHENTICATION:
            return "KDC_AUTHENTICATION";
          case ApplicationPolicyType::KERNEL_MODE_CODE_SIGNING:
            return "KERNEL_MODE_CODE_SIGNING";
          case ApplicationPolicyType::KEY_PACK_LICENSES:
            return "KEY_PACK_LICENSES";
          case ApplicationPolicyType::KEY_RECOVERY:
            return "KEY_RECOVERY";
          case ApplicationPolicyType::KEY_RECOVERY_AGENT:
            return "KEY_RECOVERY_AGENT";
          case ApplicationPolicyType::LICENSE_SERVER_VERIFICATION:
            return "LICENSE_SERVER_VERIFICATION";
          case ApplicationPolicyType::LIFETIME_SIGNING:
            return "LIFETIME_SIGNING";
          case ApplicationPolicyType::MICROSOFT_PUBLISHER:
            return "MICROSOFT_PUBLISHER";
          case ApplicationPolicyType::MICROSOFT_TIME_STAMPING:
            return "MICROSOFT_TIME_STAMPING";
          case ApplicationPolicyType::MICROSOFT_TRUST_LIST_SIGNING:
            return "MICROSOFT_TRUST_LIST_SIGNING";
          case ApplicationPolicyType::OCSP_SIGNING:
            return "OCSP_SIGNING";
          case ApplicationPolicyType::OEM_WINDOWS_SYSTEM_COMPONENT_VERIFICATION:
            return "OEM_WINDOWS_SYSTEM_COMPONENT_VERIFICATION";
          case ApplicationPolicyType::PLATFORM_CERTIFICATE:
            return "PLATFORM_CERTIFICATE";
          case ApplicationPolicyType::PREVIEW_BUILD_SIGNING:
            return "PREVIEW_BUILD_SIGNING";
          case ApplicationPolicyType::PRIVATE_KEY_ARCHIVAL:
            return "PRIVATE_KEY_ARCHIVAL";
          case ApplicationPolicyType::PROTECTED_PROCESS_LIGHT_VERIFICATION:
            return "PROTECTED_PROCESS_LIGHT_VERIFICATION";
          case ApplicationPolicyType::PROTECTED_PROCESS_VERIFICATION:
            return "PROTECTED_PROCESS_VERIFICATION";
          case ApplicationPolicyType::QUALIFIED_SUBORDINATION:
            return "QUALIFIED_SUBORDINATION";
          case ApplicationPolicyType::REVOKED_LIST_SIGNER:
            return "REVOKED_LIST_SIGNER";
          case ApplicationPolicyType::ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION:
            return "ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION";
          case ApplicationPolicyType::ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION:
            return "ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION";
          case ApplicationPolicyType::ROOT_PROGRAM_NO_OSCP_FAILOVER_TO_CRL:
            return "ROOT_PROGRAM_NO_OSCP_FAILOVER_TO_CRL";
          case ApplicationPolicyType::ROOT_LIST_SIGNER:
            return "ROOT_LIST_SIGNER";
          case ApplicationPolicyType::SECURE_EMAIL:
            return "SECURE_EMAIL";
          case ApplicationPolicyType::SERVER_AUTHENTICATION:
            return "SERVER_AUTHENTICATION";
          case ApplicationPolicyType::SMART_CARD_LOGIN:
            return "SMART_CARD_LOGIN";
          case ApplicationPolicyType::SPC_ENCRYPTED_DIGEST_RETRY_COUNT:
            return "SPC_ENCRYPTED_DIGEST_RETRY_COUNT";
          case ApplicationPolicyType::SPC_RELAXED_PE_MARKER_CHECK:
            return "SPC_RELAXED_PE_MARKER_CHECK";
          case ApplicationPolicyType::TIME_STAMPING:
            return "TIME_STAMPING";
          case ApplicationPolicyType::WINDOWS_HARDWARE_DRIVER_ATTESTED_VERIFICATION:
            return "WINDOWS_HARDWARE_DRIVER_ATTESTED_VERIFICATION";
          case ApplicationPolicyType::WINDOWS_HARDWARE_DRIVER_EXTENDED_VERIFICATION:
            return "WINDOWS_HARDWARE_DRIVER_EXTENDED_VERIFICATION";
          case ApplicationPolicyType::WINDOWS_HARDWARE_DRIVER_VERIFICATION:
            return "WINDOWS_HARDWARE_DRIVER_VERIFICATION";
          case ApplicationPolicyType::WINDOWS_HELLO_RECOVERY_KEY_ENCRYPTION:
            return "WINDOWS_HELLO_RECOVERY_KEY_ENCRYPTION";
          case ApplicationPolicyType::WINDOWS_KITS_COMPONENT:
            return "WINDOWS_KITS_COMPONENT";
          case ApplicationPolicyType::WINDOWS_RT_VERIFICATION:
            return "WINDOWS_RT_VERIFICATION";
          case ApplicationPolicyType::WINDOWS_SOFTWARE_EXTENSION_VERIFICATION:
            return "WINDOWS_SOFTWARE_EXTENSION_VERIFICATION";
          case ApplicationPolicyType::WINDOWS_STORE:
            return "WINDOWS_STORE";
          case ApplicationPolicyType::WINDOWS_SYSTEM_COMPONENT_VERIFICATION:
            return "WINDOWS_SYSTEM_COMPONENT_VERIFICATION";
          case ApplicationPolicyType::WINDOWS_TCB_COMPONENT:
            return "WINDOWS_TCB_COMPONENT";
          case ApplicationPolicyType::WINDOWS_THIRD_PARTY_APPLICATION_COMPONENT:
            return "WINDOWS_THIRD_PARTY_APPLICATION_COMPONENT";
          case ApplicationPolicyType::WINDOWS_UPDATE:
            return "WINDOWS_UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationPolicyTypeMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
