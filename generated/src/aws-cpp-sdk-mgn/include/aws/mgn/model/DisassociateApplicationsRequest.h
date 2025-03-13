/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DisassociateApplicationsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DisassociateApplicationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateApplications"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Account ID.</p>
     */
    inline const Aws::String& GetAccountID() const { return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    template<typename AccountIDT = Aws::String>
    void SetAccountID(AccountIDT&& value) { m_accountIDHasBeenSet = true; m_accountID = std::forward<AccountIDT>(value); }
    template<typename AccountIDT = Aws::String>
    DisassociateApplicationsRequest& WithAccountID(AccountIDT&& value) { SetAccountID(std::forward<AccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application IDs list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationIDs() const { return m_applicationIDs; }
    inline bool ApplicationIDsHasBeenSet() const { return m_applicationIDsHasBeenSet; }
    template<typename ApplicationIDsT = Aws::Vector<Aws::String>>
    void SetApplicationIDs(ApplicationIDsT&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs = std::forward<ApplicationIDsT>(value); }
    template<typename ApplicationIDsT = Aws::Vector<Aws::String>>
    DisassociateApplicationsRequest& WithApplicationIDs(ApplicationIDsT&& value) { SetApplicationIDs(std::forward<ApplicationIDsT>(value)); return *this;}
    template<typename ApplicationIDsT = Aws::String>
    DisassociateApplicationsRequest& AddApplicationIDs(ApplicationIDsT&& value) { m_applicationIDsHasBeenSet = true; m_applicationIDs.emplace_back(std::forward<ApplicationIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const { return m_waveID; }
    inline bool WaveIDHasBeenSet() const { return m_waveIDHasBeenSet; }
    template<typename WaveIDT = Aws::String>
    void SetWaveID(WaveIDT&& value) { m_waveIDHasBeenSet = true; m_waveID = std::forward<WaveIDT>(value); }
    template<typename WaveIDT = Aws::String>
    DisassociateApplicationsRequest& WithWaveID(WaveIDT&& value) { SetWaveID(std::forward<WaveIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationIDs;
    bool m_applicationIDsHasBeenSet = false;

    Aws::String m_waveID;
    bool m_waveIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
