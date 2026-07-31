/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Details about an AWS Fault Injection Service (AWS FIS) experiment run as part
 * of a test run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ExperimentDetails">AWS
 * API Reference</a></p>
 */
class ExperimentDetails {
 public:
  AWS_RESILIENCEHUBV2_API ExperimentDetails() = default;
  AWS_RESILIENCEHUBV2_API ExperimentDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ExperimentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the AWS FIS experiment.</p>
   */
  inline const Aws::String& GetExperimentArn() const { return m_experimentArn; }
  inline bool ExperimentArnHasBeenSet() const { return m_experimentArnHasBeenSet; }
  template <typename ExperimentArnT = Aws::String>
  void SetExperimentArn(ExperimentArnT&& value) {
    m_experimentArnHasBeenSet = true;
    m_experimentArn = std::forward<ExperimentArnT>(value);
  }
  template <typename ExperimentArnT = Aws::String>
  ExperimentDetails& WithExperimentArn(ExperimentArnT&& value) {
    SetExperimentArn(std::forward<ExperimentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional details about the experiment.</p>
   */
  inline const Aws::String& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::String>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::String>
  ExperimentDetails& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_experimentArn;

  Aws::String m_details;
  bool m_experimentArnHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
