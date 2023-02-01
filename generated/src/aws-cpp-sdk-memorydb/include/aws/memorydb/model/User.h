/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Authentication.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>You create users and assign them specific permissions by using an access
   * string. You assign the users to Access Control Lists aligned with a specific
   * role (administrators, human resources) that are then deployed to one or more
   * MemoryDB clusters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_MEMORYDB_API User();
    AWS_MEMORYDB_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the user</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the user</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the user</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the user</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the user</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the user</p>
     */
    inline User& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user</p>
     */
    inline User& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the user</p>
     */
    inline User& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline User& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline User& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline User& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline const Aws::String& GetAccessString() const{ return m_accessString; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline bool AccessStringHasBeenSet() const { return m_accessStringHasBeenSet; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(const Aws::String& value) { m_accessStringHasBeenSet = true; m_accessString = value; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(Aws::String&& value) { m_accessStringHasBeenSet = true; m_accessString = std::move(value); }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(const char* value) { m_accessStringHasBeenSet = true; m_accessString.assign(value); }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline User& WithAccessString(const Aws::String& value) { SetAccessString(value); return *this;}

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline User& WithAccessString(Aws::String&& value) { SetAccessString(std::move(value)); return *this;}

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline User& WithAccessString(const char* value) { SetAccessString(value); return *this;}


    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline const Aws::Vector<Aws::String>& GetACLNames() const{ return m_aCLNames; }

    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline bool ACLNamesHasBeenSet() const { return m_aCLNamesHasBeenSet; }

    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline void SetACLNames(const Aws::Vector<Aws::String>& value) { m_aCLNamesHasBeenSet = true; m_aCLNames = value; }

    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline void SetACLNames(Aws::Vector<Aws::String>&& value) { m_aCLNamesHasBeenSet = true; m_aCLNames = std::move(value); }

    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline User& WithACLNames(const Aws::Vector<Aws::String>& value) { SetACLNames(value); return *this;}

    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline User& WithACLNames(Aws::Vector<Aws::String>&& value) { SetACLNames(std::move(value)); return *this;}

    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline User& AddACLNames(const Aws::String& value) { m_aCLNamesHasBeenSet = true; m_aCLNames.push_back(value); return *this; }

    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline User& AddACLNames(Aws::String&& value) { m_aCLNamesHasBeenSet = true; m_aCLNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the Access Control Lists to which the user belongs</p>
     */
    inline User& AddACLNames(const char* value) { m_aCLNamesHasBeenSet = true; m_aCLNames.push_back(value); return *this; }


    /**
     * <p>The minimum engine version supported for the user</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }

    /**
     * <p>The minimum engine version supported for the user</p>
     */
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }

    /**
     * <p>The minimum engine version supported for the user</p>
     */
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }

    /**
     * <p>The minimum engine version supported for the user</p>
     */
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }

    /**
     * <p>The minimum engine version supported for the user</p>
     */
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }

    /**
     * <p>The minimum engine version supported for the user</p>
     */
    inline User& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The minimum engine version supported for the user</p>
     */
    inline User& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The minimum engine version supported for the user</p>
     */
    inline User& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}


    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline const Authentication& GetAuthentication() const{ return m_authentication; }

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline void SetAuthentication(const Authentication& value) { m_authenticationHasBeenSet = true; m_authentication = value; }

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline void SetAuthentication(Authentication&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline User& WithAuthentication(const Authentication& value) { SetAuthentication(value); return *this;}

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline User& WithAuthentication(Authentication&& value) { SetAuthentication(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user. </p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user. </p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user. </p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user. </p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user. </p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user. </p>
     */
    inline User& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user. </p>
     */
    inline User& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user. </p>
     */
    inline User& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_accessString;
    bool m_accessStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_aCLNames;
    bool m_aCLNamesHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;

    Authentication m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
