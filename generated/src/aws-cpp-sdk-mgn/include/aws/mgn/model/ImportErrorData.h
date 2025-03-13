/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Import error data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ImportErrorData">AWS
   * API Reference</a></p>
   */
  class ImportErrorData
  {
  public:
    AWS_MGN_API ImportErrorData() = default;
    AWS_MGN_API ImportErrorData(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ImportErrorData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Import error data source account ID.</p>
     */
    inline const Aws::String& GetAccountID() const { return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    template<typename AccountIDT = Aws::String>
    void SetAccountID(AccountIDT&& value) { m_accountIDHasBeenSet = true; m_accountID = std::forward<AccountIDT>(value); }
    template<typename AccountIDT = Aws::String>
    ImportErrorData& WithAccountID(AccountIDT&& value) { SetAccountID(std::forward<AccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const { return m_applicationID; }
    inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }
    template<typename ApplicationIDT = Aws::String>
    void SetApplicationID(ApplicationIDT&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::forward<ApplicationIDT>(value); }
    template<typename ApplicationIDT = Aws::String>
    ImportErrorData& WithApplicationID(ApplicationIDT&& value) { SetApplicationID(std::forward<ApplicationIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data ec2 LaunchTemplate ID.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const { return m_ec2LaunchTemplateID; }
    inline bool Ec2LaunchTemplateIDHasBeenSet() const { return m_ec2LaunchTemplateIDHasBeenSet; }
    template<typename Ec2LaunchTemplateIDT = Aws::String>
    void SetEc2LaunchTemplateID(Ec2LaunchTemplateIDT&& value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID = std::forward<Ec2LaunchTemplateIDT>(value); }
    template<typename Ec2LaunchTemplateIDT = Aws::String>
    ImportErrorData& WithEc2LaunchTemplateID(Ec2LaunchTemplateIDT&& value) { SetEc2LaunchTemplateID(std::forward<Ec2LaunchTemplateIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data raw error.</p>
     */
    inline const Aws::String& GetRawError() const { return m_rawError; }
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }
    template<typename RawErrorT = Aws::String>
    void SetRawError(RawErrorT&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::forward<RawErrorT>(value); }
    template<typename RawErrorT = Aws::String>
    ImportErrorData& WithRawError(RawErrorT&& value) { SetRawError(std::forward<RawErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data row number.</p>
     */
    inline long long GetRowNumber() const { return m_rowNumber; }
    inline bool RowNumberHasBeenSet() const { return m_rowNumberHasBeenSet; }
    inline void SetRowNumber(long long value) { m_rowNumberHasBeenSet = true; m_rowNumber = value; }
    inline ImportErrorData& WithRowNumber(long long value) { SetRowNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    ImportErrorData& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data wave id.</p>
     */
    inline const Aws::String& GetWaveID() const { return m_waveID; }
    inline bool WaveIDHasBeenSet() const { return m_waveIDHasBeenSet; }
    template<typename WaveIDT = Aws::String>
    void SetWaveID(WaveIDT&& value) { m_waveIDHasBeenSet = true; m_waveID = std::forward<WaveIDT>(value); }
    template<typename WaveIDT = Aws::String>
    ImportErrorData& WithWaveID(WaveIDT&& value) { SetWaveID(std::forward<WaveIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::String m_applicationID;
    bool m_applicationIDHasBeenSet = false;

    Aws::String m_ec2LaunchTemplateID;
    bool m_ec2LaunchTemplateIDHasBeenSet = false;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;

    long long m_rowNumber{0};
    bool m_rowNumberHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::String m_waveID;
    bool m_waveIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
