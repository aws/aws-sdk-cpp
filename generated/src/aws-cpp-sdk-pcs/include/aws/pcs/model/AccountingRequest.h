/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/AccountingMode.h>
#include <utility>

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
namespace PCS
{
namespace Model
{

  /**
   * <p>The accounting configuration includes configurable settings for Slurm
   * accounting. It's a property of the <b>ClusterSlurmConfiguration</b>
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/AccountingRequest">AWS
   * API Reference</a></p>
   */
  class AccountingRequest
  {
  public:
    AWS_PCS_API AccountingRequest() = default;
    AWS_PCS_API AccountingRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API AccountingRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default value for <code>mode</code> is <code>STANDARD</code>. A value of
     * <code>STANDARD</code> means Slurm accounting is enabled.</p>
     */
    inline AccountingMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(AccountingMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline AccountingRequest& WithMode(AccountingMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value for all purge settings for <code>slurmdbd.conf</code>. For
     * more information, see the <a
     * href="https://slurm.schedmd.com/slurmdbd.conf.html">slurmdbd.conf documentation
     * at SchedMD</a>.</p> <p>The default value for <code>defaultPurgeTimeInDays</code>
     * is <code>-1</code>.</p> <p>A value of <code>-1</code> means there is no purge
     * time and records persist as long as the cluster exists.</p>  <p>
     * <code>0</code> isn't a valid value.</p> 
     */
    inline int GetDefaultPurgeTimeInDays() const { return m_defaultPurgeTimeInDays; }
    inline bool DefaultPurgeTimeInDaysHasBeenSet() const { return m_defaultPurgeTimeInDaysHasBeenSet; }
    inline void SetDefaultPurgeTimeInDays(int value) { m_defaultPurgeTimeInDaysHasBeenSet = true; m_defaultPurgeTimeInDays = value; }
    inline AccountingRequest& WithDefaultPurgeTimeInDays(int value) { SetDefaultPurgeTimeInDays(value); return *this;}
    ///@}
  private:

    AccountingMode m_mode{AccountingMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    int m_defaultPurgeTimeInDays{0};
    bool m_defaultPurgeTimeInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
