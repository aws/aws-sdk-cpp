/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>

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
namespace Proton
{
namespace Model
{

  /**
   * <p>Summary counts of each Proton resource types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ResourceCountsSummary">AWS
   * API Reference</a></p>
   */
  class ResourceCountsSummary
  {
  public:
    AWS_PROTON_API ResourceCountsSummary() = default;
    AWS_PROTON_API ResourceCountsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ResourceCountsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of resources of this type in the Amazon Web Services account that
     * need a major template version update.</p>
     */
    inline int GetBehindMajor() const { return m_behindMajor; }
    inline bool BehindMajorHasBeenSet() const { return m_behindMajorHasBeenSet; }
    inline void SetBehindMajor(int value) { m_behindMajorHasBeenSet = true; m_behindMajor = value; }
    inline ResourceCountsSummary& WithBehindMajor(int value) { SetBehindMajor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources of this type in the Amazon Web Services account that
     * need a minor template version update.</p>
     */
    inline int GetBehindMinor() const { return m_behindMinor; }
    inline bool BehindMinorHasBeenSet() const { return m_behindMinorHasBeenSet; }
    inline void SetBehindMinor(int value) { m_behindMinorHasBeenSet = true; m_behindMinor = value; }
    inline ResourceCountsSummary& WithBehindMinor(int value) { SetBehindMinor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources of this type in the Amazon Web Services account that
     * failed to deploy.</p>
     */
    inline int GetFailed() const { return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }
    inline ResourceCountsSummary& WithFailed(int value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of resources of this type in the Amazon Web Services
     * account.</p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline ResourceCountsSummary& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources of this type in the Amazon Web Services account that
     * are up-to-date with their template.</p>
     */
    inline int GetUpToDate() const { return m_upToDate; }
    inline bool UpToDateHasBeenSet() const { return m_upToDateHasBeenSet; }
    inline void SetUpToDate(int value) { m_upToDateHasBeenSet = true; m_upToDate = value; }
    inline ResourceCountsSummary& WithUpToDate(int value) { SetUpToDate(value); return *this;}
    ///@}
  private:

    int m_behindMajor{0};
    bool m_behindMajorHasBeenSet = false;

    int m_behindMinor{0};
    bool m_behindMinorHasBeenSet = false;

    int m_failed{0};
    bool m_failedHasBeenSet = false;

    int m_total{0};
    bool m_totalHasBeenSet = false;

    int m_upToDate{0};
    bool m_upToDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
