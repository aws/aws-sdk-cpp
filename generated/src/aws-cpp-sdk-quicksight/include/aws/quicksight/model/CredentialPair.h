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
    AWS_QUICKSIGHT_API CredentialPair();
    AWS_QUICKSIGHT_API CredentialPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CredentialPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>User name.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>User name.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>User name.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>User name.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>User name.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>User name.</p>
     */
    inline CredentialPair& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>User name.</p>
     */
    inline CredentialPair& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>User name.</p>
     */
    inline CredentialPair& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>Password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Password.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>Password.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Password.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Password.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Password.</p>
     */
    inline CredentialPair& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Password.</p>
     */
    inline CredentialPair& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Password.</p>
     */
    inline CredentialPair& WithPassword(const char* value) { SetPassword(value); return *this;}


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
    inline const Aws::Vector<DataSourceParameters>& GetAlternateDataSourceParameters() const{ return m_alternateDataSourceParameters; }

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
    inline bool AlternateDataSourceParametersHasBeenSet() const { return m_alternateDataSourceParametersHasBeenSet; }

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
    inline void SetAlternateDataSourceParameters(const Aws::Vector<DataSourceParameters>& value) { m_alternateDataSourceParametersHasBeenSet = true; m_alternateDataSourceParameters = value; }

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
    inline void SetAlternateDataSourceParameters(Aws::Vector<DataSourceParameters>&& value) { m_alternateDataSourceParametersHasBeenSet = true; m_alternateDataSourceParameters = std::move(value); }

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
    inline CredentialPair& WithAlternateDataSourceParameters(const Aws::Vector<DataSourceParameters>& value) { SetAlternateDataSourceParameters(value); return *this;}

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
    inline CredentialPair& WithAlternateDataSourceParameters(Aws::Vector<DataSourceParameters>&& value) { SetAlternateDataSourceParameters(std::move(value)); return *this;}

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
    inline CredentialPair& AddAlternateDataSourceParameters(const DataSourceParameters& value) { m_alternateDataSourceParametersHasBeenSet = true; m_alternateDataSourceParameters.push_back(value); return *this; }

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
    inline CredentialPair& AddAlternateDataSourceParameters(DataSourceParameters&& value) { m_alternateDataSourceParametersHasBeenSet = true; m_alternateDataSourceParameters.push_back(std::move(value)); return *this; }

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
