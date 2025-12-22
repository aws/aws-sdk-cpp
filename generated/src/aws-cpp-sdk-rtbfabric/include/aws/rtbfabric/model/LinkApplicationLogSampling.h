/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes a link application log sample.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/LinkApplicationLogSampling">AWS
 * API Reference</a></p>
 */
class LinkApplicationLogSampling {
 public:
  AWS_RTBFABRIC_API LinkApplicationLogSampling() = default;
  AWS_RTBFABRIC_API LinkApplicationLogSampling(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API LinkApplicationLogSampling& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An error log entry.</p>
   */
  inline double GetErrorLog() const { return m_errorLog; }
  inline bool ErrorLogHasBeenSet() const { return m_errorLogHasBeenSet; }
  inline void SetErrorLog(double value) {
    m_errorLogHasBeenSet = true;
    m_errorLog = value;
  }
  inline LinkApplicationLogSampling& WithErrorLog(double value) {
    SetErrorLog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter log entry.</p>
   */
  inline double GetFilterLog() const { return m_filterLog; }
  inline bool FilterLogHasBeenSet() const { return m_filterLogHasBeenSet; }
  inline void SetFilterLog(double value) {
    m_filterLogHasBeenSet = true;
    m_filterLog = value;
  }
  inline LinkApplicationLogSampling& WithFilterLog(double value) {
    SetFilterLog(value);
    return *this;
  }
  ///@}
 private:
  double m_errorLog{0.0};

  double m_filterLog{0.0};
  bool m_errorLogHasBeenSet = false;
  bool m_filterLogHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
