/**
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
    AWS_OPENSEARCHSERVICE_API MasterUserOptions() = default;
    AWS_OPENSEARCHSERVICE_API MasterUserOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API MasterUserOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the master user. Only specify if
     * <code>InternalUserDatabaseEnabled</code> is <code>false</code>.</p>
     */
    inline const Aws::String& GetMasterUserARN() const { return m_masterUserARN; }
    inline bool MasterUserARNHasBeenSet() const { return m_masterUserARNHasBeenSet; }
    template<typename MasterUserARNT = Aws::String>
    void SetMasterUserARN(MasterUserARNT&& value) { m_masterUserARNHasBeenSet = true; m_masterUserARN = std::forward<MasterUserARNT>(value); }
    template<typename MasterUserARNT = Aws::String>
    MasterUserOptions& WithMasterUserARN(MasterUserARNT&& value) { SetMasterUserARN(std::forward<MasterUserARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User name for the master user. Only specify if
     * <code>InternalUserDatabaseEnabled</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetMasterUserName() const { return m_masterUserName; }
    inline bool MasterUserNameHasBeenSet() const { return m_masterUserNameHasBeenSet; }
    template<typename MasterUserNameT = Aws::String>
    void SetMasterUserName(MasterUserNameT&& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = std::forward<MasterUserNameT>(value); }
    template<typename MasterUserNameT = Aws::String>
    MasterUserOptions& WithMasterUserName(MasterUserNameT&& value) { SetMasterUserName(std::forward<MasterUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Password for the master user. Only specify if
     * <code>InternalUserDatabaseEnabled</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    MasterUserOptions& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
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
