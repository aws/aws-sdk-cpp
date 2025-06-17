/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A comprehensive distribution of security findings by severity level for
   * Amazon Web Services resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceSeverityBreakdown">AWS
   * API Reference</a></p>
   */
  class ResourceSeverityBreakdown
  {
  public:
    AWS_SECURITYHUB_API ResourceSeverityBreakdown() = default;
    AWS_SECURITYHUB_API ResourceSeverityBreakdown(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourceSeverityBreakdown& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of findings not in any of the severity categories.</p>
     */
    inline int GetOther() const { return m_other; }
    inline bool OtherHasBeenSet() const { return m_otherHasBeenSet; }
    inline void SetOther(int value) { m_otherHasBeenSet = true; m_other = value; }
    inline ResourceSeverityBreakdown& WithOther(int value) { SetOther(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings with a severity level of fatal.</p>
     */
    inline int GetFatal() const { return m_fatal; }
    inline bool FatalHasBeenSet() const { return m_fatalHasBeenSet; }
    inline void SetFatal(int value) { m_fatalHasBeenSet = true; m_fatal = value; }
    inline ResourceSeverityBreakdown& WithFatal(int value) { SetFatal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings with a severity level of critical.</p>
     */
    inline int GetCritical() const { return m_critical; }
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
    inline void SetCritical(int value) { m_criticalHasBeenSet = true; m_critical = value; }
    inline ResourceSeverityBreakdown& WithCritical(int value) { SetCritical(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings with a severity level of high.</p>
     */
    inline int GetHigh() const { return m_high; }
    inline bool HighHasBeenSet() const { return m_highHasBeenSet; }
    inline void SetHigh(int value) { m_highHasBeenSet = true; m_high = value; }
    inline ResourceSeverityBreakdown& WithHigh(int value) { SetHigh(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings with a severity level of medium.</p>
     */
    inline int GetMedium() const { return m_medium; }
    inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }
    inline void SetMedium(int value) { m_mediumHasBeenSet = true; m_medium = value; }
    inline ResourceSeverityBreakdown& WithMedium(int value) { SetMedium(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings with a severity level of low.</p>
     */
    inline int GetLow() const { return m_low; }
    inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }
    inline void SetLow(int value) { m_lowHasBeenSet = true; m_low = value; }
    inline ResourceSeverityBreakdown& WithLow(int value) { SetLow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings that provide security-related information.</p>
     */
    inline int GetInformational() const { return m_informational; }
    inline bool InformationalHasBeenSet() const { return m_informationalHasBeenSet; }
    inline void SetInformational(int value) { m_informationalHasBeenSet = true; m_informational = value; }
    inline ResourceSeverityBreakdown& WithInformational(int value) { SetInformational(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings with a severity level cannot be determined.</p>
     */
    inline int GetUnknown() const { return m_unknown; }
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }
    inline void SetUnknown(int value) { m_unknownHasBeenSet = true; m_unknown = value; }
    inline ResourceSeverityBreakdown& WithUnknown(int value) { SetUnknown(value); return *this;}
    ///@}
  private:

    int m_other{0};
    bool m_otherHasBeenSet = false;

    int m_fatal{0};
    bool m_fatalHasBeenSet = false;

    int m_critical{0};
    bool m_criticalHasBeenSet = false;

    int m_high{0};
    bool m_highHasBeenSet = false;

    int m_medium{0};
    bool m_mediumHasBeenSet = false;

    int m_low{0};
    bool m_lowHasBeenSet = false;

    int m_informational{0};
    bool m_informationalHasBeenSet = false;

    int m_unknown{0};
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
