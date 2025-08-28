/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SsmSap
{
namespace Model
{

  /**
   * <p>A summary of rule results, providing counts for each status
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/RuleStatusCounts">AWS
   * API Reference</a></p>
   */
  class RuleStatusCounts
  {
  public:
    AWS_SSMSAP_API RuleStatusCounts() = default;
    AWS_SSMSAP_API RuleStatusCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API RuleStatusCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of rules that failed.</p>
     */
    inline int GetFailed() const { return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }
    inline RuleStatusCounts& WithFailed(int value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rules that returned warnings.</p>
     */
    inline int GetWarning() const { return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    inline void SetWarning(int value) { m_warningHasBeenSet = true; m_warning = value; }
    inline RuleStatusCounts& WithWarning(int value) { SetWarning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rules that returned informational results.</p>
     */
    inline int GetInfo() const { return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    inline void SetInfo(int value) { m_infoHasBeenSet = true; m_info = value; }
    inline RuleStatusCounts& WithInfo(int value) { SetInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rules that passed.</p>
     */
    inline int GetPassed() const { return m_passed; }
    inline bool PassedHasBeenSet() const { return m_passedHasBeenSet; }
    inline void SetPassed(int value) { m_passedHasBeenSet = true; m_passed = value; }
    inline RuleStatusCounts& WithPassed(int value) { SetPassed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rules with unknown status.</p>
     */
    inline int GetUnknown() const { return m_unknown; }
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }
    inline void SetUnknown(int value) { m_unknownHasBeenSet = true; m_unknown = value; }
    inline RuleStatusCounts& WithUnknown(int value) { SetUnknown(value); return *this;}
    ///@}
  private:

    int m_failed{0};
    bool m_failedHasBeenSet = false;

    int m_warning{0};
    bool m_warningHasBeenSet = false;

    int m_info{0};
    bool m_infoHasBeenSet = false;

    int m_passed{0};
    bool m_passedHasBeenSet = false;

    int m_unknown{0};
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
