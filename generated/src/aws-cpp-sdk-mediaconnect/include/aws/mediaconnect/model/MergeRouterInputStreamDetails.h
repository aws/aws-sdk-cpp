/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MergeRouterInputIndexedStreamDetails.h>

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
 * <p>Configuration details for a merge router input that combines two input
 * sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MergeRouterInputStreamDetails">AWS
 * API Reference</a></p>
 */
class MergeRouterInputStreamDetails {
 public:
  AWS_MEDIACONNECT_API MergeRouterInputStreamDetails() = default;
  AWS_MEDIACONNECT_API MergeRouterInputStreamDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MergeRouterInputStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration details for the first source (index 0) in the merge setup.</p>
   */
  inline const MergeRouterInputIndexedStreamDetails& GetSourceIndexZeroStreamDetails() const { return m_sourceIndexZeroStreamDetails; }
  inline bool SourceIndexZeroStreamDetailsHasBeenSet() const { return m_sourceIndexZeroStreamDetailsHasBeenSet; }
  template <typename SourceIndexZeroStreamDetailsT = MergeRouterInputIndexedStreamDetails>
  void SetSourceIndexZeroStreamDetails(SourceIndexZeroStreamDetailsT&& value) {
    m_sourceIndexZeroStreamDetailsHasBeenSet = true;
    m_sourceIndexZeroStreamDetails = std::forward<SourceIndexZeroStreamDetailsT>(value);
  }
  template <typename SourceIndexZeroStreamDetailsT = MergeRouterInputIndexedStreamDetails>
  MergeRouterInputStreamDetails& WithSourceIndexZeroStreamDetails(SourceIndexZeroStreamDetailsT&& value) {
    SetSourceIndexZeroStreamDetails(std::forward<SourceIndexZeroStreamDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration details for the second source (index 1) in the merge setup.</p>
   */
  inline const MergeRouterInputIndexedStreamDetails& GetSourceIndexOneStreamDetails() const { return m_sourceIndexOneStreamDetails; }
  inline bool SourceIndexOneStreamDetailsHasBeenSet() const { return m_sourceIndexOneStreamDetailsHasBeenSet; }
  template <typename SourceIndexOneStreamDetailsT = MergeRouterInputIndexedStreamDetails>
  void SetSourceIndexOneStreamDetails(SourceIndexOneStreamDetailsT&& value) {
    m_sourceIndexOneStreamDetailsHasBeenSet = true;
    m_sourceIndexOneStreamDetails = std::forward<SourceIndexOneStreamDetailsT>(value);
  }
  template <typename SourceIndexOneStreamDetailsT = MergeRouterInputIndexedStreamDetails>
  MergeRouterInputStreamDetails& WithSourceIndexOneStreamDetails(SourceIndexOneStreamDetailsT&& value) {
    SetSourceIndexOneStreamDetails(std::forward<SourceIndexOneStreamDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  MergeRouterInputIndexedStreamDetails m_sourceIndexZeroStreamDetails;

  MergeRouterInputIndexedStreamDetails m_sourceIndexOneStreamDetails;
  bool m_sourceIndexZeroStreamDetailsHasBeenSet = false;
  bool m_sourceIndexOneStreamDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
