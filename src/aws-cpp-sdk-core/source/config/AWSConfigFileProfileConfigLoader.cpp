/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <fstream>

namespace Aws
{
    namespace Config
    {
        using namespace Aws::Utils;
        using namespace Aws::Auth;

        static const char REGION_KEY[]                       = "region";
        static const char ACCESS_KEY_ID_KEY[]                = "aws_access_key_id";
        static const char SECRET_KEY_KEY[]                   = "aws_secret_access_key";
        static const char SESSION_TOKEN_KEY[]                = "aws_session_token";
        static const char SSO_START_URL_KEY[]                = "sso_start_url";
        static const char SSO_REGION_KEY[]                   = "sso_region";
        static const char SSO_ACCOUNT_ID_KEY[]               = "sso_account_id";
        static const char SSO_ROLE_NAME_KEY[]                = "sso_role_name";
        static const char ROLE_ARN_KEY[]                     = "role_arn";
        static const char EXTERNAL_ID_KEY[]                  = "external_id";
        static const char CREDENTIAL_PROCESS_COMMAND[]       = "credential_process";
        static const char SOURCE_PROFILE_KEY[]               = "source_profile";
        static const char PROFILE_PREFIX[]                   = "profile ";
        static const char DEFAULTS_MODE[]                    = "defaults_mode";
        static const char EQ                                 = '=';
        static const char LEFT_BRACKET                       = '[';
        static const char RIGHT_BRACKET                      = ']';
        static const char PARSER_TAG[]                       = "Aws::Config::ConfigFileProfileFSM";

        class ConfigFileProfileFSM
        {
        public:
            ConfigFileProfileFSM() : m_parserState(START) {}

            const Aws::Map<String, Profile>& GetProfiles() const { return m_foundProfiles; }

            void ParseStream(Aws::IStream& stream)
            {
                static const size_t ASSUME_EMPTY_LEN = 3;

                Aws::String line;
                while(std::getline(stream, line) && m_parserState != FAILURE)
                {
                    if (line.empty() || line.length() < ASSUME_EMPTY_LEN)
                    {
                        continue;
                    }

                    auto openPos = line.find(LEFT_BRACKET);
                    auto closePos = line.find(RIGHT_BRACKET);

                    switch(m_parserState)
                    {

                        case START:
                            if(openPos != std::string::npos && closePos != std::string::npos)
                            {
                                FlushProfileAndReset(line, openPos, closePos);
                                m_parserState = PROFILE_FOUND;
                            }
                            break;

                            //fallthrough here is intentional to reduce duplicate logic
                        case PROFILE_KEY_VALUE_FOUND:
                            if(openPos != std::string::npos && closePos != std::string::npos)
                            {
                                m_parserState = PROFILE_FOUND;
                                FlushProfileAndReset(line, openPos, closePos);
                                break;
                            }
                            // fall through
                        case PROFILE_FOUND:
                        {
                            auto equalsPos = line.find(EQ);
                            if (equalsPos != std::string::npos)
                            {
                                auto key = line.substr(0, equalsPos);
                                auto value = line.substr(equalsPos + 1);
                                m_profileKeyValuePairs[StringUtils::Trim(key.c_str())] =
                                        StringUtils::Trim(value.c_str());
                                m_parserState = PROFILE_KEY_VALUE_FOUND;
                            }

                            break;
                        }
                        default:
                            m_parserState = FAILURE;
                            break;
                    }
                }

                FlushProfileAndReset(line, std::string::npos, std::string::npos);
            }

        private:

