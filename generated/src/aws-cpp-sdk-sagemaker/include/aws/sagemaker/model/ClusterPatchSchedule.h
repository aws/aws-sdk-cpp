/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The schedule configuration for automatic patching.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterPatchSchedule">AWS
 * API Reference</a></p>
 */
class ClusterPatchSchedule {
 public:
  AWS_SAGEMAKER_API ClusterPatchSchedule() = default;
  AWS_SAGEMAKER_API ClusterPatchSchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterPatchSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date and time of the next scheduled automatic patch. The system sets this
   * automatically when a patch is detected. Use this field to reschedule the patch
   * to a different date.</p>
   */
  inline const Aws::Utils::DateTime& GetNextPatchDate() const { return m_nextPatchDate; }
  inline bool NextPatchDateHasBeenSet() const { return m_nextPatchDateHasBeenSet; }
  template <typename NextPatchDateT = Aws::Utils::DateTime>
  void SetNextPatchDate(NextPatchDateT&& value) {
    m_nextPatchDateHasBeenSet = true;
    m_nextPatchDate = std::forward<NextPatchDateT>(value);
  }
  template <typename NextPatchDateT = Aws::Utils::DateTime>
  ClusterPatchSchedule& WithNextPatchDate(NextPatchDateT&& value) {
    SetNextPatchDate(std::forward<NextPatchDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_nextPatchDate{};
  bool m_nextPatchDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
