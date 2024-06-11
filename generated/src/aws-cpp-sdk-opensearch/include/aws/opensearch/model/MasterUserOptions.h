﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Credentials for the master user for a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/MasterUserOptions">AWS
   * API Reference</a></p>
   */
  class MasterUserOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API MasterUserOptions();
    AWS_OPENSEARCHSERVICE_API MasterUserOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API MasterUserOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the master user. Only specify if
     * <code>InternalUserDatabaseEnabled</code> is <code>false</code>.</p>
     */
    inline const Aws::String& GetMasterUserARN() const{ return m_masterUserARN; }
    inline bool MasterUserARNHasBeenSet() const { return m_masterUserARNHasBeenSet; }
    inline void SetMasterUserARN(const Aws::String& value) { m_masterUserARNHasBeenSet = true; m_masterUserARN = value; }
    inline void SetMasterUserARN(Aws::String&& value) { m_masterUserARNHasBeenSet = true; m_masterUserARN = std::move(value); }
    inline void SetMasterUserARN(const char* value) { m_masterUserARNHasBeenSet = true; m_masterUserARN.assign(value); }
    inline MasterUserOptions& WithMasterUserARN(const Aws::String& value) { SetMasterUserARN(value); return *this;}
    inline MasterUserOptions& WithMasterUserARN(Aws::String&& value) { SetMasterUserARN(std::move(value)); return *this;}
    inline MasterUserOptions& WithMasterUserARN(const char* value) { SetMasterUserARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User name for the master user. Only specify if
     * <code>InternalUserDatabaseEnabled</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetMasterUserName() const{ return m_masterUserName; }
    inline bool MasterUserNameHasBeenSet() const { return m_masterUserNameHasBeenSet; }
    inline void SetMasterUserName(const Aws::String& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = value; }
    inline void SetMasterUserName(Aws::String&& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = std::move(value); }
    inline void SetMasterUserName(const char* value) { m_masterUserNameHasBeenSet = true; m_masterUserName.assign(value); }
    inline MasterUserOptions& WithMasterUserName(const Aws::String& value) { SetMasterUserName(value); return *this;}
    inline MasterUserOptions& WithMasterUserName(Aws::String&& value) { SetMasterUserName(std::move(value)); return *this;}
    inline MasterUserOptions& WithMasterUserName(const char* value) { SetMasterUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Password for the master user. Only specify if
     * <code>InternalUserDatabaseEnabled</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline MasterUserOptions& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline MasterUserOptions& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline MasterUserOptions& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_masterUserARN;
    bool m_masterUserARNHasBeenSet = false;

    Aws::String m_masterUserName;
    bool m_masterUserNameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
