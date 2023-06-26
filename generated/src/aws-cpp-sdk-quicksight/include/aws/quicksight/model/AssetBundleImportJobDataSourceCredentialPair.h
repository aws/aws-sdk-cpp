/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A username and password credential pair to use to import a data source
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDataSourceCredentialPair">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDataSourceCredentialPair
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceCredentialPair();
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceCredentialPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDataSourceCredentialPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The username for the data source connection.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username for the data source connection.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username for the data source connection.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username for the data source connection.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username for the data source connection.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username for the data source connection.</p>
     */
    inline AssetBundleImportJobDataSourceCredentialPair& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username for the data source connection.</p>
     */
    inline AssetBundleImportJobDataSourceCredentialPair& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username for the data source connection.</p>
     */
    inline AssetBundleImportJobDataSourceCredentialPair& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The password for the data source connection.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the data source connection.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the data source connection.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the data source connection.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the data source connection.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the data source connection.</p>
     */
    inline AssetBundleImportJobDataSourceCredentialPair& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the data source connection.</p>
     */
    inline AssetBundleImportJobDataSourceCredentialPair& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the data source connection.</p>
     */
    inline AssetBundleImportJobDataSourceCredentialPair& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
