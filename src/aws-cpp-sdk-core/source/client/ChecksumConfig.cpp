/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <smithy/client/features/ChecksumConfig.h>

#include <algorithm>
#include <array>
#include <cstring>
#include <type_traits>

namespace Aws {
namespace Client {

namespace {
using RequestChecksumConfigurationEnumMapping = std::pair<const char*, RequestChecksumCalculation>;
const std::array<RequestChecksumConfigurationEnumMapping, 2> REQUEST_CHECKSUM_CONFIG_MAPPING = {{
    {"when_supported", RequestChecksumCalculation::WHEN_SUPPORTED},
    {"when_required", RequestChecksumCalculation::WHEN_REQUIRED},
}};

using ResponseChecksumConfigurationEnumMapping = std::pair<const char*, ResponseChecksumValidation>;
const std::array<ResponseChecksumConfigurationEnumMapping, 2> RESPONSE_CHECKSUM_CONFIG_MAPPING = {
    {{"when_supported", ResponseChecksumValidation::WHEN_SUPPORTED}, {"when_required", ResponseChecksumValidation::WHEN_REQUIRED}}};

template <typename T, size_t N>
T LoadEnumFromString(const std::array<std::pair<const char*, T>, N>& mappings, const char* value, const T& defaultValue) {
  static_assert(std::is_enum<T>::value, "enum type is required");
  const auto mapping = std::find_if(std::begin(mappings), std::end(mappings),
                                    [&value](const std::pair<const char*, T>& entry) -> bool { return strcmp(entry.first, value) == 0; });
  if (mapping == std::end(mappings)) {
    return defaultValue;
  }
  return mapping->second;
}
}  // namespace

ChecksumConfig LoadChecksumConfigFromEnvOrProfile(const Aws::String& profileName)
{
    ChecksumConfig checksumConfig;
    checksumConfig.requestChecksumCalculation =
        LoadEnumFromString(REQUEST_CHECKSUM_CONFIG_MAPPING,
                           ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_REQUEST_CHECKSUM_CALCULATION", profileName,
                                                                           "request_checksum_calculation",
                                                                           {"when_supported", "when_required"}, "when_supported")
                               .c_str(),
                           RequestChecksumCalculation::WHEN_SUPPORTED);

    checksumConfig.responseChecksumValidation =
        LoadEnumFromString(RESPONSE_CHECKSUM_CONFIG_MAPPING,
                           ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_RESPONSE_CHECKSUM_VALIDATION", profileName,
                                                                           "response_checksum_validation",
                                                                           {"when_supported", "when_required"}, "when_supported")
                               .c_str(),
                           ResponseChecksumValidation::WHEN_SUPPORTED);
    return checksumConfig;
}

}  // namespace Client
}  // namespace Aws
