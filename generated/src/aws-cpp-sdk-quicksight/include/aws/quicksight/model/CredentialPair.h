/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DataSourceParameters.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The combination of user name and password that are used as
   * credentials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CredentialPair">AWS
   * API Reference</a></p>
   */
  class CredentialPair
  {
  public:
    AWS_QUICKSIGHT_API CredentialPair() = default;
    AWS_QUICKSIGHT_API CredentialPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CredentialPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>User name.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    CredentialPair& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Password.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    CredentialPair& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of alternate data source parameters that you want to share for these
     * credentials. The credentials are applied in tandem with the data source
     * parameters when you copy a data source by using a create or update request. The
     * API operation compares the <code>DataSourceParameters</code> structure that's in
     * the request with the structures in the
     * <code>AlternateDataSourceParameters</code> allow list. If the structures are an
     * exact match, the request is allowed to use the new data source with the existing
     * credentials. If the <code>AlternateDataSourceParameters</code> list is null, the
     * <code>DataSourceParameters</code> originally used with these
     * <code>Credentials</code> is automatically allowed.</p>
     */
    inline const Aws::Vector<DataSourceParameters>& GetAlternateDataSourceParameters() const { return m_alternateDataSourceParameters; }
    inline bool AlternateDataSourceParametersHasBeenSet() const { return m_alternateDataSourceParametersHasBeenSet; }
    template<typename AlternateDataSourceParametersT = Aws::Vector<DataSourceParameters>>
    void SetAlternateDataSourceParameters(AlternateDataSourceParametersT&& value) { m_alternateDataSourceParametersHasBeenSet = true; m_alternateDataSourceParameters = std::forward<AlternateDataSourceParametersT>(value); }
    template<typename AlternateDataSourceParametersT = Aws::Vector<DataSourceParameters>>
    CredentialPair& WithAlternateDataSourceParameters(AlternateDataSourceParametersT&& value) { SetAlternateDataSourceParameters(std::forward<AlternateDataSourceParametersT>(value)); return *this;}
    template<typename AlternateDataSourceParametersT = DataSourceParameters>
    CredentialPair& AddAlternateDataSourceParameters(AlternateDataSourceParametersT&& value) { m_alternateDataSourceParametersHasBeenSet = true; m_alternateDataSourceParameters.emplace_back(std::forward<AlternateDataSourceParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Vector<DataSourceParameters> m_alternateDataSourceParameters;
    bool m_alternateDataSourceParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
