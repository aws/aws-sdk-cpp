/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/CommitmentLength.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Determines the duration and renewal status of the commitment period for a
   * radio unit.</p> <p>For pricing, see <a
   * href="http://aws.amazon.com/private5g/pricing">Amazon Web Services Private 5G
   * Pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/CommitmentConfiguration">AWS
   * API Reference</a></p>
   */
  class CommitmentConfiguration
  {
  public:
    AWS_PRIVATENETWORKS_API CommitmentConfiguration();
    AWS_PRIVATENETWORKS_API CommitmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API CommitmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether the commitment period for a radio unit is set to
     * automatically renew for an additional 1 year after your current commitment
     * period expires.</p> <p>Set to <code>True</code>, if you want your commitment
     * period to automatically renew. Set to <code>False</code> if you do not want your
     * commitment to automatically renew.</p> <p>You can do the following:</p> <ul>
     * <li> <p>Set a 1-year commitment to automatically renew for an additional 1 year.
     * The hourly rate for the additional year will continue to be the same as your
     * existing 1-year rate.</p> </li> <li> <p>Set a 3-year commitment to automatically
     * renew for an additional 1 year. The hourly rate for the additional year will
     * continue to be the same as your existing 3-year rate.</p> </li> <li> <p>Turn off
     * a previously-enabled automatic renewal on a 1-year or 3-year commitment.</p>
     * </li> </ul> <p>You cannot use the automatic-renewal option for a 60-day
     * commitment.</p>
     */
    inline bool GetAutomaticRenewal() const{ return m_automaticRenewal; }

    /**
     * <p>Determines whether the commitment period for a radio unit is set to
     * automatically renew for an additional 1 year after your current commitment
     * period expires.</p> <p>Set to <code>True</code>, if you want your commitment
     * period to automatically renew. Set to <code>False</code> if you do not want your
     * commitment to automatically renew.</p> <p>You can do the following:</p> <ul>
     * <li> <p>Set a 1-year commitment to automatically renew for an additional 1 year.
     * The hourly rate for the additional year will continue to be the same as your
     * existing 1-year rate.</p> </li> <li> <p>Set a 3-year commitment to automatically
     * renew for an additional 1 year. The hourly rate for the additional year will
     * continue to be the same as your existing 3-year rate.</p> </li> <li> <p>Turn off
     * a previously-enabled automatic renewal on a 1-year or 3-year commitment.</p>
     * </li> </ul> <p>You cannot use the automatic-renewal option for a 60-day
     * commitment.</p>
     */
    inline bool AutomaticRenewalHasBeenSet() const { return m_automaticRenewalHasBeenSet; }

    /**
     * <p>Determines whether the commitment period for a radio unit is set to
     * automatically renew for an additional 1 year after your current commitment
     * period expires.</p> <p>Set to <code>True</code>, if you want your commitment
     * period to automatically renew. Set to <code>False</code> if you do not want your
     * commitment to automatically renew.</p> <p>You can do the following:</p> <ul>
     * <li> <p>Set a 1-year commitment to automatically renew for an additional 1 year.
     * The hourly rate for the additional year will continue to be the same as your
     * existing 1-year rate.</p> </li> <li> <p>Set a 3-year commitment to automatically
     * renew for an additional 1 year. The hourly rate for the additional year will
     * continue to be the same as your existing 3-year rate.</p> </li> <li> <p>Turn off
     * a previously-enabled automatic renewal on a 1-year or 3-year commitment.</p>
     * </li> </ul> <p>You cannot use the automatic-renewal option for a 60-day
     * commitment.</p>
     */
    inline void SetAutomaticRenewal(bool value) { m_automaticRenewalHasBeenSet = true; m_automaticRenewal = value; }

    /**
     * <p>Determines whether the commitment period for a radio unit is set to
     * automatically renew for an additional 1 year after your current commitment
     * period expires.</p> <p>Set to <code>True</code>, if you want your commitment
     * period to automatically renew. Set to <code>False</code> if you do not want your
     * commitment to automatically renew.</p> <p>You can do the following:</p> <ul>
     * <li> <p>Set a 1-year commitment to automatically renew for an additional 1 year.
     * The hourly rate for the additional year will continue to be the same as your
     * existing 1-year rate.</p> </li> <li> <p>Set a 3-year commitment to automatically
     * renew for an additional 1 year. The hourly rate for the additional year will
     * continue to be the same as your existing 3-year rate.</p> </li> <li> <p>Turn off
     * a previously-enabled automatic renewal on a 1-year or 3-year commitment.</p>
     * </li> </ul> <p>You cannot use the automatic-renewal option for a 60-day
     * commitment.</p>
     */
    inline CommitmentConfiguration& WithAutomaticRenewal(bool value) { SetAutomaticRenewal(value); return *this;}


    /**
     * <p>The duration of the commitment period for the radio unit. You can choose a
     * 60-day, 1-year, or 3-year period.</p>
     */
    inline const CommitmentLength& GetCommitmentLength() const{ return m_commitmentLength; }

    /**
     * <p>The duration of the commitment period for the radio unit. You can choose a
     * 60-day, 1-year, or 3-year period.</p>
     */
    inline bool CommitmentLengthHasBeenSet() const { return m_commitmentLengthHasBeenSet; }

    /**
     * <p>The duration of the commitment period for the radio unit. You can choose a
     * 60-day, 1-year, or 3-year period.</p>
     */
    inline void SetCommitmentLength(const CommitmentLength& value) { m_commitmentLengthHasBeenSet = true; m_commitmentLength = value; }

    /**
     * <p>The duration of the commitment period for the radio unit. You can choose a
     * 60-day, 1-year, or 3-year period.</p>
     */
    inline void SetCommitmentLength(CommitmentLength&& value) { m_commitmentLengthHasBeenSet = true; m_commitmentLength = std::move(value); }

    /**
     * <p>The duration of the commitment period for the radio unit. You can choose a
     * 60-day, 1-year, or 3-year period.</p>
     */
    inline CommitmentConfiguration& WithCommitmentLength(const CommitmentLength& value) { SetCommitmentLength(value); return *this;}

    /**
     * <p>The duration of the commitment period for the radio unit. You can choose a
     * 60-day, 1-year, or 3-year period.</p>
     */
    inline CommitmentConfiguration& WithCommitmentLength(CommitmentLength&& value) { SetCommitmentLength(std::move(value)); return *this;}

  private:

    bool m_automaticRenewal;
    bool m_automaticRenewalHasBeenSet = false;

    CommitmentLength m_commitmentLength;
    bool m_commitmentLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
