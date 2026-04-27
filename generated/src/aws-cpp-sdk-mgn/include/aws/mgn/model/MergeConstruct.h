/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>A construct reference specifying the source segment and construct to
 * merge.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/MergeConstruct">AWS
 * API Reference</a></p>
 */
class MergeConstruct {
 public:
  AWS_MGN_API MergeConstruct() = default;
  AWS_MGN_API MergeConstruct(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API MergeConstruct& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The segment ID of the construct to merge.</p>
   */
  inline const Aws::String& GetSegmentID() const { return m_segmentID; }
  inline bool SegmentIDHasBeenSet() const { return m_segmentIDHasBeenSet; }
  template <typename SegmentIDT = Aws::String>
  void SetSegmentID(SegmentIDT&& value) {
    m_segmentIDHasBeenSet = true;
    m_segmentID = std::forward<SegmentIDT>(value);
  }
  template <typename SegmentIDT = Aws::String>
  MergeConstruct& WithSegmentID(SegmentIDT&& value) {
    SetSegmentID(std::forward<SegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The construct ID to merge.</p>
   */
  inline const Aws::String& GetConstructID() const { return m_constructID; }
  inline bool ConstructIDHasBeenSet() const { return m_constructIDHasBeenSet; }
  template <typename ConstructIDT = Aws::String>
  void SetConstructID(ConstructIDT&& value) {
    m_constructIDHasBeenSet = true;
    m_constructID = std::forward<ConstructIDT>(value);
  }
  template <typename ConstructIDT = Aws::String>
  MergeConstruct& WithConstructID(ConstructIDT&& value) {
    SetConstructID(std::forward<ConstructIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_segmentID;

  Aws::String m_constructID;
  bool m_segmentIDHasBeenSet = false;
  bool m_constructIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
