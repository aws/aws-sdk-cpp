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

        static const int ALL_APPLICATION_POLICIES_HASH = HashingUtils::HashString("ALL_APPLICATION_POLICIES");
        static const int ANY_PURPOSE_HASH = HashingUtils::HashString("ANY_PURPOSE");
        static const int ATTESTATION_IDENTITY_KEY_CERTIFICATE_HASH = HashingUtils::HashString("ATTESTATION_IDENTITY_KEY_CERTIFICATE");
        static const int CERTIFICATE_REQUEST_AGENT_HASH = HashingUtils::HashString("CERTIFICATE_REQUEST_AGENT");
        static const int CLIENT_AUTHENTICATION_HASH = HashingUtils::HashString("CLIENT_AUTHENTICATION");
        static const int CODE_SIGNING_HASH = HashingUtils::HashString("CODE_SIGNING");
        static const int CTL_USAGE_HASH = HashingUtils::HashString("CTL_USAGE");
        static const int DIGITAL_RIGHTS_HASH = HashingUtils::HashString("DIGITAL_RIGHTS");
        static const int DIRECTORY_SERVICE_EMAIL_REPLICATION_HASH = HashingUtils::HashString("DIRECTORY_SERVICE_EMAIL_REPLICATION");
        static const int DISALLOWED_LIST_HASH = HashingUtils::HashString("DISALLOWED_LIST");
        static const int DNS_SERVER_TRUST_HASH = HashingUtils::HashString("DNS_SERVER_TRUST");
        static const int DOCUMENT_ENCRYPTION_HASH = HashingUtils::HashString("DOCUMENT_ENCRYPTION");
        static const int DOCUMENT_SIGNING_HASH = HashingUtils::HashString("DOCUMENT_SIGNING");
        static const int DYNAMIC_CODE_GENERATOR_HASH = HashingUtils::HashString("DYNAMIC_CODE_GENERATOR");
        static const int EARLY_LAUNCH_ANTIMALWARE_DRIVER_HASH = HashingUtils::HashString("EARLY_LAUNCH_ANTIMALWARE_DRIVER");
        static const int EMBEDDED_WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH = HashingUtils::HashString("EMBEDDED_WINDOWS_SYSTEM_COMPONENT_VERIFICATION");
        static const int ENCLAVE_HASH = HashingUtils::HashString("ENCLAVE");
        static const int ENCRYPTING_FILE_SYSTEM_HASH = HashingUtils::HashString("ENCRYPTING_FILE_SYSTEM");
        static const int ENDORSEMENT_KEY_CERTIFICATE_HASH = HashingUtils::HashString("ENDORSEMENT_KEY_CERTIFICATE");
        static const int FILE_RECOVERY_HASH = HashingUtils::HashString("FILE_RECOVERY");
        static const int HAL_EXTENSION_HASH = HashingUtils::HashString("HAL_EXTENSION");
        static const int IP_SECURITY_END_SYSTEM_HASH = HashingUtils::HashString("IP_SECURITY_END_SYSTEM");
        static const int IP_SECURITY_IKE_INTERMEDIATE_HASH = HashingUtils::HashString("IP_SECURITY_IKE_INTERMEDIATE");
        static const int IP_SECURITY_TUNNEL_TERMINATION_HASH = HashingUtils::HashString("IP_SECURITY_TUNNEL_TERMINATION");
        static const int IP_SECURITY_USER_HASH = HashingUtils::HashString("IP_SECURITY_USER");
        static const int ISOLATED_USER_MODE_HASH = HashingUtils::HashString("ISOLATED_USER_MODE");
        static const int KDC_AUTHENTICATION_HASH = HashingUtils::HashString("KDC_AUTHENTICATION");
        static const int KERNEL_MODE_CODE_SIGNING_HASH = HashingUtils::HashString("KERNEL_MODE_CODE_SIGNING");
        static const int KEY_PACK_LICENSES_HASH = HashingUtils::HashString("KEY_PACK_LICENSES");
        static const int KEY_RECOVERY_HASH = HashingUtils::HashString("KEY_RECOVERY");
        static const int KEY_RECOVERY_AGENT_HASH = HashingUtils::HashString("KEY_RECOVERY_AGENT");
        static const int LICENSE_SERVER_VERIFICATION_HASH = HashingUtils::HashString("LICENSE_SERVER_VERIFICATION");
        static const int LIFETIME_SIGNING_HASH = HashingUtils::HashString("LIFETIME_SIGNING");
        static const int MICROSOFT_PUBLISHER_HASH = HashingUtils::HashString("MICROSOFT_PUBLISHER");
        static const int MICROSOFT_TIME_STAMPING_HASH = HashingUtils::HashString("MICROSOFT_TIME_STAMPING");
        static const int MICROSOFT_TRUST_LIST_SIGNING_HASH = HashingUtils::HashString("MICROSOFT_TRUST_LIST_SIGNING");
        static const int OCSP_SIGNING_HASH = HashingUtils::HashString("OCSP_SIGNING");
        static const int OEM_WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH = HashingUtils::HashString("OEM_WINDOWS_SYSTEM_COMPONENT_VERIFICATION");
        static const int PLATFORM_CERTIFICATE_HASH = HashingUtils::HashString("PLATFORM_CERTIFICATE");
        static const int PREVIEW_BUILD_SIGNING_HASH = HashingUtils::HashString("PREVIEW_BUILD_SIGNING");
        static const int PRIVATE_KEY_ARCHIVAL_HASH = HashingUtils::HashString("PRIVATE_KEY_ARCHIVAL");
        static const int PROTECTED_PROCESS_LIGHT_VERIFICATION_HASH = HashingUtils::HashString("PROTECTED_PROCESS_LIGHT_VERIFICATION");
        static const int PROTECTED_PROCESS_VERIFICATION_HASH = HashingUtils::HashString("PROTECTED_PROCESS_VERIFICATION");
        static const int QUALIFIED_SUBORDINATION_HASH = HashingUtils::HashString("QUALIFIED_SUBORDINATION");
        static const int REVOKED_LIST_SIGNER_HASH = HashingUtils::HashString("REVOKED_LIST_SIGNER");
        static const int ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION_HASH = HashingUtils::HashString("ROOT_PROGRAM_AUTO_UPDATE_CA_REVOCATION");
        static const int ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION_HASH = HashingUtils::HashString("ROOT_PROGRAM_AUTO_UPDATE_END_REVOCATION");
        static const int ROOT_PROGRAM_NO_OSCP_FAILOVER_TO_CRL_HASH = HashingUtils::HashString("ROOT_PROGRAM_NO_OSCP_FAILOVER_TO_CRL");
        static const int ROOT_LIST_SIGNER_HASH = HashingUtils::HashString("ROOT_LIST_SIGNER");
        static const int SECURE_EMAIL_HASH = HashingUtils::HashString("SECURE_EMAIL");
        static const int SERVER_AUTHENTICATION_HASH = HashingUtils::HashString("SERVER_AUTHENTICATION");
        static const int SMART_CARD_LOGIN_HASH = HashingUtils::HashString("SMART_CARD_LOGIN");
        static const int SPC_ENCRYPTED_DIGEST_RETRY_COUNT_HASH = HashingUtils::HashString("SPC_ENCRYPTED_DIGEST_RETRY_COUNT");
        static const int SPC_RELAXED_PE_MARKER_CHECK_HASH = HashingUtils::HashString("SPC_RELAXED_PE_MARKER_CHECK");
        static const int TIME_STAMPING_HASH = HashingUtils::HashString("TIME_STAMPING");
        static const int WINDOWS_HARDWARE_DRIVER_ATTESTED_VERIFICATION_HASH = HashingUtils::HashString("WINDOWS_HARDWARE_DRIVER_ATTESTED_VERIFICATION");
        static const int WINDOWS_HARDWARE_DRIVER_EXTENDED_VERIFICATION_HASH = HashingUtils::HashString("WINDOWS_HARDWARE_DRIVER_EXTENDED_VERIFICATION");
        static const int WINDOWS_HARDWARE_DRIVER_VERIFICATION_HASH = HashingUtils::HashString("WINDOWS_HARDWARE_DRIVER_VERIFICATION");
        static const int WINDOWS_HELLO_RECOVERY_KEY_ENCRYPTION_HASH = HashingUtils::HashString("WINDOWS_HELLO_RECOVERY_KEY_ENCRYPTION");
        static const int WINDOWS_KITS_COMPONENT_HASH = HashingUtils::HashString("WINDOWS_KITS_COMPONENT");
        static const int WINDOWS_RT_VERIFICATION_HASH = HashingUtils::HashString("WINDOWS_RT_VERIFICATION");
        static const int WINDOWS_SOFTWARE_EXTENSION_VERIFICATION_HASH = HashingUtils::HashString("WINDOWS_SOFTWARE_EXTENSION_VERIFICATION");
        static const int WINDOWS_STORE_HASH = HashingUtils::HashString("WINDOWS_STORE");
        static const int WINDOWS_SYSTEM_COMPONENT_VERIFICATION_HASH = HashingUtils::HashString("WINDOWS_SYSTEM_COMPONENT_VERIFICATION");
        static const int WINDOWS_TCB_COMPONENT_HASH = HashingUtils::HashString("WINDOWS_TCB_COMPONENT");
        static const int WINDOWS_THIRD_PARTY_APPLICATION_COMPONENT_HASH = HashingUtils::HashString("WINDOWS_THIRD_PARTY_APPLICATION_COMPONENT");
        static const int WINDOWS_UPDATE_HASH = HashingUtils::HashString("WINDOWS_UPDATE");


        ApplicationPolicyType GetApplicationPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
