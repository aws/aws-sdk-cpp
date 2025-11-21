/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FailoverRouterInputIndexedStreamDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>Configuration details for a failover router input that can automatically
 * switch between two sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FailoverRouterInputStreamDetails">AWS
 * API Reference</a></p>
 */
class FailoverRouterInputStreamDetails {
 public:
  AWS_MEDIACONNECT_API FailoverRouterInputStreamDetails() = default;
  AWS_MEDIACONNECT_API FailoverRouterInputStreamDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API FailoverRouterInputStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration details for the primary source (index 0) in the failover
   * setup.</p>
   */
  inline const FailoverRouterInputIndexedStreamDetails& GetSourceIndexZeroStreamDetails() const { return m_sourceIndexZeroStreamDetails; }
  inline bool SourceIndexZeroStreamDetailsHasBeenSet() const { return m_sourceIndexZeroStreamDetailsHasBeenSet; }
  template <typename SourceIndexZeroStreamDetailsT = FailoverRouterInputIndexedStreamDetails>
  void SetSourceIndexZeroStreamDetails(SourceIndexZeroStreamDetailsT&& value) {
    m_sourceIndexZeroStreamDetailsHasBeenSet = true;
    m_sourceIndexZeroStreamDetails = std::forward<SourceIndexZeroStreamDetailsT>(value);
  }
  template <typename SourceIndexZeroStreamDetailsT = FailoverRouterInputIndexedStreamDetails>
  FailoverRouterInputStreamDetails& WithSourceIndexZeroStreamDetails(SourceIndexZeroStreamDetailsT&& value) {
    SetSourceIndexZeroStreamDetails(std::forward<SourceIndexZeroStreamDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration details for the secondary source (index 1) in the failover
   * setup.</p>
   */
  inline const FailoverRouterInputIndexedStreamDetails& GetSourceIndexOneStreamDetails() const { return m_sourceIndexOneStreamDetails; }
  inline bool SourceIndexOneStreamDetailsHasBeenSet() const { return m_sourceIndexOneStreamDetailsHasBeenSet; }
  template <typename SourceIndexOneStreamDetailsT = FailoverRouterInputIndexedStreamDetails>
  void SetSourceIndexOneStreamDetails(SourceIndexOneStreamDetailsT&& value) {
    m_sourceIndexOneStreamDetailsHasBeenSet = true;
    m_sourceIndexOneStreamDetails = std::forward<SourceIndexOneStreamDetailsT>(value);
  }
  template <typename SourceIndexOneStreamDetailsT = FailoverRouterInputIndexedStreamDetails>
  FailoverRouterInputStreamDetails& WithSourceIndexOneStreamDetails(SourceIndexOneStreamDetailsT&& value) {
    SetSourceIndexOneStreamDetails(std::forward<SourceIndexOneStreamDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  FailoverRouterInputIndexedStreamDetails m_sourceIndexZeroStreamDetails;
  bool m_sourceIndexZeroStreamDetailsHasBeenSet = false;

  FailoverRouterInputIndexedStreamDetails m_sourceIndexOneStreamDetails;
  bool m_sourceIndexOneStreamDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
