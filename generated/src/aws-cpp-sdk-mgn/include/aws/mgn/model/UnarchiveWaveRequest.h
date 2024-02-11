/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UnarchiveWaveRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UnarchiveWaveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnarchiveWave"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Account ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }

    /**
     * <p>Account ID.</p>
     */
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }

    /**
     * <p>Account ID.</p>
     */
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }

    /**
     * <p>Account ID.</p>
     */
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }

    /**
     * <p>Account ID.</p>
     */
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }

    /**
     * <p>Account ID.</p>
     */
    inline UnarchiveWaveRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}

    /**
     * <p>Account ID.</p>
     */
    inline UnarchiveWaveRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}

    /**
     * <p>Account ID.</p>
     */
    inline UnarchiveWaveRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}


    /**
     * <p>Wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const{ return m_waveID; }

    /**
     * <p>Wave ID.</p>
     */
    inline bool WaveIDHasBeenSet() const { return m_waveIDHasBeenSet; }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(const Aws::String& value) { m_waveIDHasBeenSet = true; m_waveID = value; }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(Aws::String&& value) { m_waveIDHasBeenSet = true; m_waveID = std::move(value); }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(const char* value) { m_waveIDHasBeenSet = true; m_waveID.assign(value); }

    /**
     * <p>Wave ID.</p>
     */
    inline UnarchiveWaveRequest& WithWaveID(const Aws::String& value) { SetWaveID(value); return *this;}

    /**
     * <p>Wave ID.</p>
     */
    inline UnarchiveWaveRequest& WithWaveID(Aws::String&& value) { SetWaveID(std::move(value)); return *this;}

    /**
     * <p>Wave ID.</p>
     */
    inline UnarchiveWaveRequest& WithWaveID(const char* value) { SetWaveID(value); return *this;}

  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::String m_waveID;
    bool m_waveIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
