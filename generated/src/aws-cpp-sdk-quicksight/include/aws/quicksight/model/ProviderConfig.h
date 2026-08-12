/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/MicrosoftPurviewProviderConfig.h>

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
 * <p>The provider-specific configuration for a DLP integration. This is a union
 * type structure. For this structure to be valid, only one of the attributes can
 * be defined.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ProviderConfig">AWS
 * API Reference</a></p>
 */
class ProviderConfig {
 public:
  AWS_QUICKSIGHT_API ProviderConfig() = default;
  AWS_QUICKSIGHT_API ProviderConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a Microsoft Purview DLP integration.</p>
   */
  inline const MicrosoftPurviewProviderConfig& GetMicrosoftPurview() const { return m_microsoftPurview; }
  inline bool MicrosoftPurviewHasBeenSet() const { return m_microsoftPurviewHasBeenSet; }
  template <typename MicrosoftPurviewT = MicrosoftPurviewProviderConfig>
  void SetMicrosoftPurview(MicrosoftPurviewT&& value) {
    m_microsoftPurviewHasBeenSet = true;
    m_microsoftPurview = std::forward<MicrosoftPurviewT>(value);
  }
  template <typename MicrosoftPurviewT = MicrosoftPurviewProviderConfig>
  ProviderConfig& WithMicrosoftPurview(MicrosoftPurviewT&& value) {
    SetMicrosoftPurview(std::forward<MicrosoftPurviewT>(value));
    return *this;
  }
  ///@}
 private:
  MicrosoftPurviewProviderConfig m_microsoftPurview;
  bool m_microsoftPurviewHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