            void FlushProfileAndReset(Aws::String& line, size_t openPos, size_t closePos)
            {
                if(!m_currentWorkingProfile.empty() && !m_profileKeyValuePairs.empty())
                {
                    Profile profile;
                    profile.SetName(m_currentWorkingProfile);

                    auto regionIter = m_profileKeyValuePairs.find(REGION_KEY);
                    if (regionIter != m_profileKeyValuePairs.end())
                    {
                        AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found region " << regionIter->second);
                        profile.SetRegion(regionIter->second);
                    }

                    auto accessKeyIdIter = m_profileKeyValuePairs.find(ACCESS_KEY_ID_KEY);
                    Aws::String accessKey, secretKey, sessionToken;
                    if (accessKeyIdIter != m_profileKeyValuePairs.end())
                    {
                        accessKey = accessKeyIdIter->second;
                        AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found access key " << accessKey);

                        auto secretAccessKeyIter = m_profileKeyValuePairs.find(SECRET_KEY_KEY);
                        auto sessionTokenIter = m_profileKeyValuePairs.find(SESSION_TOKEN_KEY);
                        if (secretAccessKeyIter != m_profileKeyValuePairs.end())
                        {
                            secretKey = secretAccessKeyIter->second;
                        }
                        else
                        {
                            AWS_LOGSTREAM_ERROR(PARSER_TAG, "No secret access key found even though an access key was specified. This will cause all signed AWS calls to fail.");
                        }

                        if (sessionTokenIter != m_profileKeyValuePairs.end())
                        {
                            sessionToken = sessionTokenIter->second;
                        }

                        profile.SetCredentials(Aws::Auth::AWSCredentials(accessKey, secretKey, sessionToken));
                    }

                    auto ssoStartUrlIter = m_profileKeyValuePairs.find(SSO_START_URL_KEY);
                    auto ssoRegionIter = m_profileKeyValuePairs.find(SSO_REGION_KEY);
                    auto ssoRoleNameIter = m_profileKeyValuePairs.find(SSO_ROLE_NAME_KEY);
                    auto ssoAccountIdIter = m_profileKeyValuePairs.find(SSO_ACCOUNT_ID_KEY);
                    if (ssoStartUrlIter != m_profileKeyValuePairs.end()
                        || ssoRegionIter != m_profileKeyValuePairs.end()
                        || ssoRoleNameIter != m_profileKeyValuePairs.end()
                        || ssoAccountIdIter != m_profileKeyValuePairs.end())
                    {
                        if (ssoStartUrlIter != m_profileKeyValuePairs.end()
                            && ssoRegionIter != m_profileKeyValuePairs.end()
                            && ssoRoleNameIter != m_profileKeyValuePairs.end()
                            && ssoAccountIdIter != m_profileKeyValuePairs.end())
                        {
                            AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found sso_start_url " << ssoStartUrlIter->second);
                            profile.SetSsoStartUrl(ssoStartUrlIter->second);
                            AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found sso_region " << ssoRegionIter->second);
                            profile.SetSsoRegion(ssoRegionIter->second);
                            AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found sso_account_id " << ssoAccountIdIter->second);
                            profile.SetSsoAccountId(ssoAccountIdIter->second);
                            AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found sso_role_name " << ssoRoleNameIter->second);
                            profile.SetSsoRoleName(ssoRoleNameIter->second);
                        } else {
                            AWS_LOGSTREAM_ERROR(PARSER_TAG, "invalid configuration for sso profile " << profile.GetName());
                        }
                    }

                    auto assumeRoleArnIter = m_profileKeyValuePairs.find(ROLE_ARN_KEY);
                    if (assumeRoleArnIter != m_profileKeyValuePairs.end())
                    {
                        AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found role arn " << assumeRoleArnIter->second);
                        profile.SetRoleArn(assumeRoleArnIter->second);
                    }

                    auto externalIdIter = m_profileKeyValuePairs.find(EXTERNAL_ID_KEY);
                    if (externalIdIter != m_profileKeyValuePairs.end())
                    {
                        AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found external id " << externalIdIter->second);
                        profile.SetExternalId(externalIdIter->second);
                    }

                    auto sourceProfileIter = m_profileKeyValuePairs.find(SOURCE_PROFILE_KEY);
                    if (sourceProfileIter != m_profileKeyValuePairs.end())
                    {
                        AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found source profile " << sourceProfileIter->second);
                        profile.SetSourceProfile(sourceProfileIter->second);
                    }

                    auto credentialProcessIter = m_profileKeyValuePairs.find(CREDENTIAL_PROCESS_COMMAND);
                    if (credentialProcessIter != m_profileKeyValuePairs.end())
                    {
                        AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found credential process " << credentialProcessIter->second);
                        profile.SetCredentialProcess(credentialProcessIter->second);
                    }
                    profile.SetAllKeyValPairs(m_profileKeyValuePairs);

                    auto defaultsModeIter = m_profileKeyValuePairs.find(DEFAULTS_MODE);
                    if (defaultsModeIter != m_profileKeyValuePairs.end())
                    {
                        AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found defaults mode " << defaultsModeIter->second);
                        profile.SetDefaultsMode(defaultsModeIter->second);
                    }

                    m_foundProfiles[profile.GetName()] = std::move(profile);
                    m_currentWorkingProfile.clear();
                    m_profileKeyValuePairs.clear();
                }

                if(!line.empty() && openPos != std::string::npos && closePos != std::string::npos)
                {
                    m_currentWorkingProfile = StringUtils::Trim(line.substr(openPos + 1, closePos - openPos - 1).c_str());
                    StringUtils::Replace(m_currentWorkingProfile, PROFILE_PREFIX, "");
                    AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found profile " << m_currentWorkingProfile);
                }
            }

