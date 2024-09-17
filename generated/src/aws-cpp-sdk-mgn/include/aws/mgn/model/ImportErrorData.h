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
    AWS_MGN_API ImportErrorData();
    AWS_MGN_API ImportErrorData(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ImportErrorData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Import error data source account ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }
    inline ImportErrorData& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}
    inline ImportErrorData& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}
    inline ImportErrorData& WithAccountID(const char* value) { SetAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }
    inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }
    inline void SetApplicationID(const Aws::String& value) { m_applicationIDHasBeenSet = true; m_applicationID = value; }
    inline void SetApplicationID(Aws::String&& value) { m_applicationIDHasBeenSet = true; m_applicationID = std::move(value); }
    inline void SetApplicationID(const char* value) { m_applicationIDHasBeenSet = true; m_applicationID.assign(value); }
    inline ImportErrorData& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}
    inline ImportErrorData& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}
    inline ImportErrorData& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data ec2 LaunchTemplate ID.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const{ return m_ec2LaunchTemplateID; }
    inline bool Ec2LaunchTemplateIDHasBeenSet() const { return m_ec2LaunchTemplateIDHasBeenSet; }
    inline void SetEc2LaunchTemplateID(const Aws::String& value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID = value; }
    inline void SetEc2LaunchTemplateID(Aws::String&& value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID = std::move(value); }
    inline void SetEc2LaunchTemplateID(const char* value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID.assign(value); }
    inline ImportErrorData& WithEc2LaunchTemplateID(const Aws::String& value) { SetEc2LaunchTemplateID(value); return *this;}
    inline ImportErrorData& WithEc2LaunchTemplateID(Aws::String&& value) { SetEc2LaunchTemplateID(std::move(value)); return *this;}
    inline ImportErrorData& WithEc2LaunchTemplateID(const char* value) { SetEc2LaunchTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data raw error.</p>
     */
    inline const Aws::String& GetRawError() const{ return m_rawError; }
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }
    inline void SetRawError(const Aws::String& value) { m_rawErrorHasBeenSet = true; m_rawError = value; }
    inline void SetRawError(Aws::String&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::move(value); }
    inline void SetRawError(const char* value) { m_rawErrorHasBeenSet = true; m_rawError.assign(value); }
    inline ImportErrorData& WithRawError(const Aws::String& value) { SetRawError(value); return *this;}
    inline ImportErrorData& WithRawError(Aws::String&& value) { SetRawError(std::move(value)); return *this;}
    inline ImportErrorData& WithRawError(const char* value) { SetRawError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data row number.</p>
     */
    inline long long GetRowNumber() const{ return m_rowNumber; }
    inline bool RowNumberHasBeenSet() const { return m_rowNumberHasBeenSet; }
    inline void SetRowNumber(long long value) { m_rowNumberHasBeenSet = true; m_rowNumber = value; }
    inline ImportErrorData& WithRowNumber(long long value) { SetRowNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline ImportErrorData& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline ImportErrorData& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline ImportErrorData& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import error data wave id.</p>
     */
    inline const Aws::String& GetWaveID() const{ return m_waveID; }
    inline bool WaveIDHasBeenSet() const { return m_waveIDHasBeenSet; }
    inline void SetWaveID(const Aws::String& value) { m_waveIDHasBeenSet = true; m_waveID = value; }
    inline void SetWaveID(Aws::String&& value) { m_waveIDHasBeenSet = true; m_waveID = std::move(value); }
    inline void SetWaveID(const char* value) { m_waveIDHasBeenSet = true; m_waveID.assign(value); }
    inline ImportErrorData& WithWaveID(const Aws::String& value) { SetWaveID(value); return *this;}
    inline ImportErrorData& WithWaveID(Aws::String&& value) { SetWaveID(std::move(value)); return *this;}
    inline ImportErrorData& WithWaveID(const char* value) { SetWaveID(value); return *this;}
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

    long long m_rowNumber;
    bool m_rowNumberHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::String m_waveID;
    bool m_waveIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
