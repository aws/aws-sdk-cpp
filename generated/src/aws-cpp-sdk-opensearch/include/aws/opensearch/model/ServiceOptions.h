/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Options for the service, such as the supported Regions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ServiceOptions">AWS
 * API Reference</a></p>
 */
class ServiceOptions {
 public:
  AWS_OPENSEARCHSERVICE_API ServiceOptions() = default;
  AWS_OPENSEARCHSERVICE_API ServiceOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API ServiceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of supported Regions for the service.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSupportedRegions() const { return m_supportedRegions; }
  inline bool SupportedRegionsHasBeenSet() const { return m_supportedRegionsHasBeenSet; }
  template <typename SupportedRegionsT = Aws::Vector<Aws::String>>
  void SetSupportedRegions(SupportedRegionsT&& value) {
    m_supportedRegionsHasBeenSet = true;
    m_supportedRegions = std::forward<SupportedRegionsT>(value);
  }
  template <typename SupportedRegionsT = Aws::Vector<Aws::String>>
  ServiceOptions& WithSupportedRegions(SupportedRegionsT&& value) {
    SetSupportedRegions(std::forward<SupportedRegionsT>(value));
    return *this;
  }
  template <typename SupportedRegionsT = Aws::String>
  ServiceOptions& AddSupportedRegions(SupportedRegionsT&& value) {
    m_supportedRegionsHasBeenSet = true;
    m_supportedRegions.emplace_back(std::forward<SupportedRegionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_supportedRegions;
  bool m_supportedRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