            enum State
            {
                START = 0,
                PROFILE_FOUND,
                PROFILE_KEY_VALUE_FOUND,
                FAILURE
            };

            Aws::String m_currentWorkingProfile;
            Aws::Map<String, String> m_profileKeyValuePairs;
            State m_parserState;
            Aws::Map<String, Profile> m_foundProfiles;
        };

        static const char* const CONFIG_FILE_LOADER = "Aws::Config::AWSConfigFileProfileConfigLoader";

        AWSConfigFileProfileConfigLoader::AWSConfigFileProfileConfigLoader(const Aws::String& fileName, bool useProfilePrefix) :
                m_fileName(fileName), m_useProfilePrefix(useProfilePrefix)
        {
            AWS_LOGSTREAM_INFO(CONFIG_FILE_LOADER, "Initializing config loader against fileName "
                    << fileName << " and using profilePrefix = " << useProfilePrefix);
        }

        bool AWSConfigFileProfileConfigLoader::LoadInternal()
        {
            m_profiles.clear();

            Aws::IFStream inputFile(m_fileName.c_str());
            if(inputFile)
            {
                ConfigFileProfileFSM parser;
                parser.ParseStream(inputFile);
                m_profiles = parser.GetProfiles();
                return m_profiles.size() > 0;
            }

            AWS_LOGSTREAM_INFO(CONFIG_FILE_LOADER, "Unable to open config file " << m_fileName << " for reading.");

            return false;
        }

        bool AWSConfigFileProfileConfigLoader::PersistInternal(const Aws::Map<Aws::String, Profile>& profiles)
        {
            Aws::OFStream outputFile(m_fileName.c_str(), std::ios_base::out | std::ios_base::trunc);
            if(outputFile)
            {
                for(auto& profile : profiles)
                {
                    Aws::String prefix = m_useProfilePrefix ? PROFILE_PREFIX : "";

                    AWS_LOGSTREAM_DEBUG(CONFIG_FILE_LOADER, "Writing profile " << profile.first << " to disk.");

                    outputFile << LEFT_BRACKET << prefix << profile.second.GetName() << RIGHT_BRACKET << std::endl;
                    const Aws::Auth::AWSCredentials& credentials = profile.second.GetCredentials();
                    outputFile << ACCESS_KEY_ID_KEY << EQ << credentials.GetAWSAccessKeyId() << std::endl;
                    outputFile << SECRET_KEY_KEY << EQ << credentials.GetAWSSecretKey() << std::endl;

                    if(!credentials.GetSessionToken().empty())
                    {
                        outputFile << SESSION_TOKEN_KEY << EQ << credentials.GetSessionToken() << std::endl;
                    }

                    if(!profile.second.GetRegion().empty())
                    {
                        outputFile << REGION_KEY << EQ << profile.second.GetRegion() << std::endl;
                    }

                    if(!profile.second.GetRoleArn().empty())
                    {
                        outputFile << ROLE_ARN_KEY << EQ << profile.second.GetRoleArn() << std::endl;
                    }

                    if(!profile.second.GetSourceProfile().empty())
                    {
                        outputFile << SOURCE_PROFILE_KEY << EQ << profile.second.GetSourceProfile() << std::endl;
                    }

                    outputFile << std::endl;
                }

                AWS_LOGSTREAM_INFO(CONFIG_FILE_LOADER, "Profiles written to config file " << m_fileName);

                return true;
            }

            AWS_LOGSTREAM_WARN(CONFIG_FILE_LOADER, "Unable to open config file " << m_fileName << " for writing.");

            return false;
        }
    } // Config namespace
} // Aws namespace
