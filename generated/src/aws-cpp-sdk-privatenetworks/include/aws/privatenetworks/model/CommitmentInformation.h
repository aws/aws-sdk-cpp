/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/CommitmentConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Shows the duration, the date and time that the contract started and ends, and
   * the renewal status of the commitment period for the radio unit.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/CommitmentInformation">AWS
   * API Reference</a></p>
   */
  class CommitmentInformation
  {
  public:
    AWS_PRIVATENETWORKS_API CommitmentInformation();
    AWS_PRIVATENETWORKS_API CommitmentInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API CommitmentInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The duration and renewal status of the commitment period for the radio
     * unit.</p>
     */
    inline const CommitmentConfiguration& GetCommitmentConfiguration() const{ return m_commitmentConfiguration; }

    /**
     * <p>The duration and renewal status of the commitment period for the radio
     * unit.</p>
     */
    inline bool CommitmentConfigurationHasBeenSet() const { return m_commitmentConfigurationHasBeenSet; }

    /**
     * <p>The duration and renewal status of the commitment period for the radio
     * unit.</p>
     */
    inline void SetCommitmentConfiguration(const CommitmentConfiguration& value) { m_commitmentConfigurationHasBeenSet = true; m_commitmentConfiguration = value; }

    /**
     * <p>The duration and renewal status of the commitment period for the radio
     * unit.</p>
     */
    inline void SetCommitmentConfiguration(CommitmentConfiguration&& value) { m_commitmentConfigurationHasBeenSet = true; m_commitmentConfiguration = std::move(value); }

    /**
     * <p>The duration and renewal status of the commitment period for the radio
     * unit.</p>
     */
    inline CommitmentInformation& WithCommitmentConfiguration(const CommitmentConfiguration& value) { SetCommitmentConfiguration(value); return *this;}

    /**
     * <p>The duration and renewal status of the commitment period for the radio
     * unit.</p>
     */
    inline CommitmentInformation& WithCommitmentConfiguration(CommitmentConfiguration&& value) { SetCommitmentConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date and time that the commitment period ends. If you do not cancel or
     * renew the commitment before the expiration date, you will be billed at the
     * 60-day-commitment rate.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresOn() const{ return m_expiresOn; }

    /**
     * <p>The date and time that the commitment period ends. If you do not cancel or
     * renew the commitment before the expiration date, you will be billed at the
     * 60-day-commitment rate.</p>
     */
    inline bool ExpiresOnHasBeenSet() const { return m_expiresOnHasBeenSet; }

    /**
     * <p>The date and time that the commitment period ends. If you do not cancel or
     * renew the commitment before the expiration date, you will be billed at the
     * 60-day-commitment rate.</p>
     */
    inline void SetExpiresOn(const Aws::Utils::DateTime& value) { m_expiresOnHasBeenSet = true; m_expiresOn = value; }

    /**
     * <p>The date and time that the commitment period ends. If you do not cancel or
     * renew the commitment before the expiration date, you will be billed at the
     * 60-day-commitment rate.</p>
     */
    inline void SetExpiresOn(Aws::Utils::DateTime&& value) { m_expiresOnHasBeenSet = true; m_expiresOn = std::move(value); }

    /**
     * <p>The date and time that the commitment period ends. If you do not cancel or
     * renew the commitment before the expiration date, you will be billed at the
     * 60-day-commitment rate.</p>
     */
    inline CommitmentInformation& WithExpiresOn(const Aws::Utils::DateTime& value) { SetExpiresOn(value); return *this;}

    /**
     * <p>The date and time that the commitment period ends. If you do not cancel or
     * renew the commitment before the expiration date, you will be billed at the
     * 60-day-commitment rate.</p>
     */
    inline CommitmentInformation& WithExpiresOn(Aws::Utils::DateTime&& value) { SetExpiresOn(std::move(value)); return *this;}


    /**
     * <p>The date and time that the commitment period started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartAt() const{ return m_startAt; }

    /**
     * <p>The date and time that the commitment period started.</p>
     */
    inline bool StartAtHasBeenSet() const { return m_startAtHasBeenSet; }

    /**
     * <p>The date and time that the commitment period started.</p>
     */
    inline void SetStartAt(const Aws::Utils::DateTime& value) { m_startAtHasBeenSet = true; m_startAt = value; }

    /**
     * <p>The date and time that the commitment period started.</p>
     */
    inline void SetStartAt(Aws::Utils::DateTime&& value) { m_startAtHasBeenSet = true; m_startAt = std::move(value); }

    /**
     * <p>The date and time that the commitment period started.</p>
     */
    inline CommitmentInformation& WithStartAt(const Aws::Utils::DateTime& value) { SetStartAt(value); return *this;}

    /**
     * <p>The date and time that the commitment period started.</p>
     */
    inline CommitmentInformation& WithStartAt(Aws::Utils::DateTime&& value) { SetStartAt(std::move(value)); return *this;}

  private:

    CommitmentConfiguration m_commitmentConfiguration;
    bool m_commitmentConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_expiresOn;
    bool m_expiresOnHasBeenSet = false;

    Aws::Utils::DateTime m_startAt;
    bool m_startAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
